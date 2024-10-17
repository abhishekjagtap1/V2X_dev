// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__functions.h"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__struct.hpp"

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
  const ros_etsi_its_msgs::msg::VehicleRole &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros_etsi_its_msgs::msg::VehicleRole &);
size_t get_serialized_size(
  const ros_etsi_its_msgs::msg::VehicleRole &,
  size_t current_alignment);
size_t
max_serialized_size_VehicleRole(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ros_etsi_its_msgs::msg::VehicleRole &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ros_etsi_its_msgs::msg::VehicleRole &,
  size_t current_alignment);
size_t
max_serialized_size_key_VehicleRole(
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
  const ros_etsi_its_msgs::msg::ExteriorLights &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros_etsi_its_msgs::msg::ExteriorLights &);
size_t get_serialized_size(
  const ros_etsi_its_msgs::msg::ExteriorLights &,
  size_t current_alignment);
size_t
max_serialized_size_ExteriorLights(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ros_etsi_its_msgs::msg::ExteriorLights &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ros_etsi_its_msgs::msg::ExteriorLights &,
  size_t current_alignment);
size_t
max_serialized_size_key_ExteriorLights(
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
  const ros_etsi_its_msgs::msg::PathHistory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros_etsi_its_msgs::msg::PathHistory &);
size_t get_serialized_size(
  const ros_etsi_its_msgs::msg::PathHistory &,
  size_t current_alignment);
size_t
max_serialized_size_PathHistory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const ros_etsi_its_msgs::msg::PathHistory &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const ros_etsi_its_msgs::msg::PathHistory &,
  size_t current_alignment);
size_t
max_serialized_size_key_PathHistory(
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
  const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vehicle_role
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vehicle_role,
    cdr);

  // Member: exterior_lights
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.exterior_lights,
    cdr);

  // Member: path_history
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.path_history,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & ros_message)
{
  // Member: vehicle_role
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vehicle_role);

  // Member: exterior_lights
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.exterior_lights);

  // Member: path_history
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.path_history);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
get_serialized_size(
  const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vehicle_role
  current_alignment +=
    ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vehicle_role, current_alignment);

  // Member: exterior_lights
  current_alignment +=
    ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.exterior_lights, current_alignment);

  // Member: path_history
  current_alignment +=
    ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.path_history, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
max_serialized_size_BasicVehicleContainerLowFrequency(
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

  // Member: vehicle_role
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleRole(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: exterior_lights
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ExteriorLights(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: path_history
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PathHistory(
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
    using DataType = ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency;
    is_plain =
      (
      offsetof(DataType, path_history) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
cdr_serialize_key(
  const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vehicle_role
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.vehicle_role,
    cdr);

  // Member: exterior_lights
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.exterior_lights,
    cdr);

  // Member: path_history
  ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.path_history,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
get_serialized_size_key(
  const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vehicle_role
  current_alignment +=
    ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.vehicle_role, current_alignment);

  // Member: exterior_lights
  current_alignment +=
    ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.exterior_lights, current_alignment);

  // Member: path_history
  current_alignment +=
    ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.path_history, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_etsi_its_msgs
max_serialized_size_key_BasicVehicleContainerLowFrequency(
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

  // Member: vehicle_role
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_VehicleRole(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: exterior_lights
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ExteriorLights(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: path_history
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_PathHistory(
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
    using DataType = ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency;
    is_plain =
      (
      offsetof(DataType, path_history) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _BasicVehicleContainerLowFrequency__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BasicVehicleContainerLowFrequency__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BasicVehicleContainerLowFrequency__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BasicVehicleContainerLowFrequency__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BasicVehicleContainerLowFrequency(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BasicVehicleContainerLowFrequency__callbacks = {
  "ros_etsi_its_msgs::msg",
  "BasicVehicleContainerLowFrequency",
  _BasicVehicleContainerLowFrequency__cdr_serialize,
  _BasicVehicleContainerLowFrequency__cdr_deserialize,
  _BasicVehicleContainerLowFrequency__get_serialized_size,
  _BasicVehicleContainerLowFrequency__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BasicVehicleContainerLowFrequency__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BasicVehicleContainerLowFrequency__callbacks,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_type_hash,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_type_description,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros_etsi_its_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>()
{
  return &ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::_BasicVehicleContainerLowFrequency__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_etsi_its_msgs, msg, BasicVehicleContainerLowFrequency)() {
  return &ros_etsi_its_msgs::msg::typesupport_fastrtps_cpp::_BasicVehicleContainerLowFrequency__handle;
}

#ifdef __cplusplus
}
#endif
