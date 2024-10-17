// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/Altitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/altitude.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__Altitude __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__Altitude __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Altitude_
{
  using Type = Altitude_<ContainerAllocator>;

  explicit Altitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
      this->confidence = 0;
    }
  }

  explicit Altitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int32_t VALUE_REFERENCE_ELLIPSOID_SURFACE =
    0;
  static constexpr int32_t VALUE_ONE_CENTIMETER =
    1;
  static constexpr int32_t VALUE_UNAVAILABLE =
    800001;
  static constexpr uint8_t CONFIDENCE_1CM =
    0u;
  static constexpr uint8_t CONFIDENCE_2CM =
    1u;
  static constexpr uint8_t CONFIDENCE_5CM =
    2u;
  static constexpr uint8_t CONFIDENCE_10CM =
    3u;
  static constexpr uint8_t CONFIDENCE_20CM =
    4u;
  static constexpr uint8_t CONFIDENCE_50CM =
    5u;
  static constexpr uint8_t CONFIDENCE_1M =
    6u;
  static constexpr uint8_t CONFIDENCE_2M =
    7u;
  static constexpr uint8_t CONFIDENCE_5M =
    8u;
  static constexpr uint8_t CONFIDENCE_10M =
    9u;
  static constexpr uint8_t CONFIDENCE_20M =
    10u;
  static constexpr uint8_t CONFIDENCE_50M =
    11u;
  static constexpr uint8_t CONFIDENCE_100M =
    12u;
  static constexpr uint8_t CONFIDENCE_200M =
    13u;
  static constexpr uint8_t CONFIDENCE_OUT_OF_RANGE =
    14u;
  static constexpr uint8_t CONFIDENCE_UNAVAILABLE =
    15u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__Altitude
    std::shared_ptr<ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__Altitude
    std::shared_ptr<ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Altitude_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Altitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Altitude_

// alias to use template instance with default allocator
using Altitude =
  ros_etsi_its_msgs::msg::Altitude_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Altitude_<ContainerAllocator>::VALUE_REFERENCE_ELLIPSOID_SURFACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Altitude_<ContainerAllocator>::VALUE_ONE_CENTIMETER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t Altitude_<ContainerAllocator>::VALUE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_1CM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_2CM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_5CM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_10CM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_20CM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_50CM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_1M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_2M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_5M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_10M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_20M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_50M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_100M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_200M;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_OUT_OF_RANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Altitude_<ContainerAllocator>::CONFIDENCE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_HPP_
