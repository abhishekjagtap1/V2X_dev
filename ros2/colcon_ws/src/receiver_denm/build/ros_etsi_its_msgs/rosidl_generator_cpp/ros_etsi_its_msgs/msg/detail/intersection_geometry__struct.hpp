// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersection_geometry.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ref_point'
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.hpp"
// Member 'lane_set'
#include "ros_etsi_its_msgs/msg/detail/generic_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__IntersectionGeometry __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__IntersectionGeometry __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionGeometry_
{
  using Type = IntersectionGeometry_<ContainerAllocator>;

  explicit IntersectionGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ref_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0;
      this->revision = 0;
      this->lane_width = 0;
    }
  }

  explicit IntersectionGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    ref_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0;
      this->revision = 0;
      this->lane_width = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    uint16_t;
  _id_type id;
  using _revision_type =
    uint8_t;
  _revision_type revision;
  using _ref_point_type =
    ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>;
  _ref_point_type ref_point;
  using _lane_width_type =
    uint16_t;
  _lane_width_type lane_width;
  using _lane_set_type =
    std::vector<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>>>;
  _lane_set_type lane_set;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__revision(
    const uint8_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }
  Type & set__ref_point(
    const ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> & _arg)
  {
    this->ref_point = _arg;
    return *this;
  }
  Type & set__lane_width(
    const uint16_t & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__lane_set(
    const std::vector<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>>> & _arg)
  {
    this->lane_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__IntersectionGeometry
    std::shared_ptr<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__IntersectionGeometry
    std::shared_ptr<ros_etsi_its_msgs::msg::IntersectionGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionGeometry_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->ref_point != other.ref_point) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->lane_set != other.lane_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionGeometry_

// alias to use template instance with default allocator
using IntersectionGeometry =
  ros_etsi_its_msgs::msg::IntersectionGeometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_
