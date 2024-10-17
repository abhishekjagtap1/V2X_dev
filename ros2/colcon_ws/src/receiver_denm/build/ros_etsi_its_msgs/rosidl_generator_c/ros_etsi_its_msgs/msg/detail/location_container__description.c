// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/LocationContainer.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/location_container__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__LocationContainer__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xc4, 0x77, 0xa2, 0x23, 0x92, 0x0f, 0x57,
      0x92, 0x60, 0xc5, 0x0b, 0x66, 0x62, 0xbe, 0x6b,
      0x21, 0x0b, 0xb4, 0xe6, 0x4d, 0x75, 0x15, 0xe6,
      0xd4, 0x9a, 0x82, 0xe3, 0x89, 0x4a, 0xcf, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/speed__functions.h"
#include "ros_etsi_its_msgs/msg/detail/heading__functions.h"
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_history__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DeltaReferencePosition__EXPECTED_HASH = {1, {
    0xce, 0x96, 0xfb, 0x2c, 0xfd, 0x2b, 0x17, 0xae,
    0x24, 0x6c, 0xdb, 0xae, 0x39, 0xee, 0x2d, 0xda,
    0xbc, 0xfd, 0x95, 0xcc, 0x6a, 0x3d, 0x70, 0xb2,
    0xe1, 0xc6, 0x2f, 0x2c, 0xaf, 0x00, 0x1b, 0x96,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH = {1, {
    0x16, 0x82, 0xdf, 0x3e, 0xf7, 0x89, 0x5b, 0x6a,
    0x10, 0xfb, 0x45, 0x17, 0x95, 0xd3, 0x70, 0x0d,
    0x21, 0x5d, 0x7b, 0x2a, 0x7d, 0xa0, 0xab, 0x94,
    0x7a, 0x79, 0x69, 0xc9, 0x3b, 0xb5, 0x1d, 0x9c,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PathDeltaTime__EXPECTED_HASH = {1, {
    0xa7, 0xc1, 0xa6, 0x6b, 0x4e, 0x89, 0xf6, 0x7b,
    0xab, 0xa6, 0x5e, 0xe4, 0xf6, 0xe8, 0xa5, 0xf7,
    0x93, 0x7a, 0x81, 0xa2, 0x80, 0x25, 0xac, 0xe1,
    0x2f, 0xbe, 0x03, 0x29, 0xe0, 0x85, 0xf6, 0x3f,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PathHistory__EXPECTED_HASH = {1, {
    0x1b, 0x60, 0xa6, 0x4e, 0x3b, 0xce, 0xae, 0x99,
    0x09, 0xd5, 0xbb, 0xf8, 0x77, 0x8a, 0x2c, 0xbb,
    0x68, 0x2e, 0xfa, 0x34, 0xc7, 0xe0, 0xf4, 0xc4,
    0x38, 0xa6, 0x21, 0x9d, 0x7d, 0xad, 0xf8, 0xd4,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PathPoint__EXPECTED_HASH = {1, {
    0x43, 0x9d, 0xb2, 0xda, 0xba, 0xea, 0x41, 0x8e,
    0xae, 0x04, 0xa3, 0xf6, 0x83, 0xa4, 0x21, 0xe2,
    0xe7, 0xbb, 0x51, 0xab, 0x76, 0x48, 0x6e, 0x35,
    0xa0, 0x79, 0xdf, 0x72, 0xd8, 0xb3, 0xbb, 0x1d,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH = {1, {
    0x79, 0xa4, 0x6a, 0x89, 0x32, 0x10, 0xb9, 0xda,
    0x2d, 0x85, 0xd6, 0xff, 0x1a, 0xd1, 0x80, 0xe8,
    0x4a, 0x94, 0x05, 0x8e, 0x84, 0x1e, 0x0e, 0x0d,
    0xda, 0x9a, 0x5f, 0xe6, 0x6b, 0xf9, 0x90, 0xff,
  }};
#endif

static char ros_etsi_its_msgs__msg__LocationContainer__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LocationContainer";
static char ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DeltaReferencePosition";
static char ros_etsi_its_msgs__msg__Heading__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Heading";
static char ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathDeltaTime";
static char ros_etsi_its_msgs__msg__PathHistory__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathHistory";
static char ros_etsi_its_msgs__msg__PathPoint__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathPoint";
static char ros_etsi_its_msgs__msg__Speed__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Speed";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__LocationContainer__FIELD_NAME__event_speed[] = "event_speed";
static char ros_etsi_its_msgs__msg__LocationContainer__FIELD_NAME__event_position_heading[] = "event_position_heading";
static char ros_etsi_its_msgs__msg__LocationContainer__FIELD_NAME__traces[] = "traces";
static char ros_etsi_its_msgs__msg__LocationContainer__FIELD_NAME__road_type[] = "road_type";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__LocationContainer__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__LocationContainer__FIELD_NAME__event_speed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__Speed__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LocationContainer__FIELD_NAME__event_position_heading, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__Heading__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LocationContainer__FIELD_NAME__traces, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros_etsi_its_msgs__msg__PathHistory__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LocationContainer__FIELD_NAME__road_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__LocationContainer__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Heading__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PathHistory__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PathPoint__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Speed__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__LocationContainer__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__LocationContainer__TYPE_NAME, 39, 39},
      {ros_etsi_its_msgs__msg__LocationContainer__FIELDS, 4, 4},
    },
    {ros_etsi_its_msgs__msg__LocationContainer__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DeltaReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH, ros_etsi_its_msgs__msg__Heading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__Heading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathDeltaTime__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathDeltaTime__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__PathDeltaTime__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathHistory__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathHistory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__PathHistory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathPoint__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__PathPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH, ros_etsi_its_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ros_etsi_its_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Speed event_speed\n"
  "Heading event_position_heading\n"
  "PathHistory[] traces\n"
  "uint8 road_type\n"
  "\n"
  "uint8 ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 0\n"
  "uint8 ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 1\n"
  "uint8 ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 2\n"
  "uint8 ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 3\n"
  "uint8 ROAD_TYPE_UNAVAILABLE = 255";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__LocationContainer__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__LocationContainer__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 409, 409},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__LocationContainer__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__LocationContainer__get_individual_type_description_source(NULL),
    sources[1] = *ros_etsi_its_msgs__msg__DeltaReferencePosition__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__Heading__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__PathDeltaTime__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__PathHistory__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__PathPoint__get_individual_type_description_source(NULL);
    sources[6] = *ros_etsi_its_msgs__msg__Speed__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
