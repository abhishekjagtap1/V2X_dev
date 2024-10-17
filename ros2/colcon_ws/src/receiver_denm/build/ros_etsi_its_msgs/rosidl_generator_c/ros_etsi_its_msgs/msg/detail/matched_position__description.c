// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/MatchedPosition.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/matched_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__MatchedPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0xfa, 0xda, 0x28, 0xc9, 0x3c, 0xe6, 0xac,
      0x0f, 0xbe, 0x3a, 0x9c, 0x84, 0x10, 0xd9, 0xf3,
      0xbb, 0x82, 0xc9, 0x4a, 0xe1, 0xcc, 0x04, 0x47,
      0xeb, 0xe0, 0x30, 0x13, 0x1b, 0xb7, 0x3d, 0x7d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__MatchedPosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MatchedPosition";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__MatchedPosition__FIELD_NAME__lane_id[] = "lane_id";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__MatchedPosition__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__MatchedPosition__FIELD_NAME__lane_id, 7, 7},
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
ros_etsi_its_msgs__msg__MatchedPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__MatchedPosition__TYPE_NAME, 37, 37},
      {ros_etsi_its_msgs__msg__MatchedPosition__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 lane_id\n"
  "# LongitudinalLanePosition";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__MatchedPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__MatchedPosition__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__MatchedPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__MatchedPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
