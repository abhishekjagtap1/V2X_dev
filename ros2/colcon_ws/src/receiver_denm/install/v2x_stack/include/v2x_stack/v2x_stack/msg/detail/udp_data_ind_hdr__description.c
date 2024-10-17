// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice

#include "v2x_stack/msg/detail/udp_data_ind_hdr__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack
const rosidl_type_hash_t *
v2x_stack__msg__UDPDataIndHdr__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x65, 0xf8, 0x0c, 0x80, 0x48, 0x67, 0x5c,
      0x14, 0xd7, 0xd1, 0x67, 0x2c, 0xbc, 0xf8, 0xe4,
      0xc6, 0x3b, 0x3f, 0xa8, 0x80, 0x00, 0x76, 0x81,
      0xb9, 0xc8, 0x06, 0x75, 0x23, 0x08, 0xaf, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "v2x_stack/msg/detail/location__functions.h"
#include "v2x_stack/msg/detail/area__functions.h"

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
#endif

static char v2x_stack__msg__UDPDataIndHdr__TYPE_NAME[] = "v2x_stack/msg/UDPDataIndHdr";
static char v2x_stack__msg__Area__TYPE_NAME[] = "v2x_stack/msg/Area";
static char v2x_stack__msg__Location__TYPE_NAME[] = "v2x_stack/msg/Location";

// Define type names, field names, and default values
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__btp_type[] = "btp_type";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__pkt_transport[] = "pkt_transport";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__traffic_class[] = "traffic_class";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__max_pkt_life_time[] = "max_pkt_life_time";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__dest_port[] = "dest_port";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__src_port[] = "src_port";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__dest_info[] = "dest_info";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__location[] = "location";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__area[] = "area";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__sec_profile[] = "sec_profile";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__parser_result[] = "parser_result";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__verification_result[] = "verification_result";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__ssp_len[] = "ssp_len";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__aid[] = "aid";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__ssp_bits[] = "ssp_bits";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__cert_id[] = "cert_id";
static char v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__length[] = "length";

static rosidl_runtime_c__type_description__Field v2x_stack__msg__UDPDataIndHdr__FIELDS[] = {
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__btp_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__pkt_transport, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__traffic_class, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__max_pkt_life_time, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__dest_port, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__src_port, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__dest_info, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack__msg__Location__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__area, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack__msg__Area__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__sec_profile, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__parser_result, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__verification_result, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__ssp_len, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__aid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__ssp_bits, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__cert_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__UDPDataIndHdr__FIELD_NAME__length, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack__msg__UDPDataIndHdr__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {v2x_stack__msg__Area__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Location__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack__msg__UDPDataIndHdr__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack__msg__UDPDataIndHdr__TYPE_NAME, 27, 27},
      {v2x_stack__msg__UDPDataIndHdr__FIELDS, 17, 17},
    },
    {v2x_stack__msg__UDPDataIndHdr__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&v2x_stack__msg__Area__EXPECTED_HASH, v2x_stack__msg__Area__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = v2x_stack__msg__Area__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack__msg__Location__EXPECTED_HASH, v2x_stack__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = v2x_stack__msg__Location__get_type_description(NULL)->type_description.fields;
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
v2x_stack__msg__UDPDataIndHdr__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack__msg__UDPDataIndHdr__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 798, 798},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack__msg__UDPDataIndHdr__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack__msg__UDPDataIndHdr__get_individual_type_description_source(NULL),
    sources[1] = *v2x_stack__msg__Area__get_individual_type_description_source(NULL);
    sources[2] = *v2x_stack__msg__Location__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
