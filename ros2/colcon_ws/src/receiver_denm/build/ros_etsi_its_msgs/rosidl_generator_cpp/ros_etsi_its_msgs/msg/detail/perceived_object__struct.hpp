// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/perceived_object.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_of_detection'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'x_distance'
// Member 'y_distance'
// Member 'z_distance'
#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__struct.hpp"
// Member 'x_speed'
// Member 'y_speed'
// Member 'z_speed'
#include "ros_etsi_its_msgs/msg/detail/speed_extended__struct.hpp"
// Member 'x_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__struct.hpp"
// Member 'y_acceleration'
#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__struct.hpp"
// Member 'planar_object_dimension1'
// Member 'planar_object_dimension2'
// Member 'vertical_object_dimension'
#include "ros_etsi_its_msgs/msg/detail/object_dimension__struct.hpp"
// Member 'object_ref_point'
#include "ros_etsi_its_msgs/msg/detail/object_ref_point__struct.hpp"
// Member 'dynamic_status'
#include "ros_etsi_its_msgs/msg/detail/dynamic_status__struct.hpp"
// Member 'classification'
#include "ros_etsi_its_msgs/msg/detail/station_type__struct.hpp"
// Member 'matched_position'
#include "ros_etsi_its_msgs/msg/detail/matched_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__PerceivedObject __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__PerceivedObject __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceivedObject_
{
  using Type = PerceivedObject_<ContainerAllocator>;

  explicit PerceivedObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_of_detection(_init),
    x_distance(_init),
    y_distance(_init),
    z_distance(_init),
    x_speed(_init),
    y_speed(_init),
    z_speed(_init),
    x_acceleration(_init),
    y_acceleration(_init),
    planar_object_dimension1(_init),
    planar_object_dimension2(_init),
    vertical_object_dimension(_init),
    object_ref_point(_init),
    dynamic_status(_init),
    classification(_init),
    matched_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0;
      this->has_sensor_id_list = false;
      this->time_of_measurement = 0l;
      this->object_age = 0l;
      this->object_confidence = 0l;
      this->has_planar_object_dimension1 = false;
      this->has_planar_object_dimension2 = false;
      this->has_vertical_object_dimension = false;
      this->object_angle = 0.0f;
    }
  }

  explicit PerceivedObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_of_detection(_alloc, _init),
    x_distance(_alloc, _init),
    y_distance(_alloc, _init),
    z_distance(_alloc, _init),
    x_speed(_alloc, _init),
    y_speed(_alloc, _init),
    z_speed(_alloc, _init),
    x_acceleration(_alloc, _init),
    y_acceleration(_alloc, _init),
    planar_object_dimension1(_alloc, _init),
    planar_object_dimension2(_alloc, _init),
    vertical_object_dimension(_alloc, _init),
    object_ref_point(_alloc, _init),
    dynamic_status(_alloc, _init),
    classification(_alloc, _init),
    matched_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = 0;
      this->has_sensor_id_list = false;
      this->time_of_measurement = 0l;
      this->object_age = 0l;
      this->object_confidence = 0l;
      this->has_planar_object_dimension1 = false;
      this->has_planar_object_dimension2 = false;
      this->has_vertical_object_dimension = false;
      this->object_angle = 0.0f;
    }
  }

  // field types and members
  using _object_id_type =
    uint8_t;
  _object_id_type object_id;
  using _has_sensor_id_list_type =
    bool;
  _has_sensor_id_list_type has_sensor_id_list;
  using _sensor_id_list_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _sensor_id_list_type sensor_id_list;
  using _time_of_detection_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_of_detection_type time_of_detection;
  using _time_of_measurement_type =
    int32_t;
  _time_of_measurement_type time_of_measurement;
  using _object_age_type =
    int32_t;
  _object_age_type object_age;
  using _object_confidence_type =
    int32_t;
  _object_confidence_type object_confidence;
  using _x_distance_type =
    ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>;
  _x_distance_type x_distance;
  using _y_distance_type =
    ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>;
  _y_distance_type y_distance;
  using _z_distance_type =
    ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator>;
  _z_distance_type z_distance;
  using _x_speed_type =
    ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>;
  _x_speed_type x_speed;
  using _y_speed_type =
    ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>;
  _y_speed_type y_speed;
  using _z_speed_type =
    ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator>;
  _z_speed_type z_speed;
  using _x_acceleration_type =
    ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator>;
  _x_acceleration_type x_acceleration;
  using _y_acceleration_type =
    ros_etsi_its_msgs::msg::LateralAcceleration_<ContainerAllocator>;
  _y_acceleration_type y_acceleration;
  using _has_planar_object_dimension1_type =
    bool;
  _has_planar_object_dimension1_type has_planar_object_dimension1;
  using _planar_object_dimension1_type =
    ros_etsi_its_msgs::msg::ObjectDimension_<ContainerAllocator>;
  _planar_object_dimension1_type planar_object_dimension1;
  using _has_planar_object_dimension2_type =
    bool;
  _has_planar_object_dimension2_type has_planar_object_dimension2;
  using _planar_object_dimension2_type =
    ros_etsi_its_msgs::msg::ObjectDimension_<ContainerAllocator>;
  _planar_object_dimension2_type planar_object_dimension2;
  using _has_vertical_object_dimension_type =
    bool;
  _has_vertical_object_dimension_type has_vertical_object_dimension;
  using _vertical_object_dimension_type =
    ros_etsi_its_msgs::msg::ObjectDimension_<ContainerAllocator>;
  _vertical_object_dimension_type vertical_object_dimension;
  using _object_ref_point_type =
    ros_etsi_its_msgs::msg::ObjectRefPoint_<ContainerAllocator>;
  _object_ref_point_type object_ref_point;
  using _dynamic_status_type =
    ros_etsi_its_msgs::msg::DynamicStatus_<ContainerAllocator>;
  _dynamic_status_type dynamic_status;
  using _classification_type =
    ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>;
  _classification_type classification;
  using _matched_position_type =
    ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator>;
  _matched_position_type matched_position;
  using _object_angle_type =
    float;
  _object_angle_type object_angle;

  // setters for named parameter idiom
  Type & set__object_id(
    const uint8_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__has_sensor_id_list(
    const bool & _arg)
  {
    this->has_sensor_id_list = _arg;
    return *this;
  }
  Type & set__sensor_id_list(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->sensor_id_list = _arg;
    return *this;
  }
  Type & set__time_of_detection(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time_of_detection = _arg;
    return *this;
  }
  Type & set__time_of_measurement(
    const int32_t & _arg)
  {
    this->time_of_measurement = _arg;
    return *this;
  }
  Type & set__object_age(
    const int32_t & _arg)
  {
    this->object_age = _arg;
    return *this;
  }
  Type & set__object_confidence(
    const int32_t & _arg)
  {
    this->object_confidence = _arg;
    return *this;
  }
  Type & set__x_distance(
    const ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> & _arg)
  {
    this->x_distance = _arg;
    return *this;
  }
  Type & set__y_distance(
    const ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> & _arg)
  {
    this->y_distance = _arg;
    return *this;
  }
  Type & set__z_distance(
    const ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence_<ContainerAllocator> & _arg)
  {
    this->z_distance = _arg;
    return *this;
  }
  Type & set__x_speed(
    const ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> & _arg)
  {
    this->x_speed = _arg;
    return *this;
  }
  Type & set__y_speed(
    const ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> & _arg)
  {
    this->y_speed = _arg;
    return *this;
  }
  Type & set__z_speed(
    const ros_etsi_its_msgs::msg::SpeedExtended_<ContainerAllocator> & _arg)
  {
    this->z_speed = _arg;
    return *this;
  }
  Type & set__x_acceleration(
    const ros_etsi_its_msgs::msg::LongitudinalAcceleration_<ContainerAllocator> & _arg)
  {
    this->x_acceleration = _arg;
    return *this;
  }
  Type & set__y_acceleration(
    const ros_etsi_its_msgs::msg::LateralAcceleration_<ContainerAllocator> & _arg)
  {
    this->y_acceleration = _arg;
    return *this;
  }
  Type & set__has_planar_object_dimension1(
    const bool & _arg)
  {
    this->has_planar_object_dimension1 = _arg;
    return *this;
  }
  Type & set__planar_object_dimension1(
    const ros_etsi_its_msgs::msg::ObjectDimension_<ContainerAllocator> & _arg)
  {
    this->planar_object_dimension1 = _arg;
    return *this;
  }
  Type & set__has_planar_object_dimension2(
    const bool & _arg)
  {
    this->has_planar_object_dimension2 = _arg;
    return *this;
  }
  Type & set__planar_object_dimension2(
    const ros_etsi_its_msgs::msg::ObjectDimension_<ContainerAllocator> & _arg)
  {
    this->planar_object_dimension2 = _arg;
    return *this;
  }
  Type & set__has_vertical_object_dimension(
    const bool & _arg)
  {
    this->has_vertical_object_dimension = _arg;
    return *this;
  }
  Type & set__vertical_object_dimension(
    const ros_etsi_its_msgs::msg::ObjectDimension_<ContainerAllocator> & _arg)
  {
    this->vertical_object_dimension = _arg;
    return *this;
  }
  Type & set__object_ref_point(
    const ros_etsi_its_msgs::msg::ObjectRefPoint_<ContainerAllocator> & _arg)
  {
    this->object_ref_point = _arg;
    return *this;
  }
  Type & set__dynamic_status(
    const ros_etsi_its_msgs::msg::DynamicStatus_<ContainerAllocator> & _arg)
  {
    this->dynamic_status = _arg;
    return *this;
  }
  Type & set__classification(
    const ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__matched_position(
    const ros_etsi_its_msgs::msg::MatchedPosition_<ContainerAllocator> & _arg)
  {
    this->matched_position = _arg;
    return *this;
  }
  Type & set__object_angle(
    const float & _arg)
  {
    this->object_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__PerceivedObject
    std::shared_ptr<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__PerceivedObject
    std::shared_ptr<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceivedObject_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->has_sensor_id_list != other.has_sensor_id_list) {
      return false;
    }
    if (this->sensor_id_list != other.sensor_id_list) {
      return false;
    }
    if (this->time_of_detection != other.time_of_detection) {
      return false;
    }
    if (this->time_of_measurement != other.time_of_measurement) {
      return false;
    }
    if (this->object_age != other.object_age) {
      return false;
    }
    if (this->object_confidence != other.object_confidence) {
      return false;
    }
    if (this->x_distance != other.x_distance) {
      return false;
    }
    if (this->y_distance != other.y_distance) {
      return false;
    }
    if (this->z_distance != other.z_distance) {
      return false;
    }
    if (this->x_speed != other.x_speed) {
      return false;
    }
    if (this->y_speed != other.y_speed) {
      return false;
    }
    if (this->z_speed != other.z_speed) {
      return false;
    }
    if (this->x_acceleration != other.x_acceleration) {
      return false;
    }
    if (this->y_acceleration != other.y_acceleration) {
      return false;
    }
    if (this->has_planar_object_dimension1 != other.has_planar_object_dimension1) {
      return false;
    }
    if (this->planar_object_dimension1 != other.planar_object_dimension1) {
      return false;
    }
    if (this->has_planar_object_dimension2 != other.has_planar_object_dimension2) {
      return false;
    }
    if (this->planar_object_dimension2 != other.planar_object_dimension2) {
      return false;
    }
    if (this->has_vertical_object_dimension != other.has_vertical_object_dimension) {
      return false;
    }
    if (this->vertical_object_dimension != other.vertical_object_dimension) {
      return false;
    }
    if (this->object_ref_point != other.object_ref_point) {
      return false;
    }
    if (this->dynamic_status != other.dynamic_status) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->matched_position != other.matched_position) {
      return false;
    }
    if (this->object_angle != other.object_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceivedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceivedObject_

// alias to use template instance with default allocator
using PerceivedObject =
  ros_etsi_its_msgs::msg::PerceivedObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__STRUCT_HPP_
