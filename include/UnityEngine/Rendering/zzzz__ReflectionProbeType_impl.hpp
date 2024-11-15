#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReflectionProbeType.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ReflectionProbeType::ReflectionProbeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ReflectionProbeType::ReflectionProbeType() {}
constexpr ::UnityEngine::Rendering::ReflectionProbeType UnityEngine::Rendering::ReflectionProbeType::Cube{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ReflectionProbeType UnityEngine::Rendering::ReflectionProbeType::Card{ static_cast<int32_t>(0x1) };
