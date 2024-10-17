// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/LocationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/location_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/location_container__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_LocationContainer_road_type
{
public:
  explicit Init_LocationContainer_road_type(::ros_etsi_its_msgs::msg::LocationContainer & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::LocationContainer road_type(::ros_etsi_its_msgs::msg::LocationContainer::_road_type_type arg)
  {
    msg_.road_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::LocationContainer msg_;
};

class Init_LocationContainer_traces
{
public:
  explicit Init_LocationContainer_traces(::ros_etsi_its_msgs::msg::LocationContainer & msg)
  : msg_(msg)
  {}
  Init_LocationContainer_road_type traces(::ros_etsi_its_msgs::msg::LocationContainer::_traces_type arg)
  {
    msg_.traces = std::move(arg);
    return Init_LocationContainer_road_type(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::LocationContainer msg_;
};

class Init_LocationContainer_event_position_heading
{
public:
  explicit Init_LocationContainer_event_position_heading(::ros_etsi_its_msgs::msg::LocationContainer & msg)
  : msg_(msg)
  {}
  Init_LocationContainer_traces event_position_heading(::ros_etsi_its_msgs::msg::LocationContainer::_event_position_heading_type arg)
  {
    msg_.event_position_heading = std::move(arg);
    return Init_LocationContainer_traces(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::LocationContainer msg_;
};

class Init_LocationContainer_event_speed
{
public:
  Init_LocationContainer_event_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationContainer_event_position_heading event_speed(::ros_etsi_its_msgs::msg::LocationContainer::_event_speed_type arg)
  {
    msg_.event_speed = std::move(arg);
    return Init_LocationContainer_event_position_heading(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::LocationContainer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::LocationContainer>()
{
  return ros_etsi_its_msgs::msg::builder::Init_LocationContainer_event_speed();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__BUILDER_HPP_
