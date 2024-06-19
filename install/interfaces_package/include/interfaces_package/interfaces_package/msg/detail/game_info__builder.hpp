// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_package:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__BUILDER_HPP_
#define INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_package/msg/detail/game_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_package
{

namespace msg
{

namespace builder
{

class Init_GameInfo_ball_position
{
public:
  explicit Init_GameInfo_ball_position(::interfaces_package::msg::GameInfo & msg)
  : msg_(msg)
  {}
  ::interfaces_package::msg::GameInfo ball_position(::interfaces_package::msg::GameInfo::_ball_position_type arg)
  {
    msg_.ball_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_package::msg::GameInfo msg_;
};

class Init_GameInfo_blue_position
{
public:
  Init_GameInfo_blue_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameInfo_ball_position blue_position(::interfaces_package::msg::GameInfo::_blue_position_type arg)
  {
    msg_.blue_position = std::move(arg);
    return Init_GameInfo_ball_position(msg_);
  }

private:
  ::interfaces_package::msg::GameInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_package::msg::GameInfo>()
{
  return interfaces_package::msg::builder::Init_GameInfo_blue_position();
}

}  // namespace interfaces_package

#endif  // INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__BUILDER_HPP_
