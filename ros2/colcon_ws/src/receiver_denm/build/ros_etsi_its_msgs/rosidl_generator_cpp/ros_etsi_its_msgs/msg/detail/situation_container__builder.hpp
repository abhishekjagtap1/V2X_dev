// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/SituationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/situation_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/situation_container__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_SituationContainer_event_history
{
public:
  explicit Init_SituationContainer_event_history(::ros_etsi_its_msgs::msg::SituationContainer & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::SituationContainer event_history(::ros_etsi_its_msgs::msg::SituationContainer::_event_history_type arg)
  {
    msg_.event_history = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SituationContainer msg_;
};

class Init_SituationContainer_linked_cause
{
public:
  explicit Init_SituationContainer_linked_cause(::ros_etsi_its_msgs::msg::SituationContainer & msg)
  : msg_(msg)
  {}
  Init_SituationContainer_event_history linked_cause(::ros_etsi_its_msgs::msg::SituationContainer::_linked_cause_type arg)
  {
    msg_.linked_cause = std::move(arg);
    return Init_SituationContainer_event_history(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SituationContainer msg_;
};

class Init_SituationContainer_has_linked_cause
{
public:
  explicit Init_SituationContainer_has_linked_cause(::ros_etsi_its_msgs::msg::SituationContainer & msg)
  : msg_(msg)
  {}
  Init_SituationContainer_linked_cause has_linked_cause(::ros_etsi_its_msgs::msg::SituationContainer::_has_linked_cause_type arg)
  {
    msg_.has_linked_cause = std::move(arg);
    return Init_SituationContainer_linked_cause(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SituationContainer msg_;
};

class Init_SituationContainer_event_type
{
public:
  explicit Init_SituationContainer_event_type(::ros_etsi_its_msgs::msg::SituationContainer & msg)
  : msg_(msg)
  {}
  Init_SituationContainer_has_linked_cause event_type(::ros_etsi_its_msgs::msg::SituationContainer::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_SituationContainer_has_linked_cause(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SituationContainer msg_;
};

class Init_SituationContainer_information_quality
{
public:
  Init_SituationContainer_information_quality()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SituationContainer_event_type information_quality(::ros_etsi_its_msgs::msg::SituationContainer::_information_quality_type arg)
  {
    msg_.information_quality = std::move(arg);
    return Init_SituationContainer_event_type(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SituationContainer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::SituationContainer>()
{
  return ros_etsi_its_msgs::msg::builder::Init_SituationContainer_information_quality();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SITUATION_CONTAINER__BUILDER_HPP_
