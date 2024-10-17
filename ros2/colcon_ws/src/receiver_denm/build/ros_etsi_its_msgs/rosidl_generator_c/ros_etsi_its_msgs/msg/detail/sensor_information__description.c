// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/SensorInformation.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/sensor_information__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__SensorInformation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x2b, 0xa0, 0x7d, 0x1d, 0x2e, 0x31, 0x27,
      0x3c, 0x22, 0xb0, 0x5f, 0x3a, 0x36, 0x54, 0x83,
      0xa3, 0x30, 0xd9, 0x1b, 0x67, 0x3f, 0xbd, 0x1a,
      0x24, 0xdf, 0x2b, 0x56, 0x07, 0x57, 0xfc, 0x95,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleSensor__EXPECTED_HASH = {1, {
    0x8f, 0x6a, 0x96, 0x9c, 0xc9, 0x1b, 0xb7, 0x90,
    0x30, 0xad, 0x0f, 0x1d, 0xf5, 0xe0, 0x03, 0x74,
    0xe9, 0x17, 0x90, 0xba, 0xb3, 0x05, 0xbe, 0x24,
    0x74, 0xca, 0x87, 0xa2, 0x21, 0xf5, 0xed, 0x92,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleSensorProperty__EXPECTED_HASH = {1, {
    0xb4, 0xd7, 0x2e, 0x34, 0x78, 0x54, 0x28, 0x7b,
    0xbf, 0x76, 0x0a, 0x52, 0x61, 0x6f, 0xe6, 0x39,
    0x61, 0xeb, 0xdb, 0x35, 0x76, 0xea, 0x7f, 0xe0,
    0x71, 0x27, 0xed, 0xb5, 0x86, 0x5a, 0xee, 0x70,
  }};
#endif

static char ros_etsi_its_msgs__msg__SensorInformation__TYPE_NAME[] = "ros_etsi_its_msgs/msg/SensorInformation";
static char ros_etsi_its_msgs__msg__VehicleSensor__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleSensor";
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleSensorProperty";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__SensorInformation__FIELD_NAME__sensor_id[] = "sensor_id";
static char ros_etsi_its_msgs__msg__SensorInformation__FIELD_NAME__type[] = "type";
static char ros_etsi_its_msgs__msg__SensorInformation__FIELD_NAME__detection_area[] = "detection_area";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__SensorInformation__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__SensorInformation__FIELD_NAME__sensor_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SensorInformation__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SensorInformation__FIELD_NAME__detection_area, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__VehicleSensor__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__SensorInformation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_etsi_its_msgs__msg__VehicleSensor__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__SensorInformation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__SensorInformation__TYPE_NAME, 39, 39},
      {ros_etsi_its_msgs__msg__SensorInformation__FIELDS, 3, 3},
    },
    {ros_etsi_its_msgs__msg__SensorInformation__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleSensor__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleSensor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_etsi_its_msgs__msg__VehicleSensor__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleSensorProperty__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 sensor_id\n"
  "int8 type #SensorType  INTEGER {undefined(0), radar(1), lidar(2), monovideo(3), stereovision(4), nightvision(5), ultrasonic(6), pmd(7), fusion(8), inductionloop(9), sphericalCamera(10), itssaggregation(11)} (0..15)\n"
  "\n"
  "#TODO add other type\n"
  "VehicleSensor detection_area\n"
  "#TODO add free_space_confidence";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__SensorInformation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__SensorInformation__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 313, 313},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__SensorInformation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__SensorInformation__get_individual_type_description_source(NULL),
    sources[1] = *ros_etsi_its_msgs__msg__VehicleSensor__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__VehicleSensorProperty__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
