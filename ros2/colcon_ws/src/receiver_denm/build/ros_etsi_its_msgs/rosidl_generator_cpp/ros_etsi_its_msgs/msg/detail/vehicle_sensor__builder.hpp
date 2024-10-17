// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_sensor.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSensor_vehicle_sensor_property_list
{
public:
  explicit Init_VehicleSensor_vehicle_sensor_property_list(::ros_etsi_its_msgs::msg::VehicleSensor & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::VehicleSensor vehicle_sensor_property_list(::ros_etsi_its_msgs::msg::VehicleSensor::_vehicle_sensor_property_list_type arg)
  {
    msg_.vehicle_sensor_property_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensor msg_;
};

class Init_VehicleSensor_z_sensor_offset
{
public:
  explicit Init_VehicleSensor_z_sensor_offset(::ros_etsi_its_msgs::msg::VehicleSensor & msg)
  : msg_(msg)
  {}
  Init_VehicleSensor_vehicle_sensor_property_list z_sensor_offset(::ros_etsi_its_msgs::msg::VehicleSensor::_z_sensor_offset_type arg)
  {
    msg_.z_sensor_offset = std::move(arg);
    return Init_VehicleSensor_vehicle_sensor_property_list(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensor msg_;
};

class Init_VehicleSensor_y_sensor_offset
{
public:
  explicit Init_VehicleSensor_y_sensor_offset(::ros_etsi_its_msgs::msg::VehicleSensor & msg)
  : msg_(msg)
  {}
  Init_VehicleSensor_z_sensor_offset y_sensor_offset(::ros_etsi_its_msgs::msg::VehicleSensor::_y_sensor_offset_type arg)
  {
    msg_.y_sensor_offset = std::move(arg);
    return Init_VehicleSensor_z_sensor_offset(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensor msg_;
};

class Init_VehicleSensor_x_sensor_offset
{
public:
  explicit Init_VehicleSensor_x_sensor_offset(::ros_etsi_its_msgs::msg::VehicleSensor & msg)
  : msg_(msg)
  {}
  Init_VehicleSensor_y_sensor_offset x_sensor_offset(::ros_etsi_its_msgs::msg::VehicleSensor::_x_sensor_offset_type arg)
  {
    msg_.x_sensor_offset = std::move(arg);
    return Init_VehicleSensor_y_sensor_offset(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensor msg_;
};

class Init_VehicleSensor_ref_point_id
{
public:
  Init_VehicleSensor_ref_point_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSensor_x_sensor_offset ref_point_id(::ros_etsi_its_msgs::msg::VehicleSensor::_ref_point_id_type arg)
  {
    msg_.ref_point_id = std::move(arg);
    return Init_VehicleSensor_x_sensor_offset(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::VehicleSensor>()
{
  return ros_etsi_its_msgs::msg::builder::Init_VehicleSensor_ref_point_id();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__BUILDER_HPP_
