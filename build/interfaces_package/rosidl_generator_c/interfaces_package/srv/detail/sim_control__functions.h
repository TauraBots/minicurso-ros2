// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interfaces_package:srv/SimControl.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__FUNCTIONS_H_
#define INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces_package/msg/rosidl_generator_c__visibility_control.h"

#include "interfaces_package/srv/detail/sim_control__struct.h"

/// Initialize srv/SimControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaces_package__srv__SimControl_Request
 * )) before or use
 * interfaces_package__srv__SimControl_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Request__init(interfaces_package__srv__SimControl_Request * msg);

/// Finalize srv/SimControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
void
interfaces_package__srv__SimControl_Request__fini(interfaces_package__srv__SimControl_Request * msg);

/// Create srv/SimControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaces_package__srv__SimControl_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
interfaces_package__srv__SimControl_Request *
interfaces_package__srv__SimControl_Request__create();

/// Destroy srv/SimControl message.
/**
 * It calls
 * interfaces_package__srv__SimControl_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
void
interfaces_package__srv__SimControl_Request__destroy(interfaces_package__srv__SimControl_Request * msg);

/// Check for srv/SimControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Request__are_equal(const interfaces_package__srv__SimControl_Request * lhs, const interfaces_package__srv__SimControl_Request * rhs);

/// Copy a srv/SimControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Request__copy(
  const interfaces_package__srv__SimControl_Request * input,
  interfaces_package__srv__SimControl_Request * output);

/// Initialize array of srv/SimControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaces_package__srv__SimControl_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Request__Sequence__init(interfaces_package__srv__SimControl_Request__Sequence * array, size_t size);

/// Finalize array of srv/SimControl messages.
/**
 * It calls
 * interfaces_package__srv__SimControl_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
void
interfaces_package__srv__SimControl_Request__Sequence__fini(interfaces_package__srv__SimControl_Request__Sequence * array);

/// Create array of srv/SimControl messages.
/**
 * It allocates the memory for the array and calls
 * interfaces_package__srv__SimControl_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
interfaces_package__srv__SimControl_Request__Sequence *
interfaces_package__srv__SimControl_Request__Sequence__create(size_t size);

/// Destroy array of srv/SimControl messages.
/**
 * It calls
 * interfaces_package__srv__SimControl_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
void
interfaces_package__srv__SimControl_Request__Sequence__destroy(interfaces_package__srv__SimControl_Request__Sequence * array);

/// Check for srv/SimControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Request__Sequence__are_equal(const interfaces_package__srv__SimControl_Request__Sequence * lhs, const interfaces_package__srv__SimControl_Request__Sequence * rhs);

/// Copy an array of srv/SimControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Request__Sequence__copy(
  const interfaces_package__srv__SimControl_Request__Sequence * input,
  interfaces_package__srv__SimControl_Request__Sequence * output);

/// Initialize srv/SimControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaces_package__srv__SimControl_Response
 * )) before or use
 * interfaces_package__srv__SimControl_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Response__init(interfaces_package__srv__SimControl_Response * msg);

/// Finalize srv/SimControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
void
interfaces_package__srv__SimControl_Response__fini(interfaces_package__srv__SimControl_Response * msg);

/// Create srv/SimControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaces_package__srv__SimControl_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
interfaces_package__srv__SimControl_Response *
interfaces_package__srv__SimControl_Response__create();

/// Destroy srv/SimControl message.
/**
 * It calls
 * interfaces_package__srv__SimControl_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
void
interfaces_package__srv__SimControl_Response__destroy(interfaces_package__srv__SimControl_Response * msg);

/// Check for srv/SimControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Response__are_equal(const interfaces_package__srv__SimControl_Response * lhs, const interfaces_package__srv__SimControl_Response * rhs);

/// Copy a srv/SimControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Response__copy(
  const interfaces_package__srv__SimControl_Response * input,
  interfaces_package__srv__SimControl_Response * output);

/// Initialize array of srv/SimControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaces_package__srv__SimControl_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Response__Sequence__init(interfaces_package__srv__SimControl_Response__Sequence * array, size_t size);

/// Finalize array of srv/SimControl messages.
/**
 * It calls
 * interfaces_package__srv__SimControl_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
void
interfaces_package__srv__SimControl_Response__Sequence__fini(interfaces_package__srv__SimControl_Response__Sequence * array);

/// Create array of srv/SimControl messages.
/**
 * It allocates the memory for the array and calls
 * interfaces_package__srv__SimControl_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
interfaces_package__srv__SimControl_Response__Sequence *
interfaces_package__srv__SimControl_Response__Sequence__create(size_t size);

/// Destroy array of srv/SimControl messages.
/**
 * It calls
 * interfaces_package__srv__SimControl_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
void
interfaces_package__srv__SimControl_Response__Sequence__destroy(interfaces_package__srv__SimControl_Response__Sequence * array);

/// Check for srv/SimControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Response__Sequence__are_equal(const interfaces_package__srv__SimControl_Response__Sequence * lhs, const interfaces_package__srv__SimControl_Response__Sequence * rhs);

/// Copy an array of srv/SimControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_package
bool
interfaces_package__srv__SimControl_Response__Sequence__copy(
  const interfaces_package__srv__SimControl_Response__Sequence * input,
  interfaces_package__srv__SimControl_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PACKAGE__SRV__DETAIL__SIM_CONTROL__FUNCTIONS_H_
