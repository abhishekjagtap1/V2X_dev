// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/msg/detail/btp_data_indication__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__BtpDataIndication__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x08, 0x29, 0x79, 0x7d, 0xcb, 0xdc, 0x3d,
      0xcf, 0xb2, 0x12, 0xc2, 0x52, 0x0a, 0xa2, 0x0c,
      0x6e, 0x4d, 0xca, 0x05, 0xd4, 0xf1, 0xfa, 0x90,
      0x75, 0xb8, 0x83, 0x34, 0x82, 0xcf, 0x4d, 0x7c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "v2x_stack_btp/msg/detail/geo_net_destination__functions.h"
#include "v2x_stack_btp/msg/detail/traffic_class__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "v2x_stack_btp/msg/detail/geo_net_area__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__GeoNetArea__EXPECTED_HASH = {1, {
    0xae, 0x7e, 0xa6, 0x6f, 0xfd, 0x1e, 0x95, 0xf2,
    0x23, 0x53, 0x34, 0x9a, 0xf5, 0x61, 0x06, 0x2c,
    0x4b, 0x66, 0x7f, 0xe7, 0x82, 0xb5, 0x21, 0x85,
    0x6e, 0x79, 0x1e, 0x18, 0x02, 0x18, 0x87, 0x85,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__GeoNetDestination__EXPECTED_HASH = {1, {
    0x4a, 0x0e, 0x00, 0x4f, 0x3d, 0x60, 0xe6, 0x10,
    0xf4, 0x83, 0xbc, 0x06, 0x13, 0x10, 0xd3, 0x75,
    0x6c, 0x83, 0xe1, 0x9a, 0x84, 0x64, 0x40, 0x9c,
    0xf6, 0xec, 0x59, 0x13, 0xf4, 0xe9, 0x8e, 0x05,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__TrafficClass__EXPECTED_HASH = {1, {
    0xa9, 0xf8, 0xc9, 0xc6, 0x2a, 0xab, 0x66, 0x1b,
    0x16, 0xaf, 0x64, 0xfc, 0x08, 0x99, 0x85, 0xc6,
    0xa9, 0x15, 0xe2, 0xa2, 0xf0, 0x64, 0xe8, 0x32,
    0xf3, 0x1e, 0xe1, 0xa4, 0xc6, 0x65, 0x38, 0x07,
  }};
#endif

static char v2x_stack_btp__msg__BtpDataIndication__TYPE_NAME[] = "v2x_stack_btp/msg/BtpDataIndication";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char v2x_stack_btp__msg__GeoNetArea__TYPE_NAME[] = "v2x_stack_btp/msg/GeoNetArea";
static char v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME[] = "v2x_stack_btp/msg/GeoNetDestination";
static char v2x_stack_btp__msg__TrafficClass__TYPE_NAME[] = "v2x_stack_btp/msg/TrafficClass";

// Define type names, field names, and default values
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__header[] = "header";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__btp_type[] = "btp_type";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__source_port[] = "source_port";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__destination_port[] = "destination_port";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__destination_port_info[] = "destination_port_info";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__destination[] = "destination";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__its_aid[] = "its_aid";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__permissions[] = "permissions";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__traffic_class[] = "traffic_class";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__remaining_packet_lifetime[] = "remaining_packet_lifetime";
static char v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__msg__BtpDataIndication__FIELDS[] = {
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__btp_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__source_port, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__destination_port, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__destination_port_info, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__destination, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__its_aid, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__permissions, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__traffic_class, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__TrafficClass__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__remaining_packet_lifetime, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__BtpDataIndication__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack_btp__msg__BtpDataIndication__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetArea__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__TrafficClass__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__msg__BtpDataIndication__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__msg__BtpDataIndication__TYPE_NAME, 35, 35},
      {v2x_stack_btp__msg__BtpDataIndication__FIELDS, 11, 11},
    },
    {v2x_stack_btp__msg__BtpDataIndication__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetArea__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetArea__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = v2x_stack_btp__msg__GeoNetArea__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetDestination__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetDestination__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = v2x_stack_btp__msg__GeoNetDestination__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__TrafficClass__EXPECTED_HASH, v2x_stack_btp__msg__TrafficClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = v2x_stack_btp__msg__TrafficClass__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "uint8 btp_type\n"
  "uint16 source_port # only valid for BTP-A\n"
  "uint16 destination_port\n"
  "uint16 destination_port_info # only valid for BTP-B\n"
  "\n"
  "GeoNetDestination destination\n"
  "uint32 its_aid\n"
  "uint8[] permissions\n"
  "TrafficClass traffic_class\n"
  "builtin_interfaces/Duration remaining_packet_lifetime\n"
  "\n"
  "uint8[] data\n"
  "\n"
  "uint8 BTP_TYPE_A = 1\n"
  "uint8 BTP_TYPE_INTERACTIVE = 1\n"
  "uint8 BTP_TYPE_B = 2\n"
  "uint8 BTP_TYPE_NON_INTERACTIVE = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__msg__BtpDataIndication__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__msg__BtpDataIndication__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 427, 427},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__BtpDataIndication__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__msg__BtpDataIndication__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[4] = *v2x_stack_btp__msg__GeoNetArea__get_individual_type_description_source(NULL);
    sources[5] = *v2x_stack_btp__msg__GeoNetDestination__get_individual_type_description_source(NULL);
    sources[6] = *v2x_stack_btp__msg__TrafficClass__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
