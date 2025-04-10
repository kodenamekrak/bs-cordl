#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/LightTranslationEventBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__Axis_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationEventBox)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct LightTranslationEventBox;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::LightTranslationEventBox);
// Dependencies BeatmapSaveDataCommon.Axis, BeatmapSaveDataCommon.DistributionParamType, BeatmapSaveDataCommon.EaseType
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.LightTranslationEventBox
struct CORDL_TYPE LightTranslationEventBox {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationEventBox();

  // Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "::BeatmapSaveDataCommon::DistributionParamType", modifiers: "", def_value: None
  // }, CppParam { name: "s", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::BeatmapSaveDataCommon::DistributionParamType", modifiers: "", def_value: None }, CppParam {
  // name: "b", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: None }, CppParam { name: "a", ty:
  // "::BeatmapSaveDataCommon::Axis", modifiers: "", def_value: None }, CppParam { name: "f", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightTranslationEventBox(float_t w, ::BeatmapSaveDataCommon::DistributionParamType d, float_t s, ::BeatmapSaveDataCommon::DistributionParamType t, int32_t b,
                                     ::BeatmapSaveDataCommon::EaseType e, ::BeatmapSaveDataCommon::Axis a, int32_t f) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13373 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  float_t w;

  /// @brief Field d, offset: 0x4, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::DistributionParamType d;

  /// @brief Field s, offset: 0x8, size: 0x4, def value: None
  float_t s;

  /// @brief Field t, offset: 0xc, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::DistributionParamType t;

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  int32_t b;

  /// @brief Field e, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType e;

  /// @brief Field a, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::Axis a;

  /// @brief Field f, offset: 0x1c, size: 0x4, def value: None
  int32_t f;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEventBox, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEventBox, d) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEventBox, s) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEventBox, t) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEventBox, b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEventBox, e) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEventBox, a) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::LightTranslationEventBox, f) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::LightTranslationEventBox, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::LightTranslationEventBox, "BeatmapSaveDataVersion4", "LightTranslationEventBox");
