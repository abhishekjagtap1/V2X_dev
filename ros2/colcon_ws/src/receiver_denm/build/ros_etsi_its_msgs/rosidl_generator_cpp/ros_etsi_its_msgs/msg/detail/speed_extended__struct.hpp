// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/SpeedExtended.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/speed_extended.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__SpeedExtended __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__SpeedExtended __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedExtended_
{
  using Type = SpeedExtended_<ContainerAllocator>;

  explicit SpeedExtended_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
      this->confidence = 0;
    }
  }

  explicit SpeedExtended_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
      this->confidence = 0;
    }
  }

  // field types and members
  using _value_type =
    int32_t;
  _value_type value;
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t VALUE_STANDSTILL =
    0;
  static constexpr int32_t VALUE_ONE_CENTIMETER_PER_SECOND =
    1;
  static constexpr int32_t VALUE_UNAVAILABLE =
    16383;
  static constexpr uint8_t CONFIDENCE_OUT_OF_RANGE =
    126u;
  static constexpr uint8_t CONFIDENCE_UNAVAILABLE =
    127u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__SpeedExtended
    std::shared_ptr<ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__SpeedExtended
    std::shared_ptr<ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedExtended_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedExtended_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedExtended_

// alias to use template instance with default allocator
using SpeedExtended =
  ros_etsi_its_msgs::msg::SpeedExtended_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SpeedExtended_<ContainerAllocator>::VALUE_STANDSTILL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SpeedExtended_<ContainerAllocator>::VALUE_ONE_CENTIMETER_PER_SECOND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SpeedExtended_<ContainerAllocator>::VALUE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedExtended_<ContainerAllocator>::CONFIDENCE_OUT_OF_RANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedExtended_<ContainerAllocator>::CONFIDENCE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_HPP_
