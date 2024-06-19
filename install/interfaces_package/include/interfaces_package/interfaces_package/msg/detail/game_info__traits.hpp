// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_package:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__TRAITS_HPP_
#define INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_package/msg/detail/game_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'blue_position'
// Member 'ball_position'
#include "interfaces_package/msg/detail/int16__traits.hpp"

namespace interfaces_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: blue_position
  {
    if (msg.blue_position.size() == 0) {
      out << "blue_position: []";
    } else {
      out << "blue_position: [";
      size_t pending_items = msg.blue_position.size();
      for (auto item : msg.blue_position) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ball_position
  {
    if (msg.ball_position.size() == 0) {
      out << "ball_position: []";
    } else {
      out << "ball_position: [";
      size_t pending_items = msg.ball_position.size();
      for (auto item : msg.ball_position) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: blue_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blue_position.size() == 0) {
      out << "blue_position: []\n";
    } else {
      out << "blue_position:\n";
      for (auto item : msg.blue_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ball_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ball_position.size() == 0) {
      out << "ball_position: []\n";
    } else {
      out << "ball_position:\n";
      for (auto item : msg.ball_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces_package

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_package::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_package::msg::GameInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_package::msg::GameInfo & msg)
{
  return interfaces_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_package::msg::GameInfo>()
{
  return "interfaces_package::msg::GameInfo";
}

template<>
inline const char * name<interfaces_package::msg::GameInfo>()
{
  return "interfaces_package/msg/GameInfo";
}

template<>
struct has_fixed_size<interfaces_package::msg::GameInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_package::msg::GameInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_package::msg::GameInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__TRAITS_HPP_
