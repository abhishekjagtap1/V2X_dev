// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_stack:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_stack/msg/detail/geo_net_destination__functions.h"
#include "v2x_stack/msg/detail/geo_net_destination__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_stack
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GeoNetDestination_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_stack::msg::GeoNetDestination(_init);
}

void GeoNetDestination_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_stack::msg::GeoNetDestination *>(message_memory);
  typed_message->~GeoNetDestination();
}

size_t size_function__GeoNetDestination__address(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__GeoNetDestination__address(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__GeoNetDestination__address(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__GeoNetDestination__address(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__GeoNetDestination__address(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__GeoNetDestination__address(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__GeoNetDestination__address(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GeoNetDestination_message_member_array[3] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack::msg::GeoNetDestination, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "address",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(v2x_stack::msg::GeoNetDestination, address),  // bytes offset in struct
    nullptr,  // default value
    size_function__GeoNetDestination__address,  // size() function pointer
    get_const_function__GeoNetDestination__address,  // get_const(index) function pointer
    get_function__GeoNetDestination__address,  // get(index) function pointer
    fetch_function__GeoNetDestination__address,  // fetch(index, &value) function pointer
    assign_function__GeoNetDestination__address,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "area",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_stack::msg::GeoNetArea>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack::msg::GeoNetDestination, area),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GeoNetDestination_message_members = {
  "v2x_stack::msg",  // message namespace
  "GeoNetDestination",  // message name
  3,  // number of fields
  sizeof(v2x_stack::msg::GeoNetDestination),
  false,  // has_any_key_member_
  GeoNetDestination_message_member_array,  // message members
  GeoNetDestination_init_function,  // function to initialize message memory (memory has to be allocated)
  GeoNetDestination_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GeoNetDestination_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GeoNetDestination_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack__msg__GeoNetDestination__get_type_hash,
  &v2x_stack__msg__GeoNetDestination__get_type_description,
  &v2x_stack__msg__GeoNetDestination__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2x_stack


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack::msg::GeoNetDestination>()
{
  return &::v2x_stack::msg::rosidl_typesupport_introspection_cpp::GeoNetDestination_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack, msg, GeoNetDestination)() {
  return &::v2x_stack::msg::rosidl_typesupport_introspection_cpp::GeoNetDestination_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
