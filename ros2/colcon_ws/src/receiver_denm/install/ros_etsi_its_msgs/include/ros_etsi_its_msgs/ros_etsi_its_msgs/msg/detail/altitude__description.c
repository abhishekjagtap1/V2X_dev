// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/Altitude.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__Altitude__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0x4d, 0xd3, 0x5c, 0x53, 0xfe, 0xb7, 0xef,
      0x5c, 0x8d, 0x6f, 0xe7, 0xe0, 0x2e, 0x54, 0x49,
      0x9c, 0xd5, 0x5d, 0xa3, 0x2f, 0x13, 0x00, 0xfd,
      0xec, 0x0c, 0x0b, 0x3e, 0x75, 0xe0, 0x73, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__Altitude__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Altitude";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__Altitude__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__Altitude__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__Altitude__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__Altitude__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Altitude__FIELD_NAME__confidence, 10, 10},
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
ros_etsi_its_msgs__msg__Altitude__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
      {ros_etsi_its_msgs__msg__Altitude__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 value # 0.01 meter\n"
  "uint8 confidence\n"
  "\n"
  "int32 VALUE_REFERENCE_ELLIPSOID_SURFACE = 0\n"
  "int32 VALUE_ONE_CENTIMETER = 1\n"
  "int32 VALUE_UNAVAILABLE = 800001\n"
  "\n"
  "uint8 CONFIDENCE_1CM = 0\n"
  "uint8 CONFIDENCE_2CM = 1\n"
  "uint8 CONFIDENCE_5CM = 2\n"
  "uint8 CONFIDENCE_10CM = 3\n"
  "uint8 CONFIDENCE_20CM = 4\n"
  "uint8 CONFIDENCE_50CM = 5\n"
  "uint8 CONFIDENCE_1M = 6\n"
  "uint8 CONFIDENCE_2M = 7\n"
  "uint8 CONFIDENCE_5M = 8\n"
  "uint8 CONFIDENCE_10M = 9\n"
  "uint8 CONFIDENCE_20M = 10\n"
  "uint8 CONFIDENCE_50M = 11\n"
  "uint8 CONFIDENCE_100M = 12\n"
  "uint8 CONFIDENCE_200M = 13\n"
  "uint8 CONFIDENCE_OUT_OF_RANGE = 14\n"
  "uint8 CONFIDENCE_UNAVAILABLE = 15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 577, 577},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__Altitude__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
