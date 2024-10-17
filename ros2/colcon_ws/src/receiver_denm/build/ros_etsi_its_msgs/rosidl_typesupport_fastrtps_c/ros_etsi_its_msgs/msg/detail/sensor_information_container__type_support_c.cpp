// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/SensorInformationContainer.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__struct.h"
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__functions.h"
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

#include "ros_etsi_its_msgs/msg/detail/sensor_information__functions.h"  // sensors_information

// forward declare type support functions

bool cdr_serialize_ros_etsi_its_msgs__msg__SensorInformation(
  const ros_etsi_its_msgs__msg__SensorInformation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__SensorInformation(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__SensorInformation * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__SensorInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__SensorInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__SensorInformation(
  const ros_etsi_its_msgs__msg__SensorInformation * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, SensorInformation)();


using _SensorInformationContainer__ros_msg_type = ros_etsi_its_msgs__msg__SensorInformationContainer;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__SensorInformationContainer(
  const ros_etsi_its_msgs__msg__SensorInformationContainer * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: sensors_information
  {
    size_t size = ros_message->sensors_information.size;
    auto array_ptr = ros_message->sensors_information.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_ros_etsi_its_msgs__msg__SensorInformation(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__SensorInformationContainer(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__SensorInformationContainer * ros_message)
{
  // Field name: sensors_information
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sensors_information.data) {
      ros_etsi_its_msgs__msg__SensorInformation__Sequence__fini(&ros_message->sensors_information);
    }
    if (!ros_etsi_its_msgs__msg__SensorInformation__Sequence__init(&ros_message->sensors_information, size)) {
      fprintf(stderr, "failed to create array for field 'sensors_information'");
      return false;
    }
    auto array_ptr = ros_message->sensors_information.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_ros_etsi_its_msgs__msg__SensorInformation(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__SensorInformationContainer(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorInformationContainer__ros_msg_type * ros_message = static_cast<const _SensorInformationContainer__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: sensors_information
  {
    size_t array_size = ros_message->sensors_information.size;
    auto array_ptr = ros_message->sensors_information.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__SensorInformation(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__SensorInformationContainer(
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

  // Field name: sensors_information
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
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__SensorInformation(
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
    using DataType = ros_etsi_its_msgs__msg__SensorInformationContainer;
    is_plain =
      (
      offsetof(DataType, sensors_information) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
  const ros_etsi_its_msgs__msg__SensorInformationContainer * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: sensors_information
  {
    size_t size = ros_message->sensors_information.size;
    auto array_ptr = ros_message->sensors_information.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_ros_etsi_its_msgs__msg__SensorInformation(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorInformationContainer__ros_msg_type * ros_message = static_cast<const _SensorInformationContainer__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: sensors_information
  {
    size_t array_size = ros_message->sensors_information.size;
    auto array_ptr = ros_message->sensors_information.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformation(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
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
  // Field name: sensors_information
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
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformation(
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
    using DataType = ros_etsi_its_msgs__msg__SensorInformationContainer;
    is_plain =
      (
      offsetof(DataType, sensors_information) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SensorInformationContainer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__SensorInformationContainer * ros_message = static_cast<const ros_etsi_its_msgs__msg__SensorInformationContainer *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__SensorInformationContainer(ros_message, cdr);
}

static bool _SensorInformationContainer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__SensorInformationContainer * ros_message = static_cast<ros_etsi_its_msgs__msg__SensorInformationContainer *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__SensorInformationContainer(cdr, ros_message);
}

static uint32_t _SensorInformationContainer__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__SensorInformationContainer(
      untyped_ros_message, 0));
}

static size_t _SensorInformationContainer__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__SensorInformationContainer(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorInformationContainer = {
  "ros_etsi_its_msgs::msg",
  "SensorInformationContainer",
  _SensorInformationContainer__cdr_serialize,
  _SensorInformationContainer__cdr_deserialize,
  _SensorInformationContainer__get_serialized_size,
  _SensorInformationContainer__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SensorInformationContainer__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorInformationContainer,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__SensorInformationContainer__get_type_hash,
  &ros_etsi_its_msgs__msg__SensorInformationContainer__get_type_description,
  &ros_etsi_its_msgs__msg__SensorInformationContainer__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, SensorInformationContainer)() {
  return &_SensorInformationContainer__type_support;
}

#if defined(__cplusplus)
}
#endif
