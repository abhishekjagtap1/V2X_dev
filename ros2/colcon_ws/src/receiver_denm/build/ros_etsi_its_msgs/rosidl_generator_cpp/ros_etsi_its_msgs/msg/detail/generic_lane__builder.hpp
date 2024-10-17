// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/generic_lane.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/generic_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_GenericLane_connects_to
{
public:
  explicit Init_GenericLane_connects_to(::ros_etsi_its_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::GenericLane connects_to(::ros_etsi_its_msgs::msg::GenericLane::_connects_to_type arg)
  {
    msg_.connects_to = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_node_list
{
public:
  explicit Init_GenericLane_node_list(::ros_etsi_its_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_connects_to node_list(::ros_etsi_its_msgs::msg::GenericLane::_node_list_type arg)
  {
    msg_.node_list = std::move(arg);
    return Init_GenericLane_connects_to(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_lane_direction
{
public:
  explicit Init_GenericLane_lane_direction(::ros_etsi_its_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_node_list lane_direction(::ros_etsi_its_msgs::msg::GenericLane::_lane_direction_type arg)
  {
    msg_.lane_direction = std::move(arg);
    return Init_GenericLane_node_list(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_egress_approach
{
public:
  explicit Init_GenericLane_egress_approach(::ros_etsi_its_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_lane_direction egress_approach(::ros_etsi_its_msgs::msg::GenericLane::_egress_approach_type arg)
  {
    msg_.egress_approach = std::move(arg);
    return Init_GenericLane_lane_direction(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_ingress_approach
{
public:
  explicit Init_GenericLane_ingress_approach(::ros_etsi_its_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_egress_approach ingress_approach(::ros_etsi_its_msgs::msg::GenericLane::_ingress_approach_type arg)
  {
    msg_.ingress_approach = std::move(arg);
    return Init_GenericLane_egress_approach(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_name
{
public:
  explicit Init_GenericLane_name(::ros_etsi_its_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_ingress_approach name(::ros_etsi_its_msgs::msg::GenericLane::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GenericLane_ingress_approach(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_lane_id
{
public:
  Init_GenericLane_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenericLane_name lane_id(::ros_etsi_its_msgs::msg::GenericLane::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_GenericLane_name(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::GenericLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::GenericLane>()
{
  return ros_etsi_its_msgs::msg::builder::Init_GenericLane_lane_id();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_
