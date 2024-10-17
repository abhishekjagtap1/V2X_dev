// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/SPATEM.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/spatem__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros_etsi_its_msgs/msg/detail/spatem__functions.h"
#include "ros_etsi_its_msgs/msg/detail/spatem__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace ros_etsi_its_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros_etsi_its_msgs::msg::ItsPduHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros_etsi_its_msgs::msg::ItsPduHeader &);
size_t get_serialized_size(
  const ros_etsi_its_msgs::msg::ItsPduHeader &,
  size_t current_alignment);
size_t
max_serialized_size_ItsPduHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ros_etsi_its_msgs::msg::ItsPduHeader &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ros_etsi_its_msgs::msg::ItsPduHeader &,
  size_t current_alignment);
size_t
max_serialized_size_key_ItsPduHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros_etsi_its_msgs

namespace ros_etsi_its_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros_etsi_its_msgs::msg::IntersectionState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros_etsi_its_msgs::msg::IntersectionState &);
size_t get_serialized_size(
  const ros_etsi_its_msgs::msg::IntersectionState &,
  size_t current_alignment);
size_t
max_serialized_size_IntersectionState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ros_etsi_its_msgs::msg::IntersectionState &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ros_etsi_its_msgs::msg::IntersectionState &,
  size_t current_alignment);
size_t
max_serialized_size_key_IntersectionState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros_etsi_its_msgs


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
cdr_serialize(
  const ros_etsi_its_msgs::msg::SPATEM & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: its_header
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.its_header,
    cdr);

  // Member: intersections
  {
    size_t size = ros_message.intersections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.intersections[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs::msg::SPATEM & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: its_header
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.its_header);

  // Member: intersections
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.intersections.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.intersections[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
get_serialized_size(
  const ros_etsi_its_msgs::msg::SPATEM & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: its_header
  current_alignment +=
    ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.its_header, current_alignment);

  // Member: intersections
  {
    size_t array_size = ros_message.intersections.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.intersections[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
max_serialized_size_SPATEM(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: its_header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ItsPduHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: intersections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_etsi_its_msgs::msg::SPATEM;
    is_plain =
      (
      offsetof(DataType, intersections) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
cdr_serialize_key(
  const ros_etsi_its_msgs::msg::SPATEM & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: its_header
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.its_header,
    cdr);

  // Member: intersections
  {
    size_t size = ros_message.intersections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.intersections[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
get_serialized_size_key(
  const ros_etsi_its_msgs::msg::SPATEM & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: its_header
  current_alignment +=
    ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.its_header, current_alignment);

  // Member: intersections
  {
    size_t array_size = ros_message.intersections.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.intersections[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
max_serialized_size_key_SPATEM(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: its_header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ItsPduHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: intersections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_IntersectionState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_etsi_its_msgs::msg::SPATEM;
    is_plain =
      (
      offsetof(DataType, intersections) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _SPATEM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros_etsi_its_msgs::msg::SPATEM *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SPATEM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros_etsi_its_msgs::msg::SPATEM *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SPATEM__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros_etsi_its_msgs::msg::SPATEM *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SPATEM__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SPATEM(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SPATEM__callbacks = {
  "ros_etsi_its_msgs::msg",
  "SPATEM",
  _SPATEM__cdr_serialize,
  _SPATEM__cdr_deserialize,
  _SPATEM__get_serialized_size,
  _SPATEM__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SPATEM__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SPATEM__callbacks,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__SPATEM__get_type_hash,
  &ros_etsi_its_msgs__msg__SPATEM__get_type_description,
  &ros_etsi_its_msgs__msg__SPATEM__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::SPATEM>()
{
  return &ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::_SPATEM__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_etsi_its_msgs, msg, SPATEM)() {
  return &ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::_SPATEM__handle;
}

#ifdef __cplusplus
}
#endif
