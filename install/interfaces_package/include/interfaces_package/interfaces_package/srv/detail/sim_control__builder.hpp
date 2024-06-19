// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_package:srv/SimControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__BUILDER_HPP_
#define INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_package/srv/detail/sim_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_package
{

namespace srv
{

namespace builder
{

class Init_SimControl_Request_action
{
public:
  Init_SimControl_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_package::srv::SimControl_Request action(::interfaces_package::srv::SimControl_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_package::srv::SimControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_package::srv::SimControl_Request>()
{
  return interfaces_package::srv::builder::Init_SimControl_Request_action();
}

}  // namespace interfaces_package


namespace interfaces_package
{

namespace srv
{

namespace builder
{

class Init_SimControl_Response_success
{
public:
  Init_SimControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_package::srv::SimControl_Response success(::interfaces_package::srv::SimControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_package::srv::SimControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_package::srv::SimControl_Response>()
{
  return interfaces_package::srv::builder::Init_SimControl_Response_success();
}

}  // namespace interfaces_package

#endif  // INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__BUILDER_HPP_
