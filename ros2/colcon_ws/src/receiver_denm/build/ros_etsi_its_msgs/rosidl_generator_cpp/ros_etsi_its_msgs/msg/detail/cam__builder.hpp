// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/CAM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cam.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/cam__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_CAM_low_frequency_container
{
public:
  explicit Init_CAM_low_frequency_container(::ros_etsi_its_msgs::msg::CAM & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::CAM low_frequency_container(::ros_etsi_its_msgs::msg::CAM::_low_frequency_container_type arg)
  {
    msg_.low_frequency_container = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CAM msg_;
};

class Init_CAM_has_low_frequency_container
{
public:
  explicit Init_CAM_has_low_frequency_container(::ros_etsi_its_msgs::msg::CAM & msg)
  : msg_(msg)
  {}
  Init_CAM_low_frequency_container has_low_frequency_container(::ros_etsi_its_msgs::msg::CAM::_has_low_frequency_container_type arg)
  {
    msg_.has_low_frequency_container = std::move(arg);
    return Init_CAM_low_frequency_container(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CAM msg_;
};

class Init_CAM_high_frequency_container
{
public:
  explicit Init_CAM_high_frequency_container(::ros_etsi_its_msgs::msg::CAM & msg)
  : msg_(msg)
  {}
  Init_CAM_has_low_frequency_container high_frequency_container(::ros_etsi_its_msgs::msg::CAM::_high_frequency_container_type arg)
  {
    msg_.high_frequency_container = std::move(arg);
    return Init_CAM_has_low_frequency_container(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CAM msg_;
};

class Init_CAM_reference_position
{
public:
  explicit Init_CAM_reference_position(::ros_etsi_its_msgs::msg::CAM & msg)
  : msg_(msg)
  {}
  Init_CAM_high_frequency_container reference_position(::ros_etsi_its_msgs::msg::CAM::_reference_position_type arg)
  {
    msg_.reference_position = std::move(arg);
    return Init_CAM_high_frequency_container(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CAM msg_;
};

class Init_CAM_station_type
{
public:
  explicit Init_CAM_station_type(::ros_etsi_its_msgs::msg::CAM & msg)
  : msg_(msg)
  {}
  Init_CAM_reference_position station_type(::ros_etsi_its_msgs::msg::CAM::_station_type_type arg)
  {
    msg_.station_type = std::move(arg);
    return Init_CAM_reference_position(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CAM msg_;
};

class Init_CAM_generation_delta_time
{
public:
  explicit Init_CAM_generation_delta_time(::ros_etsi_its_msgs::msg::CAM & msg)
  : msg_(msg)
  {}
  Init_CAM_station_type generation_delta_time(::ros_etsi_its_msgs::msg::CAM::_generation_delta_time_type arg)
  {
    msg_.generation_delta_time = std::move(arg);
    return Init_CAM_station_type(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CAM msg_;
};

class Init_CAM_its_header
{
public:
  explicit Init_CAM_its_header(::ros_etsi_its_msgs::msg::CAM & msg)
  : msg_(msg)
  {}
  Init_CAM_generation_delta_time its_header(::ros_etsi_its_msgs::msg::CAM::_its_header_type arg)
  {
    msg_.its_header = std::move(arg);
    return Init_CAM_generation_delta_time(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CAM msg_;
};

class Init_CAM_header
{
public:
  Init_CAM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CAM_its_header header(::ros_etsi_its_msgs::msg::CAM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CAM_its_header(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CAM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::CAM>()
{
  return ros_etsi_its_msgs::msg::builder::Init_CAM_header();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAM__BUILDER_HPP_
