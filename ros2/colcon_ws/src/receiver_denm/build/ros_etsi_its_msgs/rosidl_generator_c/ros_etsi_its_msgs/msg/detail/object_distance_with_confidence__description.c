// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ObjectDistanceWithConfidence.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xb1, 0x9c, 0x29, 0xb8, 0x3b, 0xc9, 0x47,
      0xd6, 0x4f, 0x0b, 0xd9, 0x93, 0xf2, 0x8a, 0x0c,
      0x25, 0xcd, 0x01, 0x3e, 0x5c, 0x1e, 0xed, 0xbf,
      0x24, 0xbb, 0xc9, 0x10, 0x4d, 0xc8, 0x2c, 0x16,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectDistanceWithConfidence";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__FIELD_NAME__value[] = "value";
static char ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME, 50, 50},
      {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 value #zeroPointZeroOneMeter(1), oneMeter(100)} (-132768..132767)\n"
  "int8 confidence\n"
  "\n"
  "#zeroPointZeroOneMeter(1), oneMeter(100), outOfRange(101), unavailable(102)} (0..102)\n"
  "int8 CONFIDENCE_CM = 1\n"
  "int8 CONFIDENCE_M = 100\n"
  "int8 CONFIDENCE_OUT_OF_RANGE = 101\n"
  "int8 CONFIDENCE_UNAVAILABLE = 102";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 290, 290},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
