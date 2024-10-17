// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/MAPEM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/mapem.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__struct.hpp"
// Member 'intersections'
#include "ros_etsi_its_msgs/msg/detail/intersections__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__MAPEM __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__MAPEM __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MAPEM_
{
  using Type = MAPEM_<ContainerAllocator>;

  explicit MAPEM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    its_header(_init),
    intersections(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->msg_issue_revision = 0;
    }
  }

  explicit MAPEM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    its_header(_alloc, _init),
    intersections(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->msg_issue_revision = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _its_header_type =
    ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>;
  _its_header_type its_header;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _msg_issue_revision_type =
    uint8_t;
  _msg_issue_revision_type msg_issue_revision;
  using _intersections_type =
    ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator>;
  _intersections_type intersections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__its_header(
    const ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator> & _arg)
  {
    this->its_header = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__msg_issue_revision(
    const uint8_t & _arg)
  {
    this->msg_issue_revision = _arg;
    return *this;
  }
  Type & set__intersections(
    const ros_etsi_its_msgs::msg::Intersections_<ContainerAllocator> & _arg)
  {
    this->intersections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__MAPEM
    std::shared_ptr<ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__MAPEM
    std::shared_ptr<ros_etsi_its_msgs::msg::MAPEM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MAPEM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->its_header != other.its_header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->msg_issue_revision != other.msg_issue_revision) {
      return false;
    }
    if (this->intersections != other.intersections) {
      return false;
    }
    return true;
  }
  bool operator!=(const MAPEM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MAPEM_

// alias to use template instance with default allocator
using MAPEM =
  ros_etsi_its_msgs::msg::MAPEM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MAPEM__STRUCT_HPP_
