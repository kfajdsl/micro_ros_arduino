// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voltron_vcu_interfaces:msg/VcuControlInput.idl
// generated code does not contain a copyright notice

#ifndef VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_CONTROL_INPUT__STRUCT_H_
#define VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_CONTROL_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VcuControlInput in the package voltron_vcu_interfaces.
typedef struct voltron_vcu_interfaces__msg__VcuControlInput
{
  float speed;
  float steering_angle;
} voltron_vcu_interfaces__msg__VcuControlInput;

// Struct for a sequence of voltron_vcu_interfaces__msg__VcuControlInput.
typedef struct voltron_vcu_interfaces__msg__VcuControlInput__Sequence
{
  voltron_vcu_interfaces__msg__VcuControlInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voltron_vcu_interfaces__msg__VcuControlInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_CONTROL_INPUT__STRUCT_H_
