// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/ObjectClassDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_class_description.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__ObjectClassDescription __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__ObjectClassDescription __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectClassDescription_
{
  using Type = ObjectClassDescription_<ContainerAllocator>;

  explicit ObjectClassDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
    }
  }

  explicit ObjectClassDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t TYPE_UNKNOWN =
    0;
  static constexpr int32_t TYPE_MOPED =
    1;
  static constexpr int32_t TYPE_MOTORCYCLE =
    2;
  static constexpr int32_t TYPE_PASSENGERCAR =
    3;
  static constexpr int32_t TYPE_BUS =
    3;
  static constexpr int32_t TYPE_LIGHTRUCK =
    3;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ObjectClassDescription
    std::shared_ptr<ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ObjectClassDescription
    std::shared_ptr<ros_etsi_its_msgs::msg::ObjectClassDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectClassDescription_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectClassDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectClassDescription_

// alias to use template instance with default allocator
using ObjectClassDescription =
  ros_etsi_its_msgs::msg::ObjectClassDescription_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ObjectClassDescription_<ContainerAllocator>::TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ObjectClassDescription_<ContainerAllocator>::TYPE_MOPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ObjectClassDescription_<ContainerAllocator>::TYPE_MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ObjectClassDescription_<ContainerAllocator>::TYPE_PASSENGERCAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ObjectClassDescription_<ContainerAllocator>::TYPE_BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ObjectClassDescription_<ContainerAllocator>::TYPE_LIGHTRUCK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__STRUCT_HPP_
