// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack:msg/CohdaInd.idl
// generated code does not contain a copyright notice

#include "v2x_stack/msg/detail/cohda_ind__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack
const rosidl_type_hash_t *
v2x_stack__msg__CohdaInd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0x28, 0x01, 0x75, 0x3a, 0x8a, 0x1d, 0x3d,
      0x2b, 0xee, 0xe6, 0x7b, 0xf3, 0xd8, 0x2c, 0xdb,
      0xc5, 0xbd, 0xf8, 0x9f, 0x9f, 0x1d, 0xe4, 0x5f,
      0x8f, 0xa7, 0x5f, 0x4c, 0x1c, 0xcc, 0x4a, 0x77,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "v2x_stack/msg/detail/udp_data_ind_hdr__functions.h"
#include "v2x_stack/msg/detail/location__functions.h"
#include "v2x_stack/msg/detail/area__functions.h"
#include "v2x_stack/msg/detail/udp_msg_type__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t v2x_stack__msg__Area__EXPECTED_HASH = {1, {
    0xb6, 0x07, 0x61, 0x40, 0x7f, 0xcc, 0x59, 0x35,
    0x32, 0xe6, 0x76, 0xde, 0x8b, 0xcb, 0xb9, 0xfe,
    0x53, 0xe1, 0xcc, 0xcc, 0x0e, 0xb1, 0x85, 0xf0,
    0x4f, 0x2d, 0x1d, 0xc5, 0x78, 0x21, 0x32, 0xad,
  }};
static const rosidl_type_hash_t v2x_stack__msg__Location__EXPECTED_HASH = {1, {
    0x5d, 0x76, 0x55, 0x85, 0x79, 0x16, 0x2b, 0x8c,
    0xf8, 0x6a, 0x0d, 0xd8, 0x43, 0xfb, 0x29, 0x07,
    0x02, 0x0f, 0x2b, 0x2a, 0xf2, 0xb1, 0x17, 0x0c,
    0x7c, 0x63, 0xde, 0x6e, 0xd1, 0x36, 0x2a, 0xdc,
  }};
static const rosidl_type_hash_t v2x_stack__msg__UDPDataIndHdr__EXPECTED_HASH = {1, {
    0xcc, 0x65, 0xf8, 0x0c, 0x80, 0x48, 0x67, 0x5c,
    0x14, 0xd7, 0xd1, 0x67, 0x2c, 0xbc, 0xf8, 0xe4,
    0xc6, 0x3b, 0x3f, 0xa8, 0x80, 0x00, 0x76, 0x81,
    0xb9, 0xc8, 0x06, 0x75, 0x23, 0x08, 0xaf, 0x51,
  }};
static const rosidl_type_hash_t v2x_stack__msg__UDPMsgType__EXPECTED_HASH = {1, {
    0x4d, 0xca, 0xb5, 0x36, 0xa4, 0x36, 0x13, 0x15,
    0xbc, 0x55, 0x04, 0xfc, 0xf7, 0xe8, 0x7f, 0xa8,
    0x67, 0x7e, 0x69, 0x27, 0x39, 0x42, 0xc2, 0x4a,
    0xbd, 0x86, 0xf8, 0xc3, 0xef, 0xc6, 0x62, 0xf8,
  }};
#endif

static char v2x_stack__msg__CohdaInd__TYPE_NAME[] = "v2x_stack/msg/CohdaInd";
static char v2x_stack__msg__Area__TYPE_NAME[] = "v2x_stack/msg/Area";
static char v2x_stack__msg__Location__TYPE_NAME[] = "v2x_stack/msg/Location";
static char v2x_stack__msg__UDPDataIndHdr__TYPE_NAME[] = "v2x_stack/msg/UDPDataIndHdr";
static char v2x_stack__msg__UDPMsgType__TYPE_NAME[] = "v2x_stack/msg/UDPMsgType";

// Define type names, field names, and default values
static char v2x_stack__msg__CohdaInd__FIELD_NAME__type[] = "type";
static char v2x_stack__msg__CohdaInd__FIELD_NAME__header[] = "header";
static char v2x_stack__msg__CohdaInd__FIELD_NAME__payload[] = "payload";

static rosidl_runtime_c__type_description__Field v2x_stack__msg__CohdaInd__FIELDS[] = {
  {
    {v2x_stack__msg__CohdaInd__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack__msg__UDPMsgType__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__CohdaInd__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack__msg__UDPDataIndHdr__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__CohdaInd__FIELD_NAME__payload, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack__msg__CohdaInd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {v2x_stack__msg__Area__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Location__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPMsgType__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack__msg__CohdaInd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack__msg__CohdaInd__TYPE_NAME, 22, 22},
      {v2x_stack__msg__CohdaInd__FIELDS, 3, 3},
    },
    {v2x_stack__msg__CohdaInd__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&v2x_stack__msg__Area__EXPECTED_HASH, v2x_stack__msg__Area__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = v2x_stack__msg__Area__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack__msg__Location__EXPECTED_HASH, v2x_stack__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = v2x_stack__msg__Location__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack__msg__UDPDataIndHdr__EXPECTED_HASH, v2x_stack__msg__UDPDataIndHdr__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = v2x_stack__msg__UDPDataIndHdr__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack__msg__UDPMsgType__EXPECTED_HASH, v2x_stack__msg__UDPMsgType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = v2x_stack__msg__UDPMsgType__get_type_description(NULL)->type_description.fields;
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
  "uint8[] payload\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack__msg__CohdaInd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack__msg__CohdaInd__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack__msg__CohdaInd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack__msg__CohdaInd__get_individual_type_description_source(NULL),
    sources[1] = *v2x_stack__msg__Area__get_individual_type_description_source(NULL);
    sources[2] = *v2x_stack__msg__Location__get_individual_type_description_source(NULL);
    sources[3] = *v2x_stack__msg__UDPDataIndHdr__get_individual_type_description_source(NULL);
    sources[4] = *v2x_stack__msg__UDPMsgType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
