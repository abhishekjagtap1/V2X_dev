// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/VehicleSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_etsi_its_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VehicleSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_etsi_its_msgs::msg::VehicleSensor(_init);
}

void VehicleSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_etsi_its_msgs::msg::VehicleSensor *>(message_memory);
  typed_message->~VehicleSensor();
}

size_t size_function__VehicleSensor__vehicle_sensor_property_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::VehicleSensorProperty> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VehicleSensor__vehicle_sensor_property_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::VehicleSensorProperty> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleSensor__vehicle_sensor_property_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::VehicleSensorProperty> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleSensor__vehicle_sensor_property_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_etsi_its_msgs::msg::VehicleSensorProperty *>(
    get_const_function__VehicleSensor__vehicle_sensor_property_list(untyped_member, index));
  auto & value = *reinterpret_cast<ros_etsi_its_msgs::msg::VehicleSensorProperty *>(untyped_value);
  value = item;
}

void assign_function__VehicleSensor__vehicle_sensor_property_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_etsi_its_msgs::msg::VehicleSensorProperty *>(
    get_function__VehicleSensor__vehicle_sensor_property_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_etsi_its_msgs::msg::VehicleSensorProperty *>(untyped_value);
  item = value;
}

void resize_function__VehicleSensor__vehicle_sensor_property_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::VehicleSensorProperty> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleSensor_message_member_array[5] = {
  {
    "ref_point_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::VehicleSensor, ref_point_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x_sensor_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::VehicleSensor, x_sensor_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y_sensor_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::VehicleSensor, y_sensor_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z_sensor_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::VehicleSensor, z_sensor_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehicle_sensor_property_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_etsi_its_msgs::msg::VehicleSensorProperty>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::VehicleSensor, vehicle_sensor_property_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleSensor__vehicle_sensor_property_list,  // size() function pointer
    get_const_function__VehicleSensor__vehicle_sensor_property_list,  // get_const(index) function pointer
    get_function__VehicleSensor__vehicle_sensor_property_list,  // get(index) function pointer
    fetch_function__VehicleSensor__vehicle_sensor_property_list,  // fetch(index, &value) function pointer
    assign_function__VehicleSensor__vehicle_sensor_property_list,  // assign(index, value) function pointer
    resize_function__VehicleSensor__vehicle_sensor_property_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleSensor_message_members = {
  "ros_etsi_its_msgs::msg",  // message namespace
  "VehicleSensor",  // message name
  5,  // number of fields
  sizeof(ros_etsi_its_msgs::msg::VehicleSensor),
  false,  // has_any_key_member_
  VehicleSensor_message_member_array,  // message members
  VehicleSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleSensor_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__VehicleSensor__get_type_hash,
  &ros_etsi_its_msgs__msg__VehicleSensor__get_type_description,
  &ros_etsi_its_msgs__msg__VehicleSensor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::VehicleSensor>()
{
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_etsi_its_msgs, msg, VehicleSensor)() {
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
