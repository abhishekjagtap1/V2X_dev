// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/EventPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/event_point.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/event_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_EventPoint_information_quality
{
public:
  explicit Init_EventPoint_information_quality(::ros_etsi_its_msgs::msg::EventPoint & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::EventPoint information_quality(::ros_etsi_its_msgs::msg::EventPoint::_information_quality_type arg)
  {
    msg_.information_quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::EventPoint msg_;
};

class Init_EventPoint_event_delta_time
{
public:
  explicit Init_EventPoint_event_delta_time(::ros_etsi_its_msgs::msg::EventPoint & msg)
  : msg_(msg)
  {}
  Init_EventPoint_information_quality event_delta_time(::ros_etsi_its_msgs::msg::EventPoint::_event_delta_time_type arg)
  {
    msg_.event_delta_time = std::move(arg);
    return Init_EventPoint_information_quality(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::EventPoint msg_;
};

class Init_EventPoint_event_position
{
public:
  Init_EventPoint_event_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventPoint_event_delta_time event_position(::ros_etsi_its_msgs::msg::EventPoint::_event_position_type arg)
  {
    msg_.event_position = std::move(arg);
    return Init_EventPoint_event_delta_time(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::EventPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::EventPoint>()
{
  return ros_etsi_its_msgs::msg::builder::Init_EventPoint_event_position();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__BUILDER_HPP_
