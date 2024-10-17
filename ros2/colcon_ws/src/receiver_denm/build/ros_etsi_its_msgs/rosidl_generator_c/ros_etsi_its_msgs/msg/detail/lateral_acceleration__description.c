// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/LateralAcceleration.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__LateralAcceleration__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0x3b, 0x9e, 0x6b, 0x95, 0xfc, 0x4c, 0x43,
      0xa1, 0xbf, 0xc7, 0xfe, 0xa8, 0x0e, 0x4b, 0xab,
      0x8b, 0xa5, 0xc1, 0x16, 0xb7, 0x3e, 0xb2, 0x6e,
      0xaf, 0x15, 0x91, 0x1d, 0x41, 0x5d, 0x8a, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__LateralAcceleration__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LateralAcceleration";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__LateralAcceleration__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__LateralAcceleration__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__LateralAcceleration__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__LateralAcceleration__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LateralAcceleration__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__LateralAcceleration__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__LateralAcceleration__TYPE_NAME, 41, 41},
      {ros_etsi_its_msgs__msg__LateralAcceleration__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 value\n"
  "int32 confidence\n"
  "\n"
  "int32 VALUE_POINTONEMETERPERSECSQUAREDTORIGHT = -1\n"
  "int32 VALUE_POINTONEMETERPERSECSQUAREDTOLEFT = 1\n"
  "int32 VALUE_UNAVAILABLE = 161\n"
  "\n"
  "#AccelerationConfidence ::= INTEGER {pointOneMeterPerSecSquared(1), outOfRange(101), unavailable(102)} (0 .. 102)\n"
  "int8 CONFIDENCE_POINTONEMETERPERSECSQUARED = 1\n"
  "int8 CONFIDENCE_OUTOFRANGE = 101\n"
  "int8 CONFIDENCE_UNAVAILABLE = 102";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__LateralAcceleration__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__LateralAcceleration__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 388, 388},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__LateralAcceleration__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__LateralAcceleration__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
