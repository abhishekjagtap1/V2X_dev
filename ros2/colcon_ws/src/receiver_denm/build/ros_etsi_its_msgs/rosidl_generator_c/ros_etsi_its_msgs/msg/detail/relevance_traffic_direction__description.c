// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/RelevanceTrafficDirection.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x8c, 0xa1, 0x37, 0x17, 0x0d, 0x91, 0x48,
      0x21, 0xda, 0x06, 0x8e, 0x84, 0x36, 0xec, 0x07,
      0xa7, 0xb8, 0xfb, 0xf1, 0xd5, 0x02, 0x43, 0x7e,
      0xe5, 0x94, 0xed, 0xd8, 0x1d, 0xf4, 0xa3, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__RelevanceTrafficDirection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/RelevanceTrafficDirection";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__RelevanceTrafficDirection__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__RelevanceTrafficDirection__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__RelevanceTrafficDirection__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__RelevanceTrafficDirection__TYPE_NAME, 47, 47},
      {ros_etsi_its_msgs__msg__RelevanceTrafficDirection__FIELDS, 1, 1},
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
  "uint8 ALL_TRAFFIC_DIRECTIONS = 0\n"
  "uint8 UPSTREAM_TRAFFIC = 1\n"
  "uint8 DOWNSTREAM_TRAFFIC = 2\n"
  "uint8 OPPOSITE_TRAFFIC = 3\n"
  "uint8 UNAVAILABLE = 255 # extension to encode optional traffic directions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__RelevanceTrafficDirection__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 203, 203},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
