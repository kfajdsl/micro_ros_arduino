// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from voltron_vcu_interfaces:msg/VcuControlInput.idl
// generated code does not contain a copyright notice

#ifndef VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_CONTROL_INPUT__FUNCTIONS_H_
#define VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_CONTROL_INPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "voltron_vcu_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "voltron_vcu_interfaces/msg/detail/vcu_control_input__struct.h"

/// Initialize msg/VcuControlInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * voltron_vcu_interfaces__msg__VcuControlInput
 * )) before or use
 * voltron_vcu_interfaces__msg__VcuControlInput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
bool
voltron_vcu_interfaces__msg__VcuControlInput__init(voltron_vcu_interfaces__msg__VcuControlInput * msg);

/// Finalize msg/VcuControlInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
void
voltron_vcu_interfaces__msg__VcuControlInput__fini(voltron_vcu_interfaces__msg__VcuControlInput * msg);

/// Create msg/VcuControlInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * voltron_vcu_interfaces__msg__VcuControlInput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
voltron_vcu_interfaces__msg__VcuControlInput *
voltron_vcu_interfaces__msg__VcuControlInput__create();

/// Destroy msg/VcuControlInput message.
/**
 * It calls
 * voltron_vcu_interfaces__msg__VcuControlInput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
void
voltron_vcu_interfaces__msg__VcuControlInput__destroy(voltron_vcu_interfaces__msg__VcuControlInput * msg);

/// Check for msg/VcuControlInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
bool
voltron_vcu_interfaces__msg__VcuControlInput__are_equal(const voltron_vcu_interfaces__msg__VcuControlInput * lhs, const voltron_vcu_interfaces__msg__VcuControlInput * rhs);

/// Copy a msg/VcuControlInput message.
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
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
bool
voltron_vcu_interfaces__msg__VcuControlInput__copy(
  const voltron_vcu_interfaces__msg__VcuControlInput * input,
  voltron_vcu_interfaces__msg__VcuControlInput * output);

/// Initialize array of msg/VcuControlInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * voltron_vcu_interfaces__msg__VcuControlInput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
bool
voltron_vcu_interfaces__msg__VcuControlInput__Sequence__init(voltron_vcu_interfaces__msg__VcuControlInput__Sequence * array, size_t size);

/// Finalize array of msg/VcuControlInput messages.
/**
 * It calls
 * voltron_vcu_interfaces__msg__VcuControlInput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
void
voltron_vcu_interfaces__msg__VcuControlInput__Sequence__fini(voltron_vcu_interfaces__msg__VcuControlInput__Sequence * array);

/// Create array of msg/VcuControlInput messages.
/**
 * It allocates the memory for the array and calls
 * voltron_vcu_interfaces__msg__VcuControlInput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
voltron_vcu_interfaces__msg__VcuControlInput__Sequence *
voltron_vcu_interfaces__msg__VcuControlInput__Sequence__create(size_t size);

/// Destroy array of msg/VcuControlInput messages.
/**
 * It calls
 * voltron_vcu_interfaces__msg__VcuControlInput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
void
voltron_vcu_interfaces__msg__VcuControlInput__Sequence__destroy(voltron_vcu_interfaces__msg__VcuControlInput__Sequence * array);

/// Check for msg/VcuControlInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
bool
voltron_vcu_interfaces__msg__VcuControlInput__Sequence__are_equal(const voltron_vcu_interfaces__msg__VcuControlInput__Sequence * lhs, const voltron_vcu_interfaces__msg__VcuControlInput__Sequence * rhs);

/// Copy an array of msg/VcuControlInput messages.
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
ROSIDL_GENERATOR_C_PUBLIC_voltron_vcu_interfaces
bool
voltron_vcu_interfaces__msg__VcuControlInput__Sequence__copy(
  const voltron_vcu_interfaces__msg__VcuControlInput__Sequence * input,
  voltron_vcu_interfaces__msg__VcuControlInput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_CONTROL_INPUT__FUNCTIONS_H_
