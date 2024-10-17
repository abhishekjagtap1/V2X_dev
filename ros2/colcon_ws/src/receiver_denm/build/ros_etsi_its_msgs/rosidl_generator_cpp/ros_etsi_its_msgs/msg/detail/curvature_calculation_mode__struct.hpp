// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/CurvatureCalculationMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/curvature_calculation_mode.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__CurvatureCalculationMode __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__CurvatureCalculationMode __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurvatureCalculationMode_
{
  using Type = CurvatureCalculationMode_<ContainerAllocator>;

  explicit CurvatureCalculationMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit CurvatureCalculationMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t YAW_RATE_USED =
    0u;
  static constexpr uint8_t YAW_RATE_NOT_USED =
    1u;
  static constexpr uint8_t UNAVAILABLE =
    2u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__CurvatureCalculationMode
    std::shared_ptr<ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__CurvatureCalculationMode
    std::shared_ptr<ros_etsi_its_msgs::msg::CurvatureCalculationMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurvatureCalculationMode_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurvatureCalculationMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurvatureCalculationMode_

// alias to use template instance with default allocator
using CurvatureCalculationMode =
  ros_etsi_its_msgs::msg::CurvatureCalculationMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CurvatureCalculationMode_<ContainerAllocator>::YAW_RATE_USED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CurvatureCalculationMode_<ContainerAllocator>::YAW_RATE_NOT_USED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CurvatureCalculationMode_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_HPP_
