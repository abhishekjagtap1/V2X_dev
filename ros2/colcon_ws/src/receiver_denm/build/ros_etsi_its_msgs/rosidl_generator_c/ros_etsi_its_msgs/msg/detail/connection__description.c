// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/connection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__Connection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0xe0, 0x0e, 0x30, 0x41, 0x5a, 0x5c, 0x5e,
      0xcd, 0x6b, 0xde, 0x51, 0x2e, 0x19, 0x90, 0xe1,
      0x02, 0x71, 0xfb, 0x8d, 0x09, 0xa4, 0x7c, 0xb1,
      0x24, 0xa9, 0xeb, 0xcf, 0x6e, 0x82, 0xf6, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__Connection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Connection";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__Connection__FIELD_NAME__connecting_lane[] = "connecting_lane";
static char ros_etsi_its_msgs__msg__Connection__FIELD_NAME__remote_intersection[] = "remote_intersection";
static char ros_etsi_its_msgs__msg__Connection__FIELD_NAME__signal_group[] = "signal_group";
static char ros_etsi_its_msgs__msg__Connection__FIELD_NAME__connection_id[] = "connection_id";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__Connection__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__Connection__FIELD_NAME__connecting_lane, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Connection__FIELD_NAME__remote_intersection, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Connection__FIELD_NAME__signal_group, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Connection__FIELD_NAME__connection_id, 13, 13},
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
ros_etsi_its_msgs__msg__Connection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__Connection__TYPE_NAME, 32, 32},
      {ros_etsi_its_msgs__msg__Connection__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 connecting_lane\n"
  "uint16 remote_intersection\n"
  "uint8 signal_group\n"
  "uint8 connection_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__Connection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__Connection__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 88, 88},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__Connection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__Connection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
