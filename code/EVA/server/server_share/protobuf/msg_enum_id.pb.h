// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_enum_id.proto

#ifndef PROTOBUF_msg_5fenum_5fid_2eproto__INCLUDED
#define PROTOBUF_msg_5fenum_5fid_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace PROTOBUF {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_5fenum_5fid_2eproto();
void protobuf_AssignDesc_msg_5fenum_5fid_2eproto();
void protobuf_ShutdownFile_msg_5fenum_5fid_2eproto();


enum PB_TErrorEnum {
  ERROR_SERVER_FULL = 0
};
bool PB_TErrorEnum_IsValid(int value);
const PB_TErrorEnum PB_TErrorEnum_MIN = ERROR_SERVER_FULL;
const PB_TErrorEnum PB_TErrorEnum_MAX = ERROR_SERVER_FULL;
const int PB_TErrorEnum_ARRAYSIZE = PB_TErrorEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* PB_TErrorEnum_descriptor();
inline const ::std::string& PB_TErrorEnum_Name(PB_TErrorEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    PB_TErrorEnum_descriptor(), value);
}
inline bool PB_TErrorEnum_Parse(
    const ::std::string& name, PB_TErrorEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PB_TErrorEnum>(
    PB_TErrorEnum_descriptor(), name, value);
}
enum PB_DotItem {
  DOT_ADD_CREATE_ROLE = 1,
  DOT_ADD_PROXY_RECHARGE = 2,
  DOT_ADD_SHOP_BUY = 3,
  DOT_SUB_CREATE_ROOM = 50
};
bool PB_DotItem_IsValid(int value);
const PB_DotItem PB_DotItem_MIN = DOT_ADD_CREATE_ROLE;
const PB_DotItem PB_DotItem_MAX = DOT_SUB_CREATE_ROOM;
const int PB_DotItem_ARRAYSIZE = PB_DotItem_MAX + 1;

const ::google::protobuf::EnumDescriptor* PB_DotItem_descriptor();
inline const ::std::string& PB_DotItem_Name(PB_DotItem value) {
  return ::google::protobuf::internal::NameOfEnum(
    PB_DotItem_descriptor(), value);
}
inline bool PB_DotItem_Parse(
    const ::std::string& name, PB_DotItem* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PB_DotItem>(
    PB_DotItem_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace PROTOBUF

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::PROTOBUF::PB_TErrorEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PROTOBUF::PB_TErrorEnum>() {
  return ::PROTOBUF::PB_TErrorEnum_descriptor();
}
template <> struct is_proto_enum< ::PROTOBUF::PB_DotItem> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PROTOBUF::PB_DotItem>() {
  return ::PROTOBUF::PB_DotItem_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fenum_5fid_2eproto__INCLUDED