// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/StationType.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__StationType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0xd9, 0x82, 0x6e, 0x69, 0xeb, 0x8b, 0x39,
      0xd8, 0x6e, 0x7c, 0x88, 0x6c, 0x6e, 0x5c, 0xe7,
      0xc6, 0x1e, 0x42, 0x87, 0x28, 0xb0, 0x0e, 0x99,
      0x1a, 0x20, 0xf4, 0xd5, 0x38, 0x62, 0x23, 0x31,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__StationType__TYPE_NAME[] = "ros_etsi_its_msgs/msg/StationType";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__StationType__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__StationType__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__StationType__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__StationType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
      {ros_etsi_its_msgs__msg__StationType__FIELDS, 1, 1},
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
  "uint8 UNKNOWN = 0\n"
  "uint8 PEDESTRIAN = 1\n"
  "uint8 CYCLIST = 2\n"
  "uint8 MOPED = 3\n"
  "uint8 MOTORCYCLE = 4\n"
  "uint8 PASSENGER_CAR = 5\n"
  "uint8 BUS = 6\n"
  "uint8 LIGHT_TRUCK = 7\n"
  "uint8 HEAVY_TRUCK = 8\n"
  "uint8 TRAILER = 9\n"
  "uint8 SPECIAL_VEHICLE = 10\n"
  "uint8 TRAM = 11\n"
  "uint8 ROAD_SIDE_UNIT = 15";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__StationType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 276, 276},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__StationType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__StationType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
