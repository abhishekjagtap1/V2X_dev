// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleRole.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_role.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__VehicleRole __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__VehicleRole __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleRole_
{
  using Type = VehicleRole_<ContainerAllocator>;

  explicit VehicleRole_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit VehicleRole_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t DEFAULT =
    0u;
  static constexpr uint8_t PUBLIC_TRANSPORT =
    1u;
  static constexpr uint8_t SPECIAL_TRANSPORT =
    2u;
  static constexpr uint8_t DANGEROUS_GOODS =
    3u;
  static constexpr uint8_t ROAD_WORK =
    4u;
  static constexpr uint8_t RESCUE =
    5u;
  static constexpr uint8_t EMERGENCY =
    6u;
  static constexpr uint8_t SAFETY_CAR =
    7u;
  static constexpr uint8_t AGRICULTURE =
    8u;
  static constexpr uint8_t COMMERCIAL =
    9u;
  static constexpr uint8_t MILITARY =
    10u;
  static constexpr uint8_t ROAD_OPERATOR =
    11u;
  static constexpr uint8_t TAXI =
    12u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__VehicleRole
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__VehicleRole
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleRole_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleRole_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleRole_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleRole_

// alias to use template instance with default allocator
using VehicleRole =
  ros_etsi_its_msgs::msg::VehicleRole_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::PUBLIC_TRANSPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::SPECIAL_TRANSPORT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::DANGEROUS_GOODS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::ROAD_WORK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::RESCUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::EMERGENCY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::SAFETY_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::AGRICULTURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::COMMERCIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::MILITARY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::ROAD_OPERATOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleRole_<ContainerAllocator>::TAXI;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_ROLE__STRUCT_HPP_
