// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/MAPEM.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/mapem__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__MAPEM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x9d, 0x29, 0x78, 0x7b, 0x42, 0x50, 0x18,
      0xf0, 0x13, 0x63, 0xfe, 0xbe, 0x59, 0xf0, 0x5f,
      0x87, 0x7e, 0x6a, 0xde, 0x5c, 0x30, 0xc3, 0x67,
      0x57, 0xd2, 0x6e, 0xd9, 0x4f, 0xb4, 0x60, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/generic_lane__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "ros_etsi_its_msgs/msg/detail/connection__functions.h"
#include "ros_etsi_its_msgs/msg/detail/intersections__functions.h"
#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"
#include "ros_etsi_its_msgs/msg/detail/intersection_geometry__functions.h"
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
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
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__GenericLane__EXPECTED_HASH = {1, {
    0xe1, 0xc9, 0x7a, 0x64, 0xa5, 0xb6, 0xe4, 0x40,
    0xec, 0x9a, 0xee, 0x76, 0x53, 0xab, 0xbf, 0x4b,
    0x02, 0x5d, 0xdc, 0xf1, 0xdc, 0x4f, 0x07, 0x81,
    0xe5, 0x49, 0x2d, 0xd2, 0x4a, 0x1f, 0xbc, 0xc0,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__IntersectionGeometry__EXPECTED_HASH = {1, {
    0x6a, 0x44, 0x0b, 0x81, 0x80, 0x41, 0xee, 0x21,
    0x27, 0x2b, 0xb6, 0x5f, 0xd7, 0x5d, 0xed, 0xcb,
    0x62, 0x10, 0x68, 0x78, 0xca, 0x1e, 0xd4, 0xcf,
    0x1a, 0x05, 0x3f, 0x6a, 0x0c, 0x4d, 0x08, 0x8f,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Intersections__EXPECTED_HASH = {1, {
    0x2d, 0xc4, 0xf8, 0x67, 0x49, 0xd2, 0xf7, 0x90,
    0xed, 0xfa, 0x0d, 0xbf, 0x0f, 0x2c, 0x84, 0xef,
    0xdb, 0x7c, 0x04, 0xbd, 0xf6, 0xdd, 0x6f, 0x3f,
    0x01, 0xc0, 0xb8, 0xd3, 0x11, 0x94, 0x2f, 0x6f,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH = {1, {
    0x97, 0xfc, 0x70, 0x49, 0x90, 0xf3, 0x2d, 0x7c,
    0x48, 0x04, 0x6c, 0xe1, 0x38, 0xd0, 0x65, 0xb6,
    0x9d, 0x41, 0x40, 0x28, 0x2b, 0x71, 0x28, 0x61,
    0x72, 0x32, 0xdb, 0x52, 0xf6, 0x1d, 0x5c, 0xb6,
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ros_etsi_its_msgs__msg__MAPEM__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MAPEM";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros_etsi_its_msgs__msg__Altitude__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Altitude";
static char ros_etsi_its_msgs__msg__Connection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Connection";
static char ros_etsi_its_msgs__msg__GenericLane__TYPE_NAME[] = "ros_etsi_its_msgs/msg/GenericLane";
static char ros_etsi_its_msgs__msg__IntersectionGeometry__TYPE_NAME[] = "ros_etsi_its_msgs/msg/IntersectionGeometry";
static char ros_etsi_its_msgs__msg__Intersections__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Intersections";
static char ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ItsPduHeader";
static char ros_etsi_its_msgs__msg__NodeSetXY__TYPE_NAME[] = "ros_etsi_its_msgs/msg/NodeSetXY";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";
static char ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ReferencePosition";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__header[] = "header";
static char ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__its_header[] = "its_header";
static char ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__time_stamp[] = "time_stamp";
static char ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__msg_issue_revision[] = "msg_issue_revision";
static char ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__intersections[] = "intersections";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__MAPEM__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__its_header, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__time_stamp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__msg_issue_revision, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MAPEM__FIELD_NAME__intersections, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__Intersections__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__MAPEM__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Connection__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__GenericLane__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__IntersectionGeometry__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Intersections__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
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
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__MAPEM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__MAPEM__TYPE_NAME, 27, 27},
      {ros_etsi_its_msgs__msg__MAPEM__FIELDS, 5, 5},
    },
    {ros_etsi_its_msgs__msg__MAPEM__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH, ros_etsi_its_msgs__msg__Altitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__Altitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Connection__EXPECTED_HASH, ros_etsi_its_msgs__msg__Connection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__Connection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__GenericLane__EXPECTED_HASH, ros_etsi_its_msgs__msg__GenericLane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__GenericLane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__IntersectionGeometry__EXPECTED_HASH, ros_etsi_its_msgs__msg__IntersectionGeometry__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__IntersectionGeometry__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Intersections__EXPECTED_HASH, ros_etsi_its_msgs__msg__Intersections__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ros_etsi_its_msgs__msg__Intersections__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH, ros_etsi_its_msgs__msg__ItsPduHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ros_etsi_its_msgs__msg__ItsPduHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__NodeSetXY__EXPECTED_HASH, ros_etsi_its_msgs__msg__NodeSetXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = ros_etsi_its_msgs__msg__NodeSetXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH, ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__ReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = ros_etsi_its_msgs__msg__ReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "ItsPduHeader its_header\n"
  "\n"
  "#MapData\n"
  "uint32 time_stamp #minuneOfTheYear\n"
  "uint8 msg_issue_revision\n"
  "Intersections intersections #TODO change to correct name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__MAPEM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__MAPEM__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 174, 174},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__MAPEM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__MAPEM__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__Connection__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__GenericLane__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__IntersectionGeometry__get_individual_type_description_source(NULL);
    sources[6] = *ros_etsi_its_msgs__msg__Intersections__get_individual_type_description_source(NULL);
    sources[7] = *ros_etsi_its_msgs__msg__ItsPduHeader__get_individual_type_description_source(NULL);
    sources[8] = *ros_etsi_its_msgs__msg__NodeSetXY__get_individual_type_description_source(NULL);
    sources[9] = *ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(NULL);
    sources[10] = *ros_etsi_its_msgs__msg__ReferencePosition__get_individual_type_description_source(NULL);
    sources[11] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
