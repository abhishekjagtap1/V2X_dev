// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/yaw_rate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__YawRate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x99, 0xa2, 0xf2, 0x80, 0xa0, 0xf9, 0x3c,
      0x9c, 0x79, 0xe5, 0x0d, 0x19, 0xde, 0xb2, 0xb9,
      0xfa, 0x47, 0xaa, 0x3a, 0xe4, 0xe4, 0x58, 0x1c,
      0x35, 0xdc, 0x22, 0x3a, 0x6c, 0xd5, 0x28, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__YawRate__TYPE_NAME[] = "ros_etsi_its_msgs/msg/YawRate";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__YawRate__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__YawRate__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__YawRate__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__YawRate__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__YawRate__FIELD_NAME__confidence, 10, 10},
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
ros_etsi_its_msgs__msg__YawRate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__YawRate__TYPE_NAME, 29, 29},
      {ros_etsi_its_msgs__msg__YawRate__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 value # 0.01 degree/s\n"
  "uint8 confidence\n"
  "\n"
  "int16 VALUE_UNAVAILABLE = 32767\n"
  "\n"
  "uint8 CONFIDENCE_0DOT01_DEGSEC = 0\n"
  "uint8 CONFIDENCE_0DOT05_DEGSEC = 1\n"
  "uint8 CONFIDENCE_0DOT1_DEGSEC = 2\n"
  "uint8 CONFIDENCE_1_DEGSEC = 3\n"
  "uint8 CONFIDENCE_5_DEGSEC = 4\n"
  "uint8 CONFIDENCE_10_DEGSEC = 5\n"
  "uint8 CONFIDENCE_100_DEGSEC = 6\n"
  "uint8 CONFIDENCE_OUT_OF_RANGE = 7\n"
  "uint8 CONFIDENCE_UNAVAILABLE = 8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__YawRate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__YawRate__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 373, 373},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__YawRate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__YawRate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
