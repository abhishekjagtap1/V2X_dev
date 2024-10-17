// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ObjectClassDescription.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/object_class_description__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ObjectClassDescription__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x3b, 0x58, 0x2a, 0x52, 0xa7, 0xa5, 0xc2,
      0x75, 0x22, 0x25, 0x7b, 0xe7, 0x16, 0xfa, 0x51,
      0xbb, 0xf4, 0x1d, 0x26, 0x7a, 0x6a, 0x2b, 0xa8,
      0x59, 0xa9, 0xf8, 0xa2, 0x5a, 0x62, 0x96, 0x72,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectClassDescription";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ObjectClassDescription__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ObjectClassDescription__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ObjectClassDescription__FIELD_NAME__type, 4, 4},
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
ros_etsi_its_msgs__msg__ObjectClassDescription__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_NAME, 44, 44},
      {ros_etsi_its_msgs__msg__ObjectClassDescription__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#TODO apply the correct one\n"
  "int32 type\n"
  "\n"
  "int32 TYPE_UNKNOWN = 0\n"
  "int32 TYPE_MOPED = 1\n"
  "int32 TYPE_MOTORCYCLE = 2\n"
  "int32 TYPE_PASSENGERCAR = 3\n"
  "int32 TYPE_BUS = 3\n"
  "int32 TYPE_LIGHTRUCK = 3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ObjectClassDescription__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 181, 181},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ObjectClassDescription__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ObjectClassDescription__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
