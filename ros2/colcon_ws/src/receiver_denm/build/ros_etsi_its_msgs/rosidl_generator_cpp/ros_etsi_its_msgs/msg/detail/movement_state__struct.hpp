// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/movement_state.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state_time_speed'
#include "ros_etsi_its_msgs/msg/detail/movement_event__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__MovementState __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__MovementState __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementState_
{
  using Type = MovementState_<ContainerAllocator>;

  explicit MovementState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal_group = 0;
    }
  }

  explicit MovementState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal_group = 0;
    }
  }

  // field types and members
  using _signal_group_type =
    uint8_t;
  _signal_group_type signal_group;
  using _state_time_speed_type =
    std::vector<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>>>;
  _state_time_speed_type state_time_speed;

  // setters for named parameter idiom
  Type & set__signal_group(
    const uint8_t & _arg)
  {
    this->signal_group = _arg;
    return *this;
  }
  Type & set__state_time_speed(
    const std::vector<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>>> & _arg)
  {
    this->state_time_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__MovementState
    std::shared_ptr<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__MovementState
    std::shared_ptr<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementState_ & other) const
  {
    if (this->signal_group != other.signal_group) {
      return false;
    }
    if (this->state_time_speed != other.state_time_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementState_

// alias to use template instance with default allocator
using MovementState =
  ros_etsi_its_msgs::msg::MovementState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_HPP_
