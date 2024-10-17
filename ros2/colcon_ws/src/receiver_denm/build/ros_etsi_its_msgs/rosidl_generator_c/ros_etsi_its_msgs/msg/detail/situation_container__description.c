// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/SituationContainer.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/situation_container__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__SituationContainer__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x33, 0xdf, 0x0e, 0xf4, 0xcf, 0x8d, 0x4c,
      0x21, 0x7b, 0x8c, 0x9c, 0xf7, 0xe2, 0xa2, 0xc2,
      0x01, 0xf4, 0x0a, 0x02, 0x34, 0x7f, 0x90, 0xe1,
      0x54, 0x74, 0xba, 0x51, 0xfe, 0xc7, 0x70, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/cause_code__functions.h"
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/information_quality__functions.h"
#include "ros_etsi_its_msgs/msg/detail/event_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__CauseCode__EXPECTED_HASH = {1, {
    0xc4, 0x2d, 0x11, 0x3d, 0x4f, 0x71, 0xa8, 0xfa,
    0xc2, 0x17, 0xec, 0x2d, 0x78, 0x1d, 0x8e, 0xab,
    0x95, 0xf1, 0x2c, 0xcd, 0x38, 0x8d, 0x7b, 0x6c,
    0x5f, 0x4e, 0x5d, 0x89, 0x5d, 0xb4, 0x98, 0x89,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DeltaReferencePosition__EXPECTED_HASH = {1, {
    0xce, 0x96, 0xfb, 0x2c, 0xfd, 0x2b, 0x17, 0xae,
    0x24, 0x6c, 0xdb, 0xae, 0x39, 0xee, 0x2d, 0xda,
    0xbc, 0xfd, 0x95, 0xcc, 0x6a, 0x3d, 0x70, 0xb2,
    0xe1, 0xc6, 0x2f, 0x2c, 0xaf, 0x00, 0x1b, 0x96,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__EventPoint__EXPECTED_HASH = {1, {
    0x32, 0xc9, 0x23, 0xea, 0x2a, 0x6a, 0xd1, 0xe3,
    0x95, 0xb0, 0x8c, 0x40, 0x92, 0x1e, 0x18, 0xc4,
    0x83, 0x55, 0xac, 0x48, 0xd9, 0x53, 0xc2, 0xdc,
    0x1c, 0xbe, 0x39, 0x30, 0xbf, 0x70, 0xb4, 0xf4,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__InformationQuality__EXPECTED_HASH = {1, {
    0x74, 0x48, 0x2b, 0x66, 0x62, 0xdf, 0x43, 0x32,
    0x8f, 0x92, 0x70, 0xee, 0x8a, 0xac, 0xe9, 0x74,
    0x1a, 0x76, 0x45, 0x3d, 0x6f, 0x83, 0x90, 0x64,
    0x23, 0x11, 0x3a, 0xb0, 0x05, 0xa2, 0x6d, 0xc9,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PathDeltaTime__EXPECTED_HASH = {1, {
    0xa7, 0xc1, 0xa6, 0x6b, 0x4e, 0x89, 0xf6, 0x7b,
    0xab, 0xa6, 0x5e, 0xe4, 0xf6, 0xe8, 0xa5, 0xf7,
    0x93, 0x7a, 0x81, 0xa2, 0x80, 0x25, 0xac, 0xe1,
    0x2f, 0xbe, 0x03, 0x29, 0xe0, 0x85, 0xf6, 0x3f,
  }};
#endif

static char ros_etsi_its_msgs__msg__SituationContainer__TYPE_NAME[] = "ros_etsi_its_msgs/msg/SituationContainer";
static char ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME[] = "ros_etsi_its_msgs/msg/CauseCode";
static char ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DeltaReferencePosition";
static char ros_etsi_its_msgs__msg__EventPoint__TYPE_NAME[] = "ros_etsi_its_msgs/msg/EventPoint";
static char ros_etsi_its_msgs__msg__InformationQuality__TYPE_NAME[] = "ros_etsi_its_msgs/msg/InformationQuality";
static char ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathDeltaTime";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__information_quality[] = "information_quality";
static char ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__event_type[] = "event_type";
static char ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__has_linked_cause[] = "has_linked_cause";
static char ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__linked_cause[] = "linked_cause";
static char ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__event_history[] = "event_history";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__SituationContainer__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__information_quality, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__InformationQuality__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__event_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__has_linked_cause, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__linked_cause, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SituationContainer__FIELD_NAME__event_history, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros_etsi_its_msgs__msg__EventPoint__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__SituationContainer__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__EventPoint__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__InformationQuality__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__SituationContainer__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__SituationContainer__TYPE_NAME, 40, 40},
      {ros_etsi_its_msgs__msg__SituationContainer__FIELDS, 5, 5},
    },
    {ros_etsi_its_msgs__msg__SituationContainer__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__CauseCode__EXPECTED_HASH, ros_etsi_its_msgs__msg__CauseCode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_etsi_its_msgs__msg__CauseCode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DeltaReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__EventPoint__EXPECTED_HASH, ros_etsi_its_msgs__msg__EventPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__EventPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__InformationQuality__EXPECTED_HASH, ros_etsi_its_msgs__msg__InformationQuality__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__InformationQuality__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathDeltaTime__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathDeltaTime__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__PathDeltaTime__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "InformationQuality information_quality\n"
  "CauseCode event_type\n"
  "bool has_linked_cause\n"
  "CauseCode linked_cause\n"
  "EventPoint[] event_history";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__SituationContainer__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__SituationContainer__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 132, 132},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__SituationContainer__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__SituationContainer__get_individual_type_description_source(NULL),
    sources[1] = *ros_etsi_its_msgs__msg__CauseCode__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__DeltaReferencePosition__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__EventPoint__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__InformationQuality__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__PathDeltaTime__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
