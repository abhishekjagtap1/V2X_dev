// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/movement_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__MovementState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0x60, 0x8a, 0xae, 0x57, 0x21, 0xe8, 0x0b,
      0x7f, 0x16, 0x8d, 0x32, 0x50, 0x0e, 0xa8, 0x4e,
      0x0d, 0x59, 0xfb, 0xbd, 0xf0, 0x09, 0x1b, 0x7b,
      0x4f, 0xad, 0x34, 0x18, 0x92, 0x6b, 0xef, 0xb8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/movement_event__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__MovementEvent__EXPECTED_HASH = {1, {
    0x50, 0x4c, 0xec, 0x91, 0xca, 0xae, 0x98, 0x61,
    0x29, 0x2d, 0x38, 0x24, 0xb2, 0xca, 0x39, 0x87,
    0x55, 0xfc, 0x6a, 0x30, 0xe0, 0x5e, 0x0c, 0xc2,
    0x1b, 0x57, 0x2c, 0x82, 0x7c, 0xbe, 0x64, 0x22,
  }};
#endif

static char ros_etsi_its_msgs__msg__MovementState__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MovementState";
static char ros_etsi_its_msgs__msg__MovementEvent__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MovementEvent";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__MovementState__FIELD_NAME__signal_group[] = "signal_group";
static char ros_etsi_its_msgs__msg__MovementState__FIELD_NAME__state_time_speed[] = "state_time_speed";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__MovementState__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__MovementState__FIELD_NAME__signal_group, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MovementState__FIELD_NAME__state_time_speed, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros_etsi_its_msgs__msg__MovementEvent__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__MovementState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_etsi_its_msgs__msg__MovementEvent__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__MovementState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__MovementState__TYPE_NAME, 35, 35},
      {ros_etsi_its_msgs__msg__MovementState__FIELDS, 2, 2},
    },
    {ros_etsi_its_msgs__msg__MovementState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__MovementEvent__EXPECTED_HASH, ros_etsi_its_msgs__msg__MovementEvent__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_etsi_its_msgs__msg__MovementEvent__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 signal_group\n"
  "MovementEvent[] state_time_speed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__MovementState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__MovementState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__MovementState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__MovementState__get_individual_type_description_source(NULL),
    sources[1] = *ros_etsi_its_msgs__msg__MovementEvent__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
