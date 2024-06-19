// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_package:msg/GameInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces_package/msg/detail/game_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces_package
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GameInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_package::msg::GameInfo(_init);
}

void GameInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_package::msg::GameInfo *>(message_memory);
  typed_message->~GameInfo();
}

size_t size_function__GameInfo__blue_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interfaces_package::msg::Int16> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GameInfo__blue_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interfaces_package::msg::Int16> *>(untyped_member);
  return &member[index];
}

void * get_function__GameInfo__blue_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interfaces_package::msg::Int16> *>(untyped_member);
  return &member[index];
}

void fetch_function__GameInfo__blue_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const interfaces_package::msg::Int16 *>(
    get_const_function__GameInfo__blue_position(untyped_member, index));
  auto & value = *reinterpret_cast<interfaces_package::msg::Int16 *>(untyped_value);
  value = item;
}

void assign_function__GameInfo__blue_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<interfaces_package::msg::Int16 *>(
    get_function__GameInfo__blue_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const interfaces_package::msg::Int16 *>(untyped_value);
  item = value;
}

void resize_function__GameInfo__blue_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interfaces_package::msg::Int16> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GameInfo__ball_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interfaces_package::msg::Int16> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GameInfo__ball_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interfaces_package::msg::Int16> *>(untyped_member);
  return &member[index];
}

void * get_function__GameInfo__ball_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interfaces_package::msg::Int16> *>(untyped_member);
  return &member[index];
}

void fetch_function__GameInfo__ball_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const interfaces_package::msg::Int16 *>(
    get_const_function__GameInfo__ball_position(untyped_member, index));
  auto & value = *reinterpret_cast<interfaces_package::msg::Int16 *>(untyped_value);
  value = item;
}

void assign_function__GameInfo__ball_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<interfaces_package::msg::Int16 *>(
    get_function__GameInfo__ball_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const interfaces_package::msg::Int16 *>(untyped_value);
  item = value;
}

void resize_function__GameInfo__ball_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interfaces_package::msg::Int16> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GameInfo_message_member_array[2] = {
  {
    "blue_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces_package::msg::Int16>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_package::msg::GameInfo, blue_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__GameInfo__blue_position,  // size() function pointer
    get_const_function__GameInfo__blue_position,  // get_const(index) function pointer
    get_function__GameInfo__blue_position,  // get(index) function pointer
    fetch_function__GameInfo__blue_position,  // fetch(index, &value) function pointer
    assign_function__GameInfo__blue_position,  // assign(index, value) function pointer
    resize_function__GameInfo__blue_position  // resize(index) function pointer
  },
  {
    "ball_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces_package::msg::Int16>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_package::msg::GameInfo, ball_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__GameInfo__ball_position,  // size() function pointer
    get_const_function__GameInfo__ball_position,  // get_const(index) function pointer
    get_function__GameInfo__ball_position,  // get(index) function pointer
    fetch_function__GameInfo__ball_position,  // fetch(index, &value) function pointer
    assign_function__GameInfo__ball_position,  // assign(index, value) function pointer
    resize_function__GameInfo__ball_position  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GameInfo_message_members = {
  "interfaces_package::msg",  // message namespace
  "GameInfo",  // message name
  2,  // number of fields
  sizeof(interfaces_package::msg::GameInfo),
  GameInfo_message_member_array,  // message members
  GameInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  GameInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GameInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GameInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces_package


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_package::msg::GameInfo>()
{
  return &::interfaces_package::msg::rosidl_typesupport_introspection_cpp::GameInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_package, msg, GameInfo)() {
  return &::interfaces_package::msg::rosidl_typesupport_introspection_cpp::GameInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
