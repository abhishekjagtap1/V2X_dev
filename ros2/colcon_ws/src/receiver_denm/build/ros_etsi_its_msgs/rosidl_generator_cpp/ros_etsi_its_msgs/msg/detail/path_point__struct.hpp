// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/path_point.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path_position'
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__struct.hpp"
// Member 'path_delta_time'
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__PathPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__PathPoint __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPoint_
{
  using Type = PathPoint_<ContainerAllocator>;

  explicit PathPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path_position(_init),
    path_delta_time(_init)
  {
    (void)_init;
  }

  explicit PathPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path_position(_alloc, _init),
    path_delta_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _path_position_type =
    ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator>;
  _path_position_type path_position;
  using _path_delta_time_type =
    ros_etsi_its_msgs::msg::PathDeltaTime_<ContainerAllocator>;
  _path_delta_time_type path_delta_time;

  // setters for named parameter idiom
  Type & set__path_position(
    const ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator> & _arg)
  {
    this->path_position = _arg;
    return *this;
  }
  Type & set__path_delta_time(
    const ros_etsi_its_msgs::msg::PathDeltaTime_<ContainerAllocator> & _arg)
  {
    this->path_delta_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__PathPoint
    std::shared_ptr<ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__PathPoint
    std::shared_ptr<ros_etsi_its_msgs::msg::PathPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPoint_ & other) const
  {
    if (this->path_position != other.path_position) {
      return false;
    }
    if (this->path_delta_time != other.path_delta_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPoint_

// alias to use template instance with default allocator
using PathPoint =
  ros_etsi_its_msgs::msg::PathPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
