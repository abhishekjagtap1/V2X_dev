// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/basic_vehicle_container_high_frequency.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_BasicVehicleContainerHighFrequency_acceleration_control
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_acceleration_control(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency acceleration_control(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_acceleration_control_type arg)
  {
    msg_.acceleration_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_has_acceleration_control
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_has_acceleration_control(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_acceleration_control has_acceleration_control(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_has_acceleration_control_type arg)
  {
    msg_.has_acceleration_control = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_acceleration_control(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_yaw_rate
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_yaw_rate(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_has_acceleration_control yaw_rate(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_has_acceleration_control(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_curvature_calculation_mode
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_curvature_calculation_mode(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_yaw_rate curvature_calculation_mode(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_curvature_calculation_mode_type arg)
  {
    msg_.curvature_calculation_mode = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_yaw_rate(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_curvature
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_curvature(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_curvature_calculation_mode curvature(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_curvature_calculation_mode(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_longitudinal_acceleration
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_longitudinal_acceleration(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_curvature longitudinal_acceleration(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_longitudinal_acceleration_type arg)
  {
    msg_.longitudinal_acceleration = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_curvature(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_vehicle_width
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_vehicle_width(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_longitudinal_acceleration vehicle_width(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_vehicle_width_type arg)
  {
    msg_.vehicle_width = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_longitudinal_acceleration(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_vehicle_length
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_vehicle_length(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_vehicle_width vehicle_length(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_vehicle_length_type arg)
  {
    msg_.vehicle_length = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_vehicle_width(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_drive_direction
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_drive_direction(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_vehicle_length drive_direction(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_drive_direction_type arg)
  {
    msg_.drive_direction = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_vehicle_length(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_speed
{
public:
  explicit Init_BasicVehicleContainerHighFrequency_speed(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerHighFrequency_drive_direction speed(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_drive_direction(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

class Init_BasicVehicleContainerHighFrequency_heading
{
public:
  Init_BasicVehicleContainerHighFrequency_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BasicVehicleContainerHighFrequency_speed heading(::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_BasicVehicleContainerHighFrequency_speed(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::BasicVehicleContainerHighFrequency>()
{
  return ros_etsi_its_msgs::msg::builder::Init_BasicVehicleContainerHighFrequency_heading();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__BUILDER_HPP_
