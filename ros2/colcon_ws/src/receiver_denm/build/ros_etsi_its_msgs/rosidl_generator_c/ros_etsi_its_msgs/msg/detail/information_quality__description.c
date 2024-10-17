// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/InformationQuality.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/information_quality__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__InformationQuality__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0x48, 0x2b, 0x66, 0x62, 0xdf, 0x43, 0x32,
      0x8f, 0x92, 0x70, 0xee, 0x8a, 0xac, 0xe9, 0x74,
      0x1a, 0x76, 0x45, 0x3d, 0x6f, 0x83, 0x90, 0x64,
      0x23, 0x11, 0x3a, 0xb0, 0x05, 0xa2, 0x6d, 0xc9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__InformationQuality__TYPE_NAME[] = "ros_etsi_its_msgs/msg/InformationQuality";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__InformationQuality__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__InformationQuality__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__InformationQuality__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__InformationQuality__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__InformationQuality__TYPE_NAME, 40, 40},
      {ros_etsi_its_msgs__msg__InformationQuality__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 value\n"
  "\n"
  "int8 UNAVAILABLE = 0\n"
  "int8 LOWEST = 1\n"
  "int8 HIGHEST = 7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__InformationQuality__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__InformationQuality__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 66, 66},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__InformationQuality__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__InformationQuality__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
