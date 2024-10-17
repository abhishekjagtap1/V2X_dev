// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/DeltaReferencePosition.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x96, 0xfb, 0x2c, 0xfd, 0x2b, 0x17, 0xae,
      0x24, 0x6c, 0xdb, 0xae, 0x39, 0xee, 0x2d, 0xda,
      0xbc, 0xfd, 0x95, 0xcc, 0x6a, 0x3d, 0x70, 0xb2,
      0xe1, 0xc6, 0x2f, 0x2c, 0xaf, 0x00, 0x1b, 0x96,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DeltaReferencePosition";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__DeltaReferencePosition__FIELD_NAME__delta_latitude[] = "delta_latitude";
static char ros_etsi_its_msgs__msg__DeltaReferencePosition__FIELD_NAME__delta_longitude[] = "delta_longitude";
static char ros_etsi_its_msgs__msg__DeltaReferencePosition__FIELD_NAME__delta_altitude[] = "delta_altitude";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__DeltaReferencePosition__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__DeltaReferencePosition__FIELD_NAME__delta_latitude, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DeltaReferencePosition__FIELD_NAME__delta_longitude, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DeltaReferencePosition__FIELD_NAME__delta_altitude, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME, 44, 44},
      {ros_etsi_its_msgs__msg__DeltaReferencePosition__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 delta_latitude # 0.1 micro degree\n"
  "int32 delta_longitude # 0.1 micro degree\n"
  "int16 delta_altitude # centimeter\n"
  "\n"
  "int32 ONE_MICRODEGREE_NORTH = 10\n"
  "int32 ONE_MICRODEGREE_SOUTH = -10\n"
  "int32 ONE_MICRODEGREE_EAST = 10\n"
  "int32 ONE_MICRODEGREE_WEST = -10\n"
  "int32 ONE_CENTIMETER_UP = 1\n"
  "int32 ONE_CENTIMETER_DOWN = -1\n"
  "int32 LATITUDE_UNAVAILABLE = 131072\n"
  "int32 LONGITUDE_UNAVAILABLE = 131072\n"
  "int16 ALTITUDE_UNAVAILABLE = 12800";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__DeltaReferencePosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 415, 415},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__DeltaReferencePosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
