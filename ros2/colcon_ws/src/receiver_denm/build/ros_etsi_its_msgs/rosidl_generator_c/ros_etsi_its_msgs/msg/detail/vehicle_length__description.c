// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/vehicle_length__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__VehicleLength__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0xf9, 0x34, 0x4a, 0x5e, 0xd9, 0xa8, 0x62,
      0xd3, 0x6b, 0x7c, 0xa2, 0x4c, 0x3e, 0x34, 0xd8,
      0x39, 0xaa, 0x46, 0x67, 0x3e, 0x57, 0x01, 0xe8,
      0x6d, 0x4e, 0xe9, 0xda, 0xf1, 0xbb, 0xb7, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleLength";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__VehicleLength__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__VehicleLength__FIELD_NAME__confidence_indication[] = "confidence_indication";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__VehicleLength__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__VehicleLength__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleLength__FIELD_NAME__confidence_indication, 21, 21},
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
ros_etsi_its_msgs__msg__VehicleLength__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME, 35, 35},
      {ros_etsi_its_msgs__msg__VehicleLength__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 value # 0.1 meter\n"
  "uint8 confidence_indication\n"
  "\n"
  "uint16 VALUE_TEN_CENTIMETERS = 1\n"
  "uint16 VALUE_OUT_OF_RANGE = 1022\n"
  "uint16 VALUE_UNAVAILABLE = 1023\n"
  "\n"
  "uint8 CONFIDENCE_INDICATION_NO_TRAILER = 0\n"
  "uint8 CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH = 1\n"
  "uint8 CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH = 2\n"
  "uint8 CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE = 3\n"
  "uint8 CONFIDENCE_INDICATION_UNAVAILABLE = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__VehicleLength__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 415, 415},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__VehicleLength__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__VehicleLength__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
