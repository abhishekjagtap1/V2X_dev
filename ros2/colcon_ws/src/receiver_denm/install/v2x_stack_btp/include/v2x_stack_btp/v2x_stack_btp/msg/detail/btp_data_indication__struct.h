// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/btp_data_indication.h"


#ifndef V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__STRUCT_H_
#define V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BTP_TYPE_A'.
enum
{
  v2x_stack_btp__msg__BtpDataIndication__BTP_TYPE_A = 1
};

/// Constant 'BTP_TYPE_INTERACTIVE'.
enum
{
  v2x_stack_btp__msg__BtpDataIndication__BTP_TYPE_INTERACTIVE = 1
};

/// Constant 'BTP_TYPE_B'.
enum
{
  v2x_stack_btp__msg__BtpDataIndication__BTP_TYPE_B = 2
};

/// Constant 'BTP_TYPE_NON_INTERACTIVE'.
enum
{
  v2x_stack_btp__msg__BtpDataIndication__BTP_TYPE_NON_INTERACTIVE = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'destination'
#include "v2x_stack_btp/msg/detail/geo_net_destination__struct.h"
// Member 'permissions'
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'traffic_class'
#include "v2x_stack_btp/msg/detail/traffic_class__struct.h"
// Member 'remaining_packet_lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/BtpDataIndication in the package v2x_stack_btp.
typedef struct v2x_stack_btp__msg__BtpDataIndication
{
  std_msgs__msg__Header header;
  uint8_t btp_type;
  /// only valid for BTP-A
  uint16_t source_port;
  uint16_t destination_port;
  /// only valid for BTP-B
  uint16_t destination_port_info;
  v2x_stack_btp__msg__GeoNetDestination destination;
  uint32_t its_aid;
  rosidl_runtime_c__uint8__Sequence permissions;
  v2x_stack_btp__msg__TrafficClass traffic_class;
  builtin_interfaces__msg__Duration remaining_packet_lifetime;
  rosidl_runtime_c__uint8__Sequence data;
} v2x_stack_btp__msg__BtpDataIndication;

// Struct for a sequence of v2x_stack_btp__msg__BtpDataIndication.
typedef struct v2x_stack_btp__msg__BtpDataIndication__Sequence
{
  v2x_stack_btp__msg__BtpDataIndication * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack_btp__msg__BtpDataIndication__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__STRUCT_H_
