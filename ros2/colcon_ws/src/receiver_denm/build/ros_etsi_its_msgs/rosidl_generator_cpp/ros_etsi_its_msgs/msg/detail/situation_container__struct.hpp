// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/SituationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/situation_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'information_quality'
#include "ros_etsi_its_msgs/msg/detail/information_quality__struct.hpp"
// Member 'event_type'
// Member 'linked_cause'
#include "ros_etsi_its_msgs/msg/detail/cause_code__struct.hpp"
// Member 'event_history'
#include "ros_etsi_its_msgs/msg/detail/event_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__SituationContainer __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__SituationContainer __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SituationContainer_
{
  using Type = SituationContainer_<ContainerAllocator>;

  explicit SituationContainer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : information_quality(_init),
    event_type(_init),
    linked_cause(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_linked_cause = false;
    }
  }

  explicit SituationContainer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : information_quality(_alloc, _init),
    event_type(_alloc, _init),
    linked_cause(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_linked_cause = false;
    }
  }

  // field types and members
  using _information_quality_type =
    ros_etsi_its_msgs::msg::InformationQuality_<ContainerAllocator>;
  _information_quality_type information_quality;
  using _event_type_type =
    ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator>;
  _event_type_type event_type;
  using _has_linked_cause_type =
    bool;
  _has_linked_cause_type has_linked_cause;
  using _linked_cause_type =
    ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator>;
  _linked_cause_type linked_cause;
  using _event_history_type =
    std::vector<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>>>;
  _event_history_type event_history;

  // setters for named parameter idiom
  Type & set__information_quality(
    const ros_etsi_its_msgs::msg::InformationQuality_<ContainerAllocator> & _arg)
  {
    this->information_quality = _arg;
    return *this;
  }
  Type & set__event_type(
    const ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator> & _arg)
  {
    this->event_type = _arg;
    return *this;
  }
  Type & set__has_linked_cause(
    const bool & _arg)
  {
    this->has_linked_cause = _arg;
    return *this;
  }
  Type & set__linked_cause(
    const ros_etsi_its_msgs::msg::CauseCode_<ContainerAllocator> & _arg)
  {
    this->linked_cause = _arg;
    return *this;
  }
  Type & set__event_history(
    const std::vector<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>>> & _arg)
  {
    this->event_history = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__SituationContainer
    std::shared_ptr<ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__SituationContainer
    std::shared_ptr<ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SituationContainer_ & other) const
  {
    if (this->information_quality != other.information_quality) {
      return false;
    }
    if (this->event_type != other.event_type) {
      return false;
    }
    if (this->has_linked_cause != other.has_linked_cause) {
      return false;
    }
    if (this->linked_cause != other.linked_cause) {
      return false;
    }
    if (this->event_history != other.event_history) {
      return false;
    }
    return true;
  }
  bool operator!=(const SituationContainer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SituationContainer_

// alias to use template instance with default allocator
using SituationContainer =
  ros_etsi_its_msgs::msg::SituationContainer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__STRUCT_HPP_
