#pragma once
// IWYU pragma private; include "TMPro/MaskingOffsetMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskingOffsetMode)
// Forward declare root types
namespace TMPro {
struct MaskingOffsetMode;
}
// Write type traits
MARK_VAL_T(::TMPro::MaskingOffsetMode);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MaskingOffsetMode
struct CORDL_TYPE MaskingOffsetMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MaskingOffsetMode_Unwrapped
  enum struct __MaskingOffsetMode_Unwrapped : int32_t {
    __E_Percentage = static_cast<int32_t>(0x0),
    __E_Pixel = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MaskingOffsetMode_Unwrapped() const noexcept {
    return static_cast<__MaskingOffsetMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskingOffsetMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MaskingOffsetMode(int32_t value__) noexcept;

  /// @brief Field Percentage value: I32(0)
  static ::TMPro::MaskingOffsetMode const Percentage;

  /// @brief Field Pixel value: I32(1)
  static ::TMPro::MaskingOffsetMode const Pixel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14556 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MaskingOffsetMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MaskingOffsetMode, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaskingOffsetMode, "TMPro", "MaskingOffsetMode");
