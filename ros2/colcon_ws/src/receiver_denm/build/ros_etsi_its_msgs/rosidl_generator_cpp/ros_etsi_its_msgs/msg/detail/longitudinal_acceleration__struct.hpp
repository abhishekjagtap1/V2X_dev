// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/LongitudinalAcceleration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/longitudinal_acceleration.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__LongitudinalAcceleration __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__LongitudinalAcceleration __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LongitudinalAcceleration_
{
  using Type = LongitudinalAcceleration_<ContainerAllocator>;

  explicit LongitudinalAcceleration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      this->confidence = 0;
    }
  }

  explicit LongitudinalAcceleration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      this->confidence = 0;
    }
  }

  // field types and members
  using _value_type =
    int16_t;
  _value_type value;
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__value(
    const int16_t & _arg)
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
  static constexpr int16_t VALUE_UNAVAILABLE =
    161;
  static constexpr uint8_t CONFIDENCE_OUT_OF_RANGE =
    101u;
  static constexpr uint8_t CONFIDENCE_UNAVAILABLE =
    102u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__LongitudinalAcceleration
    std::shared_ptr<ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__LongitudinalAcceleration
    std::shared_ptr<ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LongitudinalAcceleration_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const LongitudinalAcceleration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LongitudinalAcceleration_

// alias to use template instance with default allocator
using LongitudinalAcceleration =
  ros_etsi_its_msgs::msg::LongitudinalAcceleration_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t LongitudinalAcceleration_<ContainerAllocator>::VALUE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LongitudinalAcceleration_<ContainerAllocator>::CONFIDENCE_OUT_OF_RANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LongitudinalAcceleration_<ContainerAllocator>::CONFIDENCE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_HPP_
