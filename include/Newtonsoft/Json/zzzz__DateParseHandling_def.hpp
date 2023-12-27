#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateParseHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct DateParseHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::DateParseHandling);
// Type: Newtonsoft.Json::DateParseHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11796))
// CS Name: ::Newtonsoft.Json::DateParseHandling
struct CORDL_TYPE DateParseHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateParseHandling_Unwrapped
  enum struct __DateParseHandling_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DateTime = static_cast<int32_t>(0x1),
    __E_DateTimeOffset = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateParseHandling_Unwrapped() const noexcept {
    return static_cast<__DateParseHandling_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateParseHandling(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateParseHandling();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::DateParseHandling const None;

  /// @brief Field DateTime value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::DateParseHandling const DateTime;

  /// @brief Field DateTimeOffset value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::DateParseHandling const DateTimeOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::DateParseHandling, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DateParseHandling, "Newtonsoft.Json", "DateParseHandling");