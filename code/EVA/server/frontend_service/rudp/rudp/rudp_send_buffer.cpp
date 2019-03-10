#include "rudp_send_buffer.h"
#include "../revolver/base_timer_value.h"
#include "rudp_log_macro.h"
#include "rudp_ccc.h"

#include <math.h>

BASE_NAMESPACE_BEGIN_DECL

#define DEFAULT_RUDP_SEND_BUFFSIZE	4096
#define NAGLE_DELAY					100
#define SEND_WINDOW_MAX             128

RUDPSendBuffer::RUDPSendBuffer()
: net_channel_(NULL)
, buffer_seq_(0)
, dest_max_seq_(0)
, cwnd_max_seq_(0)
, max_loss_seq_(0)
, buffer_size_(DEFAULT_RUDP_SEND_BUFFSIZE)
, buffer_data_size_(0)
, nagle_(false)
, send_ts_(0)
, ccc_(NULL)
{
    reset();
}

RUDPSendBuffer::~RUDPSendBuffer()
{
    reset();
}

void RUDPSendBuffer::reset()
{
    buffer_seq_   = rand() + 1;
    dest_max_seq_ = buffer_seq_ - 1;
    cwnd_max_seq_ = buffer_seq_;
    max_loss_seq_ = buffer_seq_;
    buffer_data_size_ = 0;
    buffer_size_ = DEFAULT_RUDP_SEND_BUFFSIZE;
    nagle_ = false;
    send_ts_ = CBaseTimeValue::get_time_value().msec();

    loss_set_.clear();

    for(SendWindowMap::iterator it = send_window_.begin(); it != send_window_.end(); ++ it)
        RETURN_SEND_SEG(it->second);

    send_window_.clear();

    for(SendDataList::iterator it = send_data_.begin(); it != send_data_.end(); ++ it)
        RETURN_SEND_SEG(*it);

    send_data_.clear();

    bandwidth_ = 0;
    bandwidth_ts_ = CBaseTimeValue::get_time_value().msec();
} 

int32_t RUDPSendBuffer::send(const uint8_t* data, int32_t data_size)
{
    int32_t copy_pos = 0;
    int32_t copy_size = 0;
    uint8_t* pos = (uint8_t *)data;
    uint64_t now_timer = CBaseTimeValue::get_time_value().msec();

    if( !send_data_.empty() ) //粘包;
    {
        RUDPSendSegment* last_seg = send_data_.back();
        if( last_seg != NULL && last_seg->data_size_ < MAX_SEGMENT_SIZE )
        {
            copy_size = MAX_SEGMENT_SIZE - last_seg->data_size_;
            if( copy_size > data_size )
                copy_size = data_size;

            memcpy( last_seg->data_ + last_seg->data_size_, pos, copy_size );
            copy_pos += copy_size;
            pos      += copy_size;
            last_seg->data_size_ += copy_size;
        }
    }

    //分片;
    while(copy_pos < data_size)
    {
        GAIN_SEND_SEG(last_seg);

        //设置初始化的的时刻;
        last_seg->push_ts_ = now_timer;
        last_seg->seq_ = buffer_seq_;
        buffer_seq_ ++;

        //RUDP_SEND_DEBUG("put packet, seq = " << buffer_seq_);

        //确定拷贝的块长度;
        copy_size = ( data_size - copy_pos );
        if( copy_size > MAX_SEGMENT_SIZE )
            copy_size = MAX_SEGMENT_SIZE;

        memcpy( last_seg->data_, pos, copy_size );

        copy_pos += copy_size;
        pos += copy_size;
        last_seg->data_size_ = copy_size;

        send_data_.push_back(last_seg);
        if ( buffer_data_size_ + copy_pos > buffer_size_ )
             break;
    }

    buffer_data_size_ += copy_pos;

    //尝试发送,立即发送;
    //if(!nagle_)
    attempt_send(now_timer);

    return copy_pos;
}

void RUDPSendBuffer::on_ack(uint64_t seq)
{
    //ID错误;
    if(cwnd_max_seq_ < seq)
        return;

    if(!send_window_.empty())
    {
        //删除窗口的数据片;
        SendWindowMap::iterator it = send_window_.begin();
        while(it != send_window_.end() && it->first <= seq)
        {
            //更新数据缓冲的大小;
            if(buffer_data_size_ >  it->second->data_size_)
                buffer_data_size_ = buffer_data_size_ - it->second->data_size_;
            else
                buffer_data_size_ = 0;

            bandwidth_ += it->second->data_size_;

            RETURN_SEND_SEG(it->second);
            send_window_.erase(it ++);
            ccc_->add_recv(1);
        }
    }

    if (dest_max_seq_ < seq)
        dest_max_seq_ = seq;

    check_buffer();
    //尝试发送;
    /*attempt_send(CBaseTimeValue::get_time_value().msec());*/
}

void RUDPSendBuffer::on_nack(uint64_t base_seq, const LossIDArray& loss_ids)
{
    uint64_t now_timer = CBaseTimeValue::get_time_value().msec();

    SendWindowMap::iterator it;
    uint64_t seq = base_seq;
    uint32_t sz = loss_ids.size();
    for (size_t i = 0; i < sz; ++i){
        /*设置成立即重发*/
        seq = loss_ids[i] + base_seq;
        it = send_window_.find(seq);
        if (it != send_window_.end()){
            net_channel_->send_data(0, it->second->seq_, it->second->data_, it->second->data_size_, now_timer);
            it->second->last_send_ts_ = now_timer;
            it->second->send_count_++;

            ccc_->add_resend();
        }
    }

    if (loss_ids.size() > 0)
        ccc_->on_loss(base_seq, loss_ids);

    on_ack(base_seq);
}

void RUDPSendBuffer::on_timer(uint64_t now_timer)
{
    attempt_send(now_timer);
    check_buffer();
}

void RUDPSendBuffer::check_buffer()
{
    //检查是否可以写;
    buffer_size_ = core_max(buffer_size_, (int32_t)(ccc_->get_send_window_size() * MAX_SEGMENT_SIZE));
    if( buffer_data_size_ < buffer_size_ && net_channel_ != NULL )
        net_channel_->on_write(); 
}

//CCC控制清除接口;
void RUDPSendBuffer::clear_loss() 
{
    loss_set_.clear();
}

void RUDPSendBuffer::reissue_sendwindows( void )
{
    uint64_t now_timer = CBaseTimeValue::get_time_value().msec();
    for ( SendWindowMap::iterator it = send_window_.begin(); it != send_window_.end(); ++it )
    {
        if ( now_timer - it->second->last_send_ts_ <= 500 ) { continue; }
        net_channel_->send_data(0, it->second->seq_, it->second->data_, it->second->data_size_, now_timer);
        it->second->last_send_ts_ = now_timer;
        it->second->send_count_++;
        ccc_->add_resend();
    }
}

uint32_t RUDPSendBuffer::get_threshold(uint32_t rtt)
{
    uint32_t rtt_threshold = 10;
    uint32_t var_rtt = core_max(ccc_->get_rtt_var(), rtt / 16);
    if (rtt < 10)
        rtt_threshold = 10;
    else
        rtt_threshold = rtt + var_rtt;
    if(rtt < 80)
        rtt_threshold = rtt + var_rtt + 3;
    else if (rtt < 100)
        rtt_threshold = rtt + var_rtt + 10;
    else 
        rtt_threshold = rtt + var_rtt;

    return rtt_threshold;
}

uint32_t RUDPSendBuffer::calculate_snd_size(uint64_t now_timer)
{
    uint32_t ret;
    uint64_t timer;
    if (now_timer < send_ts_ + 10)
        ret = 0;

    timer = now_timer - send_ts_;
    ret = ccc_->get_send_window_size() * (uint32_t)timer / get_threshold(ccc_->get_rtt());

    send_ts_ = now_timer;

    return core_min(ret, ccc_->get_send_window_size());
}

void RUDPSendBuffer::attempt_send(uint64_t now_timer)
{
    uint32_t cwnd_size;
    uint32_t ccc_cwnd_size = ccc_->get_send_window_size();
    RUDPSendSegment* seg = NULL;
    SendWindowMap::iterator map_it;

    cwnd_size = 0;

    //判断是否可以发送新的报文
    while (!send_data_.empty() && send_window_.size() < ccc_cwnd_size)
    {
        RUDPSendSegment* seg = send_data_.front();
        //判断NAGLE算法,NAGLE最少需要在100MS凑1024个字节报文
        if(nagle_ && seg->push_ts_ + NAGLE_DELAY > now_timer && seg->data_size_ < MAX_SEGMENT_SIZE - 256)
            break;

        //判断发送窗口
        send_data_.pop_front();
        send_window_.insert(SendWindowMap::value_type(seg->seq_, seg));
        cwnd_size += seg->data_size_;

        now_timer = CBaseTimeValue::get_time_value().msec();
        seg->push_ts_ = now_timer;
        seg->last_send_ts_ = now_timer;
        seg->send_count_ = 1;

        net_channel_->send_data(0, seg->seq_, seg->data_, seg->data_size_, now_timer);
        if(cwnd_max_seq_ < seg->seq_)
            cwnd_max_seq_ = seg->seq_;
    }
}

uint32_t RUDPSendBuffer::get_bandwidth()
{
    uint32_t ret = 0;

    uint64_t cur_ts = CBaseTimeValue::get_time_value().msec();
    if(cur_ts > bandwidth_ts_)
        ret = static_cast<uint32_t>(bandwidth_ * 1000 / (cur_ts - bandwidth_ts_));
    else
        ret = bandwidth_ * 1000;


    bandwidth_ts_ = cur_ts;
    bandwidth_ = 0;

    return ret;
}


BASE_NAMESPACE_END_DECL
