// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/LongitudinalAcceleration.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0x26, 0xc7, 0x9a, 0xd2, 0x4d, 0x00, 0xe5,
      0xfa, 0x3a, 0xd8, 0xe6, 0x6a, 0x18, 0x69, 0x35,
      0x01, 0x92, 0x91, 0xf1, 0xbc, 0x33, 0x11, 0xdf,
      0xa0, 0x15, 0xbd, 0xbd, 0xb3, 0x70, 0xd8, 0xe8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LongitudinalAcceleration";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__LongitudinalAcceleration__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__LongitudinalAcceleration__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__LongitudinalAcceleration__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__LongitudinalAcceleration__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LongitudinalAcceleration__FIELD_NAME__confidence, 10, 10},
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
ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME, 46, 46},
      {ros_etsi_its_msgs__msg__LongitudinalAcceleration__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int16 value # 0.1 m/s^2\n"
  "uint8 confidence # 0.1 m/s^2\n"
  "\n"
  "int16 VALUE_UNAVAILABLE = 161\n"
  "\n"
  "uint8 CONFIDENCE_OUT_OF_RANGE = 101\n"
  "uint8 CONFIDENCE_UNAVAILABLE = 102";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 156, 156},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
