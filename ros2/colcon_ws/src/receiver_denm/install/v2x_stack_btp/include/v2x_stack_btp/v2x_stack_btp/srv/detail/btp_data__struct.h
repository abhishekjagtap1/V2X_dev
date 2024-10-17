// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/srv/btp_data.h"


#ifndef V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__STRUCT_H_
#define V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'destination'
#include "v2x_stack_btp/msg/detail/geo_net_destination__struct.h"
// Member 'traffic_class'
#include "v2x_stack_btp/msg/detail/traffic_class__struct.h"
// Member 'lifetime'
// Member 'repetition_interval'
// Member 'repetition_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/BtpData in the package v2x_stack_btp.
typedef struct v2x_stack_btp__srv__BtpData_Request
{
  uint8_t btp_type;
  uint16_t source_port;
  uint16_t destination_port;
  uint16_t destination_port_info;
  uint8_t transport_type;
  v2x_stack_btp__msg__GeoNetDestination destination;
  uint32_t its_aid;
  uint8_t hop_limit;
  v2x_stack_btp__msg__TrafficClass traffic_class;
  builtin_interfaces__msg__Duration lifetime;
  builtin_interfaces__msg__Duration repetition_interval;
  builtin_interfaces__msg__Duration repetition_duration;
  uint8_t data[1];
} v2x_stack_btp__srv__BtpData_Request;

// Struct for a sequence of v2x_stack_btp__srv__BtpData_Request.
typedef struct v2x_stack_btp__srv__BtpData_Request__Sequence
{
  v2x_stack_btp__srv__BtpData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack_btp__srv__BtpData_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/BtpData in the package v2x_stack_btp.
typedef struct v2x_stack_btp__srv__BtpData_Response
{
  uint8_t confirm;
} v2x_stack_btp__srv__BtpData_Response;

// Struct for a sequence of v2x_stack_btp__srv__BtpData_Response.
typedef struct v2x_stack_btp__srv__BtpData_Response__Sequence
{
  v2x_stack_btp__srv__BtpData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack_btp__srv__BtpData_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  v2x_stack_btp__srv__BtpData_Event__request__MAX_SIZE = 1
};
// response
enum
{
  v2x_stack_btp__srv__BtpData_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/BtpData in the package v2x_stack_btp.
typedef struct v2x_stack_btp__srv__BtpData_Event
{
  service_msgs__msg__ServiceEventInfo info;
  v2x_stack_btp__srv__BtpData_Request__Sequence request;
  v2x_stack_btp__srv__BtpData_Response__Sequence response;
} v2x_stack_btp__srv__BtpData_Event;

// Struct for a sequence of v2x_stack_btp__srv__BtpData_Event.
typedef struct v2x_stack_btp__srv__BtpData_Event__Sequence
{
  v2x_stack_btp__srv__BtpData_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack_btp__srv__BtpData_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__STRUCT_H_
