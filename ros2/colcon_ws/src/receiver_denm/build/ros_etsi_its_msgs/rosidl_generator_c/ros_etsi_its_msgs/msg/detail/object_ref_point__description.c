// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ObjectRefPoint.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/object_ref_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ObjectRefPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xf9, 0x78, 0x61, 0xb0, 0xd0, 0xfc, 0xc2,
      0xea, 0x9d, 0x1b, 0x27, 0x88, 0x82, 0xad, 0x98,
      0xaa, 0xb0, 0x74, 0x54, 0xac, 0xac, 0xfb, 0x4e,
      0xee, 0x9d, 0x4c, 0xdd, 0xfa, 0xfc, 0x31, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__ObjectRefPoint__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectRefPoint";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ObjectRefPoint__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ObjectRefPoint__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ObjectRefPoint__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__ObjectRefPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ObjectRefPoint__TYPE_NAME, 36, 36},
      {ros_etsi_its_msgs__msg__ObjectRefPoint__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#mid(0), bottomLeft(1), midLeft(2), topLeft(3), bottomMid(4), topMid(5), bottomRight(6), midRight(7), topRight(8)\n"
  "int32 value\n"
  "\n"
  "int32 VALUE_MID = 0\n"
  "int32 VALUE_BOTTOMLEFT = 1\n"
  "int32 VALUE_MIDLEFT = 2\n"
  "int32 VALUE_TOPLEFT = 3\n"
  "int32 VALUE_BOTTOMMID = 4\n"
  "int32 VALUE_TOPMID= 5\n"
  "int32 VALUE_BOTTOMRIGHT = 6\n"
  "int32 VALUE_MIDRIGHT = 7\n"
  "int32 VALUE_TOPRIGHT = 8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ObjectRefPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ObjectRefPoint__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 347, 347},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ObjectRefPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ObjectRefPoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
