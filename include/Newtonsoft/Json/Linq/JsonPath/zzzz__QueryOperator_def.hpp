#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/QueryOperator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryOperator)
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Linq::JsonPath::QueryOperator);
// Dependencies
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JsonPath.QueryOperator
struct CORDL_TYPE QueryOperator {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __QueryOperator_Unwrapped
  enum struct __QueryOperator_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Equals = static_cast<int32_t>(0x1),
    __E_NotEquals = static_cast<int32_t>(0x2),
    __E_Exists = static_cast<int32_t>(0x3),
    __E_LessThan = static_cast<int32_t>(0x4),
    __E_LessThanOrEquals = static_cast<int32_t>(0x5),
    __E_GreaterThan = static_cast<int32_t>(0x6),
    __E_GreaterThanOrEquals = static_cast<int32_t>(0x7),
    __E_And = static_cast<int32_t>(0x8),
    __E_Or = static_cast<int32_t>(0x9),
    __E_RegexEquals = static_cast<int32_t>(0xa),
    __E_StrictEquals = static_cast<int32_t>(0xb),
    __E_StrictNotEquals = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QueryOperator_Unwrapped() const noexcept {
    return static_cast<__QueryOperator_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryOperator();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr QueryOperator(int32_t value__) noexcept;

  /// @brief Field And value: I32(8)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const And;

  /// @brief Field Equals value: I32(1)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Equals;

  /// @brief Field Exists value: I32(3)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Exists;

  /// @brief Field GreaterThan value: I32(6)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const GreaterThan;

  /// @brief Field GreaterThanOrEquals value: I32(7)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const GreaterThanOrEquals;

  /// @brief Field LessThan value: I32(4)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const LessThan;

  /// @brief Field LessThanOrEquals value: I32(5)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const LessThanOrEquals;

  /// @brief Field None value: I32(0)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const None;

  /// @brief Field NotEquals value: I32(2)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const NotEquals;

  /// @brief Field Or value: I32(9)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Or;

  /// @brief Field RegexEquals value: I32(10)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const RegexEquals;

  /// @brief Field StrictEquals value: I32(11)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const StrictEquals;

  /// @brief Field StrictNotEquals value: I32(12)
  static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const StrictNotEquals;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10451 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::QueryOperator, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::QueryOperator, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::QueryOperator, "Newtonsoft.Json.Linq.JsonPath", "QueryOperator");
