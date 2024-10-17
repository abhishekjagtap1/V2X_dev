// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/Intersections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersections.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'intersects'
#include "ros_etsi_its_msgs/msg/detail/intersection_geometry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__Intersections __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__Intersections __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Intersections_
{
  using Type = Intersections_<ContainerAllocator>;

  explicit Intersections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Intersections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _intersects_type =
    std::vector<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>>>;
  _intersects_type intersects;

  // setters for named parameter idiom
  Type & set__intersects(
    const std::vector<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>>> & _arg)
  {
    this->intersects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__Intersections
    std::shared_ptr<ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__Intersections
    std::shared_ptr<ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Intersections_ & other) const
  {
    if (this->intersects != other.intersects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Intersections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Intersections_

// alias to use template instance with default allocator
using Intersections =
  ros_etsi_its_msgs::msg::Intersections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__STRUCT_HPP_
