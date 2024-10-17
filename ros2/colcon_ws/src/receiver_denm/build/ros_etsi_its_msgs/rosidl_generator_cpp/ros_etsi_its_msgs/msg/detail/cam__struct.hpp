// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/CAM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cam.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__STRUCT_HPP_

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
// Member 'station_type'
#include "ros_etsi_its_msgs/msg/detail/station_type__struct.hpp"
// Member 'reference_position'
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.hpp"
// Member 'high_frequency_container'
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__struct.hpp"
// Member 'low_frequency_container'
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__CAM __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__CAM __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CAM_
{
  using Type = CAM_<ContainerAllocator>;

  explicit CAM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    its_header(_init),
    station_type(_init),
    reference_position(_init),
    high_frequency_container(_init),
    low_frequency_container(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generation_delta_time = 0;
      this->has_low_frequency_container = false;
    }
  }

  explicit CAM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    its_header(_alloc, _init),
    station_type(_alloc, _init),
    reference_position(_alloc, _init),
    high_frequency_container(_alloc, _init),
    low_frequency_container(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->generation_delta_time = 0;
      this->has_low_frequency_container = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _its_header_type =
    ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>;
  _its_header_type its_header;
  using _generation_delta_time_type =
    uint16_t;
  _generation_delta_time_type generation_delta_time;
  using _station_type_type =
    ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>;
  _station_type_type station_type;
  using _reference_position_type =
    ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>;
  _reference_position_type reference_position;
  using _high_frequency_container_type =
    ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator>;
  _high_frequency_container_type high_frequency_container;
  using _has_low_frequency_container_type =
    bool;
  _has_low_frequency_container_type has_low_frequency_container;
  using _low_frequency_container_type =
    ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator>;
  _low_frequency_container_type low_frequency_container;

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
  Type & set__generation_delta_time(
    const uint16_t & _arg)
  {
    this->generation_delta_time = _arg;
    return *this;
  }
  Type & set__station_type(
    const ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> & _arg)
  {
    this->station_type = _arg;
    return *this;
  }
  Type & set__reference_position(
    const ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> & _arg)
  {
    this->reference_position = _arg;
    return *this;
  }
  Type & set__high_frequency_container(
    const ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency_<ContainerAllocator> & _arg)
  {
    this->high_frequency_container = _arg;
    return *this;
  }
  Type & set__has_low_frequency_container(
    const bool & _arg)
  {
    this->has_low_frequency_container = _arg;
    return *this;
  }
  Type & set__low_frequency_container(
    const ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency_<ContainerAllocator> & _arg)
  {
    this->low_frequency_container = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::CAM_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::CAM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::CAM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::CAM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::CAM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::CAM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::CAM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::CAM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::CAM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::CAM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__CAM
    std::shared_ptr<ros_etsi_its_msgs::msg::CAM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__CAM
    std::shared_ptr<ros_etsi_its_msgs::msg::CAM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CAM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->its_header != other.its_header) {
      return false;
    }
    if (this->generation_delta_time != other.generation_delta_time) {
      return false;
    }
    if (this->station_type != other.station_type) {
      return false;
    }
    if (this->reference_position != other.reference_position) {
      return false;
    }
    if (this->high_frequency_container != other.high_frequency_container) {
      return false;
    }
    if (this->has_low_frequency_container != other.has_low_frequency_container) {
      return false;
    }
    if (this->low_frequency_container != other.low_frequency_container) {
      return false;
    }
    return true;
  }
  bool operator!=(const CAM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CAM_

// alias to use template instance with default allocator
using CAM =
  ros_etsi_its_msgs::msg::CAM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__STRUCT_HPP_
