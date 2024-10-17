// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/ListOfPerceivedObjects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__functions.h"
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__struct.hpp"
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

void ListOfPerceivedObjects_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_etsi_its_msgs::msg::ListOfPerceivedObjects(_init);
}

void ListOfPerceivedObjects_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_etsi_its_msgs::msg::ListOfPerceivedObjects *>(message_memory);
  typed_message->~ListOfPerceivedObjects();
}

size_t size_function__ListOfPerceivedObjects__perceived_object_container(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::PerceivedObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ListOfPerceivedObjects__perceived_object_container(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_etsi_its_msgs::msg::PerceivedObject> *>(untyped_member);
  return &member[index];
}

void * get_function__ListOfPerceivedObjects__perceived_object_container(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::PerceivedObject> *>(untyped_member);
  return &member[index];
}

void fetch_function__ListOfPerceivedObjects__perceived_object_container(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_etsi_its_msgs::msg::PerceivedObject *>(
    get_const_function__ListOfPerceivedObjects__perceived_object_container(untyped_member, index));
  auto & value = *reinterpret_cast<ros_etsi_its_msgs::msg::PerceivedObject *>(untyped_value);
  value = item;
}

void assign_function__ListOfPerceivedObjects__perceived_object_container(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_etsi_its_msgs::msg::PerceivedObject *>(
    get_function__ListOfPerceivedObjects__perceived_object_container(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_etsi_its_msgs::msg::PerceivedObject *>(untyped_value);
  item = value;
}

void resize_function__ListOfPerceivedObjects__perceived_object_container(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_etsi_its_msgs::msg::PerceivedObject> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ListOfPerceivedObjects_message_member_array[1] = {
  {
    "perceived_object_container",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_etsi_its_msgs::msg::PerceivedObject>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs::msg::ListOfPerceivedObjects, perceived_object_container),  // bytes offset in struct
    nullptr,  // default value
    size_function__ListOfPerceivedObjects__perceived_object_container,  // size() function pointer
    get_const_function__ListOfPerceivedObjects__perceived_object_container,  // get_const(index) function pointer
    get_function__ListOfPerceivedObjects__perceived_object_container,  // get(index) function pointer
    fetch_function__ListOfPerceivedObjects__perceived_object_container,  // fetch(index, &value) function pointer
    assign_function__ListOfPerceivedObjects__perceived_object_container,  // assign(index, value) function pointer
    resize_function__ListOfPerceivedObjects__perceived_object_container  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ListOfPerceivedObjects_message_members = {
  "ros_etsi_its_msgs::msg",  // message namespace
  "ListOfPerceivedObjects",  // message name
  1,  // number of fields
  sizeof(ros_etsi_its_msgs::msg::ListOfPerceivedObjects),
  false,  // has_any_key_member_
  ListOfPerceivedObjects_message_member_array,  // message members
  ListOfPerceivedObjects_init_function,  // function to initialize message memory (memory has to be allocated)
  ListOfPerceivedObjects_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ListOfPerceivedObjects_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ListOfPerceivedObjects_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_type_hash,
  &ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_type_description,
  &ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::ListOfPerceivedObjects>()
{
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::ListOfPerceivedObjects_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_etsi_its_msgs, msg, ListOfPerceivedObjects)() {
  return &::ros_etsi_its_msgs::msg::rosidl_typesupport_introspection_cpp::ListOfPerceivedObjects_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
