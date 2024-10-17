// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/RelevanceDistance.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/relevance_distance__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__RelevanceDistance__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0x14, 0xee, 0x24, 0xe6, 0xac, 0x6f, 0x92,
      0xe4, 0x8d, 0x65, 0xe4, 0x2d, 0x50, 0x82, 0x11,
      0x12, 0x07, 0x11, 0x88, 0x6e, 0xbf, 0xa5, 0x95,
      0xa8, 0xea, 0x0c, 0xa7, 0x8d, 0x74, 0x74, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__RelevanceDistance__TYPE_NAME[] = "ros_etsi_its_msgs/msg/RelevanceDistance";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__RelevanceDistance__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__RelevanceDistance__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__RelevanceDistance__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__RelevanceDistance__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__RelevanceDistance__TYPE_NAME, 39, 39},
      {ros_etsi_its_msgs__msg__RelevanceDistance__FIELDS, 1, 1},
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
  "uint8 LESS_THAN_50M = 0\n"
  "uint8 LESS_THAN_100M = 1\n"
  "uint8 LESS_THAN_200M = 2\n"
  "uint8 LESS_THAN_500M = 3\n"
  "uint8 LESS_THAN_1000M = 4\n"
  "uint8 LESS_THAN_5KM = 5\n"
  "uint8 LESS_THAN_10KM = 6\n"
  "uint8 OVER_10KM = 7\n"
  "uint8 UNAVAILABLE = 255";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__RelevanceDistance__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__RelevanceDistance__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 231, 231},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__RelevanceDistance__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__RelevanceDistance__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
