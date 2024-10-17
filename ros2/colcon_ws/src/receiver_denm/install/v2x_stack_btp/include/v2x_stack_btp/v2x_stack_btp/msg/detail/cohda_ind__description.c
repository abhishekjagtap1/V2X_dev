// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:msg/CohdaInd.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/msg/detail/cohda_ind__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__CohdaInd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0x8a, 0x0b, 0x5c, 0x1b, 0xa7, 0x79, 0x7a,
      0xce, 0xa0, 0x32, 0xe4, 0x31, 0x1e, 0x8b, 0x66,
      0x1e, 0x3d, 0xa9, 0x3c, 0x1a, 0x3e, 0xf8, 0x9b,
      0x3e, 0x9d, 0x08, 0x78, 0x46, 0x39, 0x53, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "v2x_stack_btp/msg/detail/udp_data_ind_hdr__functions.h"
#include "v2x_stack_btp/msg/detail/udp_msg_type__functions.h"
#include "v2x_stack_btp/msg/detail/area__functions.h"
#include "v2x_stack_btp/msg/detail/location__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t v2x_stack_btp__msg__Area__EXPECTED_HASH = {1, {
    0x23, 0xe9, 0xaf, 0x4a, 0x33, 0x02, 0x3e, 0x2f,
    0x56, 0x5d, 0xc0, 0xa0, 0x97, 0xa6, 0x73, 0xc7,
    0x96, 0x73, 0x5b, 0xa2, 0x4f, 0xd9, 0x9a, 0xb7,
    0xf2, 0x08, 0xa9, 0x44, 0x4e, 0x15, 0x62, 0xa8,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__Location__EXPECTED_HASH = {1, {
    0xfd, 0x6d, 0xf3, 0x6e, 0x1f, 0x8a, 0x1e, 0x38,
    0xe7, 0xda, 0xbb, 0x2e, 0x76, 0x84, 0x34, 0xf8,
    0xae, 0x51, 0xea, 0x2a, 0x6d, 0x8f, 0x94, 0x55,
    0x58, 0xa7, 0x39, 0x5c, 0xb3, 0x21, 0xa1, 0x04,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__UDPDataIndHdr__EXPECTED_HASH = {1, {
    0xe0, 0x48, 0x63, 0x64, 0xbc, 0x99, 0x37, 0x2b,
    0x79, 0xec, 0xf7, 0xe9, 0xfb, 0x07, 0xfa, 0x2b,
    0xe7, 0xd0, 0xb5, 0x28, 0xe2, 0x7b, 0xe4, 0x97,
    0xe1, 0x5d, 0xf0, 0x13, 0x7f, 0x8a, 0x0a, 0x84,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__UDPMsgType__EXPECTED_HASH = {1, {
    0x55, 0x3e, 0xdf, 0xa6, 0x83, 0xd8, 0x18, 0xb7,
    0x85, 0x52, 0x9a, 0xff, 0xae, 0x85, 0xee, 0x1e,
    0xeb, 0x7c, 0xef, 0x83, 0x32, 0x51, 0x9b, 0xfb,
    0x9e, 0xda, 0x57, 0x54, 0xba, 0xe1, 0x47, 0xda,
  }};
#endif

static char v2x_stack_btp__msg__CohdaInd__TYPE_NAME[] = "v2x_stack_btp/msg/CohdaInd";
static char v2x_stack_btp__msg__Area__TYPE_NAME[] = "v2x_stack_btp/msg/Area";
static char v2x_stack_btp__msg__Location__TYPE_NAME[] = "v2x_stack_btp/msg/Location";
static char v2x_stack_btp__msg__UDPDataIndHdr__TYPE_NAME[] = "v2x_stack_btp/msg/UDPDataIndHdr";
static char v2x_stack_btp__msg__UDPMsgType__TYPE_NAME[] = "v2x_stack_btp/msg/UDPMsgType";

// Define type names, field names, and default values
static char v2x_stack_btp__msg__CohdaInd__FIELD_NAME__type[] = "type";
static char v2x_stack_btp__msg__CohdaInd__FIELD_NAME__header[] = "header";
static char v2x_stack_btp__msg__CohdaInd__FIELD_NAME__payload[] = "payload";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__msg__CohdaInd__FIELDS[] = {
  {
    {v2x_stack_btp__msg__CohdaInd__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__UDPMsgType__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__CohdaInd__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__UDPDataIndHdr__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__CohdaInd__FIELD_NAME__payload, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack_btp__msg__CohdaInd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {v2x_stack_btp__msg__Area__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Location__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPMsgType__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__msg__CohdaInd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__msg__CohdaInd__TYPE_NAME, 26, 26},
      {v2x_stack_btp__msg__CohdaInd__FIELDS, 3, 3},
    },
    {v2x_stack_btp__msg__CohdaInd__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&v2x_stack_btp__msg__Area__EXPECTED_HASH, v2x_stack_btp__msg__Area__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = v2x_stack_btp__msg__Area__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__Location__EXPECTED_HASH, v2x_stack_btp__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = v2x_stack_btp__msg__Location__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__UDPDataIndHdr__EXPECTED_HASH, v2x_stack_btp__msg__UDPDataIndHdr__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = v2x_stack_btp__msg__UDPDataIndHdr__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__UDPMsgType__EXPECTED_HASH, v2x_stack_btp__msg__UDPMsgType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = v2x_stack_btp__msg__UDPMsgType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message type\n"
  "UDPMsgType type\n"
  "\n"
  "# Message header\n"
  "UDPDataIndHdr header\n"
  "\n"
  "# Payload\n"
  "uint8[] payload";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__msg__CohdaInd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__msg__CohdaInd__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 97, 97},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__CohdaInd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__msg__CohdaInd__get_individual_type_description_source(NULL),
    sources[1] = *v2x_stack_btp__msg__Area__get_individual_type_description_source(NULL);
    sources[2] = *v2x_stack_btp__msg__Location__get_individual_type_description_source(NULL);
    sources[3] = *v2x_stack_btp__msg__UDPDataIndHdr__get_individual_type_description_source(NULL);
    sources[4] = *v2x_stack_btp__msg__UDPMsgType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
