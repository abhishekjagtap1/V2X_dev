// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/SPATEM.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/spatem__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__SPATEM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xc7, 0x50, 0x8c, 0x86, 0xc4, 0x75, 0xeb,
      0x15, 0x57, 0x44, 0x65, 0x25, 0x2b, 0x5d, 0xb1,
      0x85, 0x6c, 0x6b, 0xdc, 0x4e, 0x0c, 0x43, 0xbc,
      0x1b, 0xfe, 0x95, 0x1d, 0x33, 0xd2, 0xf8, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "ros_etsi_its_msgs/msg/detail/intersection_state__functions.h"
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/movement_event__functions.h"
#include "ros_etsi_its_msgs/msg/detail/movement_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__IntersectionState__EXPECTED_HASH = {1, {
    0xe7, 0x4c, 0x92, 0x3f, 0x9b, 0xf4, 0x14, 0x97,
    0x6c, 0xba, 0x37, 0x7c, 0x2b, 0xbe, 0x0c, 0xc6,
    0x7e, 0x09, 0x5c, 0x96, 0x01, 0x6a, 0xe4, 0xf0,
    0x28, 0x75, 0x59, 0x3f, 0x76, 0x4d, 0xd5, 0x56,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH = {1, {
    0x97, 0xfc, 0x70, 0x49, 0x90, 0xf3, 0x2d, 0x7c,
    0x48, 0x04, 0x6c, 0xe1, 0x38, 0xd0, 0x65, 0xb6,
    0x9d, 0x41, 0x40, 0x28, 0x2b, 0x71, 0x28, 0x61,
    0x72, 0x32, 0xdb, 0x52, 0xf6, 0x1d, 0x5c, 0xb6,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__MovementEvent__EXPECTED_HASH = {1, {
    0x50, 0x4c, 0xec, 0x91, 0xca, 0xae, 0x98, 0x61,
    0x29, 0x2d, 0x38, 0x24, 0xb2, 0xca, 0x39, 0x87,
    0x55, 0xfc, 0x6a, 0x30, 0xe0, 0x5e, 0x0c, 0xc2,
    0x1b, 0x57, 0x2c, 0x82, 0x7c, 0xbe, 0x64, 0x22,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__MovementState__EXPECTED_HASH = {1, {
    0x8b, 0x60, 0x8a, 0xae, 0x57, 0x21, 0xe8, 0x0b,
    0x7f, 0x16, 0x8d, 0x32, 0x50, 0x0e, 0xa8, 0x4e,
    0x0d, 0x59, 0xfb, 0xbd, 0xf0, 0x09, 0x1b, 0x7b,
    0x4f, 0xad, 0x34, 0x18, 0x92, 0x6b, 0xef, 0xb8,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ros_etsi_its_msgs__msg__SPATEM__TYPE_NAME[] = "ros_etsi_its_msgs/msg/SPATEM";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros_etsi_its_msgs__msg__IntersectionState__TYPE_NAME[] = "ros_etsi_its_msgs/msg/IntersectionState";
static char ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ItsPduHeader";
static char ros_etsi_its_msgs__msg__MovementEvent__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MovementEvent";
static char ros_etsi_its_msgs__msg__MovementState__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MovementState";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__SPATEM__FIELD_NAME__header[] = "header";
static char ros_etsi_its_msgs__msg__SPATEM__FIELD_NAME__its_header[] = "its_header";
static char ros_etsi_its_msgs__msg__SPATEM__FIELD_NAME__intersections[] = "intersections";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__SPATEM__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__SPATEM__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SPATEM__FIELD_NAME__its_header, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SPATEM__FIELD_NAME__intersections, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros_etsi_its_msgs__msg__IntersectionState__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__SPATEM__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__IntersectionState__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MovementEvent__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MovementState__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__SPATEM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__SPATEM__TYPE_NAME, 28, 28},
      {ros_etsi_its_msgs__msg__SPATEM__FIELDS, 3, 3},
    },
    {ros_etsi_its_msgs__msg__SPATEM__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__IntersectionState__EXPECTED_HASH, ros_etsi_its_msgs__msg__IntersectionState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__IntersectionState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH, ros_etsi_its_msgs__msg__ItsPduHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__ItsPduHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__MovementEvent__EXPECTED_HASH, ros_etsi_its_msgs__msg__MovementEvent__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__MovementEvent__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__MovementState__EXPECTED_HASH, ros_etsi_its_msgs__msg__MovementState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__MovementState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "ItsPduHeader its_header\n"
  "\n"
  "IntersectionState[] intersections";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__SPATEM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__SPATEM__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__SPATEM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__SPATEM__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__IntersectionState__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__ItsPduHeader__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__MovementEvent__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__MovementState__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
