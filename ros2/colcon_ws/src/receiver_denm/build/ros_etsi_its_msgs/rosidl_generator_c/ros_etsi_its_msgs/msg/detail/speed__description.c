// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__Speed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0xa4, 0x6a, 0x89, 0x32, 0x10, 0xb9, 0xda,
      0x2d, 0x85, 0xd6, 0xff, 0x1a, 0xd1, 0x80, 0xe8,
      0x4a, 0x94, 0x05, 0x8e, 0x84, 0x1e, 0x0e, 0x0d,
      0xda, 0x9a, 0x5f, 0xe6, 0x6b, 0xf9, 0x90, 0xff,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__Speed__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Speed";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__Speed__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__Speed__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__Speed__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__Speed__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Speed__FIELD_NAME__confidence, 10, 10},
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
ros_etsi_its_msgs__msg__Speed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__Speed__TYPE_NAME, 27, 27},
      {ros_etsi_its_msgs__msg__Speed__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 value # 0.01 m/s\n"
  "uint8 confidence # 0.01 m/s\n"
  "\n"
  "uint16 VALUE_STANDSTILL = 0\n"
  "uint16 VALUE_ONE_CENTIMETER_PER_SECOND = 1\n"
  "uint16 VALUE_UNAVAILABLE = 16383\n"
  "\n"
  "uint8 CONFIDENCE_OUT_OF_RANGE = 126\n"
  "uint8 CONFIDENCE_UNAVAILABLE = 127";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__Speed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__Speed__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 229, 229},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__Speed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__Speed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
