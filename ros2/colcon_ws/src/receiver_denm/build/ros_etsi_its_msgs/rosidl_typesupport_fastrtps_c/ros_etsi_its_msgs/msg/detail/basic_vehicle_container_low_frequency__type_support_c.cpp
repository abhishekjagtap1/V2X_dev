// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__struct.h"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ros_etsi_its_msgs/msg/detail/exterior_lights__functions.h"  // exterior_lights
#include "ros_etsi_its_msgs/msg/detail/path_history__functions.h"  // path_history
#include "ros_etsi_its_msgs/msg/detail/vehicle_role__functions.h"  // vehicle_role

// forward declare type support functions

bool cdr_serialize_ros_etsi_its_msgs__msg__ExteriorLights(
  const ros_etsi_its_msgs__msg__ExteriorLights * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__ExteriorLights(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ExteriorLights * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__ExteriorLights(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__ExteriorLights(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__ExteriorLights(
  const ros_etsi_its_msgs__msg__ExteriorLights * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ExteriorLights(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ExteriorLights(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ExteriorLights)();

bool cdr_serialize_ros_etsi_its_msgs__msg__PathHistory(
  const ros_etsi_its_msgs__msg__PathHistory * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__PathHistory(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__PathHistory * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__PathHistory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__PathHistory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__PathHistory(
  const ros_etsi_its_msgs__msg__PathHistory * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__PathHistory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__PathHistory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, PathHistory)();

bool cdr_serialize_ros_etsi_its_msgs__msg__VehicleRole(
  const ros_etsi_its_msgs__msg__VehicleRole * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__VehicleRole(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__VehicleRole * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__VehicleRole(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__VehicleRole(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__VehicleRole(
  const ros_etsi_its_msgs__msg__VehicleRole * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__VehicleRole(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__VehicleRole(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, VehicleRole)();


using _BasicVehicleContainerLowFrequency__ros_msg_type = ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
  const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: vehicle_role
  {
    cdr_serialize_ros_etsi_its_msgs__msg__VehicleRole(
      &ros_message->vehicle_role, cdr);
  }

  // Field name: exterior_lights
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ExteriorLights(
      &ros_message->exterior_lights, cdr);
  }

  // Field name: path_history
  {
    cdr_serialize_ros_etsi_its_msgs__msg__PathHistory(
      &ros_message->path_history, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * ros_message)
{
  // Field name: vehicle_role
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__VehicleRole(cdr, &ros_message->vehicle_role);
  }

  // Field name: exterior_lights
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ExteriorLights(cdr, &ros_message->exterior_lights);
  }

  // Field name: path_history
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__PathHistory(cdr, &ros_message->path_history);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BasicVehicleContainerLowFrequency__ros_msg_type * ros_message = static_cast<const _BasicVehicleContainerLowFrequency__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: vehicle_role
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__VehicleRole(
    &(ros_message->vehicle_role), current_alignment);

  // Field name: exterior_lights
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ExteriorLights(
    &(ros_message->exterior_lights), current_alignment);

  // Field name: path_history
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__PathHistory(
    &(ros_message->path_history), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
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

  // Field name: vehicle_role
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__VehicleRole(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: exterior_lights
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ExteriorLights(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: path_history
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__PathHistory(
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
    using DataType = ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency;
    is_plain =
      (
      offsetof(DataType, path_history) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
  const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: vehicle_role
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__VehicleRole(
      &ros_message->vehicle_role, cdr);
  }

  // Field name: exterior_lights
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ExteriorLights(
      &ros_message->exterior_lights, cdr);
  }

  // Field name: path_history
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__PathHistory(
      &ros_message->path_history, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BasicVehicleContainerLowFrequency__ros_msg_type * ros_message = static_cast<const _BasicVehicleContainerLowFrequency__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: vehicle_role
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__VehicleRole(
    &(ros_message->vehicle_role), current_alignment);

  // Field name: exterior_lights
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ExteriorLights(
    &(ros_message->exterior_lights), current_alignment);

  // Field name: path_history
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__PathHistory(
    &(ros_message->path_history), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
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
  // Field name: vehicle_role
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__VehicleRole(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: exterior_lights
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ExteriorLights(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: path_history
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__PathHistory(
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
    using DataType = ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * ros_message = static_cast<const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(ros_message, cdr);
}

static bool _BasicVehicleContainerLowFrequency__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * ros_message = static_cast<ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(cdr, ros_message);
}

static uint32_t _BasicVehicleContainerLowFrequency__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
      untyped_ros_message, 0));
}

static size_t _BasicVehicleContainerLowFrequency__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BasicVehicleContainerLowFrequency = {
  "ros_etsi_its_msgs::msg",
  "BasicVehicleContainerLowFrequency",
  _BasicVehicleContainerLowFrequency__cdr_serialize,
  _BasicVehicleContainerLowFrequency__cdr_deserialize,
  _BasicVehicleContainerLowFrequency__get_serialized_size,
  _BasicVehicleContainerLowFrequency__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BasicVehicleContainerLowFrequency__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BasicVehicleContainerLowFrequency,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_type_hash,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_type_description,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, BasicVehicleContainerLowFrequency)() {
  return &_BasicVehicleContainerLowFrequency__type_support;
}

#if defined(__cplusplus)
}
#endif
