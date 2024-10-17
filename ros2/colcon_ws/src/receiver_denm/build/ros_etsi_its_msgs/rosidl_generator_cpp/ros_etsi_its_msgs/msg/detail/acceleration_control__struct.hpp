// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/AccelerationControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/acceleration_control.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__AccelerationControl __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__AccelerationControl __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelerationControl_
{
  using Type = AccelerationControl_<ContainerAllocator>;

  explicit AccelerationControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit AccelerationControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t BRAKE_PEDAL_ENGAGED =
    1u;
  static constexpr uint8_t GAS_PEDAL_ENGAGED =
    2u;
  static constexpr uint8_t EMERGENCY_BRAKE_ENGAGED =
    4u;
  static constexpr uint8_t COLLISION_WARNING_ENGAGED =
    8u;
  static constexpr uint8_t ACC_ENGAGED =
    16u;
  static constexpr uint8_t CRUISE_CONTROL_ENGAGED =
    32u;
  static constexpr uint8_t SPEED_LIMITER_ENGAGED =
    64u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__AccelerationControl
    std::shared_ptr<ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__AccelerationControl
    std::shared_ptr<ros_etsi_its_msgs::msg::AccelerationControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelerationControl_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelerationControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelerationControl_

// alias to use template instance with default allocator
using AccelerationControl =
  ros_etsi_its_msgs::msg::AccelerationControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AccelerationControl_<ContainerAllocator>::BRAKE_PEDAL_ENGAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AccelerationControl_<ContainerAllocator>::GAS_PEDAL_ENGAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AccelerationControl_<ContainerAllocator>::EMERGENCY_BRAKE_ENGAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AccelerationControl_<ContainerAllocator>::COLLISION_WARNING_ENGAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AccelerationControl_<ContainerAllocator>::ACC_ENGAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AccelerationControl_<ContainerAllocator>::CRUISE_CONTROL_ENGAGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AccelerationControl_<ContainerAllocator>::SPEED_LIMITER_ENGAGED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACCELERATION_CONTROL__STRUCT_HPP_
