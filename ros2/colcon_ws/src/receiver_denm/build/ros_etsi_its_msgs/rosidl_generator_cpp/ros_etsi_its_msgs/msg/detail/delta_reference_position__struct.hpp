// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/DeltaReferencePosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/delta_reference_position.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__DeltaReferencePosition __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__DeltaReferencePosition __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeltaReferencePosition_
{
  using Type = DeltaReferencePosition_<ContainerAllocator>;

  explicit DeltaReferencePosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_latitude = 0l;
      this->delta_longitude = 0l;
      this->delta_altitude = 0;
    }
  }

  explicit DeltaReferencePosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_latitude = 0l;
      this->delta_longitude = 0l;
      this->delta_altitude = 0;
    }
  }

  // field types and members
  using _delta_latitude_type =
    int32_t;
  _delta_latitude_type delta_latitude;
  using _delta_longitude_type =
    int32_t;
  _delta_longitude_type delta_longitude;
  using _delta_altitude_type =
    int16_t;
  _delta_altitude_type delta_altitude;

  // setters for named parameter idiom
  Type & set__delta_latitude(
    const int32_t & _arg)
  {
    this->delta_latitude = _arg;
    return *this;
  }
  Type & set__delta_longitude(
    const int32_t & _arg)
  {
    this->delta_longitude = _arg;
    return *this;
  }
  Type & set__delta_altitude(
    const int16_t & _arg)
  {
    this->delta_altitude = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t ONE_MICRODEGREE_NORTH =
    10;
  static constexpr int32_t ONE_MICRODEGREE_SOUTH =
    -10;
  static constexpr int32_t ONE_MICRODEGREE_EAST =
    10;
  static constexpr int32_t ONE_MICRODEGREE_WEST =
    -10;
  static constexpr int32_t ONE_CENTIMETER_UP =
    1;
  static constexpr int32_t ONE_CENTIMETER_DOWN =
    -1;
  static constexpr int32_t LATITUDE_UNAVAILABLE =
    131072;
  static constexpr int32_t LONGITUDE_UNAVAILABLE =
    131072;
  static constexpr int16_t ALTITUDE_UNAVAILABLE =
    12800;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__DeltaReferencePosition
    std::shared_ptr<ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__DeltaReferencePosition
    std::shared_ptr<ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeltaReferencePosition_ & other) const
  {
    if (this->delta_latitude != other.delta_latitude) {
      return false;
    }
    if (this->delta_longitude != other.delta_longitude) {
      return false;
    }
    if (this->delta_altitude != other.delta_altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeltaReferencePosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeltaReferencePosition_

// alias to use template instance with default allocator
using DeltaReferencePosition =
  ros_etsi_its_msgs::msg::DeltaReferencePosition_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DeltaReferencePosition_<ContainerAllocator>::ONE_MICRODEGREE_NORTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DeltaReferencePosition_<ContainerAllocator>::ONE_MICRODEGREE_SOUTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DeltaReferencePosition_<ContainerAllocator>::ONE_MICRODEGREE_EAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DeltaReferencePosition_<ContainerAllocator>::ONE_MICRODEGREE_WEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DeltaReferencePosition_<ContainerAllocator>::ONE_CENTIMETER_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DeltaReferencePosition_<ContainerAllocator>::ONE_CENTIMETER_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DeltaReferencePosition_<ContainerAllocator>::LATITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t DeltaReferencePosition_<ContainerAllocator>::LONGITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int16_t DeltaReferencePosition_<ContainerAllocator>::ALTITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_HPP_
