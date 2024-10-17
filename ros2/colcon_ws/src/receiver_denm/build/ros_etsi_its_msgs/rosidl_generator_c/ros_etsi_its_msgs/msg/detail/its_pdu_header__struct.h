// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ItsPduHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/its_pdu_header.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MESSAGE_ID_DENM'.
enum
{
  ros_etsi_its_msgs__msg__ItsPduHeader__MESSAGE_ID_DENM = 1
};

/// Constant 'MESSAGE_ID_CAM'.
enum
{
  ros_etsi_its_msgs__msg__ItsPduHeader__MESSAGE_ID_CAM = 2
};

/// Constant 'MESSAGE_ID_CPM'.
enum
{
  ros_etsi_its_msgs__msg__ItsPduHeader__MESSAGE_ID_CPM = 3
};

/// Struct defined in msg/ItsPduHeader in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__ItsPduHeader
{
  uint8_t protocol_version;
  uint8_t message_id;
  uint32_t station_id;
} ros_etsi_its_msgs__msg__ItsPduHeader;

// Struct for a sequence of ros_etsi_its_msgs__msg__ItsPduHeader.
typedef struct ros_etsi_its_msgs__msg__ItsPduHeader__Sequence
{
  ros_etsi_its_msgs__msg__ItsPduHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ItsPduHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_H_
