// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/DENM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/denm.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__struct.h"
// Member 'management'
#include "ros_etsi_its_msgs/msg/detail/management_container__struct.h"
// Member 'situation'
#include "ros_etsi_its_msgs/msg/detail/situation_container__struct.h"
// Member 'location'
#include "ros_etsi_its_msgs/msg/detail/location_container__struct.h"

/// Struct defined in msg/DENM in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__DENM
{
  std_msgs__msg__Header header;
  ros_etsi_its_msgs__msg__ItsPduHeader its_header;
  ros_etsi_its_msgs__msg__ManagementContainer management;
  bool has_situation;
  ros_etsi_its_msgs__msg__SituationContainer situation;
  bool has_location;
  ros_etsi_its_msgs__msg__LocationContainer location;
} ros_etsi_its_msgs__msg__DENM;

// Struct for a sequence of ros_etsi_its_msgs__msg__DENM.
typedef struct ros_etsi_its_msgs__msg__DENM__Sequence
{
  ros_etsi_its_msgs__msg__DENM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__DENM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__STRUCT_H_
