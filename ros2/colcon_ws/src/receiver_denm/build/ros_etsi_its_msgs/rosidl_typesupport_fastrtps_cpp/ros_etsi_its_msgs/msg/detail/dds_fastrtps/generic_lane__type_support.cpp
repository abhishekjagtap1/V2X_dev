// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/generic_lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros_etsi_its_msgs/msg/detail/generic_lane__functions.h"
#include "ros_etsi_its_msgs/msg/detail/generic_lane__struct.hpp"

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
namespace ros_etsi_its_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros_etsi_its_msgs::msg::NodeSetXY &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros_etsi_its_msgs::msg::NodeSetXY &);
size_t get_serialized_size(
  const ros_etsi_its_msgs::msg::NodeSetXY &,
  size_t current_alignment);
size_t
max_serialized_size_NodeSetXY(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ros_etsi_its_msgs::msg::NodeSetXY &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ros_etsi_its_msgs::msg::NodeSetXY &,
  size_t current_alignment);
size_t
max_serialized_size_key_NodeSetXY(
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
  const ros_etsi_its_msgs::msg::Connection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros_etsi_its_msgs::msg::Connection &);
size_t get_serialized_size(
  const ros_etsi_its_msgs::msg::Connection &,
  size_t current_alignment);
size_t
max_serialized_size_Connection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ros_etsi_its_msgs::msg::Connection &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ros_etsi_its_msgs::msg::Connection &,
  size_t current_alignment);
size_t
max_serialized_size_key_Connection(
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
  const ros_etsi_its_msgs::msg::GenericLane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lane_id
  cdr << ros_message.lane_id;

  // Member: name
  cdr << ros_message.name;

  // Member: ingress_approach
  cdr << ros_message.ingress_approach;

  // Member: egress_approach
  cdr << ros_message.egress_approach;

  // Member: lane_direction
  cdr << ros_message.lane_direction;

  // Member: node_list
  {
    size_t size = ros_message.node_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.node_list[i],
        cdr);
    }
  }

  // Member: connects_to
  {
    size_t size = ros_message.connects_to.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.connects_to[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs::msg::GenericLane & ros_message)
{
  // Member: lane_id
  cdr >> ros_message.lane_id;

  // Member: name
  cdr >> ros_message.name;

  // Member: ingress_approach
  cdr >> ros_message.ingress_approach;

  // Member: egress_approach
  cdr >> ros_message.egress_approach;

  // Member: lane_direction
  cdr >> ros_message.lane_direction;

  // Member: node_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.node_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.node_list[i]);
    }
  }

  // Member: connects_to
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.connects_to.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.connects_to[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
get_serialized_size(
  const ros_etsi_its_msgs::msg::GenericLane & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lane_id
  {
    size_t item_size = sizeof(ros_message.lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);

  // Member: ingress_approach
  {
    size_t item_size = sizeof(ros_message.ingress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: egress_approach
  {
    size_t item_size = sizeof(ros_message.egress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: lane_direction
  {
    size_t item_size = sizeof(ros_message.lane_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: node_list
  {
    size_t array_size = ros_message.node_list.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.node_list[index], current_alignment);
    }
  }

  // Member: connects_to
  {
    size_t array_size = ros_message.connects_to.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.connects_to[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
max_serialized_size_GenericLane(
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

  // Member: lane_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: ingress_approach
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: egress_approach
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: lane_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: node_list
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
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeSetXY(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: connects_to
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
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Connection(
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
    using DataType = ros_etsi_its_msgs::msg::GenericLane;
    is_plain =
      (
      offsetof(DataType, connects_to) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
cdr_serialize_key(
  const ros_etsi_its_msgs::msg::GenericLane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lane_id
  cdr << ros_message.lane_id;

  // Member: name
  cdr << ros_message.name;

  // Member: ingress_approach
  cdr << ros_message.ingress_approach;

  // Member: egress_approach
  cdr << ros_message.egress_approach;

  // Member: lane_direction
  cdr << ros_message.lane_direction;

  // Member: node_list
  {
    size_t size = ros_message.node_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.node_list[i],
        cdr);
    }
  }

  // Member: connects_to
  {
    size_t size = ros_message.connects_to.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.connects_to[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
get_serialized_size_key(
  const ros_etsi_its_msgs::msg::GenericLane & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lane_id
  {
    size_t item_size = sizeof(ros_message.lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);

  // Member: ingress_approach
  {
    size_t item_size = sizeof(ros_message.ingress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: egress_approach
  {
    size_t item_size = sizeof(ros_message.egress_approach);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: lane_direction
  {
    size_t item_size = sizeof(ros_message.lane_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: node_list
  {
    size_t array_size = ros_message.node_list.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.node_list[index], current_alignment);
    }
  }

  // Member: connects_to
  {
    size_t array_size = ros_message.connects_to.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.connects_to[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
max_serialized_size_key_GenericLane(
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

  // Member: lane_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: ingress_approach
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: egress_approach
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_direction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: node_list
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
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_NodeSetXY(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: connects_to
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
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Connection(
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
    using DataType = ros_etsi_its_msgs::msg::GenericLane;
    is_plain =
      (
      offsetof(DataType, connects_to) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _GenericLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros_etsi_its_msgs::msg::GenericLane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GenericLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros_etsi_its_msgs::msg::GenericLane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GenericLane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros_etsi_its_msgs::msg::GenericLane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GenericLane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GenericLane(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GenericLane__callbacks = {
  "ros_etsi_its_msgs::msg",
  "GenericLane",
  _GenericLane__cdr_serialize,
  _GenericLane__cdr_deserialize,
  _GenericLane__get_serialized_size,
  _GenericLane__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GenericLane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GenericLane__callbacks,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_hash,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_description,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::GenericLane>()
{
  return &ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::_GenericLane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_etsi_its_msgs, msg, GenericLane)() {
  return &ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::_GenericLane__handle;
}

#ifdef __cplusplus
}
#endif
