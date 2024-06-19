// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_package:srv/SimControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__TRAITS_HPP_
#define INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_package/srv/detail/sim_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const SimControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces_package

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_package::srv::SimControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_package::srv::SimControl_Request & msg)
{
  return interfaces_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_package::srv::SimControl_Request>()
{
  return "interfaces_package::srv::SimControl_Request";
}

template<>
inline const char * name<interfaces_package::srv::SimControl_Request>()
{
  return "interfaces_package/srv/SimControl_Request";
}

template<>
struct has_fixed_size<interfaces_package::srv::SimControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_package::srv::SimControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_package::srv::SimControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const SimControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces_package

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_package::srv::SimControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_package::srv::SimControl_Response & msg)
{
  return interfaces_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_package::srv::SimControl_Response>()
{
  return "interfaces_package::srv::SimControl_Response";
}

template<>
inline const char * name<interfaces_package::srv::SimControl_Response>()
{
  return "interfaces_package/srv/SimControl_Response";
}

template<>
struct has_fixed_size<interfaces_package::srv::SimControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_package::srv::SimControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_package::srv::SimControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_package::srv::SimControl>()
{
  return "interfaces_package::srv::SimControl";
}

template<>
inline const char * name<interfaces_package::srv::SimControl>()
{
  return "interfaces_package/srv/SimControl";
}

template<>
struct has_fixed_size<interfaces_package::srv::SimControl>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces_package::srv::SimControl_Request>::value &&
    has_fixed_size<interfaces_package::srv::SimControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces_package::srv::SimControl>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces_package::srv::SimControl_Request>::value &&
    has_bounded_size<interfaces_package::srv::SimControl_Response>::value
  >
{
};

template<>
struct is_service<interfaces_package::srv::SimControl>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces_package::srv::SimControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces_package::srv::SimControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__TRAITS_HPP_
