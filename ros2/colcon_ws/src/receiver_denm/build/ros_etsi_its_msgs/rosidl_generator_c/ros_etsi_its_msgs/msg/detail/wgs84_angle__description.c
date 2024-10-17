// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/WGS84Angle.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__WGS84Angle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x04, 0x5a, 0x30, 0x38, 0xe2, 0xc7, 0xda,
      0x01, 0x1e, 0x5c, 0x41, 0x5d, 0xaf, 0x16, 0x62,
      0x98, 0x2b, 0x4c, 0xa6, 0x33, 0x59, 0x6c, 0x9b,
      0x6f, 0x49, 0xbb, 0x45, 0x0b, 0x1c, 0x8b, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__WGS84Angle__TYPE_NAME[] = "ros_etsi_its_msgs/msg/WGS84Angle";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__WGS84Angle__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__WGS84Angle__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__WGS84Angle__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__WGS84Angle__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__WGS84Angle__FIELD_NAME__confidence, 10, 10},
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
ros_etsi_its_msgs__msg__WGS84Angle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__WGS84Angle__TYPE_NAME, 32, 32},
      {ros_etsi_its_msgs__msg__WGS84Angle__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 value #decidegree\n"
  "uint8 confidence\n"
  "\n"
  "int16 WGS84NORTH = 0\n"
  "int16 WGS84EAST = 900\n"
  "int16 WGS84SOUTH = 2700\n"
  "int16 VALUE_UNAVAILABLE = 3601\n"
  "\n"
  "uint8 CONFIDENCE_ZERO_POINT_ONE_DEGREE = 1\n"
  "uint8 CONFIDENCE_ONE_DEGREE = 10\n"
  "uint8 CONFIDENCE_OUT_OF_RANGE = 126\n"
  "uint8 CONFIDENCE_UNAVAILABLE = 127";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__WGS84Angle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__WGS84Angle__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 288, 288},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__WGS84Angle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__WGS84Angle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
