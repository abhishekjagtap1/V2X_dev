// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/PathDeltaTime.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/path_delta_time__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__PathDeltaTime__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0xc1, 0xa6, 0x6b, 0x4e, 0x89, 0xf6, 0x7b,
      0xab, 0xa6, 0x5e, 0xe4, 0xf6, 0xe8, 0xa5, 0xf7,
      0x93, 0x7a, 0x81, 0xa2, 0x80, 0x25, 0xac, 0xe1,
      0x2f, 0xbe, 0x03, 0x29, 0xe0, 0x85, 0xf6, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathDeltaTime";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__PathDeltaTime__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__PathDeltaTime__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__PathDeltaTime__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__PathDeltaTime__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME, 35, 35},
      {ros_etsi_its_msgs__msg__PathDeltaTime__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 value # 10 ms\n"
  "\n"
  "uint16 UNAVAILABLE = 0\n"
  "uint16 TEN_MILLISECONDS_IN_PAST = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__PathDeltaTime__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__PathDeltaTime__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__PathDeltaTime__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
