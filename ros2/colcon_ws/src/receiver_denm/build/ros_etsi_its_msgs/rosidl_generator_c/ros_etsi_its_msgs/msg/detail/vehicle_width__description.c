// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/vehicle_width__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__VehicleWidth__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0xd0, 0x8e, 0x7a, 0x0d, 0x86, 0xc2, 0xae,
      0xe4, 0xa6, 0xc1, 0xf2, 0xea, 0xac, 0xe3, 0x92,
      0x53, 0xc6, 0x6d, 0x9e, 0xe5, 0xb8, 0x0d, 0x1f,
      0x9f, 0x95, 0xbd, 0xcd, 0x0b, 0x9d, 0x37, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleWidth";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__VehicleWidth__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__VehicleWidth__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__VehicleWidth__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__VehicleWidth__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME, 34, 34},
      {ros_etsi_its_msgs__msg__VehicleWidth__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 value # 0.1 meter\n"
  "\n"
  "uint8 TEN_CENTIMETERS = 1\n"
  "uint8 OUT_OF_RANGE = 61\n"
  "uint8 UNAVAILABLE = 62";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__VehicleWidth__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__VehicleWidth__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__VehicleWidth__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
