// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/ObjectDistanceWithConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_distance_with_confidence.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDistanceWithConfidence_
{
  using Type = ObjectDistanceWithConfidence_<ContainerAllocator>;

  explicit ObjectDistanceWithConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
      this->confidence = 0;
    }
  }

  explicit ObjectDistanceWithConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    int8_t;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__confidence(
    const int8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t CONFIDENCE_CM =
    1;
  static constexpr int8_t CONFIDENCE_M =
    100;
  static constexpr int8_t CONFIDENCE_OUT_OF_RANGE =
    101;
  static constexpr int8_t CONFIDENCE_UNAVAILABLE =
    102;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence
    std::shared_ptr<ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence
    std::shared_ptr<ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDistanceWithConfidence_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDistanceWithConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDistanceWithConfidence_

// alias to use template instance with default allocator
using ObjectDistanceWithConfidence =
  ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObjectDistanceWithConfidence_<ContainerAllocator>::CONFIDENCE_CM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObjectDistanceWithConfidence_<ContainerAllocator>::CONFIDENCE_M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObjectDistanceWithConfidence_<ContainerAllocator>::CONFIDENCE_OUT_OF_RANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ObjectDistanceWithConfidence_<ContainerAllocator>::CONFIDENCE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_HPP_
