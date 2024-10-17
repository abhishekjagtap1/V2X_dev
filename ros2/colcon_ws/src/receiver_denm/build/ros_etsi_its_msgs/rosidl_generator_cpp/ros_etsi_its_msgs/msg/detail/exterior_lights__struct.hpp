// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/ExteriorLights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/exterior_lights.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__ExteriorLights __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__ExteriorLights __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExteriorLights_
{
  using Type = ExteriorLights_<ContainerAllocator>;

  explicit ExteriorLights_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit ExteriorLights_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LOW_BEAM_HEADLIGHTS =
    1u;
  static constexpr uint8_t HIGH_BEAM_HEADLIGHTS =
    2u;
  static constexpr uint8_t LEFT_TURN_SIGNAL =
    4u;
  static constexpr uint8_t RIGHT_TURN_SIGNAL =
    8u;
  static constexpr uint8_t DAYTIME_RUNNING_LIGHTS =
    16u;
  static constexpr uint8_t REVERSE_LIGHT =
    32u;
  static constexpr uint8_t FOG_LIGHT =
    64u;
  static constexpr uint8_t PARKING_LIGHTS =
    128u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ExteriorLights
    std::shared_ptr<ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ExteriorLights
    std::shared_ptr<ros_etsi_its_msgs::msg::ExteriorLights_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExteriorLights_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExteriorLights_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExteriorLights_

// alias to use template instance with default allocator
using ExteriorLights =
  ros_etsi_its_msgs::msg::ExteriorLights_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExteriorLights_<ContainerAllocator>::LOW_BEAM_HEADLIGHTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExteriorLights_<ContainerAllocator>::HIGH_BEAM_HEADLIGHTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExteriorLights_<ContainerAllocator>::LEFT_TURN_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExteriorLights_<ContainerAllocator>::RIGHT_TURN_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExteriorLights_<ContainerAllocator>::DAYTIME_RUNNING_LIGHTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExteriorLights_<ContainerAllocator>::REVERSE_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExteriorLights_<ContainerAllocator>::FOG_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ExteriorLights_<ContainerAllocator>::PARKING_LIGHTS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_HPP_
