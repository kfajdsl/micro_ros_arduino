// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voltron_vcu_interfaces:msg/VcuStatus.idl
// generated code does not contain a copyright notice

#ifndef VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_STATUS__STRUCT_H_
#define VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/VcuStatus in the package voltron_vcu_interfaces.
typedef struct voltron_vcu_interfaces__msg__VcuStatus
{
  rosidl_runtime_c__String state;
  float measured_speed;
  float measured_accel_estimate;
  float commanded_accel_estimate;
} voltron_vcu_interfaces__msg__VcuStatus;

// Struct for a sequence of voltron_vcu_interfaces__msg__VcuStatus.
typedef struct voltron_vcu_interfaces__msg__VcuStatus__Sequence
{
  voltron_vcu_interfaces__msg__VcuStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voltron_vcu_interfaces__msg__VcuStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOLTRON_VCU_INTERFACES__MSG__DETAIL__VCU_STATUS__STRUCT_H_
