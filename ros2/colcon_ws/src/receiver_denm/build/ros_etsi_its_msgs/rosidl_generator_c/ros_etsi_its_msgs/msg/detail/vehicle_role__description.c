// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/VehicleRole.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/vehicle_role__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__VehicleRole__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0xce, 0x7e, 0x0e, 0xf1, 0xd9, 0x31, 0x0e,
      0xcf, 0x5c, 0x6e, 0x80, 0x60, 0x15, 0xee, 0x81,
      0x5d, 0xdd, 0x2f, 0x97, 0x6c, 0x02, 0x4b, 0xad,
      0xb0, 0x11, 0xf3, 0xcd, 0xdc, 0x47, 0xb0, 0xc3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__VehicleRole__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleRole";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__VehicleRole__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__VehicleRole__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__VehicleRole__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__VehicleRole__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__VehicleRole__TYPE_NAME, 33, 33},
      {ros_etsi_its_msgs__msg__VehicleRole__FIELDS, 1, 1},
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
  "uint8 DEFAULT = 0\n"
  "uint8 PUBLIC_TRANSPORT = 1\n"
  "uint8 SPECIAL_TRANSPORT = 2\n"
  "uint8 DANGEROUS_GOODS = 3\n"
  "uint8 ROAD_WORK = 4\n"
  "uint8 RESCUE = 5\n"
  "uint8 EMERGENCY = 6\n"
  "uint8 SAFETY_CAR = 7\n"
  "uint8 AGRICULTURE = 8\n"
  "uint8 COMMERCIAL = 9\n"
  "uint8 MILITARY = 10\n"
  "uint8 ROAD_OPERATOR = 11\n"
  "uint8 TAXI = 12";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__VehicleRole__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__VehicleRole__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 294, 294},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__VehicleRole__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__VehicleRole__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
