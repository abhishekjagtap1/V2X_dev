// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/Curvature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/curvature.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__Curvature __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__Curvature __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Curvature_
{
  using Type = Curvature_<ContainerAllocator>;

  explicit Curvature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      this->confidence = 0;
    }
  }

  explicit Curvature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int16_t VALUE_RIGHTMOST =
    -1023;
  static constexpr int16_t VALUE_LEFTMOST =
    1022;
  static constexpr int16_t VALUE_MIN =
    -1023;
  static constexpr int16_t VALUE_MAX =
    1022;
  static constexpr int16_t VALUE_STRAIGHT =
    0;
  static constexpr int16_t VALUE_UNAVAILABLE =
    1023;
  static constexpr uint8_t CONFIDENCE_OUT_OF_RANGE =
    6u;
  static constexpr uint8_t CONFIDENCE_UNAVAILABLE =
    7u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__Curvature
    std::shared_ptr<ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__Curvature
    std::shared_ptr<ros_etsi_its_msgs::msg::Curvature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Curvature_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Curvature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Curvature_

// alias to use template instance with default allocator
using Curvature =
  ros_etsi_its_msgs::msg::Curvature_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t Curvature_<ContainerAllocator>::VALUE_RIGHTMOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t Curvature_<ContainerAllocator>::VALUE_LEFTMOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t Curvature_<ContainerAllocator>::VALUE_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t Curvature_<ContainerAllocator>::VALUE_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t Curvature_<ContainerAllocator>::VALUE_STRAIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t Curvature_<ContainerAllocator>::VALUE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Curvature_<ContainerAllocator>::CONFIDENCE_OUT_OF_RANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Curvature_<ContainerAllocator>::CONFIDENCE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__STRUCT_HPP_
