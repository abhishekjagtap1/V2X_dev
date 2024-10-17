// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/originating_vehicle_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_OriginatingVehicleContainer_yaw_rate
{
public:
  explicit Init_OriginatingVehicleContainer_yaw_rate(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer yaw_rate(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_has_yaw_rate
{
public:
  explicit Init_OriginatingVehicleContainer_has_yaw_rate(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_yaw_rate has_yaw_rate(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_has_yaw_rate_type arg)
  {
    msg_.has_yaw_rate = std::move(arg);
    return Init_OriginatingVehicleContainer_yaw_rate(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_longitudinal_acceleration
{
public:
  explicit Init_OriginatingVehicleContainer_longitudinal_acceleration(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_has_yaw_rate longitudinal_acceleration(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_longitudinal_acceleration_type arg)
  {
    msg_.longitudinal_acceleration = std::move(arg);
    return Init_OriginatingVehicleContainer_has_yaw_rate(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_has_longitudinal_acceleration
{
public:
  explicit Init_OriginatingVehicleContainer_has_longitudinal_acceleration(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_longitudinal_acceleration has_longitudinal_acceleration(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_has_longitudinal_acceleration_type arg)
  {
    msg_.has_longitudinal_acceleration = std::move(arg);
    return Init_OriginatingVehicleContainer_longitudinal_acceleration(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_vehicle_height
{
public:
  explicit Init_OriginatingVehicleContainer_vehicle_height(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_has_longitudinal_acceleration vehicle_height(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_vehicle_height_type arg)
  {
    msg_.vehicle_height = std::move(arg);
    return Init_OriginatingVehicleContainer_has_longitudinal_acceleration(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_has_vehicle_height
{
public:
  explicit Init_OriginatingVehicleContainer_has_vehicle_height(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_vehicle_height has_vehicle_height(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_has_vehicle_height_type arg)
  {
    msg_.has_vehicle_height = std::move(arg);
    return Init_OriginatingVehicleContainer_vehicle_height(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_vehicle_width
{
public:
  explicit Init_OriginatingVehicleContainer_vehicle_width(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_has_vehicle_height vehicle_width(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_vehicle_width_type arg)
  {
    msg_.vehicle_width = std::move(arg);
    return Init_OriginatingVehicleContainer_has_vehicle_height(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_has_vehicle_width
{
public:
  explicit Init_OriginatingVehicleContainer_has_vehicle_width(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_vehicle_width has_vehicle_width(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_has_vehicle_width_type arg)
  {
    msg_.has_vehicle_width = std::move(arg);
    return Init_OriginatingVehicleContainer_vehicle_width(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_vehicle_length
{
public:
  explicit Init_OriginatingVehicleContainer_vehicle_length(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_has_vehicle_width vehicle_length(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_vehicle_length_type arg)
  {
    msg_.vehicle_length = std::move(arg);
    return Init_OriginatingVehicleContainer_has_vehicle_width(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_has_vehicle_length
{
public:
  explicit Init_OriginatingVehicleContainer_has_vehicle_length(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_vehicle_length has_vehicle_length(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_has_vehicle_length_type arg)
  {
    msg_.has_vehicle_length = std::move(arg);
    return Init_OriginatingVehicleContainer_vehicle_length(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_drive_direction
{
public:
  explicit Init_OriginatingVehicleContainer_drive_direction(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_has_vehicle_length drive_direction(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_drive_direction_type arg)
  {
    msg_.drive_direction = std::move(arg);
    return Init_OriginatingVehicleContainer_has_vehicle_length(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_vehicle_orientation_angle
{
public:
  explicit Init_OriginatingVehicleContainer_vehicle_orientation_angle(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_drive_direction vehicle_orientation_angle(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_vehicle_orientation_angle_type arg)
  {
    msg_.vehicle_orientation_angle = std::move(arg);
    return Init_OriginatingVehicleContainer_drive_direction(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_has_vehicle_orientation_angle
{
public:
  explicit Init_OriginatingVehicleContainer_has_vehicle_orientation_angle(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_vehicle_orientation_angle has_vehicle_orientation_angle(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_has_vehicle_orientation_angle_type arg)
  {
    msg_.has_vehicle_orientation_angle = std::move(arg);
    return Init_OriginatingVehicleContainer_vehicle_orientation_angle(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_speed
{
public:
  explicit Init_OriginatingVehicleContainer_speed(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer & msg)
  : msg_(msg)
  {}
  Init_OriginatingVehicleContainer_has_vehicle_orientation_angle speed(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_OriginatingVehicleContainer_has_vehicle_orientation_angle(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

class Init_OriginatingVehicleContainer_heading
{
public:
  Init_OriginatingVehicleContainer_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OriginatingVehicleContainer_speed heading(::ros_etsi_its_msgs::msg::OriginatingVehicleContainer::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_OriginatingVehicleContainer_speed(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::OriginatingVehicleContainer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::OriginatingVehicleContainer>()
{
  return ros_etsi_its_msgs::msg::builder::Init_OriginatingVehicleContainer_heading();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__BUILDER_HPP_
