// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/StationType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/station_type.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__StationType __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__StationType __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StationType_
{
  using Type = StationType_<ContainerAllocator>;

  explicit StationType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit StationType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t PEDESTRIAN =
    1u;
  static constexpr uint8_t CYCLIST =
    2u;
  static constexpr uint8_t MOPED =
    3u;
  static constexpr uint8_t MOTORCYCLE =
    4u;
  static constexpr uint8_t PASSENGER_CAR =
    5u;
  static constexpr uint8_t BUS =
    6u;
  static constexpr uint8_t LIGHT_TRUCK =
    7u;
  static constexpr uint8_t HEAVY_TRUCK =
    8u;
  static constexpr uint8_t TRAILER =
    9u;
  static constexpr uint8_t SPECIAL_VEHICLE =
    10u;
  static constexpr uint8_t TRAM =
    11u;
  static constexpr uint8_t ROAD_SIDE_UNIT =
    15u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__StationType
    std::shared_ptr<ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__StationType
    std::shared_ptr<ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StationType_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const StationType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StationType_

// alias to use template instance with default allocator
using StationType =
  ros_etsi_its_msgs::msg::StationType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::MOPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::PASSENGER_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::LIGHT_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::HEAVY_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::SPECIAL_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::TRAM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StationType_<ContainerAllocator>::ROAD_SIDE_UNIT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__STATION_TYPE__STRUCT_HPP_
