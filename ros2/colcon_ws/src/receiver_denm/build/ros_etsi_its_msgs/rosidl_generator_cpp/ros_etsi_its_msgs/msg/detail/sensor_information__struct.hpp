// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/SensorInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/sensor_information.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'detection_area'
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__SensorInformation __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__SensorInformation __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorInformation_
{
  using Type = SensorInformation_<ContainerAllocator>;

  explicit SensorInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection_area(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0;
      this->type = 0;
    }
  }

  explicit SensorInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection_area(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_id = 0;
      this->type = 0;
    }
  }

  // field types and members
  using _sensor_id_type =
    uint8_t;
  _sensor_id_type sensor_id;
  using _type_type =
    int8_t;
  _type_type type;
  using _detection_area_type =
    ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator>;
  _detection_area_type detection_area;

  // setters for named parameter idiom
  Type & set__sensor_id(
    const uint8_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__type(
    const int8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__detection_area(
    const ros_etsi_its_msgs::msg::VehicleSensor_<ContainerAllocator> & _arg)
  {
    this->detection_area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__SensorInformation
    std::shared_ptr<ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__SensorInformation
    std::shared_ptr<ros_etsi_its_msgs::msg::SensorInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorInformation_ & other) const
  {
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->detection_area != other.detection_area) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorInformation_

// alias to use template instance with default allocator
using SensorInformation =
  ros_etsi_its_msgs::msg::SensorInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_HPP_
