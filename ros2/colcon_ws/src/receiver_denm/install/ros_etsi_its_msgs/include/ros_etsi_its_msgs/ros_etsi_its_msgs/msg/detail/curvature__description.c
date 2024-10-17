// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/Curvature.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/curvature__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__Curvature__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x53, 0xbb, 0x8b, 0x7f, 0x8f, 0x9b, 0x68,
      0xd0, 0x18, 0x0c, 0xab, 0x4a, 0x08, 0x1f, 0x1f,
      0x89, 0xe4, 0x3c, 0x49, 0xfb, 0x00, 0xb8, 0xde,
      0xeb, 0x3e, 0x71, 0xed, 0xfb, 0x8b, 0xf9, 0x14,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__Curvature__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Curvature";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__Curvature__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__Curvature__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__Curvature__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__Curvature__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Curvature__FIELD_NAME__confidence, 10, 10},
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
ros_etsi_its_msgs__msg__Curvature__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__Curvature__TYPE_NAME, 31, 31},
      {ros_etsi_its_msgs__msg__Curvature__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 value # m^-1\n"
  "uint8 confidence\n"
  "\n"
  "int16 VALUE_RIGHTMOST = -1023\n"
  "int16 VALUE_LEFTMOST = 1022\n"
  "int16 VALUE_MIN = -1023\n"
  "int16 VALUE_MAX = 1022\n"
  "int16 VALUE_STRAIGHT = 0\n"
  "int16 VALUE_UNAVAILABLE = 1023\n"
  "\n"
  "uint8 CONFIDENCE_OUT_OF_RANGE = 6\n"
  "uint8 CONFIDENCE_UNAVAILABLE = 7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__Curvature__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__Curvature__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 266, 266},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__Curvature__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__Curvature__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
