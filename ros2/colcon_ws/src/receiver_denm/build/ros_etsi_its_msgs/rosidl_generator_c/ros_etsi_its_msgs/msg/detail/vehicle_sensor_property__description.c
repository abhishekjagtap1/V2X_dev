// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0xd7, 0x2e, 0x34, 0x78, 0x54, 0x28, 0x7b,
      0xbf, 0x76, 0x0a, 0x52, 0x61, 0x6f, 0xe6, 0x39,
      0x61, 0xeb, 0xdb, 0x35, 0x76, 0xea, 0x7f, 0xe0,
      0x71, 0x27, 0xed, 0xb5, 0x86, 0x5a, 0xee, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__VehicleSensorProperty__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleSensorProperty";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__range[] = "range";
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__horizontal_opening_angle_start[] = "horizontal_opening_angle_start";
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__horizontal_opening_angle_end[] = "horizontal_opening_angle_end";
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__has_vertical_opening_angle_start[] = "has_vertical_opening_angle_start";
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__vertical_opening_angle_start[] = "vertical_opening_angle_start";
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__has_vertical_opening_angle_end[] = "has_vertical_opening_angle_end";
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__vertical_opening_angle_end[] = "vertical_opening_angle_end";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__horizontal_opening_angle_start, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__horizontal_opening_angle_end, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__has_vertical_opening_angle_start, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__vertical_opening_angle_start, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__has_vertical_opening_angle_end, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELD_NAME__vertical_opening_angle_end, 26, 26},
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
ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__VehicleSensorProperty__TYPE_NAME, 43, 43},
      {ros_etsi_its_msgs__msg__VehicleSensorProperty__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 range # zeroPointOneMeter(1), oneMeter(10)} (0..10000)\n"
  "int32 horizontal_opening_angle_start # zeroPointOneDegree(1), oneDegree(10), unavailable(3601)} (0..3601)\n"
  "int32 horizontal_opening_angle_end # zeroPointOneDegree(1), oneDegree(10), unavailable(3601)} (0..3601)\n"
  "\n"
  "bool has_vertical_opening_angle_start\n"
  "int32 vertical_opening_angle_start # zeroPointOneDegree(1), oneDegree(10), unavailable(3601)} (0..3601)\n"
  "bool has_vertical_opening_angle_end\n"
  "int32 vertical_opening_angle_end # zeroPointOneDegree(1), oneDegree(10), unavailable(3601)} (0..3601)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__VehicleSensorProperty__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 551, 551},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__VehicleSensorProperty__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
