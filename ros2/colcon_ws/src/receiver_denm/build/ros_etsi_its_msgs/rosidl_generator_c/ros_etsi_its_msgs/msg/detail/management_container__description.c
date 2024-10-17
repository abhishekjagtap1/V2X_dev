// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/management_container__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ManagementContainer__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x2d, 0xef, 0xca, 0x53, 0x0c, 0x7d, 0xd2,
      0xa2, 0x12, 0x12, 0x16, 0x75, 0xa8, 0x6c, 0xf8,
      0xe7, 0x37, 0xbd, 0xa9, 0x14, 0x34, 0x75, 0x14,
      0x11, 0x7b, 0xea, 0xcb, 0xf8, 0x77, 0xa2, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/action_id__functions.h"
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__functions.h"
#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"
#include "ros_etsi_its_msgs/msg/detail/relevance_distance__functions.h"
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ActionID__EXPECTED_HASH = {1, {
    0x34, 0x7d, 0x90, 0x45, 0x72, 0x3b, 0x80, 0x6a,
    0xbd, 0x32, 0x88, 0x89, 0x09, 0xa8, 0xc1, 0x72,
    0xd0, 0x1e, 0x87, 0x17, 0x32, 0x8d, 0x5e, 0xee,
    0x23, 0xa2, 0xa3, 0x8f, 0x03, 0x36, 0x50, 0x64,
  }};
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
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ReferencePosition__EXPECTED_HASH = {1, {
    0x5e, 0xe8, 0x1a, 0xd9, 0x2b, 0xc1, 0xbf, 0x6c,
    0x19, 0xc6, 0x6e, 0xf0, 0x59, 0x0c, 0xd4, 0xcb,
    0x21, 0xcd, 0x51, 0xb5, 0x8d, 0x84, 0xfe, 0xb3,
    0xc2, 0x2a, 0x03, 0x8e, 0xc5, 0x53, 0x59, 0x7c,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__RelevanceDistance__EXPECTED_HASH = {1, {
    0x65, 0x14, 0xee, 0x24, 0xe6, 0xac, 0x6f, 0x92,
    0xe4, 0x8d, 0x65, 0xe4, 0x2d, 0x50, 0x82, 0x11,
    0x12, 0x07, 0x11, 0x88, 0x6e, 0xbf, 0xa5, 0x95,
    0xa8, 0xea, 0x0c, 0xa7, 0x8d, 0x74, 0x74, 0x3e,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__RelevanceTrafficDirection__EXPECTED_HASH = {1, {
    0x14, 0x8c, 0xa1, 0x37, 0x17, 0x0d, 0x91, 0x48,
    0x21, 0xda, 0x06, 0x8e, 0x84, 0x36, 0xec, 0x07,
    0xa7, 0xb8, 0xfb, 0xf1, 0xd5, 0x02, 0x43, 0x7e,
    0xe5, 0x94, 0xed, 0xd8, 0x1d, 0xf4, 0xa3, 0x0a,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__StationType__EXPECTED_HASH = {1, {
    0xee, 0xd9, 0x82, 0x6e, 0x69, 0xeb, 0x8b, 0x39,
    0xd8, 0x6e, 0x7c, 0x88, 0x6c, 0x6e, 0x5c, 0xe7,
    0xc6, 0x1e, 0x42, 0x87, 0x28, 0xb0, 0x0e, 0x99,
    0x1a, 0x20, 0xf4, 0xd5, 0x38, 0x62, 0x23, 0x31,
  }};
#endif

static char ros_etsi_its_msgs__msg__ManagementContainer__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ManagementContainer";
static char ros_etsi_its_msgs__msg__ActionID__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ActionID";
static char ros_etsi_its_msgs__msg__Altitude__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Altitude";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";
static char ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ReferencePosition";
static char ros_etsi_its_msgs__msg__RelevanceDistance__TYPE_NAME[] = "ros_etsi_its_msgs/msg/RelevanceDistance";
static char ros_etsi_its_msgs__msg__RelevanceTrafficDirection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/RelevanceTrafficDirection";
static char ros_etsi_its_msgs__msg__StationType__TYPE_NAME[] = "ros_etsi_its_msgs/msg/StationType";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__action_id[] = "action_id";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__detection_time[] = "detection_time";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__reference_time[] = "reference_time";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__termination[] = "termination";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__event_position[] = "event_position";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__relevance_distance[] = "relevance_distance";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__relevance_traffic_direction[] = "relevance_traffic_direction";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__validity_duration[] = "validity_duration";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__transmission_interval[] = "transmission_interval";
static char ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__station_type[] = "station_type";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ManagementContainer__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__action_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ActionID__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__detection_time, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__reference_time, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__termination, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__event_position, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__relevance_distance, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__RelevanceDistance__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__relevance_traffic_direction, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__RelevanceTrafficDirection__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__validity_duration, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__transmission_interval, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__FIELD_NAME__station_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__ManagementContainer__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_etsi_its_msgs__msg__ActionID__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__RelevanceDistance__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__RelevanceTrafficDirection__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__ManagementContainer__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ManagementContainer__TYPE_NAME, 41, 41},
      {ros_etsi_its_msgs__msg__ManagementContainer__FIELDS, 10, 10},
    },
    {ros_etsi_its_msgs__msg__ManagementContainer__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ActionID__EXPECTED_HASH, ros_etsi_its_msgs__msg__ActionID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_etsi_its_msgs__msg__ActionID__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH, ros_etsi_its_msgs__msg__Altitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__Altitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH, ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__ReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__ReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__RelevanceDistance__EXPECTED_HASH, ros_etsi_its_msgs__msg__RelevanceDistance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__RelevanceDistance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__RelevanceTrafficDirection__EXPECTED_HASH, ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__StationType__EXPECTED_HASH, ros_etsi_its_msgs__msg__StationType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ros_etsi_its_msgs__msg__StationType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "ActionID action_id\n"
  "uint64 detection_time # ms since 2004\n"
  "uint64 reference_time # ms since 2004\n"
  "uint8 termination\n"
  "ReferencePosition event_position\n"
  "RelevanceDistance relevance_distance\n"
  "RelevanceTrafficDirection relevance_traffic_direction\n"
  "uint32 validity_duration # seconds\n"
  "uint32 transmission_interval # milliseconds\n"
  "StationType station_type\n"
  "\n"
  "uint8 TERMINATION_CANCELLATION = 0\n"
  "uint8 TERMINATION_NEGATION = 1\n"
  "uint8 TERMINATION_UNAVAILABLE = 255\n"
  "\n"
  "uint32 TRANSMISSION_INTERVAL_ONE_MILLISECOND = 1\n"
  "uint32 TRANSMISSION_INTERVAL_TEN_SECONDS = 10000\n"
  "uint32 TRANSMISSION_INTERVAL_UNAVAILABLE = 0\n"
  "\n"
  "uint32 VALIDITY_DURATION_DEFAULT = 600\n"
  "uint32 VALIDITY_DURATION_TIME_OF_DETECTION = 0\n"
  "uint32 VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ManagementContainer__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ManagementContainer__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 731, 731},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ManagementContainer__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ManagementContainer__get_individual_type_description_source(NULL),
    sources[1] = *ros_etsi_its_msgs__msg__ActionID__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__ReferencePosition__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__RelevanceDistance__get_individual_type_description_source(NULL);
    sources[6] = *ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_individual_type_description_source(NULL);
    sources[7] = *ros_etsi_its_msgs__msg__StationType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
