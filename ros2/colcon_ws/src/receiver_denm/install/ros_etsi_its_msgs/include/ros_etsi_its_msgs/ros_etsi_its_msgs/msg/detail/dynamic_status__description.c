// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/DynamicStatus.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/dynamic_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__DynamicStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x9d, 0xbd, 0x8e, 0x0a, 0xbd, 0x48, 0xf0,
      0x6b, 0xe1, 0x1b, 0x3c, 0x1a, 0x30, 0xc9, 0x69,
      0xb8, 0xea, 0x90, 0x58, 0x89, 0x80, 0xe4, 0x9b,
      0x63, 0x24, 0x93, 0xae, 0x88, 0xc8, 0x43, 0xfb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__DynamicStatus__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DynamicStatus";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__DynamicStatus__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__DynamicStatus__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__DynamicStatus__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__DynamicStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__DynamicStatus__TYPE_NAME, 35, 35},
      {ros_etsi_its_msgs__msg__DynamicStatus__FIELDS, 1, 1},
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
  "\n"
  "int32 VALUE_DYNAMIC = 0\n"
  "int32 VALUE_HASBEENDYNAMIC = 1\n"
  "int32 VALUE_STATIC = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__DynamicStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__DynamicStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 90, 90},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__DynamicStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__DynamicStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
