#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPlayerStartState)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerPlayerStartState);
// Type: ::MultiplayerPlayerStartState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerPlayerStartState
struct CORDL_TYPE MultiplayerPlayerStartState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerPlayerStartState_Unwrapped
  enum struct __MultiplayerPlayerStartState_Unwrapped : int32_t {
    __E_InSync = static_cast<int32_t>(0x0),
    __E_Late = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerPlayerStartState_Unwrapped() const noexcept {
    return static_cast<__MultiplayerPlayerStartState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPlayerStartState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerPlayerStartState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InSync value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::MultiplayerPlayerStartState const InSync;

  /// @brief Field Late value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::MultiplayerPlayerStartState const Late;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4588 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPlayerStartState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPlayerStartState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerStartState, "", "MultiplayerPlayerStartState");
