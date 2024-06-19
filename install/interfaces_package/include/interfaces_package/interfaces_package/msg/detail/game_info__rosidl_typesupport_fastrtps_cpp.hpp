// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from interfaces_package:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "interfaces_package/msg/detail/game_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace interfaces_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_package
cdr_serialize(
  const interfaces_package::msg::GameInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_package::msg::GameInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_package
get_serialized_size(
  const interfaces_package::msg::GameInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_package
max_serialized_size_GameInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_package, msg, GameInfo)();

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
