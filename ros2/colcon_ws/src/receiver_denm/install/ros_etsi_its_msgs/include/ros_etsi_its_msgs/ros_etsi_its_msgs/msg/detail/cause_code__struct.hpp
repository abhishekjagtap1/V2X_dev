// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/CauseCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cause_code.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__CauseCode __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__CauseCode __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CauseCode_
{
  using Type = CauseCode_<ContainerAllocator>;

  explicit CauseCode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cause_code = 0;
      this->sub_cause_code = 0;
    }
  }

  explicit CauseCode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cause_code = 0;
      this->sub_cause_code = 0;
    }
  }

  // field types and members
  using _cause_code_type =
    uint8_t;
  _cause_code_type cause_code;
  using _sub_cause_code_type =
    uint8_t;
  _sub_cause_code_type sub_cause_code;

  // setters for named parameter idiom
  Type & set__cause_code(
    const uint8_t & _arg)
  {
    this->cause_code = _arg;
    return *this;
  }
  Type & set__sub_cause_code(
    const uint8_t & _arg)
  {
    this->sub_cause_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESERVED =
    0u;
  static constexpr uint8_t TRAFFIC_CONDITION =
    1u;
  static constexpr uint8_t ACCIDENT =
    2u;
  static constexpr uint8_t ROADWORKS =
    3u;
  static constexpr uint8_t ADVERSE_WEATHER_CONDITIONS_ADHESION =
    4u;
  static constexpr uint8_t HAZARDOUS_LOCATION_SURFACE_CONDITION =
    9u;
  static constexpr uint8_t HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD =
    10u;
  static constexpr uint8_t HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD =
    11u;
  static constexpr uint8_t HUMAN_PRESENCE_ON_THE_ROAD =
    12u;
  static constexpr uint8_t WRONG_WAY_DRIVING =
    14u;
  static constexpr uint8_t RESCUE_AND_RECOVERY_WORK_IN_PROGRESS =
    15u;
  static constexpr uint8_t ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION =
    17u;
  static constexpr uint8_t ADVERSE_WEATHER_CONDITIONS_VISIBILITY =
    18u;
  static constexpr uint8_t ADVERSE_WEATHER_CONDITIONS_PRECIPITATION =
    19u;
  static constexpr uint8_t SLOW_VEHICLE =
    26u;
  static constexpr uint8_t DANGEROUS_END_OF_QUEUE =
    27u;
  static constexpr uint8_t VEHICLE_BREAKDOWN =
    91u;
  static constexpr uint8_t POST_CRASH =
    92u;
  static constexpr uint8_t HUMAN_PROBLEM =
    93u;
  static constexpr uint8_t STATIONARY_VEHICLE =
    94u;
  static constexpr uint8_t EMERGENCY_VEHICLE_APPROACHING =
    95u;
  static constexpr uint8_t HAZARDOUS_LOCATION_DANGEROUS_CURVE =
    96u;
  static constexpr uint8_t COLLISION_RISK =
    97u;
  static constexpr uint8_t SIGNAL_VIOLATION =
    98u;
  static constexpr uint8_t DANGEROUS_SITUATION =
    99u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__CauseCode
    std::shared_ptr<ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__CauseCode
    std::shared_ptr<ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CauseCode_ & other) const
  {
    if (this->cause_code != other.cause_code) {
      return false;
    }
    if (this->sub_cause_code != other.sub_cause_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const CauseCode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CauseCode_

// alias to use template instance with default allocator
using CauseCode =
  ros_etsi_its_msgs::msg::CauseCode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::RESERVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::TRAFFIC_CONDITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::ACCIDENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::ROADWORKS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::ADVERSE_WEATHER_CONDITIONS_ADHESION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::HAZARDOUS_LOCATION_SURFACE_CONDITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::HUMAN_PRESENCE_ON_THE_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::WRONG_WAY_DRIVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::RESCUE_AND_RECOVERY_WORK_IN_PROGRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::ADVERSE_WEATHER_CONDITIONS_EXTREME_WEATHER_CONDITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::ADVERSE_WEATHER_CONDITIONS_VISIBILITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::ADVERSE_WEATHER_CONDITIONS_PRECIPITATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::SLOW_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::DANGEROUS_END_OF_QUEUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::VEHICLE_BREAKDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::POST_CRASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::HUMAN_PROBLEM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::STATIONARY_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::EMERGENCY_VEHICLE_APPROACHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::HAZARDOUS_LOCATION_DANGEROUS_CURVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::COLLISION_RISK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::SIGNAL_VIOLATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CauseCode_<ContainerAllocator>::DANGEROUS_SITUATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__STRUCT_HPP_
