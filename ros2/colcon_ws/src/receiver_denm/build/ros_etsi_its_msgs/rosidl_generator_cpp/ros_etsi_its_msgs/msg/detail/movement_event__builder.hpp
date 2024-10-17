// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/movement_event.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/movement_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementEvent_min_end_time
{
public:
  explicit Init_MovementEvent_min_end_time(::ros_etsi_its_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::MovementEvent min_end_time(::ros_etsi_its_msgs::msg::MovementEvent::_min_end_time_type arg)
  {
    msg_.min_end_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_event_state
{
public:
  Init_MovementEvent_event_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementEvent_min_end_time event_state(::ros_etsi_its_msgs::msg::MovementEvent::_event_state_type arg)
  {
    msg_.event_state = std::move(arg);
    return Init_MovementEvent_min_end_time(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MovementEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::MovementEvent>()
{
  return ros_etsi_its_msgs::msg::builder::Init_MovementEvent_event_state();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_
