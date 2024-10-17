// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/perceived_object__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/perceived_object__functions.h"
#include "ros_etsi_its_msgs/msg/detail/perceived_object__struct.h"


// Include directives for member types
// Member `sensor_id_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_of_detection`
#include "builtin_interfaces/msg/time.h"
// Member `time_of_detection`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `x_distance`
// Member `y_distance`
// Member `z_distance`
#include "ros_etsi_its_msgs/msg/object_distance_with_confidence.h"
// Member `x_distance`
// Member `y_distance`
// Member `z_distance`
#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__rosidl_typesupport_introspection_c.h"
// Member `x_speed`
// Member `y_speed`
// Member `z_speed`
#include "ros_etsi_its_msgs/msg/speed_extended.h"
// Member `x_speed`
// Member `y_speed`
// Member `z_speed`
#include "ros_etsi_its_msgs/msg/detail/speed_extended__rosidl_typesupport_introspection_c.h"
// Member `x_acceleration`
#include "ros_etsi_its_msgs/msg/longitudinal_acceleration.h"
// Member `x_acceleration`
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__rosidl_typesupport_introspection_c.h"
// Member `y_acceleration`
#include "ros_etsi_its_msgs/msg/lateral_acceleration.h"
// Member `y_acceleration`
#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__rosidl_typesupport_introspection_c.h"
// Member `planar_object_dimension1`
// Member `planar_object_dimension2`
// Member `vertical_object_dimension`
#include "ros_etsi_its_msgs/msg/object_dimension.h"
// Member `planar_object_dimension1`
// Member `planar_object_dimension2`
// Member `vertical_object_dimension`
#include "ros_etsi_its_msgs/msg/detail/object_dimension__rosidl_typesupport_introspection_c.h"
// Member `object_ref_point`
#include "ros_etsi_its_msgs/msg/object_ref_point.h"
// Member `object_ref_point`
#include "ros_etsi_its_msgs/msg/detail/object_ref_point__rosidl_typesupport_introspection_c.h"
// Member `dynamic_status`
#include "ros_etsi_its_msgs/msg/dynamic_status.h"
// Member `dynamic_status`
#include "ros_etsi_its_msgs/msg/detail/dynamic_status__rosidl_typesupport_introspection_c.h"
// Member `classification`
#include "ros_etsi_its_msgs/msg/station_type.h"
// Member `classification`
#include "ros_etsi_its_msgs/msg/detail/station_type__rosidl_typesupport_introspection_c.h"
// Member `matched_position`
#include "ros_etsi_its_msgs/msg/matched_position.h"
// Member `matched_position`
#include "ros_etsi_its_msgs/msg/detail/matched_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__PerceivedObject__init(message_memory);
}

void ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__PerceivedObject__fini(message_memory);
}

size_t ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__size_function__PerceivedObject__sensor_id_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__get_const_function__PerceivedObject__sensor_id_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__get_function__PerceivedObject__sensor_id_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__fetch_function__PerceivedObject__sensor_id_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__get_const_function__PerceivedObject__sensor_id_list(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__assign_function__PerceivedObject__sensor_id_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__get_function__PerceivedObject__sensor_id_list(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__resize_function__PerceivedObject__sensor_id_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[26] = {
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_sensor_id_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, has_sensor_id_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_id_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, sensor_id_list),  // bytes offset in struct
    NULL,  // default value
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__size_function__PerceivedObject__sensor_id_list,  // size() function pointer
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__get_const_function__PerceivedObject__sensor_id_list,  // get_const(index) function pointer
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__get_function__PerceivedObject__sensor_id_list,  // get(index) function pointer
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__fetch_function__PerceivedObject__sensor_id_list,  // fetch(index, &value) function pointer
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__assign_function__PerceivedObject__sensor_id_list,  // assign(index, value) function pointer
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__resize_function__PerceivedObject__sensor_id_list  // resize(index) function pointer
  },
  {
    "time_of_detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, time_of_detection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_of_measurement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, time_of_measurement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, object_age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, object_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, x_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, y_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, z_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, x_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, y_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, z_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, x_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, y_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_planar_object_dimension1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, has_planar_object_dimension1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planar_object_dimension1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, planar_object_dimension1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_planar_object_dimension2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, has_planar_object_dimension2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planar_object_dimension2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, planar_object_dimension2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_vertical_object_dimension",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, has_vertical_object_dimension),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_object_dimension",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, vertical_object_dimension),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_ref_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, object_ref_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dynamic_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, dynamic_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, classification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "matched_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, matched_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__PerceivedObject, object_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "PerceivedObject",  // message name
  26,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__PerceivedObject),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array,  // message members
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__PerceivedObject__get_type_hash,
  &ros_etsi_its_msgs__msg__PerceivedObject__get_type_description,
  &ros_etsi_its_msgs__msg__PerceivedObject__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, PerceivedObject)() {
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ObjectDistanceWithConfidence)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ObjectDistanceWithConfidence)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ObjectDistanceWithConfidence)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, SpeedExtended)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, SpeedExtended)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, SpeedExtended)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, LongitudinalAcceleration)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, LateralAcceleration)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ObjectDimension)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ObjectDimension)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ObjectDimension)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ObjectRefPoint)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, DynamicStatus)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, StationType)();
  ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, MatchedPosition)();
  if (!ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__PerceivedObject__rosidl_typesupport_introspection_c__PerceivedObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
