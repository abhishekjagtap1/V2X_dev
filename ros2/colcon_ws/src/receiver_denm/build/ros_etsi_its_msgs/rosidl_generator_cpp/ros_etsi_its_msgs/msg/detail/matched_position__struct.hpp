// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/MatchedPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/matched_position.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__MatchedPosition __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__MatchedPosition __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MatchedPosition_
{
  using Type = MatchedPosition_<ContainerAllocator>;

  explicit MatchedPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0;
    }
  }

  explicit MatchedPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0;
    }
  }

  // field types and members
  using _lane_id_type =
    uint8_t;
  _lane_id_type lane_id;

  // setters for named parameter idiom
  Type & set__lane_id(
    const uint8_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__MatchedPosition
    std::shared_ptr<ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__MatchedPosition
    std::shared_ptr<ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MatchedPosition_ & other) const
  {
    if (this->lane_id != other.lane_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MatchedPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MatchedPosition_

// alias to use template instance with default allocator
using MatchedPosition =
  ros_etsi_its_msgs::msg::MatchedPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_HPP_
