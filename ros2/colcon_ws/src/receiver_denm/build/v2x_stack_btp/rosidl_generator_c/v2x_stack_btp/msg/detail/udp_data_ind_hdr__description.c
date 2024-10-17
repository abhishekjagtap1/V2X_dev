// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/msg/detail/udp_data_ind_hdr__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__UDPDataIndHdr__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x48, 0x63, 0x64, 0xbc, 0x99, 0x37, 0x2b,
      0x79, 0xec, 0xf7, 0xe9, 0xfb, 0x07, 0xfa, 0x2b,
      0xe7, 0xd0, 0xb5, 0x28, 0xe2, 0x7b, 0xe4, 0x97,
      0xe1, 0x5d, 0xf0, 0x13, 0x7f, 0x8a, 0x0a, 0x84,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
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
#endif

static char v2x_stack_btp__msg__UDPDataIndHdr__TYPE_NAME[] = "v2x_stack_btp/msg/UDPDataIndHdr";
static char v2x_stack_btp__msg__Area__TYPE_NAME[] = "v2x_stack_btp/msg/Area";
static char v2x_stack_btp__msg__Location__TYPE_NAME[] = "v2x_stack_btp/msg/Location";

// Define type names, field names, and default values
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__btp_type[] = "btp_type";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__pkt_transport[] = "pkt_transport";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__traffic_class[] = "traffic_class";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__max_pkt_life_time[] = "max_pkt_life_time";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__dest_port[] = "dest_port";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__src_port[] = "src_port";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__dest_info[] = "dest_info";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__location[] = "location";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__area[] = "area";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__sec_profile[] = "sec_profile";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__parser_result[] = "parser_result";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__verification_result[] = "verification_result";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__ssp_len[] = "ssp_len";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__aid[] = "aid";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__ssp_bits[] = "ssp_bits";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__cert_id[] = "cert_id";
static char v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__length[] = "length";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__msg__UDPDataIndHdr__FIELDS[] = {
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__btp_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__pkt_transport, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__traffic_class, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__max_pkt_life_time, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__dest_port, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__src_port, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__dest_info, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__Location__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__area, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__Area__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__sec_profile, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__parser_result, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__verification_result, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__ssp_len, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__aid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__ssp_bits, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__cert_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPDataIndHdr__FIELD_NAME__length, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack_btp__msg__UDPDataIndHdr__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {v2x_stack_btp__msg__Area__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Location__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__msg__UDPDataIndHdr__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__msg__UDPDataIndHdr__TYPE_NAME, 31, 31},
      {v2x_stack_btp__msg__UDPDataIndHdr__FIELDS, 17, 17},
    },
    {v2x_stack_btp__msg__UDPDataIndHdr__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&v2x_stack_btp__msg__Area__EXPECTED_HASH, v2x_stack_btp__msg__Area__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = v2x_stack_btp__msg__Area__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__Location__EXPECTED_HASH, v2x_stack_btp__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = v2x_stack_btp__msg__Location__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# BTP Type\n"
  "uint8 btp_type\n"
  "\n"
  "# GN Packet Transport type\n"
  "uint8 pkt_transport\n"
  "\n"
  "# GN Traffic class\n"
  "uint8 traffic_class\n"
  "\n"
  "# GN Maximum Packet Lifetime (seconds)\n"
  "uint8 max_pkt_life_time\n"
  "\n"
  "# BTP Destination port (BTP-A & BTP-B BTPTypes)\n"
  "uint16 dest_port\n"
  "\n"
  "# BTP Additional Port Information\n"
  "## Source Port (BTP-A)\n"
  "uint16 src_port\n"
  "## Destination Port Info (BTP-B)\n"
  "uint16 dest_info\n"
  "\n"
  "# Location for GeoUnicast\n"
  "Location location\n"
  "\n"
  "# Area for GBC or GAC\n"
  "Area area\n"
  "\n"
  "\n"
  "# GN Security Type\n"
  "uint8 sec_profile\n"
  "\n"
  "# For Secure Packets (SecProfile != UDPRX_SEC_NONE):\n"
  "# Result of Security Parsing @sa eC2XSEC_ParserResult\n"
  "uint8 parser_result\n"
  "uint8 verification_result\n"
  "uint8 ssp_len\n"
  "uint32 aid\n"
  "\n"
  "# SSP Bits/Data\n"
  "uint8[32] ssp_bits\n"
  "\n"
  "# CertID8\n"
  "uint8[32] cert_id\n"
  "\n"
  "# The length in octets of the 'on-the-air' frame data\n"
  "uint16 length";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__msg__UDPDataIndHdr__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__msg__UDPDataIndHdr__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 798, 798},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__UDPDataIndHdr__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__msg__UDPDataIndHdr__get_individual_type_description_source(NULL),
    sources[1] = *v2x_stack_btp__msg__Area__get_individual_type_description_source(NULL);
    sources[2] = *v2x_stack_btp__msg__Location__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
