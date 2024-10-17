// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ActionID.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/action_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ActionID__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0x7d, 0x90, 0x45, 0x72, 0x3b, 0x80, 0x6a,
      0xbd, 0x32, 0x88, 0x89, 0x09, 0xa8, 0xc1, 0x72,
      0xd0, 0x1e, 0x87, 0x17, 0x32, 0x8d, 0x5e, 0xee,
      0x23, 0xa2, 0xa3, 0x8f, 0x03, 0x36, 0x50, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__ActionID__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ActionID";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ActionID__FIELD_NAME__station_id[] = "station_id";
static char ros_etsi_its_msgs__msg__ActionID__FIELD_NAME__sequence_number[] = "sequence_number";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ActionID__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ActionID__FIELD_NAME__station_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ActionID__FIELD_NAME__sequence_number, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__ActionID__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ActionID__TYPE_NAME, 30, 30},
      {ros_etsi_its_msgs__msg__ActionID__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 station_id\n"
  "uint16 sequence_number";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ActionID__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ActionID__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ActionID__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ActionID__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
