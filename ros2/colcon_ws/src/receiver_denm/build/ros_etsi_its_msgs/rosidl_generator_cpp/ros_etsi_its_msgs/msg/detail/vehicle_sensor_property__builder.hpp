// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_sensor_property.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSensorProperty_vertical_opening_angle_end
{
public:
  explicit Init_VehicleSensorProperty_vertical_opening_angle_end(::ros_etsi_its_msgs::msg::VehicleSensorProperty & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::VehicleSensorProperty vertical_opening_angle_end(::ros_etsi_its_msgs::msg::VehicleSensorProperty::_vertical_opening_angle_end_type arg)
  {
    msg_.vertical_opening_angle_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensorProperty msg_;
};

class Init_VehicleSensorProperty_has_vertical_opening_angle_end
{
public:
  explicit Init_VehicleSensorProperty_has_vertical_opening_angle_end(::ros_etsi_its_msgs::msg::VehicleSensorProperty & msg)
  : msg_(msg)
  {}
  Init_VehicleSensorProperty_vertical_opening_angle_end has_vertical_opening_angle_end(::ros_etsi_its_msgs::msg::VehicleSensorProperty::_has_vertical_opening_angle_end_type arg)
  {
    msg_.has_vertical_opening_angle_end = std::move(arg);
    return Init_VehicleSensorProperty_vertical_opening_angle_end(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensorProperty msg_;
};

class Init_VehicleSensorProperty_vertical_opening_angle_start
{
public:
  explicit Init_VehicleSensorProperty_vertical_opening_angle_start(::ros_etsi_its_msgs::msg::VehicleSensorProperty & msg)
  : msg_(msg)
  {}
  Init_VehicleSensorProperty_has_vertical_opening_angle_end vertical_opening_angle_start(::ros_etsi_its_msgs::msg::VehicleSensorProperty::_vertical_opening_angle_start_type arg)
  {
    msg_.vertical_opening_angle_start = std::move(arg);
    return Init_VehicleSensorProperty_has_vertical_opening_angle_end(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensorProperty msg_;
};

class Init_VehicleSensorProperty_has_vertical_opening_angle_start
{
public:
  explicit Init_VehicleSensorProperty_has_vertical_opening_angle_start(::ros_etsi_its_msgs::msg::VehicleSensorProperty & msg)
  : msg_(msg)
  {}
  Init_VehicleSensorProperty_vertical_opening_angle_start has_vertical_opening_angle_start(::ros_etsi_its_msgs::msg::VehicleSensorProperty::_has_vertical_opening_angle_start_type arg)
  {
    msg_.has_vertical_opening_angle_start = std::move(arg);
    return Init_VehicleSensorProperty_vertical_opening_angle_start(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensorProperty msg_;
};

class Init_VehicleSensorProperty_horizontal_opening_angle_end
{
public:
  explicit Init_VehicleSensorProperty_horizontal_opening_angle_end(::ros_etsi_its_msgs::msg::VehicleSensorProperty & msg)
  : msg_(msg)
  {}
  Init_VehicleSensorProperty_has_vertical_opening_angle_start horizontal_opening_angle_end(::ros_etsi_its_msgs::msg::VehicleSensorProperty::_horizontal_opening_angle_end_type arg)
  {
    msg_.horizontal_opening_angle_end = std::move(arg);
    return Init_VehicleSensorProperty_has_vertical_opening_angle_start(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensorProperty msg_;
};

class Init_VehicleSensorProperty_horizontal_opening_angle_start
{
public:
  explicit Init_VehicleSensorProperty_horizontal_opening_angle_start(::ros_etsi_its_msgs::msg::VehicleSensorProperty & msg)
  : msg_(msg)
  {}
  Init_VehicleSensorProperty_horizontal_opening_angle_end horizontal_opening_angle_start(::ros_etsi_its_msgs::msg::VehicleSensorProperty::_horizontal_opening_angle_start_type arg)
  {
    msg_.horizontal_opening_angle_start = std::move(arg);
    return Init_VehicleSensorProperty_horizontal_opening_angle_end(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensorProperty msg_;
};

class Init_VehicleSensorProperty_range
{
public:
  Init_VehicleSensorProperty_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSensorProperty_horizontal_opening_angle_start range(::ros_etsi_its_msgs::msg::VehicleSensorProperty::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_VehicleSensorProperty_horizontal_opening_angle_start(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensorProperty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::VehicleSensorProperty>()
{
  return ros_etsi_its_msgs::msg::builder::Init_VehicleSensorProperty_range();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR_PROPERTY__BUILDER_HPP_
