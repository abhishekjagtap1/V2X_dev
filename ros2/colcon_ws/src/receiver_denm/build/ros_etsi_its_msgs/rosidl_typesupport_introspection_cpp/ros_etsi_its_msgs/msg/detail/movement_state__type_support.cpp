// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_etsi_its_msgs/msg/detail/movement_state__functions.h"
#include "ros_etsi_its_msgs/msg/detail/movement_state__struct.hpp"
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

void MovementState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_etsi_its_msgs::msg::MovementState(_init);
}

void MovementState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_etsi_its_msgs::msg::MovementState *>(message_memory);
  typed_message->~MovementState();
}

size_t size_function__MovementState__state_time_speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::MovementEvent> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MovementState__state_time_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::MovementEvent> *>(untyped_member);
  return &member[index];
}

void * get_function__MovementState__state_time_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::MovementEvent> *>(untyped_member);
  return &member[index];
}

void fetch_function__MovementState__state_time_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_etsi_its_msgs::msg::MovementEvent *>(
    get_const_function__MovementState__state_time_speed(untyped_member, index));
  auto & value = *reinterpret_cast<ros_etsi_its_msgs::msg::MovementEvent *>(untyped_value);
  value = item;
}

void assign_function__MovementState__state_time_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_etsi_its_msgs::msg::MovementEvent *>(
    get_function__MovementState__state_time_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_etsi_its_msgs::msg::MovementEvent *>(untyped_value);
  item = value;
}

void resize_function__MovementState__state_time_speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::MovementEvent> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MovementState_message_member_array[2] = {
  {
    "signal_group",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::MovementState, signal_group),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_time_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_etsi_its_msgs::msg::MovementEvent>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::MovementState, state_time_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__MovementState__state_time_speed,  // size() function pointer
    get_const_function__MovementState__state_time_speed,  // get_const(index) function pointer
    get_function__MovementState__state_time_speed,  // get(index) function pointer
    fetch_function__MovementState__state_time_speed,  // fetch(index, &value) function pointer
    assign_function__MovementState__state_time_speed,  // assign(index, value) function pointer
    resize_function__MovementState__state_time_speed  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MovementState_message_members = {
  "ros_etsi_its_msgs::msg",  // message namespace
  "MovementState",  // message name
  2,  // number of fields
  sizeof(ros_etsi_its_msgs::msg::MovementState),
  false,  // has_any_key_member_
  MovementState_message_member_array,  // message members
  MovementState_init_function,  // function to initialize message memory (memory has to be allocated)
  MovementState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MovementState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MovementState_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__MovementState__get_type_hash,
  &ros_etsi_its_msgs__msg__MovementState__get_type_description,
  &ros_etsi_its_msgs__msg__MovementState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::MovementState>()
{
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::MovementState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_etsi_its_msgs, msg, MovementState)() {
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::MovementState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
