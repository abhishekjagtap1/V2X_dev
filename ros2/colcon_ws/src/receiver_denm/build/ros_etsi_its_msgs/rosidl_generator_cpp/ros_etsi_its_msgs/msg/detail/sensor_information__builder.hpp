// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/SensorInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/sensor_information.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/sensor_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorInformation_detection_area
{
public:
  explicit Init_SensorInformation_detection_area(::ros_etsi_its_msgs::msg::SensorInformation & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::SensorInformation detection_area(::ros_etsi_its_msgs::msg::SensorInformation::_detection_area_type arg)
  {
    msg_.detection_area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SensorInformation msg_;
};

class Init_SensorInformation_type
{
public:
  explicit Init_SensorInformation_type(::ros_etsi_its_msgs::msg::SensorInformation & msg)
  : msg_(msg)
  {}
  Init_SensorInformation_detection_area type(::ros_etsi_its_msgs::msg::SensorInformation::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SensorInformation_detection_area(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SensorInformation msg_;
};

class Init_SensorInformation_sensor_id
{
public:
  Init_SensorInformation_sensor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorInformation_type sensor_id(::ros_etsi_its_msgs::msg::SensorInformation::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_SensorInformation_type(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SensorInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::SensorInformation>()
{
  return ros_etsi_its_msgs::msg::builder::Init_SensorInformation_sensor_id();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__BUILDER_HPP_
