// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ObjectDimension.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/object_dimension__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ObjectDimension__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0xef, 0x2a, 0xd2, 0xab, 0x0d, 0xca, 0x81,
      0xd9, 0x14, 0x9b, 0x7d, 0xdb, 0xde, 0x52, 0x85,
      0x1b, 0x39, 0xf0, 0x7e, 0xca, 0x95, 0xac, 0xe4,
      0x04, 0x89, 0x4b, 0xa3, 0xf5, 0xcf, 0x91, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectDimension";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ObjectDimension__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__ObjectDimension__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ObjectDimension__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ObjectDimension__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ObjectDimension__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__ObjectDimension__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME, 37, 37},
      {ros_etsi_its_msgs__msg__ObjectDimension__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 value #0.1m = 1\n"
  "int8 confidence\n"
  "\n"
  "int32 VALUE_ONE_METER = 10\n"
  "\n"
  "int8 CONFIDENCE_ZEROPOINTZEROONEMETER = 1\n"
  "int8 CONFIDENCE_M = 100\n"
  "int8 CONFIDENCE_OUT_OF_RANGE = 101\n"
  "int8 CONFIDENCE_UNAVAILABLE = 102\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ObjectDimension__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 203, 203},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ObjectDimension__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ObjectDimension__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
