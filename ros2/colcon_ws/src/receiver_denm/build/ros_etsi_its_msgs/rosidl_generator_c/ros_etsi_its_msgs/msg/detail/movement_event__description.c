// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/movement_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__MovementEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x4c, 0xec, 0x91, 0xca, 0xae, 0x98, 0x61,
      0x29, 0x2d, 0x38, 0x24, 0xb2, 0xca, 0x39, 0x87,
      0x55, 0xfc, 0x6a, 0x30, 0xe0, 0x5e, 0x0c, 0xc2,
      0x1b, 0x57, 0x2c, 0x82, 0x7c, 0xbe, 0x64, 0x22,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__MovementEvent__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MovementEvent";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__MovementEvent__FIELD_NAME__event_state[] = "event_state";
static char ros_etsi_its_msgs__msg__MovementEvent__FIELD_NAME__min_end_time[] = "min_end_time";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__MovementEvent__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__MovementEvent__FIELD_NAME__event_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MovementEvent__FIELD_NAME__min_end_time, 12, 12},
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
ros_etsi_its_msgs__msg__MovementEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__MovementEvent__TYPE_NAME, 35, 35},
      {ros_etsi_its_msgs__msg__MovementEvent__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string event_state\n"
  "uint16 min_end_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__MovementEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__MovementEvent__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__MovementEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__MovementEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
