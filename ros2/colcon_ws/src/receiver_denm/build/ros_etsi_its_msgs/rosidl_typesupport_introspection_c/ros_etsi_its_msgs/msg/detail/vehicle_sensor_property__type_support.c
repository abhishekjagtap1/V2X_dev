// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__VehicleSensorProperty__init(message_memory);
}

void ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__VehicleSensorProperty__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_message_member_array[7] = {
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__VehicleSensorProperty, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horizontal_opening_angle_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__VehicleSensorProperty, horizontal_opening_angle_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horizontal_opening_angle_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__VehicleSensorProperty, horizontal_opening_angle_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_vertical_opening_angle_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__VehicleSensorProperty, has_vertical_opening_angle_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_opening_angle_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__VehicleSensorProperty, vertical_opening_angle_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_vertical_opening_angle_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__VehicleSensorProperty, has_vertical_opening_angle_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_opening_angle_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__VehicleSensorProperty, vertical_opening_angle_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "VehicleSensorProperty",  // message name
  7,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__VehicleSensorProperty),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_message_member_array,  // message members
  ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_hash,
  &ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_description,
  &ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, VehicleSensorProperty)() {
  if (!ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__VehicleSensorProperty__rosidl_typesupport_introspection_c__VehicleSensorProperty_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
