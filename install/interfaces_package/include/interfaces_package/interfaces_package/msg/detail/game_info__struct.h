// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_package:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__STRUCT_H_
#define INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'blue_position'
// Member 'ball_position'
#include "interfaces_package/msg/detail/int16__struct.h"

/// Struct defined in msg/GameInfo in the package interfaces_package.
typedef struct interfaces_package__msg__GameInfo
{
  interfaces_package__msg__Int16__Sequence blue_position;
  interfaces_package__msg__Int16__Sequence ball_position;
} interfaces_package__msg__GameInfo;

// Struct for a sequence of interfaces_package__msg__GameInfo.
typedef struct interfaces_package__msg__GameInfo__Sequence
{
  interfaces_package__msg__GameInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_package__msg__GameInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__STRUCT_H_
