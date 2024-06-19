// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_package:srv/SimControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__STRUCT_H_
#define INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SimControl in the package interfaces_package.
typedef struct interfaces_package__srv__SimControl_Request
{
  rosidl_runtime_c__String action;
} interfaces_package__srv__SimControl_Request;

// Struct for a sequence of interfaces_package__srv__SimControl_Request.
typedef struct interfaces_package__srv__SimControl_Request__Sequence
{
  interfaces_package__srv__SimControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_package__srv__SimControl_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SimControl in the package interfaces_package.
typedef struct interfaces_package__srv__SimControl_Response
{
  bool success;
} interfaces_package__srv__SimControl_Response;

// Struct for a sequence of interfaces_package__srv__SimControl_Response.
typedef struct interfaces_package__srv__SimControl_Response__Sequence
{
  interfaces_package__srv__SimControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_package__srv__SimControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__STRUCT_H_
