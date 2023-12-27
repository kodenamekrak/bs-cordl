#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightShadows)
// Forward declare root types
namespace UnityEngine {
struct LightShadows;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightShadows);
// Type: UnityEngine::LightShadows
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10104))
// CS Name: ::UnityEngine::LightShadows
struct CORDL_TYPE LightShadows {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightShadows_Unwrapped
  enum struct __LightShadows_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Hard = static_cast<int32_t>(0x1),
    __E_Soft = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightShadows_Unwrapped() const noexcept {
    return static_cast<__LightShadows_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightShadows(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightShadows();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::LightShadows const None;

  /// @brief Field Hard value: static_cast<int32_t>(0x1)
  static ::UnityEngine::LightShadows const Hard;

  /// @brief Field Soft value: static_cast<int32_t>(0x2)
  static ::UnityEngine::LightShadows const Soft;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightShadows, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightShadows, "UnityEngine", "LightShadows");