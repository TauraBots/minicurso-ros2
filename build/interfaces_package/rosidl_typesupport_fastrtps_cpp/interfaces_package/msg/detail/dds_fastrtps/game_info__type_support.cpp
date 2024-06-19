// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_package:msg/GameInfo.idl
// generated code does not contain a copyright notice
#include "interfaces_package/msg/detail/game_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces_package/msg/detail/game_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace interfaces_package
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interfaces_package::msg::Int16 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interfaces_package::msg::Int16 &);
size_t get_serialized_size(
  const interfaces_package::msg::Int16 &,
  size_t current_alignment);
size_t
max_serialized_size_Int16(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interfaces_package

// functions for interfaces_package::msg::Int16 already declared above


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: blue_position
  {
    size_t size = ros_message.blue_position.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      interfaces_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.blue_position[i],
        cdr);
    }
  }
  // Member: ball_position
  {
    size_t size = ros_message.ball_position.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      interfaces_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ball_position[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_package::msg::GameInfo & ros_message)
{
  // Member: blue_position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.blue_position.resize(size);
    for (size_t i = 0; i < size; i++) {
      interfaces_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.blue_position[i]);
    }
  }

  // Member: ball_position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.ball_position.resize(size);
    for (size_t i = 0; i < size; i++) {
      interfaces_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ball_position[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_package
get_serialized_size(
  const interfaces_package::msg::GameInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: blue_position
  {
    size_t array_size = ros_message.blue_position.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interfaces_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.blue_position[index], current_alignment);
    }
  }
  // Member: ball_position
  {
    size_t array_size = ros_message.ball_position.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interfaces_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ball_position[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_package
max_serialized_size_GameInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: blue_position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        interfaces_package::msg::typesupport_fastrtps_cpp::max_serialized_size_Int16(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ball_position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        interfaces_package::msg::typesupport_fastrtps_cpp::max_serialized_size_Int16(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces_package::msg::GameInfo;
    is_plain =
      (
      offsetof(DataType, ball_position) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GameInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces_package::msg::GameInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GameInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces_package::msg::GameInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GameInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces_package::msg::GameInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GameInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GameInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GameInfo__callbacks = {
  "interfaces_package::msg",
  "GameInfo",
  _GameInfo__cdr_serialize,
  _GameInfo__cdr_deserialize,
  _GameInfo__get_serialized_size,
  _GameInfo__max_serialized_size
};

static rosidl_message_type_support_t _GameInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GameInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces_package
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_package::msg::GameInfo>()
{
  return &interfaces_package::msg::typesupport_fastrtps_cpp::_GameInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_package, msg, GameInfo)() {
  return &interfaces_package::msg::typesupport_fastrtps_cpp::_GameInfo__handle;
}

#ifdef __cplusplus
}
#endif
