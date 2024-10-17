// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack_btp:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/udp_data_ind_hdr.h"


#ifndef V2X_STACK_BTP__MSG__DETAIL__UDP_DATA_IND_HDR__STRUCT_H_
#define V2X_STACK_BTP__MSG__DETAIL__UDP_DATA_IND_HDR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'location'
#include "v2x_stack_btp/msg/detail/location__struct.h"
// Member 'area'
#include "v2x_stack_btp/msg/detail/area__struct.h"

/// Struct defined in msg/UDPDataIndHdr in the package v2x_stack_btp.
/**
  * BTP Type
 */
typedef struct v2x_stack_btp__msg__UDPDataIndHdr
{
  uint8_t btp_type;
  /// GN Packet Transport type
  uint8_t pkt_transport;
  /// GN Traffic class
  uint8_t traffic_class;
  /// GN Maximum Packet Lifetime (seconds)
  uint8_t max_pkt_life_time;
  /// BTP Destination port (BTP-A & BTP-B BTPTypes)
  uint16_t dest_port;
  /// BTP Additional Port Information
  /// Source Port (BTP-A)
  uint16_t src_port;
  /// Destination Port Info (BTP-B)
  uint16_t dest_info;
  /// Location for GeoUnicast
  v2x_stack_btp__msg__Location location;
  /// Area for GBC or GAC
  v2x_stack_btp__msg__Area area;
  /// GN Security Type
  uint8_t sec_profile;
  /// For Secure Packets (SecProfile != UDPRX_SEC_NONE):
  /// Result of Security Parsing @sa eC2XSEC_ParserResult
  uint8_t parser_result;
  uint8_t verification_result;
  uint8_t ssp_len;
  uint32_t aid;
  /// SSP Bits/Data
  uint8_t ssp_bits[32];
  /// CertID8
  uint8_t cert_id[32];
  /// The length in octets of the 'on-the-air' frame data
  uint16_t length;
} v2x_stack_btp__msg__UDPDataIndHdr;

// Struct for a sequence of v2x_stack_btp__msg__UDPDataIndHdr.
typedef struct v2x_stack_btp__msg__UDPDataIndHdr__Sequence
{
  v2x_stack_btp__msg__UDPDataIndHdr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack_btp__msg__UDPDataIndHdr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK_BTP__MSG__DETAIL__UDP_DATA_IND_HDR__STRUCT_H_
