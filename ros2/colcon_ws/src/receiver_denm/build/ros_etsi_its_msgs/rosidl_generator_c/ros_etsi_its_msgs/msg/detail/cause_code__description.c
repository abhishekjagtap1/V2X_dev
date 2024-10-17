// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/CauseCode.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/cause_code__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__CauseCode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0x2d, 0x11, 0x3d, 0x4f, 0x71, 0xa8, 0xfa,
      0xc2, 0x17, 0xec, 0x2d, 0x78, 0x1d, 0x8e, 0xab,
      0x95, 0xf1, 0x2c, 0xcd, 0x38, 0x8d, 0x7b, 0x6c,
      0x5f, 0x4e, 0x5d, 0x89, 0x5d, 0xb4, 0x98, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME[] = "ros_etsi_its_msgs/msg/CauseCode";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__CauseCode__FIELD_NAME__cause_code[] = "cause_code";
static char ros_etsi_its_msgs__msg__CauseCode__FIELD_NAME__sub_cause_code[] = "sub_cause_code";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__CauseCode__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__CauseCode__FIELD_NAME__cause_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CauseCode__FIELD_NAME__sub_cause_code, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__CauseCode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME, 31, 31},
      {ros_etsi_its_msgs__msg__CauseCode__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 cause_code\n"
  "uint8 sub_cause_code\n"
  "\n"
  "uint8 RESERVED = 0\n"
  "uint8 TRAFFIC_CONDITION = 1\n"
  "uint8 ACCIDENT = 2\n"
  "uint8 ROADWORKS = 3\n"
  "uint8 ADVERSE_WEATHER_CONDITIONS_ADHESION = 4\n"
  "uint8 HAZARDOUS_LOCATION_SURFACE_CONDITION = 9\n"
  "uint8 HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD = 10\n"
  "uint8 HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD = 11\n"
  "uint8 HUMAN_PRESENCE_ON_THE_ROAD = 12\n"
  "uint8 WRONG_WAY_DRIVING = 14\n"
  "uint8 RESCUE_AND_RECOVERY_WORK_IN_PROGRESS = 15\n"
  "uint8 ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION = 17\n"
  "uint8 ADVERSE_WEATHER_CONDITIONS_VISIBILITY = 18\n"
  "uint8 ADVERSE_WEATHER_CONDITIONS_PRECIPITATION = 19\n"
  "uint8 SLOW_VEHICLE = 26\n"
  "uint8 DANGEROUS_END_OF_QUEUE = 27\n"
  "uint8 VEHICLE_BREAKDOWN = 91\n"
  "uint8 POST_CRASH = 92\n"
  "uint8 HUMAN_PROBLEM = 93\n"
  "uint8 STATIONARY_VEHICLE = 94\n"
  "uint8 EMERGENCY_VEHICLE_APPROACHING = 95\n"
  "uint8 HAZARDOUS_LOCATION_DANGEROUS_CURVE = 96\n"
  "uint8 COLLISION_RISK = 97\n"
  "uint8 SIGNAL_VIOLATION = 98\n"
  "uint8 DANGEROUS_SITUATION = 99";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__CauseCode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 934, 934},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__CauseCode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__CauseCode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
