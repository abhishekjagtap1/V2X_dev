// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/SensorInformationContainer.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__functions.h"
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__struct.hpp"
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

void SensorInformationContainer_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_etsi_its_msgs::msg::SensorInformationContainer(_init);
}

void SensorInformationContainer_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_etsi_its_msgs::msg::SensorInformationContainer *>(message_memory);
  typed_message->~SensorInformationContainer();
}

size_t size_function__SensorInformationContainer__sensors_information(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::SensorInformation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorInformationContainer__sensors_information(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::SensorInformation> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorInformationContainer__sensors_information(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::SensorInformation> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorInformationContainer__sensors_information(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_etsi_its_msgs::msg::SensorInformation *>(
    get_const_function__SensorInformationContainer__sensors_information(untyped_member, index));
  auto & value = *reinterpret_cast<ros_etsi_its_msgs::msg::SensorInformation *>(untyped_value);
  value = item;
}

void assign_function__SensorInformationContainer__sensors_information(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_etsi_its_msgs::msg::SensorInformation *>(
    get_function__SensorInformationContainer__sensors_information(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_etsi_its_msgs::msg::SensorInformation *>(untyped_value);
  item = value;
}

void resize_function__SensorInformationContainer__sensors_information(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::SensorInformation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorInformationContainer_message_member_array[1] = {
  {
    "sensors_information",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_etsi_its_msgs::msg::SensorInformation>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::SensorInformationContainer, sensors_information),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorInformationContainer__sensors_information,  // size() function pointer
    get_const_function__SensorInformationContainer__sensors_information,  // get_const(index) function pointer
    get_function__SensorInformationContainer__sensors_information,  // get(index) function pointer
    fetch_function__SensorInformationContainer__sensors_information,  // fetch(index, &value) function pointer
    assign_function__SensorInformationContainer__sensors_information,  // assign(index, value) function pointer
    resize_function__SensorInformationContainer__sensors_information  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorInformationContainer_message_members = {
  "ros_etsi_its_msgs::msg",  // message namespace
  "SensorInformationContainer",  // message name
  1,  // number of fields
  sizeof(ros_etsi_its_msgs::msg::SensorInformationContainer),
  false,  // has_any_key_member_
  SensorInformationContainer_message_member_array,  // message members
  SensorInformationContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorInformationContainer_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorInformationContainer_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorInformationContainer_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__SensorInformationContainer__get_type_hash,
  &ros_etsi_its_msgs__msg__SensorInformationContainer__get_type_description,
  &ros_etsi_its_msgs__msg__SensorInformationContainer__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::SensorInformationContainer>()
{
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::SensorInformationContainer_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_etsi_its_msgs, msg, SensorInformationContainer)() {
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::SensorInformationContainer_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
