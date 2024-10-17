// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/generic_lane__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__GenericLane__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0xc9, 0x7a, 0x64, 0xa5, 0xb6, 0xe4, 0x40,
      0xec, 0x9a, 0xee, 0x76, 0x53, 0xab, 0xbf, 0x4b,
      0x02, 0x5d, 0xdc, 0xf1, 0xdc, 0x4f, 0x07, 0x81,
      0xe5, 0x49, 0x2d, 0xd2, 0x4a, 0x1f, 0xbc, 0xc0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/connection__functions.h"
#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH = {1, {
    0x65, 0x4d, 0xd3, 0x5c, 0x53, 0xfe, 0xb7, 0xef,
    0x5c, 0x8d, 0x6f, 0xe7, 0xe0, 0x2e, 0x54, 0x49,
    0x9c, 0xd5, 0x5d, 0xa3, 0x2f, 0x13, 0x00, 0xfd,
    0xec, 0x0c, 0x0b, 0x3e, 0x75, 0xe0, 0x73, 0xa2,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Connection__EXPECTED_HASH = {1, {
    0xda, 0xe0, 0x0e, 0x30, 0x41, 0x5a, 0x5c, 0x5e,
    0xcd, 0x6b, 0xde, 0x51, 0x2e, 0x19, 0x90, 0xe1,
    0x02, 0x71, 0xfb, 0x8d, 0x09, 0xa4, 0x7c, 0xb1,
    0x24, 0xa9, 0xeb, 0xcf, 0x6e, 0x82, 0xf6, 0xd5,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__NodeSetXY__EXPECTED_HASH = {1, {
    0xdf, 0xb7, 0xbf, 0x0e, 0x63, 0x0a, 0x90, 0x2b,
    0x20, 0xf1, 0xe8, 0x42, 0xbc, 0x6d, 0xa5, 0x6c,
    0x50, 0xa1, 0x6c, 0xf5, 0xc8, 0x9a, 0x23, 0xcf,
    0x88, 0xb6, 0xfa, 0x86, 0x2b, 0x6d, 0xc4, 0xc3,
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
#endif

static char ros_etsi_its_msgs__msg__GenericLane__TYPE_NAME[] = "ros_etsi_its_msgs/msg/GenericLane";
static char ros_etsi_its_msgs__msg__Altitude__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Altitude";
static char ros_etsi_its_msgs__msg__Connection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Connection";
static char ros_etsi_its_msgs__msg__NodeSetXY__TYPE_NAME[] = "ros_etsi_its_msgs/msg/NodeSetXY";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";
static char ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ReferencePosition";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__lane_id[] = "lane_id";
static char ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__name[] = "name";
static char ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__ingress_approach[] = "ingress_approach";
static char ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__egress_approach[] = "egress_approach";
static char ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__lane_direction[] = "lane_direction";
static char ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__node_list[] = "node_list";
static char ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__connects_to[] = "connects_to";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__GenericLane__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__lane_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__ingress_approach, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__egress_approach, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__lane_direction, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__node_list, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros_etsi_its_msgs__msg__NodeSetXY__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__GenericLane__FIELD_NAME__connects_to, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros_etsi_its_msgs__msg__Connection__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__GenericLane__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Connection__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__NodeSetXY__TYPE_NAME, 31, 31},
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
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__GenericLane__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__GenericLane__TYPE_NAME, 33, 33},
      {ros_etsi_its_msgs__msg__GenericLane__FIELDS, 7, 7},
    },
    {ros_etsi_its_msgs__msg__GenericLane__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH, ros_etsi_its_msgs__msg__Altitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_etsi_its_msgs__msg__Altitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Connection__EXPECTED_HASH, ros_etsi_its_msgs__msg__Connection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__Connection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__NodeSetXY__EXPECTED_HASH, ros_etsi_its_msgs__msg__NodeSetXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__NodeSetXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH, ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__ReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__ReferencePosition__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 lane_id\n"
  "string name\n"
  "uint8 ingress_approach\n"
  "uint8 egress_approach\n"
  "uint8 lane_direction\n"
  "\n"
  "NodeSetXY[] node_list\n"
  "Connection[] connects_to";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__GenericLane__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__GenericLane__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 139, 139},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__GenericLane__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__GenericLane__get_individual_type_description_source(NULL),
    sources[1] = *ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__Connection__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__NodeSetXY__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__ReferencePosition__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
