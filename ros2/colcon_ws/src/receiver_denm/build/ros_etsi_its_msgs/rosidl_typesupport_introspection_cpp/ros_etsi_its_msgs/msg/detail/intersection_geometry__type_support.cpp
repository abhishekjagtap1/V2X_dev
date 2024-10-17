// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_etsi_its_msgs/msg/detail/intersection_geometry__functions.h"
#include "ros_etsi_its_msgs/msg/detail/intersection_geometry__struct.hpp"
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

void IntersectionGeometry_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_etsi_its_msgs::msg::IntersectionGeometry(_init);
}

void IntersectionGeometry_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_etsi_its_msgs::msg::IntersectionGeometry *>(message_memory);
  typed_message->~IntersectionGeometry();
}

size_t size_function__IntersectionGeometry__lane_set(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::GenericLane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IntersectionGeometry__lane_set(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::GenericLane> *>(untyped_member);
  return &member[index];
}

void * get_function__IntersectionGeometry__lane_set(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::GenericLane> *>(untyped_member);
  return &member[index];
}

void fetch_function__IntersectionGeometry__lane_set(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_etsi_its_msgs::msg::GenericLane *>(
    get_const_function__IntersectionGeometry__lane_set(untyped_member, index));
  auto & value = *reinterpret_cast<ros_etsi_its_msgs::msg::GenericLane *>(untyped_value);
  value = item;
}

void assign_function__IntersectionGeometry__lane_set(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_etsi_its_msgs::msg::GenericLane *>(
    get_function__IntersectionGeometry__lane_set(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_etsi_its_msgs::msg::GenericLane *>(untyped_value);
  item = value;
}

void resize_function__IntersectionGeometry__lane_set(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::GenericLane> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IntersectionGeometry_message_member_array[6] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::IntersectionGeometry, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::IntersectionGeometry, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "revision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::IntersectionGeometry, revision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ref_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_etsi_its_msgs::msg::ReferencePosition>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::IntersectionGeometry, ref_point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::IntersectionGeometry, lane_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_etsi_its_msgs::msg::GenericLane>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::IntersectionGeometry, lane_set),  // bytes offset in struct
    nullptr,  // default value
    size_function__IntersectionGeometry__lane_set,  // size() function pointer
    get_const_function__IntersectionGeometry__lane_set,  // get_const(index) function pointer
    get_function__IntersectionGeometry__lane_set,  // get(index) function pointer
    fetch_function__IntersectionGeometry__lane_set,  // fetch(index, &value) function pointer
    assign_function__IntersectionGeometry__lane_set,  // assign(index, value) function pointer
    resize_function__IntersectionGeometry__lane_set  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IntersectionGeometry_message_members = {
  "ros_etsi_its_msgs::msg",  // message namespace
  "IntersectionGeometry",  // message name
  6,  // number of fields
  sizeof(ros_etsi_its_msgs::msg::IntersectionGeometry),
  false,  // has_any_key_member_
  IntersectionGeometry_message_member_array,  // message members
  IntersectionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  IntersectionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IntersectionGeometry_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IntersectionGeometry_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__IntersectionGeometry__get_type_hash,
  &ros_etsi_its_msgs__msg__IntersectionGeometry__get_type_description,
  &ros_etsi_its_msgs__msg__IntersectionGeometry__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::IntersectionGeometry>()
{
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::IntersectionGeometry_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_etsi_its_msgs, msg, IntersectionGeometry)() {
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::IntersectionGeometry_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
