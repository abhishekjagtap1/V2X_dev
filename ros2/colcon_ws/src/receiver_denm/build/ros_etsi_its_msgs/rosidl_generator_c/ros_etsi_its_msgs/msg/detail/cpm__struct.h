// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/CPM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cpm.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__STRUCT_H_

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
// Member 'originating_vehicle_container'
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__struct.h"
// Member 'sensor_information_container'
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__struct.h"
// Member 'list_of_perceived_objects'
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__struct.h"

/// Struct defined in msg/CPM in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__CPM
{
  std_msgs__msg__Header header;
  ros_etsi_its_msgs__msg__ItsPduHeader its_header;
  /// CpmParameters container
  ///  milliseconds since 2004 modulo 2^16
  uint16_t generation_delta_time;
  /// CpmParameters
  ///  CpmManagementContainer
  ros_etsi_its_msgs__msg__StationType station_type;
  ros_etsi_its_msgs__msg__ReferencePosition reference_position;
  /// StationDataContainer
  /// TODO extend to OriginatingRSUContainer
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer originating_vehicle_container;
  bool has_sensor_information_container;
  ros_etsi_its_msgs__msg__SensorInformationContainer sensor_information_container;
  bool has_list_of_perceived_object;
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects list_of_perceived_objects;
  int32_t number_of_perceived_objects;
} ros_etsi_its_msgs__msg__CPM;

// Struct for a sequence of ros_etsi_its_msgs__msg__CPM.
typedef struct ros_etsi_its_msgs__msg__CPM__Sequence
{
  ros_etsi_its_msgs__msg__CPM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__CPM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CPM__STRUCT_H_
