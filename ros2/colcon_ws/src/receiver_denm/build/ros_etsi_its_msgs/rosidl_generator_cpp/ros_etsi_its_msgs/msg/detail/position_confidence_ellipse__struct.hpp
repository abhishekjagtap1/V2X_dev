// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/PositionConfidenceEllipse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/position_confidence_ellipse.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__PositionConfidenceEllipse __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__PositionConfidenceEllipse __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionConfidenceEllipse_
{
  using Type = PositionConfidenceEllipse_<ContainerAllocator>;

  explicit PositionConfidenceEllipse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->semi_major_confidence = 0;
      this->semi_minor_confidence = 0;
      this->semi_major_orientation = 0;
    }
  }

  explicit PositionConfidenceEllipse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->semi_major_confidence = 0;
      this->semi_minor_confidence = 0;
      this->semi_major_orientation = 0;
    }
  }

  // field types and members
  using _semi_major_confidence_type =
    uint16_t;
  _semi_major_confidence_type semi_major_confidence;
  using _semi_minor_confidence_type =
    uint16_t;
  _semi_minor_confidence_type semi_minor_confidence;
  using _semi_major_orientation_type =
    uint16_t;
  _semi_major_orientation_type semi_major_orientation;

  // setters for named parameter idiom
  Type & set__semi_major_confidence(
    const uint16_t & _arg)
  {
    this->semi_major_confidence = _arg;
    return *this;
  }
  Type & set__semi_minor_confidence(
    const uint16_t & _arg)
  {
    this->semi_minor_confidence = _arg;
    return *this;
  }
  Type & set__semi_major_orientation(
    const uint16_t & _arg)
  {
    this->semi_major_orientation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t SEMI_AXIS_LENGTH_OUT_OF_RANGE =
    4094u;
  static constexpr uint16_t SEMI_AXIS_LENGTH_UNAVAILABLE =
    4095u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__PositionConfidenceEllipse
    std::shared_ptr<ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__PositionConfidenceEllipse
    std::shared_ptr<ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionConfidenceEllipse_ & other) const
  {
    if (this->semi_major_confidence != other.semi_major_confidence) {
      return false;
    }
    if (this->semi_minor_confidence != other.semi_minor_confidence) {
      return false;
    }
    if (this->semi_major_orientation != other.semi_major_orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionConfidenceEllipse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionConfidenceEllipse_

// alias to use template instance with default allocator
using PositionConfidenceEllipse =
  ros_etsi_its_msgs::msg::PositionConfidenceEllipse_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PositionConfidenceEllipse_<ContainerAllocator>::SEMI_AXIS_LENGTH_OUT_OF_RANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t PositionConfidenceEllipse_<ContainerAllocator>::SEMI_AXIS_LENGTH_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__STRUCT_HPP_
