#pragma once
// IWYU pragma private; include "Newtonsoft/Json/WriteState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WriteState)
// Forward declare root types
namespace Newtonsoft::Json {
struct WriteState;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::WriteState);
// Dependencies
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.WriteState
struct CORDL_TYPE WriteState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WriteState_Unwrapped
  enum struct __WriteState_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x0),
    __E_Closed = static_cast<int32_t>(0x1),
    __E_Object = static_cast<int32_t>(0x2),
    __E_Array = static_cast<int32_t>(0x3),
    __E_Constructor = static_cast<int32_t>(0x4),
    __E_Property = static_cast<int32_t>(0x5),
    __E_Start = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WriteState_Unwrapped() const noexcept {
    return static_cast<__WriteState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WriteState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WriteState(int32_t value__) noexcept;

  /// @brief Field Array value: I32(3)
  static ::Newtonsoft::Json::WriteState const Array;

  /// @brief Field Closed value: I32(1)
  static ::Newtonsoft::Json::WriteState const Closed;

  /// @brief Field Constructor value: I32(4)
  static ::Newtonsoft::Json::WriteState const Constructor;

  /// @brief Field Error value: I32(0)
  static ::Newtonsoft::Json::WriteState const Error;

  /// @brief Field Object value: I32(2)
  static ::Newtonsoft::Json::WriteState const Object;

  /// @brief Field Property value: I32(5)
  static ::Newtonsoft::Json::WriteState const Property;

  /// @brief Field Start value: I32(6)
  static ::Newtonsoft::Json::WriteState const Start;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10179 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::WriteState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::WriteState, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::WriteState, "Newtonsoft.Json", "WriteState");
