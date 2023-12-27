#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OwnedState)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct OwnedState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::OwnedState);
// Type: UnityEngine.UIElements.UIR::OwnedState
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7373))
// CS Name: ::UnityEngine.UIElements.UIR::OwnedState
struct CORDL_TYPE OwnedState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __OwnedState_Unwrapped
  enum struct __OwnedState_Unwrapped : uint8_t {
    __E_Inherited = static_cast<uint8_t>(0x0u),
    __E_Owned = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OwnedState_Unwrapped() const noexcept {
    return static_cast<__OwnedState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr OwnedState(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OwnedState();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Inherited value: static_cast<uint8_t>(0x0u)
  static ::UnityEngine::UIElements::UIR::OwnedState const Inherited;

  /// @brief Field Owned value: static_cast<uint8_t>(0x1u)
  static ::UnityEngine::UIElements::UIR::OwnedState const Owned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::OwnedState, 0x1>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::OwnedState, "UnityEngine.UIElements.UIR", "OwnedState");