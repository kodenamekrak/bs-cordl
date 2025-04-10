#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/EventBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBox)
namespace BeatmapSaveDataVersion4 {
class BeatIndex;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct EventBox;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::EventBox);
// Dependencies
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.EventBox
struct CORDL_TYPE EventBox {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBox();

  // Ctor Parameters [CppParam { name: "f", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "e", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "l", ty:
  // "::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*,::Array<::BeatmapSaveDataVersion4::BeatIndex*>*>", modifiers: "", def_value: None }]
  constexpr EventBox(int32_t f, int32_t e, ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> l) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13376 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field f, offset: 0x0, size: 0x4, def value: None
  int32_t f;

  /// @brief Field e, offset: 0x4, size: 0x4, def value: None
  int32_t e;

  /// @brief Field l, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::BeatIndex*, ::Array<::BeatmapSaveDataVersion4::BeatIndex*>*> l;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::EventBox, f) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::EventBox, e) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::EventBox, l) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::EventBox, 0x10>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::EventBox, "BeatmapSaveDataVersion4", "EventBox");
