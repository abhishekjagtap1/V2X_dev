// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/connection.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__Connection __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__Connection __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Connection_
{
  using Type = Connection_<ContainerAllocator>;

  explicit Connection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connecting_lane = 0;
      this->remote_intersection = 0;
      this->signal_group = 0;
      this->connection_id = 0;
    }
  }

  explicit Connection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connecting_lane = 0;
      this->remote_intersection = 0;
      this->signal_group = 0;
      this->connection_id = 0;
    }
  }

  // field types and members
  using _connecting_lane_type =
    uint16_t;
  _connecting_lane_type connecting_lane;
  using _remote_intersection_type =
    uint16_t;
  _remote_intersection_type remote_intersection;
  using _signal_group_type =
    uint8_t;
  _signal_group_type signal_group;
  using _connection_id_type =
    uint8_t;
  _connection_id_type connection_id;

  // setters for named parameter idiom
  Type & set__connecting_lane(
    const uint16_t & _arg)
  {
    this->connecting_lane = _arg;
    return *this;
  }
  Type & set__remote_intersection(
    const uint16_t & _arg)
  {
    this->remote_intersection = _arg;
    return *this;
  }
  Type & set__signal_group(
    const uint8_t & _arg)
  {
    this->signal_group = _arg;
    return *this;
  }
  Type & set__connection_id(
    const uint8_t & _arg)
  {
    this->connection_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::Connection_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::Connection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__Connection
    std::shared_ptr<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__Connection
    std::shared_ptr<ros_etsi_its_msgs::msg::Connection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connection_ & other) const
  {
    if (this->connecting_lane != other.connecting_lane) {
      return false;
    }
    if (this->remote_intersection != other.remote_intersection) {
      return false;
    }
    if (this->signal_group != other.signal_group) {
      return false;
    }
    if (this->connection_id != other.connection_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connection_

// alias to use template instance with default allocator
using Connection =
  ros_etsi_its_msgs::msg::Connection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CONNECTION__STRUCT_HPP_
