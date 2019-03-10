// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: define_attrib.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "define_attrib.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ATTRIB_TYPE {

namespace {

const ::google::protobuf::EnumDescriptor* TAttribType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_define_5fattrib_2eproto() {
  protobuf_AddDesc_define_5fattrib_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "define_attrib.proto");
  GOOGLE_CHECK(file != NULL);
  TAttribType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_define_5fattrib_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_define_5fattrib_2eproto() {
}

void protobuf_AddDesc_define_5fattrib_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023define_attrib.proto\022\013ATTRIB_TYPE*\362p\n\013T"
    "AttribType\022\030\n\013INVALID_VAL\020\377\377\377\377\377\377\377\377\377\001\022\013\n\007"
    "INVALID\020\000\022\010\n\002ID\020\351\220z\022\026\n\020LEVEL_UP_EXP_INT\020"
    "\352\220z\022\021\n\013NAME_STRING\020\353\220z\022\016\n\010LIFE_INT\020\354\220z\022\023"
    "\n\rLIFE_CURR_INT\020\355\220z\022\020\n\nATTACK_INT\020\356\220z\022\021\n"
    "\013DEFENCE_INT\020\357\220z\022\023\n\rCRIT_RATE_INT\020\360\220z\022\025\n"
    "\017CRIT_DAMAGE_INT\020\361\220z\022\024\n\016MOVE_SPEED_INT\020\362"
    "\220z\022\026\n\020ATTACK_SPEED_INT\020\363\220z\022\022\n\014HIT_RATE_I"
    "NT\020\364\220z\022\024\n\016DODGE_RATE_INT\020\365\220z\022\024\n\016EXP_VALU"
    "E_LONG\020\366\220z\022\022\n\014EYESIGHT_INT\020\367\220z\022\026\n\020ATTACK"
    "_RANGE_INT\020\370\220z\022\016\n\010CAMP_INT\020\371\220z\022\027\n\021CASTIN"
    "G_SPEED_INT\020\372\220z\022\026\n\020FINAL_DAMAGE_INT\020\373\220z\022"
    "\026\n\020DELAY_EFFECT_INT\020\374\220z\022\024\n\016ROLE_SCORE_IN"
    "T\020\375\220z\022\027\n\021GAME_CURRENCY_INT\020\376\220z\022\r\n\007RMB_IN"
    "T\020\377\220z\022\026\n\020SKILL_LIST_CLASS\020\201\221z\022\023\n\rAI_LIST"
    "_CLASS\020\202\221z\022\033\n\025ATTACK_AVAILABLE_BOOL\020\203\221z\022"
    "\027\n\021QUALITY_WHITE_INT\020\204\221z\022\027\n\021QUALITY_GREE"
    "N_INT\020\205\221z\022\026\n\020QUALITY_BLUE_INT\020\206\221z\022\030\n\022QUA"
    "LITY_PURPLE_INT\020\207\221z\022\030\n\022QUALITY_ORANGE_IN"
    "T\020\210\221z\022\027\n\021EQUIP_WEAPONS_INT\020\211\221z\022\024\n\016EQUIP_"
    "HEAD_INT\020\212\221z\022\024\n\016EQUIP_BODY_INT\020\213\221z\022\024\n\016EQ"
    "UIP_HAND_INT\020\214\221z\022\024\n\016EQUIP_FOOT_INT\020\215\221z\022\027"
    "\n\021EQUIP_JEWELRY_INT\020\216\221z\022\026\n\020HONOR_POINTS_"
    "INT\020\217\221z\022\034\n\026COMPETITIVE_POINTS_INT\020\220\221z\022\034\n"
    "\026GAME_CURRENCY_SHOP_INT\020\221\221z\022\022\n\014RMB_SHOP_"
    "INT\020\222\221z\022\022\n\014VITALITY_INT\020\223\221z\022\026\n\020ATTACK_CO"
    "UNT_INT\020\224\221z\022\031\n\023PVP_FIGHT_COUNT_INT\020\225\221z\022\030"
    "\n\022LEVEL_UP_EXP37_INT\020\226\221z\022\023\n\rVIP_LEVEL_IN"
    "T\020\227\221z\022\026\n\020BUY_VITALITY_INT\020\230\221z\022\023\n\rGROWTH_"
    "ID_INT\020\231\221z\022\027\n\021GROWTH_LIFE_CLASS\020\232\221z\022\031\n\023G"
    "ROWTH_ATTACK_CLASS\020\233\221z\022\032\n\024GROWTH_DEFENSE"
    "_CLASS\020\234\221z\022\027\n\021GROWTH_CRIT_CLASS\020\235\221z\022\036\n\030G"
    "ROWTH_CRIT_DAMAGE_CLASS\020\236\221z\022\026\n\020GROWTH_HI"
    "T_CLASS\020\237\221z\022\030\n\022GROWTH_DODGE_CLASS\020\240\221z\022\035\n"
    "\027GROWTH_MOVE_SPEED_CLASS\020\241\221z\022\037\n\031GROWTH_A"
    "TTACK_SPEED_CLASS\020\242\221z\022\021\n\013ROLE_ID_INT\020\243\221z"
    "\022\034\n\026PROFESSIONAL_TYPES_INT\020\244\221z\022\036\n\030PROFES"
    "SIONAL_NAME_STRING\020\245\221z\022\024\n\016QUALITY_ID_INT"
    "\020\246\221z\022\021\n\013ICON_STRING\020\247\221z\022\022\n\014MODEL_STRING\020"
    "\250\221z\022\024\n\016TEXTURE_STRING\020\251\221z\022\025\n\017DESCRIBE_ST"
    "RING\020\253\221z\022\017\n\tLEVEL_INT\020\255\221z\022\025\n\017EQUIP_PLACE"
    "_INT\020\256\221z\022\035\n\027UPGRADE_PROPS_ONE_CLASS\020\257\221z\022"
    "\035\n\027UPGRADE_PROPS_TWO_CLASS\020\260\221z\022\037\n\031UPGRAD"
    "E_PROPS_THREE_CLASS\020\261\221z\022\036\n\030UPGRADE_PROPS"
    "_FOUR_CLASS\020\262\221z\022\036\n\030UPGRADE_PROPS_FIVE_CL"
    "ASS\020\263\221z\022\035\n\027UPGRADE_PROPS_SIX_CLASS\020\264\221z\022\032"
    "\n\024EQUIP_UPGRADE_ID_INT\020\265\221z\022\026\n\020MAX_STACKI"
    "NG_INT\020\266\221z\022 \n\032PRICE_OF_GAME_CURRENCY_INT"
    "\020\267\221z\022\026\n\020PRICE_OF_RMB_INT\020\270\221z\022(\n\"UPGRADE_"
    "PROPS_ATTRIBUTE_ID_ONE_INT\020\271\221z\022+\n%UPGRAD"
    "E_PROPS_ATTRIBUTE_VALUE_ONE_INT\020\272\221z\022(\n\"U"
    "PGRADE_PROPS_ATTRIBUTE_ID_TWO_INT\020\273\221z\022+\n"
    "%UPGRADE_PROPS_ATTRIBUTE_VALUE_TWO_INT\020\274"
    "\221z\022\026\n\020USE_INTERVAL_INT\020\276\221z\022\030\n\022USE_DISAPP"
    "EAR_BOOL\020\277\221z\022\024\n\016VALID_TIME_INT\020\300\221z\022\025\n\017GE"
    "T_PROPS_CLASS\020\301\221z\022\031\n\023LEVEL_UP_EXP79_BOOL"
    "\020\302\221z\022\024\n\016USE_GROWTH_INT\020\303\221z\022\022\n\014USE_AI_CLA"
    "SS\020\304\221z\022\031\n\023GUARD_DEBRIS_ID_INT\020\305\221z\022#\n\035NEE"
    "D_COLLECT_ACTIVATION_CLASS\020\306\221z\022\027\n\021CARD_G"
    "ROUP_ID_INT\020\307\221z\022\035\n\027ACTIVATION_GUARD_ID_I"
    "NT\020\310\221z\022\030\n\022SPEND_CURRENCY_INT\020\311\221z\022\023\n\rSPEN"
    "D_RMB_INT\020\312\221z\022\025\n\017FRONT_SKILL_INT\020\315\221z\022\025\n\017"
    "SKILL_RANGE_INT\020\316\221z\022\026\n\020SKILL_TARGET_INT\020"
    "\317\221z\022\026\n\020CASTING_TIME_INT\020\320\221z\022\027\n\021CASTING_M"
    "OVE_BOOL\020\321\221z\022\023\n\rCOOL_TIME_INT\020\322\221z\022\030\n\022DAM"
    "AGE_VALUE_CLASS\020\323\221z\022\030\n\022SKILL_TYPE_ONE_IN"
    "T\020\324\221z\022\032\n\024SKILL_EFFECT_ONE_INT\020\325\221z\022\034\n\026EFF"
    "ECT_VALUE_ONE_CLASS\020\326\221z\022\037\n\031CHANCE_TO_TRI"
    "GGER_ONE_INT\020\327\221z\022\034\n\026CONTINUOU_TIME_ONE_I"
    "NT\020\330\221z\022\027\n\021FREQUENCY_ONE_INT\020\331\221z\022\034\n\026EFFEC"
    "T_RANGE_ONE_CLASS\020\332\221z\022\030\n\022SKILL_TYPE_TWO_"
    "INT\020\333\221z\022\032\n\024SKILL_EFFECT_TWO_INT\020\334\221z\022\034\n\026E"
    "FFECT_RANGE_TWO_CLASS\020\335\221z\022\032\n\024MISSION_FOL"
    "LOWED_INT\020\336\221z\022!\n\033MISSION_DEFAULT_ACCEPT_"
    "BOOL\020\337\221z\022\030\n\022MISSION_REPET_BOOL\020\340\221z\022\032\n\024MI"
    "SSION_PERIOD_CLASS\020\341\221z\022\036\n\030MISSION_START_"
    "TIME_CLASS\020\342\221z\022\033\n\025MISSION_LAST_TIME_INT\020"
    "\343\221z\022\036\n\030MISSION_START_STATE_BOOL\020\344\221z\022\032\n\024M"
    "ISSION_EVENT_ID_INT\020\345\221z\022\034\n\026MISSION_PARAM"
    "ETER1_INT\020\346\221z\022\034\n\026MISSION_PARAMETER2_INT\020"
    "\347\221z\022%\n\037MISSION_REWARD_ITEM_COUNT_CLASS\020\350"
    "\221z\022\036\n\030MISSION_REWARD_GUARD_INT\020\351\221z\022\035\n\027MI"
    "SSION_REWARD_HERO_INT\020\352\221z\022\"\n\034MISSION_EVE"
    "NT_FINISHTYPE_INT\020\353\221z\022(\n\"MISSION_EVENT_F"
    "INISHCONDITION1_INT\020\354\221z\022(\n\"MISSION_EVENT"
    "_FINISHCONDITION2_INT\020\355\221z\022#\n\035MISSION_FIN"
    "ISH_CONDITION_BOOL\020\356\221z\022\024\n\016SALE_PRICE_INT"
    "\020\357\221z\022\035\n\027PLAYER_OWN_CURRENCY_INT\020\360\221z\022\030\n\022P"
    "LAYER_OWN_RMB_INT\020\361\221z\022\031\n\023INIT_EQUIP_HEAD"
    "_INT\020\362\221z\022\033\n\025INIT_EQUIP_WEAPON_INT\020\363\221z\022\031\n"
    "\023INIT_EQUIP_BODY_INT\020\364\221z\022\031\n\023INIT_EQUIP_H"
    "AND_INT\020\365\221z\022\031\n\023INIT_EQUIP_FOOT_INT\020\366\221z\022\034"
    "\n\026INIT_EQUIP_JEWELRY_INT\020\367\221z\022 \n\032UPGRADE_"
    "PHASE_MATERIAL_INT\020\370\221z\022&\n UPGRADE_PHASE_"
    "MATERIAL_COUNT_INT\020\371\221z\022 \n\032UPGRADE_SKILL_"
    "AFTER_ID_INT\020\372\221z\022\035\n\027SPECIAL_FILENAME_STR"
    "ING\020\373\221z\022\031\n\023SPECIAL_PATH_STRING\020\374\221z\022\030\n\022US"
    "E_SPECIAL_ID_INT\020\375\221z\022\034\n\026SPECIAL_BODY_POI"
    "NT_INT\020\376\221z\022\033\n\025RELEASE_SKILL_OFF_INT\020\377\221z\022"
    "%\n\037FOLLOW_CHARACTER_DIRECTION_BOOL\020\200\222z\022 "
    "\n\032FOLLOW_CHARACTER_MOVE_BOOL\020\201\222z\022%\n\037INTE"
    "GRATED_SKILL_HEROS_ID_CLASS\020\202\222z\022\023\n\rMETHO"
    "D_ID_INT\020\203\222z\022\027\n\021ENEMY_MONOMER_INT\020\204\222z\022\025\n"
    "\017ENEMY_GROUP_INT\020\205\222z\022\023\n\rENEMY_ALL_INT\020\206\222"
    "z\022\033\n\025TEAMMATES_MOBOMER_INT\020\207\222z\022\031\n\023TEAMMA"
    "TES_GROUP_INT\020\210\222z\022 \n\032TEAMMATES_ALL_BUT_T"
    "HIS_INT\020\211\222z\022\036\n\030ENEMY_RANDOM_MONOMER_INT\020"
    "\212\222z\022\"\n\034TEAMMATES_RANDOM_MONOMER_INT\020\213\222z\022"
    "\033\n\025PLAYER_THEMSELVES_INT\020\214\222z\022\034\n\026EFFECT_V"
    "ALUE_TWO_CLASS\020\215\222z\022\037\n\031CHANCE_TO_TRIGGER_"
    "TWO_INT\020\216\222z\022\034\n\026CONTINUOU_TIME_TWO_INT\020\217\222"
    "z\022\027\n\021FREQUENCY_TWO_INT\020\220\222z\022\024\n\016BUFF_GROUP"
    "_INT\020\221\222z\022\031\n\023CASTING_RANGE_CLASS\020\222\222z\022\025\n\017A"
    "TTACK_TYPE_INT\020\223\222z\022\031\n\023PHYSICAL_DAMAGE_IN"
    "T\020\224\222z\022\030\n\022MAGICAL_DAMAGE_INT\020\225\222z\022\025\n\017MISSI"
    "ON_PRE_INT\020\226\222z\022\"\n\034NORMAL_ATTACK_SKILL_ID"
    "_CLASS\020\227\222z\022\022\n\014PRIORITY_INT\020\230\222z\022\035\n\027JUDGE_"
    "CONDITION_ONE_INT\020\231\222z\022\030\n\022MATH_LOGIC_ONE_"
    "INT\020\232\222z\022\034\n\026CONDITION_ONE_DATA_INT\020\233\222z\022%\n"
    "\037CONDITION_ONE_TWO_RELATION_BOOL\020\234\222z\022\035\n\027"
    "JUDGE_CONDITION_TWO_INT\020\235\222z\022\030\n\022MATH_LOGI"
    "C_TWO_INT\020\236\222z\022\034\n\026CONDITION_TWO_DATA_INT\020"
    "\237\222z\022\036\n\030EXECUTE_SKILL_ID_ONE_INT\020\240\222z\022\036\n\030E"
    "XECUTE_SKILL_ID_TWO_INT\020\241\222z\022\034\n\026ID_ONE_PR"
    "OBABILITY_INT\020\242\222z\022\034\n\026ID_TWO_PROBABILITY_"
    "INT\020\243\222z\022\030\n\022CYCLE_INTERVAL_INT\020\244\222z\022\027\n\021EXE"
    "CUTE_TIMES_INT\020\245\222z\022\025\n\017PROBABILITY_INT\020\246\222"
    "z\022\021\n\013NEXT_ID_INT\020\247\222z\022\033\n\025DEBRIS_NEEDED_NU"
    "M_INT\020\250\222z\022\021\n\013UP_COST_INT\020\251\222z\022\027\n\021STUFF_WE"
    "APONS_INT\020\252\222z\022\024\n\016STUFF_HEAD_INT\020\253\222z\022\024\n\016S"
    "TUFF_BODY_INT\020\254\222z\022\024\n\016STUFF_HAND_INT\020\255\222z\022"
    "\024\n\016STUFF_FOOT_INT\020\256\222z\022\027\n\021STUFF_JEWELRY_I"
    "NT\020\257\222z\022\025\n\017TEMPLATE_ID_INT\020\260\222z\022\021\n\013HERO_ID"
    "_INT\020\261\222z\022\023\n\rLESS_THAN_INT\020\262\222z\022\023\n\rMORE_TH"
    "AN_INT\020\263\222z\022\031\n\023UPGRADE_PROPS_CLASS\020\264\222z\022\033\n"
    "\025GROWTH_M_ATTACK_CLASS\020\265\222z\022\034\n\026GROWTH_M_D"
    "EFENSE_CLASS\020\266\222z\022\022\n\014M_ATTACK_INT\020\267\222z\022\023\n\r"
    "M_DEFENCE_INT\020\270\222z\022\033\n\025ITEM_USE_EFFECT_CLA"
    "SS\020\271\222z\022\031\n\023QUALITY_ICON_STRING\020\272\222z\022\026\n\020BUF"
    "F_SPECIAL_INT\020\273\222z\022\024\n\016BUFF_CURSE_INT\020\274\222z\022"
    "\025\n\017BUFF_STRONG_INT\020\275\222z\022\026\n\020BUFF_CONTROL_I"
    "NT\020\276\222z\022\025\n\017BUFF_DAMAGE_INT\020\277\222z\022\023\n\rBUFF_HE"
    "AL_INT\020\300\222z\022\025\n\017BUFF_IMMUNE_INT\020\301\222z\022\026\n\020BUF"
    "F_PROTECT_INT\020\302\222z\022\025\n\017CASTING_WAY_INT\020\303\222z"
    "\022\026\n\020ACTIVE_SKILL_INT\020\304\222z\022\027\n\021PASSIVE_SKIL"
    "L_INT\020\305\222z\022\032\n\024ACHIEVEMENT_TYPE_INT\020\306\222z\022\033\n"
    "\025ACHIEVEMENT_SCORE_INT\020\307\222z\022\031\n\023MONSTER_VA"
    "RIETY_INT\020\310\222z\022\030\n\022USE_POPULATION_INT\020\311\222z\022"
    "\033\n\025DROP_DUNGEON_ID_CLASS\020\312\222z\022\031\n\023NEED_ITE"
    "M_NUM_CLASS\020\313\222z\022\020\n\nMEMBER_INT\020\314\222z\022\027\n\021ITE"
    "M_USE_TYPE_INT\020\315\222z\022\033\n\025SUBLEVEL_SCENE_STR"
    "ING\020\316\222z\022\032\n\024SUBLEVEL_DATA_STRING\020\317\222z\022\024\n\016D"
    "UNGEON_ID_INT\020\320\222z\022\031\n\023DUNGEON_NAME_STRING"
    "\020\321\222z\022\035\n\027SUBLEVEL_DIFFICULTY_INT\020\322\222z\022\035\n\027U"
    "NLOCK_PLAYER_LEVEL_INT\020\323\222z\022\033\n\025UNLOCK_SUB"
    "LEVEL_CLASS\020\324\222z\022\035\n\027BASIC_COMPLETE_TIME_I"
    "NT\020\325\222z\022\026\n\020MONSTER_KILL_INT\020\326\222z\022\026\n\020SPEND_"
    "ENERGY_INT\020\327\222z\022\025\n\017ACTREWARD_CLASS\020\330\222z\022\037\n"
    "\031PASSIVE_NORMAL_ATTACK_INT\020\331\222z\022\036\n\030PASSIV"
    "E_SKILL_ATTACK_INT\020\332\222z\022\026\n\020PASSIVE_HALO_I"
    "NT\020\333\222z\022\033\n\025ATLAS_FOR_ICON_STRING\020\334\222z\022\032\n\024C"
    "OLLECT_GUARD_ID_INT\020\335\222z\022!\n\033UPDATE_SPEND_"
    "CURRENCY_CLASS\020\336\222z\022\026\n\020MISSION_TYPE_INT\020\337"
    "\222z\022\033\n\025MISSION_REPET_NUM_INT\020\340\222z\022\034\n\026MISSI"
    "ON_REWARD_EXP_INT\020\341\222z\022\027\n\021CURRENCY_TYPE_I"
    "NT\020\342\222z\022\016\n\010COST_INT\020\343\222z\022\023\n\rMAX_COUNT_INT\020"
    "\344\222z\022\021\n\013ITEM_ID_INT\020\345\222z\022\016\n\010TYPE_INT\020\346\222z\022\027"
    "\n\021PROPERTY_TYPE_INT\020\347\222z\022\025\n\017DAMAGE_TYPE_I"
    "NT\020\350\222z\022\020\n\nCOLOUR_INT\020\351\222z\022\030\n\022DAMAGE_PERCE"
    "NT_INT\020\352\222z\022\034\n\026DAMAGE_FIXED_VALUE_INT\020\353\222z"
    "\022\033\n\025REDUCTION_PERCENT_INT\020\354\222z\022\037\n\031REDUCTI"
    "ON_FIXED_VALUE_INT\020\355\222z\022\027\n\021AGGRO_PERCENT_"
    "INT\020\356\222z\022\025\n\017AGGRO_VALUE_INT\020\357\222z\022\025\n\017BUFF_S"
    "TUPOR_INT\020\360\222z\022\026\n\020BUFF_VERTIGO_INT\020\361\222z\022\023\n"
    "\rBUFF_FEAR_INT\020\362\222z\022\032\n\024BUFF_DEFORMATION_I"
    "NT\020\363\222z\022\024\n\016BUFF_TAUNT_INT\020\364\222z\022\025\n\017BUFF_SIL"
    "ENT_INT\020\365\222z\022\032\n\024BUFF_TRANSFORMER_INT\020\366\222z\022"
    "\035\n\027BUFF_MAGIC_IMMUNITY_INT\020\367\222z\022 \n\032BUFF_P"
    "HYSICAL_IMMUNITY_INT\020\370\222z\022\031\n\023BUFF_SUPERAR"
    "MOR_INT\020\371\222z\022\031\n\023BUFF_INVINCIBLE_INT\020\372\222z\022\027"
    "\n\021BUFF_HOLDBODY_INT\020\373\222z\022\026\n\020BUFF_REFLECT_"
    "INT\020\374\222z\022\030\n\022BUFF_CLEARBUFF_INT\020\375\222z\022\031\n\023DRO"
    "P_CURRENCY_CLASS\020\376\222z\022\030\n\022MONSTER_AGGRO_LI"
    "ST\020\377\222z\022\024\n\016AUDIO_PATH_INT\020\200\223z\022\026\n\020WHETHER_"
    "LOOP_INT\020\201\223z\022\024\n\016DELAY_TIME_INT\020\202\223z\022\017\n\tHE"
    "RO_TYPE\020\203\223z\022\022\n\014ORDER_BY_INT\020\204\223z\022\033\n\025CURED"
    "_ADD_PERCENT_INT\020\205\223z\022\031\n\023CURED_ADD_VALUE_"
    "INT\020\206\223z\022\031\n\023REFLECT_PERCENT_INT\020\207\223z\022\027\n\021RE"
    "FLECT_VALUE_INT\020\210\223z\022\034\n\026MAGIC_SHIELD_VALU"
    "E_INT\020\211\223z\022\033\n\025BUFF_PRIORITY_ONE_INT\020\212\223z\022\033"
    "\n\025BUFF_PRIORITY_TWO_INT\020\213\223z\022\024\n\016DEATH_TIM"
    "E_INT\020\214\223z\022\033\n\025ATTACK_HERO_TREND_INT\020\215\223z\022\035"
    "\n\027ONATTACK_HERO_TREND_INT\020\216\223z\022\024\n\016HP_COMP"
    "ARE_INT\020\217\223z\022\023\n\rSTATE_NOW_INT\020\220\223z\022\030\n\022AGGR"
    "O_RANKLIST_INT\020\221\223z\022\024\n\016AGGRO_GOAL_INT\020\222\223z"
    "\022\034\n\026DISTANCE_TO_CASTER_INT\020\223\223z\022\017\n\tTREND_"
    "INT\020\224\223z\022\024\n\016TREND_TANK_INT\020\225\223z\022\026\n\020TREND_D"
    "OCTOR_INT\020\226\223z\022\032\n\024TREND_MELLEE_DPS_INT\020\227\223"
    "z\022\032\n\024TREND_RANGED_DPS_INT\020\230\223z\022\031\n\023TREND_M"
    "AGIC_DPS_INT\020\231\223z\022\024\n\016TREND_TRAP_INT\020\232\223z\022\036"
    "\n\030MONSTER_TYPE_NAME_STRING\020\233\223z\022\032\n\024ACTIVA"
    "TE_SKILL_CLASS\020\234\223z\022\030\n\022SUMMON_BY_HP_CLASS"
    "\020\235\223z\022\026\n\020MONSTER_TYPE_INT\020\236\223z\022\025\n\017TEAMMATE"
    "_ID_INT\020\237\223z\022\033\n\025SKILL_IS_COOLDOWN_INT\020\240\223z"
    "\022\025\n\017SKILL_STATE_INT\020\241\223z\022\030\n\022HAVE_SUMMON_I"
    "D_INT\020\242\223z\022\017\n\tEQUAL_INT\020\243\223z\022\025\n\017NORMAL_AI_"
    "CLASS\020\244\223z\022\027\n\021ADVANCED_AI_CLASS\020\245\223z\022\034\n\026IS"
    "_TO_BE_ATTACKED_BOOL\020\246\223z\022\034\n\026DEBUFF_CAN_S"
    "KILL_CLASS\020\247\223z\022#\n\035NEWBIE_ACTIVE_CONDITIO"
    "N_CLASS\020\250\223z\022\032\n\024NEWBIE_EXECUTE_CLASS\020\251\223z\022"
    "\031\n\023NEWBIE_NOTIFY_CLASS\020\252\223z\022\031\n\023NEWBIE_COM"
    "PLETE_INT\020\253\223z\022\025\n\017INS_ROLE_ID_INT\020\254\223z\022\025\n\017"
    "INS_FACE_STRING\020\255\223z\022\030\n\022INS_DETAILS_STRIN"
    "G\020\256\223z\022\023\n\rINS_SKIP_BOOL\020\257\223z\022\023\n\rINS_STYLE_"
    "INT\020\260\223z\022\036\n\030PASSIVE_SKILL_LIST_CLASS\020\261\223z\022"
    "\035\n\027ACTIVATE_ID_SKILL_CLASS\020\262\223z\022\031\n\023IS_IN_"
    "COOLTIME_BOOL\020\263\223z\022\027\n\021AI_HP_RANGE_CLASS\020\264"
    "\223z\022\034\n\026COLOUR_CHANGE_TYPE_INT\020\265\223z\022\026\n\020PK_A"
    "I_LIST_CLASS\020\266\223z\022\035\n\027GAME_EASY_AI_LIST_CL"
    "ASS\020\267\223z\022\035\n\027GAME_NORM_AI_LIST_CLASS\020\270\223z\022\035"
    "\n\027GAME_DIFF_AI_LIST_CLASS\020\271\223z\022\"\n\034GUARDUP"
    "_NEED_DEBRIS_ID_CLASS\020\272\223z\022\034\n\026SUBLEVEL_GU"
    "ARDID_CLASS\020\273\223z\022\017\n\tSCALE_INT\020\274\223z\022\025\n\017HAVE"
    "_BUFFID_INT\020\275\223z\022\025\n\017IN_COOLTIME_INT\020\276\223z\022&"
    "\n MISSION_EVENT_DESCRIBEONE_STRING\020\277\223z\022&"
    "\n MISSION_EVENT_DESCRIBETWO_STRING\020\300\223z\022\032"
    "\n\024UNLOCK_CASTLE_ID_INT\020\301\223z\022\036\n\030ANDROID_MO"
    "TAI_INFO_CLASS\020\302\223z\022\032\n\024IOS_MOTAI_INFO_CLA"
    "SS\020\303\223z\022\030\n\022USE_ITEM_COUNT_INT\020\304\223z\022\026\n\020LOTT"
    "ERY_TYPE_INT\020\305\223z\022\017\n\tCOUNT_INT\020\306\223z\022\027\n\021LOT"
    "TERY_MONEY_INT\020\307\223z\022\025\n\017LOTTERY_RMB_INT\020\310\223"
    "z\022\032\n\024DUNGEON_MUSIC_STRING\020\311\223z\022\027\n\021POST_MU"
    "LRIPLE_INT\020\312\223z\022\030\n\022FINISH_TIME_STRING\020\313\223z"
    "\022\031\n\023VIP_ADD_COUNT_CLASS\020\314\223z\022\030\n\022VIP_ADD_R"
    "ATE_CLASS\020\315\223z\022\024\n\016REWARD_IDX_INT\020\316\223z\022\026\n\020C"
    "HECKIN_DAYS_INT\020\317\223z\022\024\n\016MONTH_OPEN_INT\020\320\223"
    "z\022\026\n\020REWARD_MONEY_INT\020\321\223z\022\024\n\016REWARD_RMB_"
    "INT\020\322\223z\022\027\n\021PVE_MAP_PRO_CLASS\020\323\223z\022\026\n\020PART"
    "NER_AI_CLASS\020\324\223z\022\032\n\024SCREEN_POS_INDEX_INT"
    "\020\325\223z\022\023\n\rUSE_COUNT_INT\020\326\223z\022\023\n\rFLY_STATE_I"
    "NT\020\327\223z\022\026\n\020VIP_VITALITY_INT\020\330\223z\022\023\n\rVIP_SW"
    "EEP_INT\020\331\223z\022\033\n\025VIP_REPLENIS_RMB_BOOL\020\332\223z"
    "\022\027\n\021VIP_3V3_COUNT_INT\020\333\223z\022\027\n\021VIP_PVP_COU"
    "NT_INT\020\334\223z\022\032\n\024VIP_FRIEND_COUNT_INT\020\335\223z\022\026"
    "\n\020VIP_TREASURE_INT\020\336\223z\022\027\n\021VIP_OPEN_HERO_"
    "INT\020\337\223z\022\030\n\022VIP_ITEM_COUNT_INT\020\340\223z\022\027\n\021VIP"
    "_ITEM_RATE_INT\020\341\223z\022\033\n\025JUMP_INTERFACE_STR"
    "ING\020\342\223z\022\032\n\024SKILL_LIST_PVP_CLASS\020\343\223z\022\025\n\017R"
    "EWARD_SOUL_INT\020\344\223z\022\016\n\010SOUL_INT\020\345\223z\022\031\n\023DU"
    "P_DROP_SOUL_CLASS\020\346\223z\022\030\n\022EXCHANGE_RMB_CO"
    "UNT\020\347\223z\022\030\n\022EXCHANGE_RMB_RATIO\020\350\223z\022\033\n\025ACH"
    "IEVEMENT_GROUP_INT\020\351\223z\022\030\n\022VIP_SWEEP_TEN_"
    "BOOL\020\352\223z\022\026\n\020FIGHTING_NUM_INT\020\353\223z\022\024\n\016BG_I"
    "CON_STRING\020\354\223z\022\030\n\022HAVE_SPRITE_ID_INT\020\355\223z"
    "\022\025\n\017NEAR_SPRITE_INT\020\356\223z\022\033\n\025RANDOM_SHOP_I"
    "NDEX_INT\020\357\223z\022\026\n\020BUFF_WORD_STRING\020\360\223z\022\033\n\025"
    "SUBLEVEL_LOCATE_CLASS\020\361\223z\022\"\n\034SUBLEVEL_TY"
    "PICAL_ENEMY_CLASS\020\362\223z\022\031\n\023UPSKILL_WORD_ST"
    "RING\020\363\223z\022\036\n\030ITEM_USE_DESCRIBE_STRING\020\364\223z"
    "\022\027\n\021HERO_INTRO_STRING\020\365\223z\022\033\n\025EYESIGHT_AC"
    "TIVATE_INT\020\366\223z\022\036\n\030ACCEPT_MISSION_CONDITI"
    "ON\020\367\223z\022!\n\033GRIMOIRE_BUY_TYPE_ONE_CLASS\020\370\223"
    "z\022!\n\033GRIMOIRE_BUY_TYPE_TWO_CLASS\020\371\223z\022\"\n\034"
    "GRIMOIRE_BUY_TYP_THREE_CLASS\020\372\223z\022\"\n\034GRIM"
    "OIRE_CONDITION_ONE_CLASS\020\373\223z\022\"\n\034GRIMOIRE"
    "_CONDITION_TWO_CLASS\020\374\223z\022\034\n\026GRIMOIRE_REL"
    "ATION_BOOL\020\375\223z\022\032\n\024GRIMOIRE_BY_TIME_INT\020\376"
    "\223z\022\033\n\025GRIMOIRE_BY_BLOOD_INT\020\377\223z\022\027\n\021GRIMO"
    "IRE_TYPE_INT\020\200\224z\022\027\n\021GRIMOIRE_FIRE_INT\020\201\224"
    "z\022\026\n\020GRIMOIRE_ICE_INT\020\202\224z\022\030\n\022GRIMOIRE_LI"
    "GHT_INT\020\203\224z\022\027\n\021GRIMOIRE_DARK_INT\020\204\224z\022\031\n\023"
    "GRIMOIRE_NATURE_INT\020\205\224z\022\034\n\026GRIMOIRE_SUMM"
    "ON_ID_INT\020\206\224z\022!\n\033BUFF_REPEAT_BY_DESTORY_"
    "BOOL\020\207\224z\022\036\n\030DUNGEON_COMPLETE_EXP_INT\020\210\224z"
    "\022\036\n\030DUNGEON_ATTACK_COUNT_INT\020\211\224z\022\034\n\026BUFF"
    "_CONTROL_INDEX_INT\020\212\224z\022\035\n\027BUFF_SHOW_SPRI"
    "TE_STRING\020\213\224z\022\031\n\023LEVEL_SECTION_CLASS\020\214\224z"
    "\022\037\n\031PROBABILITY_SECTION_CLASS\020\215\224z\022 \n\032WHE"
    "THER_SHOW_PROGRESS_BOOL\020\216\224z\022\027\n\021HERO_VITA"
    "LITY_INT\020\217\224z\022\034\n\026HERO_VITALITY_TIME_INT\020\220"
    "\224z\022\032\n\024SKILL_TYPE_THREE_INT\020\221\224z\022\034\n\026SKILL_"
    "EFFECT_THREE_INT\020\222\224z\022\035\n\027BUFF_PRIORITY_TH"
    "REE_INT\020\223\224z\022\036\n\030EFFECT_VALUE_THREE_CLASS\020"
    "\224\224z\022!\n\033CHANCE_TO_TRIGGER_THREE_INT\020\225\224z\022\036"
    "\n\030CONTINUOU_TIME_THREE_INT\020\226\224z\022\031\n\023FREQUE"
    "NCY_THREE_INT\020\227\224z\022\036\n\030EFFECT_RANGE_THREE_"
    "CLASS\020\230\224z\022\032\n\024SKILL_DRAG_INDEX_INT\020\231\224z\022\035\n"
    "\027SKILL_DRAG_RADIUS_CALSS\020\232\224z\022\032\n\024BUFF_ANI"
    "MATION_CLASS\020\233\224z\022\023\n\rTRAP_TYPE_INT\020\234\224z\022\035\n"
    "\027TRAP_ACTIVATE_TEC_CLASS\020\235\224z\022\033\n\025TRAP_UNL"
    "OCK_LEVEL_INT\020\236\224z\022\034\n\026TRAP_NEED_ELECTRIC_"
    "INT\020\237\224z\022\033\n\025TRAP_UPGRADE_TIME_INT\020\240\224z\022\033\n\025"
    "TEC_TREE_EFFECT_CLASS\020\241\224z\022!\n\033TEC_TREE_NE"
    "ED_PRE_TEC_CLASS\020\242\224z\022!\n\033TEC_TREE_NEED_PO"
    "INT_MIN_INT\020\243\224z\022\027\n\021TRAP_ENEMY_ID_INT\020\244\224z"
    "\022 \n\032BATTLE_BEFPORE_SKILL_CLASS\020\245\224z\022\037\n\031BA"
    "TTLE_BEFPORE_BUFF_CLASS\020\246\224z\022\026\n\020BATTLE_EN"
    "D_CLASS\020\247\224z\022\024\n\016SPEND_SOUL_INT\020\250\224z\022\033\n\025ADD"
    "_BLOOD_PERCENT_INT\020\251\224z\022\031\n\023ADD_BLOOD_VALU"
    "E_INT\020\252\224z\022\036\n\030PROFESSIONAL_ICON_STRING\020\253\224"
    "z\022\030\n\022TEC_POSITION_CLASS\020\254\224z\022\034\n\026HERO_VITA"
    "LITY_ITEM_INT\020\255\224z\022\026\n\020MAP_DRAPGUARD_ID\020\256\224"
    "z\022\032\n\024GUARD_ACTIVATE_LEVEL\020\257\224z\022\035\n\027STUFF_B"
    "Y_HERO_USE_CLASS\020\260\224z\022\031\n\023GUARD_GROWTH_ID_"
    "INT\020\261\224z\022\034\n\026GUARD_SPEND_KINDID_INT\020\262\224z\022\031\n"
    "\023GUARD_MAX_LEVEL_INT\020\263\224z\022\031\n\023BIRTH_EFFECT"
    "_ID_INT\020\264\224z\022\023\n\rKEY_TIRO_BOOL\020\265\224z\022\035\n\027VIP_"
    "COMPLETE_TRAIN_BOOL\020\266\224z\022 \n\032VIP_COMPLETE_"
    "RESEARCH_BOOL\020\267\224z\022\035\n\027GUARD_RADAR_CHART_C"
    "LASS\020\270\224z\022$\n\036GUARD_ACTIVATE_CONDITION_CLA"
    "SS\020\271\224z\022\030\n\022STRENGTH_VALUE_INT\020\272\224z\022\031\n\023STRE"
    "NGTH_RESIST_INT\020\273\224z\022\026\n\020RACE_ICON_STRING\020"
    "\274\224z\022\026\n\020UP_COST_TIME_INT\020\275\224z\022\023\n\rTOTLE_EXP"
    "_INT\020\276\224z\022\025\n\017UP_RESTRICT_INT\020\277\224z\022\027\n\021FUNCT"
    "ION_TYPE_INT\020\300\224z\022\030\n\022FUNCTION_PARAM_INT\020\301"
    "\224z\022\021\n\013UI_ENUM_INT\020\302\224z\022\020\n\nARG_01_INT\020\303\224z\022"
    "\020\n\nARG_02_INT\020\304\224z\022\020\n\nARG_03_INT\020\305\224z\022\020\n\nA"
    "RG_04_INT\020\306\224z\022\020\n\nARG_05_INT\020\307\224z\022\020\n\nARG_0"
    "6_INT\020\310\224z\022\020\n\nARG_07_INT\020\311\224z\022\020\n\nARG_08_IN"
    "T\020\312\224z\022\020\n\nARG_09_INT\020\313\224z\022\020\n\nARG_10_INT\020\314\224"
    "z\022\023\n\rMIN_COUNT_INT\020\315\224z\022\031\n\023WHETHER_HIDING"
    "_BOOL\020\316\224z\022\023\n\rBUFF_TYPE_INT\020\317\224z\022\026\n\020GAME_T"
    "YPE_STRING\020\320\224z\022$\n\036MISSION_EVENT_FINISHTY"
    "PE_CLASS\020\321\224z\022\021\n\013VIP_EXP_INT\020\322\224z\022\030\n\022BONUS"
    "_ADDITION_INT\020\323\224z\022\034\n\026BUY_MONEY_ADDITION_"
    "INT\020\324\224z\022\030\n\022PLAYER_TYPE_STRING\020\325\224z\022\035\n\027PLA"
    "YER_CONTRIBUTION_INT\020\326\224z\022\027\n\021LOGIN_ADVERT"
    "_BOOL\020\327\224z\022\033\n\025FREE_SPIN_ADVERT_BOOL\020\330\224z\022\027"
    "\n\021LOBBY_ADVERT_BOOL\020\331\224z\022\026\n\020QUIT_ADVERT_B"
    "OOL\020\332\224z\022\034\n\026SELL_MONEY_ADVERT_BOOL\020\333\224z\022\033\n"
    "\025PROMOTION_ADVERT_BOOL\020\334\224z\022\034\n\026X3_DISCOUN"
    "T_CARD_CLASS\020\335\224z\022\034\n\026X5_DISCOUNT_CARD_CLA"
    "SS\020\336\224z\022\023\n\rITEM_KIND_INT\020\337\224z\022\024\n\016SEND_ITEM"
    "_BOOL\020\340\224z\022\024\n\016SELL_ITEM_BOOL\020\341\224z\022\023\n\rUSE_I"
    "TEM_BOOL\020\342\224z\022\031\n\023SELL_ITEM_VALUE_INT\020\345\224z\022"
    "\024\n\016BUY_TYPE_CLASS\020\346\224z\022\027\n\021SALE_PRICE_STRI"
    "NG\020\347\224z\022\026\n\020SIGN_ICON_STRING\020\350\224z\022\025\n\017SALE_T"
    "YPE_CLASS\020\351\224z\022\027\n\021SALE_EFFECT_CLASS\020\352\224z\022\023"
    "\n\rADD_MONEY_INT\020\353\224z\022\023\n\rADD_JEWEL_INT\020\354\224z"
    "\022\025\n\017ADD_ITEM_STRING\020\355\224z\022\021\n\013ADD_VIP_INT\020\356"
    "\224z\022\023\n\rVIP_SALE_BOOL\020\357\224z\022\026\n\020SALE_LIMITED_"
    "INT\020\360\224z\022\024\n\016SHARE_TYPE_INT\020\361\224z\022\033\n\025SHARE_D"
    "ESCRIBE_STRING\020\362\224z\022\032\n\024SCREENSHOT_TYPE_BO"
    "OL\020\363\224z\022\027\n\021SHARE_LINK_STRING\020\364\224z\022\023\n\rSALE_"
    "TYPE_INT\020\365\224z\022\024\n\016SPEND_TYPE_INT\020\366\224z\022\026\n\020SP"
    "END_ITEM_CLASS\020\367\224z\022\023\n\rFIRST_VIP_INT\020\370\224z\022"
    "\031\n\023FIRST_VIP_MONEY_INT\020\371\224z\022\031\n\023FIRST_VIP_"
    "JEWEL_INT\020\372\224z\022\032\n\024FIRST_VIP_ITEM_CLASS\020\373\224"
    "z\022\027\n\021FIRST_VIP_VIP_INT\020\374\224z\022\024\n\016SALE_ITEM_"
    "BOOL\020\375\224z\022\023\n\rSALE_TIME_INT\020\376\224z\022\023\n\rSALE_LA"
    "ST_INT\020\377\224z\022\023\n\rITEM_TYPE_INT\020\200\225z\022\033\n\025ITEM_"
    "TYPE_NAME_STRING\020\201\225z\022\022\n\014ITEM_GET_INT\020\202\225z"
    "\022\017\n\tGROUP_INT\020\203\225z\022\"\n\034CHALLENGE_ROUND_REW"
    "ARD_CLASS\020\204\225z\022\025\n\017THE_JOURNAL_INT\020\205\225z\022\025\n\017"
    "UNLOCK_TIME_INT\020\206\225z\022\033\n\025THUMBNAILS_URL_ST"
    "RING\020\207\225z\022\027\n\021SINGLE_URL_STRING\020\210\225z\022\031\n\023QUI"
    "CK_PURCHASE_BOOL\020\211\225z\022\025\n\017IS_ADD_BAG_BOOL\020"
    "\212\225z\022\022\n\014BUY_STORE_ID\020\213\225z\022\027\n\021DROP_WEIGHT_C"
    "LASS\020\214\225z\022\034\n\026DROP_MONEY_RANGE_CLASS\020\215\225z\022\036"
    "\n\030DROP_DIAMOND_RANGE_CLASS\020\216\225z\022\035\n\027DROP_C"
    "OUPON_RANGE_CLASS\020\217\225z\022\024\n\016MORE_MONEY_INT\020"
    "\220\225z\022\022\n\014MORE_EXP_INT\020\221\225z\022\026\n\020SPEND_COUPON_"
    "INT\020\222\225z", 14487);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "define_attrib.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_define_5fattrib_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_define_5fattrib_2eproto {
  StaticDescriptorInitializer_define_5fattrib_2eproto() {
    protobuf_AddDesc_define_5fattrib_2eproto();
  }
} static_descriptor_initializer_define_5fattrib_2eproto_;
const ::google::protobuf::EnumDescriptor* TAttribType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TAttribType_descriptor_;
}
bool TAttribType_IsValid(int value) {
  switch(value) {
    case -1:
    case 0:
    case 2001001:
    case 2001002:
    case 2001003:
    case 2001004:
    case 2001005:
    case 2001006:
    case 2001007:
    case 2001008:
    case 2001009:
    case 2001010:
    case 2001011:
    case 2001012:
    case 2001013:
    case 2001014:
    case 2001015:
    case 2001016:
    case 2001017:
    case 2001018:
    case 2001019:
    case 2001020:
    case 2001021:
    case 2001022:
    case 2001023:
    case 2001025:
    case 2001026:
    case 2001027:
    case 2001028:
    case 2001029:
    case 2001030:
    case 2001031:
    case 2001032:
    case 2001033:
    case 2001034:
    case 2001035:
    case 2001036:
    case 2001037:
    case 2001038:
    case 2001039:
    case 2001040:
    case 2001041:
    case 2001042:
    case 2001043:
    case 2001044:
    case 2001045:
    case 2001046:
    case 2001047:
    case 2001048:
    case 2001049:
    case 2001050:
    case 2001051:
    case 2001052:
    case 2001053:
    case 2001054:
    case 2001055:
    case 2001056:
    case 2001057:
    case 2001058:
    case 2001059:
    case 2001060:
    case 2001061:
    case 2001062:
    case 2001063:
    case 2001064:
    case 2001065:
    case 2001067:
    case 2001069:
    case 2001070:
    case 2001071:
    case 2001072:
    case 2001073:
    case 2001074:
    case 2001075:
    case 2001076:
    case 2001077:
    case 2001078:
    case 2001079:
    case 2001080:
    case 2001081:
    case 2001082:
    case 2001083:
    case 2001084:
    case 2001086:
    case 2001087:
    case 2001088:
    case 2001089:
    case 2001090:
    case 2001091:
    case 2001092:
    case 2001093:
    case 2001094:
    case 2001095:
    case 2001096:
    case 2001097:
    case 2001098:
    case 2001101:
    case 2001102:
    case 2001103:
    case 2001104:
    case 2001105:
    case 2001106:
    case 2001107:
    case 2001108:
    case 2001109:
    case 2001110:
    case 2001111:
    case 2001112:
    case 2001113:
    case 2001114:
    case 2001115:
    case 2001116:
    case 2001117:
    case 2001118:
    case 2001119:
    case 2001120:
    case 2001121:
    case 2001122:
    case 2001123:
    case 2001124:
    case 2001125:
    case 2001126:
    case 2001127:
    case 2001128:
    case 2001129:
    case 2001130:
    case 2001131:
    case 2001132:
    case 2001133:
    case 2001134:
    case 2001135:
    case 2001136:
    case 2001137:
    case 2001138:
    case 2001139:
    case 2001140:
    case 2001141:
    case 2001142:
    case 2001143:
    case 2001144:
    case 2001145:
    case 2001146:
    case 2001147:
    case 2001148:
    case 2001149:
    case 2001150:
    case 2001151:
    case 2001152:
    case 2001153:
    case 2001154:
    case 2001155:
    case 2001156:
    case 2001157:
    case 2001158:
    case 2001159:
    case 2001160:
    case 2001161:
    case 2001162:
    case 2001163:
    case 2001164:
    case 2001165:
    case 2001166:
    case 2001167:
    case 2001168:
    case 2001169:
    case 2001170:
    case 2001171:
    case 2001172:
    case 2001173:
    case 2001174:
    case 2001175:
    case 2001176:
    case 2001177:
    case 2001178:
    case 2001179:
    case 2001180:
    case 2001181:
    case 2001182:
    case 2001183:
    case 2001184:
    case 2001185:
    case 2001186:
    case 2001187:
    case 2001188:
    case 2001189:
    case 2001190:
    case 2001191:
    case 2001192:
    case 2001193:
    case 2001194:
    case 2001195:
    case 2001196:
    case 2001197:
    case 2001198:
    case 2001199:
    case 2001200:
    case 2001201:
    case 2001202:
    case 2001203:
    case 2001204:
    case 2001205:
    case 2001206:
    case 2001207:
    case 2001208:
    case 2001209:
    case 2001210:
    case 2001211:
    case 2001212:
    case 2001213:
    case 2001214:
    case 2001215:
    case 2001216:
    case 2001217:
    case 2001218:
    case 2001219:
    case 2001220:
    case 2001221:
    case 2001222:
    case 2001223:
    case 2001224:
    case 2001225:
    case 2001226:
    case 2001227:
    case 2001228:
    case 2001229:
    case 2001230:
    case 2001231:
    case 2001232:
    case 2001233:
    case 2001234:
    case 2001235:
    case 2001236:
    case 2001237:
    case 2001238:
    case 2001239:
    case 2001240:
    case 2001241:
    case 2001242:
    case 2001243:
    case 2001244:
    case 2001245:
    case 2001246:
    case 2001247:
    case 2001248:
    case 2001249:
    case 2001250:
    case 2001251:
    case 2001252:
    case 2001253:
    case 2001254:
    case 2001255:
    case 2001256:
    case 2001257:
    case 2001258:
    case 2001259:
    case 2001260:
    case 2001261:
    case 2001262:
    case 2001263:
    case 2001264:
    case 2001265:
    case 2001266:
    case 2001267:
    case 2001268:
    case 2001269:
    case 2001270:
    case 2001271:
    case 2001272:
    case 2001273:
    case 2001274:
    case 2001275:
    case 2001276:
    case 2001277:
    case 2001278:
    case 2001279:
    case 2001280:
    case 2001281:
    case 2001282:
    case 2001283:
    case 2001284:
    case 2001285:
    case 2001286:
    case 2001287:
    case 2001288:
    case 2001289:
    case 2001290:
    case 2001291:
    case 2001292:
    case 2001293:
    case 2001294:
    case 2001295:
    case 2001296:
    case 2001297:
    case 2001298:
    case 2001299:
    case 2001300:
    case 2001301:
    case 2001302:
    case 2001303:
    case 2001304:
    case 2001305:
    case 2001306:
    case 2001307:
    case 2001308:
    case 2001309:
    case 2001310:
    case 2001311:
    case 2001312:
    case 2001313:
    case 2001314:
    case 2001315:
    case 2001316:
    case 2001317:
    case 2001318:
    case 2001319:
    case 2001320:
    case 2001321:
    case 2001322:
    case 2001323:
    case 2001324:
    case 2001325:
    case 2001326:
    case 2001327:
    case 2001328:
    case 2001329:
    case 2001330:
    case 2001331:
    case 2001332:
    case 2001333:
    case 2001334:
    case 2001335:
    case 2001336:
    case 2001337:
    case 2001338:
    case 2001339:
    case 2001340:
    case 2001341:
    case 2001342:
    case 2001343:
    case 2001344:
    case 2001345:
    case 2001346:
    case 2001347:
    case 2001348:
    case 2001349:
    case 2001350:
    case 2001351:
    case 2001352:
    case 2001353:
    case 2001354:
    case 2001355:
    case 2001356:
    case 2001357:
    case 2001358:
    case 2001359:
    case 2001360:
    case 2001361:
    case 2001362:
    case 2001363:
    case 2001364:
    case 2001365:
    case 2001366:
    case 2001367:
    case 2001368:
    case 2001369:
    case 2001370:
    case 2001371:
    case 2001372:
    case 2001373:
    case 2001374:
    case 2001375:
    case 2001376:
    case 2001377:
    case 2001378:
    case 2001379:
    case 2001380:
    case 2001381:
    case 2001382:
    case 2001383:
    case 2001384:
    case 2001385:
    case 2001386:
    case 2001387:
    case 2001388:
    case 2001389:
    case 2001390:
    case 2001391:
    case 2001392:
    case 2001393:
    case 2001394:
    case 2001395:
    case 2001396:
    case 2001397:
    case 2001398:
    case 2001399:
    case 2001400:
    case 2001401:
    case 2001402:
    case 2001403:
    case 2001404:
    case 2001405:
    case 2001406:
    case 2001407:
    case 2001408:
    case 2001409:
    case 2001410:
    case 2001411:
    case 2001412:
    case 2001413:
    case 2001414:
    case 2001415:
    case 2001416:
    case 2001417:
    case 2001418:
    case 2001419:
    case 2001420:
    case 2001421:
    case 2001422:
    case 2001423:
    case 2001424:
    case 2001425:
    case 2001426:
    case 2001427:
    case 2001428:
    case 2001429:
    case 2001430:
    case 2001431:
    case 2001432:
    case 2001433:
    case 2001434:
    case 2001435:
    case 2001436:
    case 2001437:
    case 2001438:
    case 2001439:
    case 2001440:
    case 2001441:
    case 2001442:
    case 2001443:
    case 2001444:
    case 2001445:
    case 2001446:
    case 2001447:
    case 2001448:
    case 2001449:
    case 2001450:
    case 2001451:
    case 2001452:
    case 2001453:
    case 2001454:
    case 2001455:
    case 2001456:
    case 2001457:
    case 2001458:
    case 2001459:
    case 2001460:
    case 2001461:
    case 2001462:
    case 2001463:
    case 2001464:
    case 2001465:
    case 2001466:
    case 2001467:
    case 2001468:
    case 2001469:
    case 2001470:
    case 2001471:
    case 2001472:
    case 2001473:
    case 2001474:
    case 2001475:
    case 2001476:
    case 2001477:
    case 2001478:
    case 2001479:
    case 2001480:
    case 2001481:
    case 2001482:
    case 2001483:
    case 2001484:
    case 2001485:
    case 2001486:
    case 2001487:
    case 2001488:
    case 2001489:
    case 2001490:
    case 2001491:
    case 2001492:
    case 2001493:
    case 2001494:
    case 2001495:
    case 2001496:
    case 2001497:
    case 2001498:
    case 2001499:
    case 2001500:
    case 2001501:
    case 2001502:
    case 2001503:
    case 2001504:
    case 2001505:
    case 2001506:
    case 2001509:
    case 2001510:
    case 2001511:
    case 2001512:
    case 2001513:
    case 2001514:
    case 2001515:
    case 2001516:
    case 2001517:
    case 2001518:
    case 2001519:
    case 2001520:
    case 2001521:
    case 2001522:
    case 2001523:
    case 2001524:
    case 2001525:
    case 2001526:
    case 2001527:
    case 2001528:
    case 2001529:
    case 2001530:
    case 2001531:
    case 2001532:
    case 2001533:
    case 2001534:
    case 2001535:
    case 2001536:
    case 2001537:
    case 2001538:
    case 2001539:
    case 2001540:
    case 2001541:
    case 2001542:
    case 2001543:
    case 2001544:
    case 2001545:
    case 2001546:
    case 2001547:
    case 2001548:
    case 2001549:
    case 2001550:
    case 2001551:
    case 2001552:
    case 2001553:
    case 2001554:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ATTRIB_TYPE

// @@protoc_insertion_point(global_scope)
