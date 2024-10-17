// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/AccelerationControl.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/acceleration_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__AccelerationControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x89, 0x27, 0x67, 0x1b, 0xc6, 0xf5, 0x02,
      0xad, 0x3b, 0x71, 0x48, 0x5f, 0x17, 0x1e, 0x90,
      0x64, 0xa9, 0x68, 0x7e, 0x24, 0x6c, 0x25, 0xc4,
      0x59, 0xc6, 0x2e, 0x46, 0x68, 0x68, 0x18, 0x5a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__AccelerationControl__TYPE_NAME[] = "ros_etsi_its_msgs/msg/AccelerationControl";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__AccelerationControl__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__AccelerationControl__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__AccelerationControl__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__AccelerationControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__AccelerationControl__TYPE_NAME, 41, 41},
      {ros_etsi_its_msgs__msg__AccelerationControl__FIELDS, 1, 1},
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
  "uint8 BRAKE_PEDAL_ENGAGED = 1\n"
  "uint8 GAS_PEDAL_ENGAGED = 2\n"
  "uint8 EMERGENCY_BRAKE_ENGAGED = 4\n"
  "uint8 COLLISION_WARNING_ENGAGED = 8\n"
  "uint8 ACC_ENGAGED = 16\n"
  "uint8 CRUISE_CONTROL_ENGAGED = 32\n"
  "uint8 SPEED_LIMITER_ENGAGED = 64";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__AccelerationControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__AccelerationControl__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 231, 231},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__AccelerationControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__AccelerationControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
