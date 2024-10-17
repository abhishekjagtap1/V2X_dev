// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ReferencePosition.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ReferencePosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0xe8, 0x1a, 0xd9, 0x2b, 0xc1, 0xbf, 0x6c,
      0x19, 0xc6, 0x6e, 0xf0, 0x59, 0x0c, 0xd4, 0xcb,
      0x21, 0xcd, 0x51, 0xb5, 0x8d, 0x84, 0xfe, 0xb3,
      0xc2, 0x2a, 0x03, 0x8e, 0xc5, 0x53, 0x59, 0x7c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"
#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH = {1, {
    0x65, 0x4d, 0xd3, 0x5c, 0x53, 0xfe, 0xb7, 0xef,
    0x5c, 0x8d, 0x6f, 0xe7, 0xe0, 0x2e, 0x54, 0x49,
    0x9c, 0xd5, 0x5d, 0xa3, 0x2f, 0x13, 0x00, 0xfd,
    0xec, 0x0c, 0x0b, 0x3e, 0x75, 0xe0, 0x73, 0xa2,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH = {1, {
    0xb8, 0x7f, 0x63, 0x97, 0x76, 0xad, 0x0d, 0x05,
    0x19, 0xfa, 0x28, 0x5f, 0x8a, 0x07, 0xae, 0x0e,
    0x53, 0x25, 0xfc, 0x7b, 0xa0, 0xcc, 0xf0, 0xb2,
    0x5c, 0xf8, 0x8f, 0xa6, 0x03, 0xcb, 0xda, 0xd7,
  }};
#endif

static char ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ReferencePosition";
static char ros_etsi_its_msgs__msg__Altitude__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Altitude";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ReferencePosition__FIELD_NAME__latitude[] = "latitude";
static char ros_etsi_its_msgs__msg__ReferencePosition__FIELD_NAME__longitude[] = "longitude";
static char ros_etsi_its_msgs__msg__ReferencePosition__FIELD_NAME__position_confidence[] = "position_confidence";
static char ros_etsi_its_msgs__msg__ReferencePosition__FIELD_NAME__altitude[] = "altitude";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ReferencePosition__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ReferencePosition__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ReferencePosition__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ReferencePosition__FIELD_NAME__position_confidence, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ReferencePosition__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__ReferencePosition__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__ReferencePosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME, 39, 39},
      {ros_etsi_its_msgs__msg__ReferencePosition__FIELDS, 4, 4},
    },
    {ros_etsi_its_msgs__msg__ReferencePosition__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH, ros_etsi_its_msgs__msg__Altitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_etsi_its_msgs__msg__Altitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH, ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 latitude # 0.1 micro degree\n"
  "int64 longitude # 0.1 micro degree\n"
  "PositionConfidenceEllipse position_confidence\n"
  "Altitude altitude\n"
  "\n"
  "int64 LATITUDE_UNAVAILABLE = 900000001\n"
  "int64 LONGITUDE_UNAVAILABLE = 1800000001";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ReferencePosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 214, 214},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ReferencePosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ReferencePosition__get_individual_type_description_source(NULL),
    sources[1] = *ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
