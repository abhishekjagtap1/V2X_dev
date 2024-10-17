// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/DENM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/denm.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__STRUCT_HPP_

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
// Member 'management'
#include "ros_etsi_its_msgs/msg/detail/management_container__struct.hpp"
// Member 'situation'
#include "ros_etsi_its_msgs/msg/detail/situation_container__struct.hpp"
// Member 'location'
#include "ros_etsi_its_msgs/msg/detail/location_container__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__DENM __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__DENM __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DENM_
{
  using Type = DENM_<ContainerAllocator>;

  explicit DENM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    its_header(_init),
    management(_init),
    situation(_init),
    location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_situation = false;
      this->has_location = false;
    }
  }

  explicit DENM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    its_header(_alloc, _init),
    management(_alloc, _init),
    situation(_alloc, _init),
    location(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_situation = false;
      this->has_location = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _its_header_type =
    ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>;
  _its_header_type its_header;
  using _management_type =
    ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator>;
  _management_type management;
  using _has_situation_type =
    bool;
  _has_situation_type has_situation;
  using _situation_type =
    ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator>;
  _situation_type situation;
  using _has_location_type =
    bool;
  _has_location_type has_location;
  using _location_type =
    ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator>;
  _location_type location;

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
  Type & set__management(
    const ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator> & _arg)
  {
    this->management = _arg;
    return *this;
  }
  Type & set__has_situation(
    const bool & _arg)
  {
    this->has_situation = _arg;
    return *this;
  }
  Type & set__situation(
    const ros_etsi_its_msgs::msg::SituationContainer_<ContainerAllocator> & _arg)
  {
    this->situation = _arg;
    return *this;
  }
  Type & set__has_location(
    const bool & _arg)
  {
    this->has_location = _arg;
    return *this;
  }
  Type & set__location(
    const ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::DENM_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::DENM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::DENM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::DENM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::DENM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::DENM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::DENM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::DENM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::DENM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::DENM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__DENM
    std::shared_ptr<ros_etsi_its_msgs::msg::DENM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__DENM
    std::shared_ptr<ros_etsi_its_msgs::msg::DENM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DENM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->its_header != other.its_header) {
      return false;
    }
    if (this->management != other.management) {
      return false;
    }
    if (this->has_situation != other.has_situation) {
      return false;
    }
    if (this->situation != other.situation) {
      return false;
    }
    if (this->has_location != other.has_location) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const DENM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DENM_

// alias to use template instance with default allocator
using DENM =
  ros_etsi_its_msgs::msg::DENM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DENM__STRUCT_HPP_
