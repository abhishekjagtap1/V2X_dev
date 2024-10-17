// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/Heading.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/heading__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__Heading__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0x82, 0xdf, 0x3e, 0xf7, 0x89, 0x5b, 0x6a,
      0x10, 0xfb, 0x45, 0x17, 0x95, 0xd3, 0x70, 0x0d,
      0x21, 0x5d, 0x7b, 0x2a, 0x7d, 0xa0, 0xab, 0x94,
      0x7a, 0x79, 0x69, 0xc9, 0x3b, 0xb5, 0x1d, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__Heading__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Heading";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__Heading__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__Heading__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__Heading__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__Heading__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Heading__FIELD_NAME__confidence, 10, 10},
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
ros_etsi_its_msgs__msg__Heading__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__Heading__TYPE_NAME, 29, 29},
      {ros_etsi_its_msgs__msg__Heading__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 value # 0.1 degree\n"
  "uint8 confidence\n"
  "\n"
  "uint16 VALUE_NORTH = 0\n"
  "uint16 VALUE_EAST = 900\n"
  "uint16 VALUE_SOUTH = 1800\n"
  "uint16 VALUE_WEST = 2700\n"
  "uint16 VALUE_UNAVAILABLE = 3601\n"
  "\n"
  "uint8 CONFIDENCE_ZERO_POINT_ONE_DEGREE = 1\n"
  "uint8 CONFIDENCE_ONE_DEGREE = 10\n"
  "uint8 CONFIDENCE_OUT_OF_RANGE = 126\n"
  "uint8 CONFIDENCE_UNAVAILABLE = 127";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__Heading__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__Heading__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 322, 322},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__Heading__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__Heading__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
