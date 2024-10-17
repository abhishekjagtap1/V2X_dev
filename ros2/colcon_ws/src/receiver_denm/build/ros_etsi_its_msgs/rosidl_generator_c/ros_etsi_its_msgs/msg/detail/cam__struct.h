// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/CAM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cam.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__STRUCT_H_

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
// Member 'station_type'
#include "ros_etsi_its_msgs/msg/detail/station_type__struct.h"
// Member 'reference_position'
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.h"
// Member 'high_frequency_container'
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__struct.h"
// Member 'low_frequency_container'
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__struct.h"

/// Struct defined in msg/CAM in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__CAM
{
  std_msgs__msg__Header header;
  ros_etsi_its_msgs__msg__ItsPduHeader its_header;
  /// milliseconds since 2004 modulo 2^16
  uint16_t generation_delta_time;
  /// basic container
  ros_etsi_its_msgs__msg__StationType station_type;
  ros_etsi_its_msgs__msg__ReferencePosition reference_position;
  /// TODO either BasicVehicle or RSU
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency high_frequency_container;
  bool has_low_frequency_container;
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency low_frequency_container;
} ros_etsi_its_msgs__msg__CAM;

// Struct for a sequence of ros_etsi_its_msgs__msg__CAM.
typedef struct ros_etsi_its_msgs__msg__CAM__Sequence
{
  ros_etsi_its_msgs__msg__CAM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__CAM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__STRUCT_H_
