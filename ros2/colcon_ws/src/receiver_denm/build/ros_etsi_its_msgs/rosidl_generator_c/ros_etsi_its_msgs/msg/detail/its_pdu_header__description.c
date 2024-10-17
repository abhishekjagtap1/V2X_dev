// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ItsPduHeader.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ItsPduHeader__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x97, 0xfc, 0x70, 0x49, 0x90, 0xf3, 0x2d, 0x7c,
      0x48, 0x04, 0x6c, 0xe1, 0x38, 0xd0, 0x65, 0xb6,
      0x9d, 0x41, 0x40, 0x28, 0x2b, 0x71, 0x28, 0x61,
      0x72, 0x32, 0xdb, 0x52, 0xf6, 0x1d, 0x5c, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ItsPduHeader";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ItsPduHeader__FIELD_NAME__protocol_version[] = "protocol_version";
static char ros_etsi_its_msgs__msg__ItsPduHeader__FIELD_NAME__message_id[] = "message_id";
static char ros_etsi_its_msgs__msg__ItsPduHeader__FIELD_NAME__station_id[] = "station_id";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ItsPduHeader__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ItsPduHeader__FIELD_NAME__protocol_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ItsPduHeader__FIELD_NAME__message_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ItsPduHeader__FIELD_NAME__station_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__ItsPduHeader__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
      {ros_etsi_its_msgs__msg__ItsPduHeader__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 protocol_version\n"
  "uint8 message_id\n"
  "uint32 station_id\n"
  "\n"
  "uint8 MESSAGE_ID_DENM = 1\n"
  "uint8 MESSAGE_ID_CAM = 2\n"
  "uint8 MESSAGE_ID_CPM = 3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ItsPduHeader__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 135, 135},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ItsPduHeader__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ItsPduHeader__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
