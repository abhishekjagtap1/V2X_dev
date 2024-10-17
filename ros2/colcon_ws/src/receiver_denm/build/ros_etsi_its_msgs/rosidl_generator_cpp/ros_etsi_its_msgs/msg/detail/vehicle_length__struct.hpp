// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_length.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__VehicleLength __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__VehicleLength __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleLength_
{
  using Type = VehicleLength_<ContainerAllocator>;

  explicit VehicleLength_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      this->confidence_indication = 0;
    }
  }

  explicit VehicleLength_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      this->confidence_indication = 0;
    }
  }

  // field types and members
  using _value_type =
    uint16_t;
  _value_type value;
  using _confidence_indication_type =
    uint8_t;
  _confidence_indication_type confidence_indication;

  // setters for named parameter idiom
  Type & set__value(
    const uint16_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__confidence_indication(
    const uint8_t & _arg)
  {
    this->confidence_indication = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t VALUE_TEN_CENTIMETERS =
    1u;
  static constexpr uint16_t VALUE_OUT_OF_RANGE =
    1022u;
  static constexpr uint16_t VALUE_UNAVAILABLE =
    1023u;
  static constexpr uint8_t CONFIDENCE_INDICATION_NO_TRAILER =
    0u;
  static constexpr uint8_t CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH =
    1u;
  static constexpr uint8_t CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH =
    2u;
  static constexpr uint8_t CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE =
    3u;
  static constexpr uint8_t CONFIDENCE_INDICATION_UNAVAILABLE =
    4u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__VehicleLength
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__VehicleLength
    std::shared_ptr<ros_etsi_its_msgs::msg::VehicleLength_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleLength_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->confidence_indication != other.confidence_indication) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleLength_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleLength_

// alias to use template instance with default allocator
using VehicleLength =
  ros_etsi_its_msgs::msg::VehicleLength_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleLength_<ContainerAllocator>::VALUE_TEN_CENTIMETERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleLength_<ContainerAllocator>::VALUE_OUT_OF_RANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleLength_<ContainerAllocator>::VALUE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleLength_<ContainerAllocator>::CONFIDENCE_INDICATION_NO_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleLength_<ContainerAllocator>::CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleLength_<ContainerAllocator>::CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleLength_<ContainerAllocator>::CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleLength_<ContainerAllocator>::CONFIDENCE_INDICATION_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_HPP_
