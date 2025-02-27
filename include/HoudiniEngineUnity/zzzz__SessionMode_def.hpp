#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/SessionMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionMode)
// Forward declare root types
namespace HoudiniEngineUnity {
struct SessionMode;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::SessionMode);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.SessionMode
struct CORDL_TYPE SessionMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SessionMode_Unwrapped
  enum struct __SessionMode_Unwrapped : int32_t {
    __E_Socket = static_cast<int32_t>(0x0),
    __E_Pipe = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SessionMode_Unwrapped() const noexcept {
    return static_cast<__SessionMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SessionMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SessionMode(int32_t value__) noexcept;

  /// @brief Field Pipe value: I32(1)
  static ::HoudiniEngineUnity::SessionMode const Pipe;

  /// @brief Field Socket value: I32(0)
  static ::HoudiniEngineUnity::SessionMode const Socket;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::SessionMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::SessionMode, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::SessionMode, "HoudiniEngineUnity", "SessionMode");
