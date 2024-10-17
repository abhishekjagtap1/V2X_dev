// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersection_state.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'states'
#include "ros_etsi_its_msgs/msg/detail/movement_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__IntersectionState __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__IntersectionState __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionState_
{
  using Type = IntersectionState_<ContainerAllocator>;

  explicit IntersectionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->revision = 0;
      this->status = 0;
    }
  }

  explicit IntersectionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->revision = 0;
      this->status = 0;
    }
  }

  // field types and members
  using _id_type =
    uint16_t;
  _id_type id;
  using _revision_type =
    uint8_t;
  _revision_type revision;
  using _status_type =
    uint16_t;
  _status_type status;
  using _states_type =
    std::vector<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>>>;
  _states_type states;

  // setters for named parameter idiom
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
  Type & set__status(
    const uint16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__states(
    const std::vector<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::MovementState_<ContainerAllocator>>> & _arg)
  {
    this->states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__IntersectionState
    std::shared_ptr<ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__IntersectionState
    std::shared_ptr<ros_etsi_its_msgs::msg::IntersectionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionState_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionState_

// alias to use template instance with default allocator
using IntersectionState =
  ros_etsi_its_msgs::msg::IntersectionState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_
