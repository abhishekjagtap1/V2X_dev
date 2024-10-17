// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/ReferencePosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/reference_position.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position_confidence'
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__struct.hpp"
// Member 'altitude'
#include "ros_etsi_its_msgs/msg/detail/altitude__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__ReferencePosition __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__ReferencePosition __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReferencePosition_
{
  using Type = ReferencePosition_<ContainerAllocator>;

  explicit ReferencePosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_confidence(_init),
    altitude(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0ll;
      this->longitude = 0ll;
    }
  }

  explicit ReferencePosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_confidence(_alloc, _init),
    altitude(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0ll;
      this->longitude = 0ll;
    }
  }

  // field types and members
  using _latitude_type =
    int64_t;
  _latitude_type latitude;
  using _longitude_type =
    int64_t;
  _longitude_type longitude;
  using _position_confidence_type =
    ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator>;
  _position_confidence_type position_confidence;
  using _altitude_type =
    ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator>;
  _altitude_type altitude;

  // setters for named parameter idiom
  Type & set__latitude(
    const int64_t & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const int64_t & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__position_confidence(
    const ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator> & _arg)
  {
    this->position_confidence = _arg;
    return *this;
  }
  Type & set__altitude(
    const ros_etsi_its_msgs::msg::Altitude_<ContainerAllocator> & _arg)
  {
    this->altitude = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int64_t LATITUDE_UNAVAILABLE =
    900000001;
  static constexpr int64_t LONGITUDE_UNAVAILABLE =
    1800000001;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ReferencePosition
    std::shared_ptr<ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ReferencePosition
    std::shared_ptr<ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReferencePosition_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->position_confidence != other.position_confidence) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReferencePosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReferencePosition_

// alias to use template instance with default allocator
using ReferencePosition =
  ros_etsi_its_msgs::msg::ReferencePosition_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t ReferencePosition_<ContainerAllocator>::LATITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t ReferencePosition_<ContainerAllocator>::LONGITUDE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__STRUCT_HPP_
