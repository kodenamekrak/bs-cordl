#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/FloatFxEvent.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__FloatFxEvent_def.hpp"
// Ctor Parameters [CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "v", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::FloatFxEvent::FloatFxEvent(int32_t p, ::BeatmapSaveDataCommon::EaseType e, float_t v) noexcept {
  this->p = p;
  this->e = e;
  this->v = v;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::FloatFxEvent::FloatFxEvent() {}
