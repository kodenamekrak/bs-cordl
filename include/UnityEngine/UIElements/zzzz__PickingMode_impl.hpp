#pragma once
#include "UnityEngine/UIElements/zzzz__PickingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::PickingMode::PickingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PickingMode::PickingMode() {}
constexpr ::UnityEngine::UIElements::PickingMode UnityEngine::UIElements::PickingMode::Position{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::PickingMode UnityEngine::UIElements::PickingMode::Ignore{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif