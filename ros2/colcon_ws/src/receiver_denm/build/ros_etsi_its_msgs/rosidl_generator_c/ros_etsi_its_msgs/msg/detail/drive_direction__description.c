// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/DriveDirection.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/drive_direction__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__DriveDirection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0x43, 0x66, 0xd9, 0x55, 0xa6, 0x15, 0xb9,
      0x7a, 0x37, 0xfb, 0xae, 0xc0, 0x4d, 0xb5, 0x0e,
      0xa2, 0x3f, 0x10, 0x75, 0x05, 0xa5, 0x6f, 0x92,
      0xa0, 0x9e, 0x38, 0xc9, 0x2e, 0x82, 0x01, 0x7e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DriveDirection";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__DriveDirection__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__DriveDirection__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__DriveDirection__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__DriveDirection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME, 36, 36},
      {ros_etsi_its_msgs__msg__DriveDirection__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 value\n"
  "\n"
  "uint8 FORWARD = 0\n"
  "uint8 BACKWARD = 1\n"
  "uint8 UNAVAILABLE = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__DriveDirection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 72, 72},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__DriveDirection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__DriveDirection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
