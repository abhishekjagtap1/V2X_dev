// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/PositionConfidenceEllipse.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0x7f, 0x63, 0x97, 0x76, 0xad, 0x0d, 0x05,
      0x19, 0xfa, 0x28, 0x5f, 0x8a, 0x07, 0xae, 0x0e,
      0x53, 0x25, 0xfc, 0x7b, 0xa0, 0xcc, 0xf0, 0xb2,
      0x5c, 0xf8, 0x8f, 0xa6, 0x03, 0xcb, 0xda, 0xd7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__FIELD_NAME__semi_major_confidence[] = "semi_major_confidence";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__FIELD_NAME__semi_minor_confidence[] = "semi_minor_confidence";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__FIELD_NAME__semi_major_orientation[] = "semi_major_orientation";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__PositionConfidenceEllipse__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__FIELD_NAME__semi_major_confidence, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__FIELD_NAME__semi_minor_confidence, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__FIELD_NAME__semi_major_orientation, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME, 47, 47},
      {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint16 semi_major_confidence # cm\n"
  "uint16 semi_minor_confidence # cm\n"
  "uint16 semi_major_orientation # 0.1 degree\n"
  "\n"
  "uint16 SEMI_AXIS_LENGTH_OUT_OF_RANGE = 4094\n"
  "uint16 SEMI_AXIS_LENGTH_UNAVAILABLE = 4095";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 199, 199},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
