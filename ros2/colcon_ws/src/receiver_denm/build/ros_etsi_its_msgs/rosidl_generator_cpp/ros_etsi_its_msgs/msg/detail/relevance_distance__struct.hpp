// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/RelevanceDistance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/relevance_distance.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__RelevanceDistance __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__RelevanceDistance __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelevanceDistance_
{
  using Type = RelevanceDistance_<ContainerAllocator>;

  explicit RelevanceDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit RelevanceDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t LESS_THAN_50M =
    0u;
  static constexpr uint8_t LESS_THAN_100M =
    1u;
  static constexpr uint8_t LESS_THAN_200M =
    2u;
  static constexpr uint8_t LESS_THAN_500M =
    3u;
  static constexpr uint8_t LESS_THAN_1000M =
    4u;
  static constexpr uint8_t LESS_THAN_5KM =
    5u;
  static constexpr uint8_t LESS_THAN_10KM =
    6u;
  static constexpr uint8_t OVER_10KM =
    7u;
  static constexpr uint8_t UNAVAILABLE =
    255u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__RelevanceDistance
    std::shared_ptr<ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__RelevanceDistance
    std::shared_ptr<ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelevanceDistance_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelevanceDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelevanceDistance_

// alias to use template instance with default allocator
using RelevanceDistance =
  ros_etsi_its_msgs::msg::RelevanceDistance_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::LESS_THAN_50M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::LESS_THAN_100M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::LESS_THAN_200M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::LESS_THAN_500M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::LESS_THAN_1000M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::LESS_THAN_5KM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::LESS_THAN_10KM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::OVER_10KM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RelevanceDistance_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_HPP_
