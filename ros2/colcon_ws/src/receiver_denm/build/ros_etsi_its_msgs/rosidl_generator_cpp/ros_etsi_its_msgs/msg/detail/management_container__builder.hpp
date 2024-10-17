// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/management_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/management_container__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_ManagementContainer_station_type
{
public:
  explicit Init_ManagementContainer_station_type(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::ManagementContainer station_type(::ros_etsi_its_msgs::msg::ManagementContainer::_station_type_type arg)
  {
    msg_.station_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_transmission_interval
{
public:
  explicit Init_ManagementContainer_transmission_interval(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  Init_ManagementContainer_station_type transmission_interval(::ros_etsi_its_msgs::msg::ManagementContainer::_transmission_interval_type arg)
  {
    msg_.transmission_interval = std::move(arg);
    return Init_ManagementContainer_station_type(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_validity_duration
{
public:
  explicit Init_ManagementContainer_validity_duration(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  Init_ManagementContainer_transmission_interval validity_duration(::ros_etsi_its_msgs::msg::ManagementContainer::_validity_duration_type arg)
  {
    msg_.validity_duration = std::move(arg);
    return Init_ManagementContainer_transmission_interval(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_relevance_traffic_direction
{
public:
  explicit Init_ManagementContainer_relevance_traffic_direction(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  Init_ManagementContainer_validity_duration relevance_traffic_direction(::ros_etsi_its_msgs::msg::ManagementContainer::_relevance_traffic_direction_type arg)
  {
    msg_.relevance_traffic_direction = std::move(arg);
    return Init_ManagementContainer_validity_duration(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_relevance_distance
{
public:
  explicit Init_ManagementContainer_relevance_distance(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  Init_ManagementContainer_relevance_traffic_direction relevance_distance(::ros_etsi_its_msgs::msg::ManagementContainer::_relevance_distance_type arg)
  {
    msg_.relevance_distance = std::move(arg);
    return Init_ManagementContainer_relevance_traffic_direction(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_event_position
{
public:
  explicit Init_ManagementContainer_event_position(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  Init_ManagementContainer_relevance_distance event_position(::ros_etsi_its_msgs::msg::ManagementContainer::_event_position_type arg)
  {
    msg_.event_position = std::move(arg);
    return Init_ManagementContainer_relevance_distance(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_termination
{
public:
  explicit Init_ManagementContainer_termination(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  Init_ManagementContainer_event_position termination(::ros_etsi_its_msgs::msg::ManagementContainer::_termination_type arg)
  {
    msg_.termination = std::move(arg);
    return Init_ManagementContainer_event_position(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_reference_time
{
public:
  explicit Init_ManagementContainer_reference_time(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  Init_ManagementContainer_termination reference_time(::ros_etsi_its_msgs::msg::ManagementContainer::_reference_time_type arg)
  {
    msg_.reference_time = std::move(arg);
    return Init_ManagementContainer_termination(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_detection_time
{
public:
  explicit Init_ManagementContainer_detection_time(::ros_etsi_its_msgs::msg::ManagementContainer & msg)
  : msg_(msg)
  {}
  Init_ManagementContainer_reference_time detection_time(::ros_etsi_its_msgs::msg::ManagementContainer::_detection_time_type arg)
  {
    msg_.detection_time = std::move(arg);
    return Init_ManagementContainer_reference_time(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

class Init_ManagementContainer_action_id
{
public:
  Init_ManagementContainer_action_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManagementContainer_detection_time action_id(::ros_etsi_its_msgs::msg::ManagementContainer::_action_id_type arg)
  {
    msg_.action_id = std::move(arg);
    return Init_ManagementContainer_detection_time(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ManagementContainer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::ManagementContainer>()
{
  return ros_etsi_its_msgs::msg::builder::Init_ManagementContainer_action_id();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__BUILDER_HPP_
