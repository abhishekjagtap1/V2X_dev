// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/generic_lane.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'node_list'
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__struct.hpp"
// Member 'connects_to'
#include "ros_etsi_its_msgs/msg/detail/connection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__GenericLane __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__GenericLane __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GenericLane_
{
  using Type = GenericLane_<ContainerAllocator>;

  explicit GenericLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0;
      this->name = "";
      this->ingress_approach = 0;
      this->egress_approach = 0;
      this->lane_direction = 0;
    }
  }

  explicit GenericLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0;
      this->name = "";
      this->ingress_approach = 0;
      this->egress_approach = 0;
      this->lane_direction = 0;
    }
  }

  // field types and members
  using _lane_id_type =
    uint8_t;
  _lane_id_type lane_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _ingress_approach_type =
    uint8_t;
  _ingress_approach_type ingress_approach;
  using _egress_approach_type =
    uint8_t;
  _egress_approach_type egress_approach;
  using _lane_direction_type =
    uint8_t;
  _lane_direction_type lane_direction;
  using _node_list_type =
    std::vector<ros_etsi_its_msgs::msg::NodeSetXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::NodeSetXY_<ContainerAllocator>>>;
  _node_list_type node_list;
  using _connects_to_type =
    std::vector<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>>>;
  _connects_to_type connects_to;

  // setters for named parameter idiom
  Type & set__lane_id(
    const uint8_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__ingress_approach(
    const uint8_t & _arg)
  {
    this->ingress_approach = _arg;
    return *this;
  }
  Type & set__egress_approach(
    const uint8_t & _arg)
  {
    this->egress_approach = _arg;
    return *this;
  }
  Type & set__lane_direction(
    const uint8_t & _arg)
  {
    this->lane_direction = _arg;
    return *this;
  }
  Type & set__node_list(
    const std::vector<ros_etsi_its_msgs::msg::NodeSetXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::NodeSetXY_<ContainerAllocator>>> & _arg)
  {
    this->node_list = _arg;
    return *this;
  }
  Type & set__connects_to(
    const std::vector<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>>> & _arg)
  {
    this->connects_to = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__GenericLane
    std::shared_ptr<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__GenericLane
    std::shared_ptr<ros_etsi_its_msgs::msg::GenericLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenericLane_ & other) const
  {
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->ingress_approach != other.ingress_approach) {
      return false;
    }
    if (this->egress_approach != other.egress_approach) {
      return false;
    }
    if (this->lane_direction != other.lane_direction) {
      return false;
    }
    if (this->node_list != other.node_list) {
      return false;
    }
    if (this->connects_to != other.connects_to) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenericLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenericLane_

// alias to use template instance with default allocator
using GenericLane =
  ros_etsi_its_msgs::msg::GenericLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_
