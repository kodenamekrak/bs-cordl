#pragma once
// IWYU pragma private; include "System/Data/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueType)
// Forward declare root types
namespace System::Data {
struct ValueType;
}
// Write type traits
MARK_VAL_T(::System::Data::ValueType);
// Type: System.Data::ValueType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::ValueType
struct CORDL_TYPE ValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValueType_Unwrapped
  enum struct __ValueType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0xffffffff),
    __E_Null = static_cast<int32_t>(0x0),
    __E_Bool = static_cast<int32_t>(0x1),
    __E_Numeric = static_cast<int32_t>(0x2),
    __E_Str = static_cast<int32_t>(0x3),
    __E_Float = static_cast<int32_t>(0x4),
    __E_Decimal = static_cast<int32_t>(0x5),
    __E_Object = static_cast<int32_t>(0x6),
    __E_Date = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValueType_Unwrapped() const noexcept {
    return static_cast<__ValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValueType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bool value: static_cast<int32_t>(0x1)
  static ::System::Data::ValueType const Bool;

  /// @brief Field Date value: static_cast<int32_t>(0x7)
  static ::System::Data::ValueType const Date;

  /// @brief Field Decimal value: static_cast<int32_t>(0x5)
  static ::System::Data::ValueType const Decimal;

  /// @brief Field Float value: static_cast<int32_t>(0x4)
  static ::System::Data::ValueType const Float;

  /// @brief Field Null value: static_cast<int32_t>(0x0)
  static ::System::Data::ValueType const Null;

  /// @brief Field Numeric value: static_cast<int32_t>(0x2)
  static ::System::Data::ValueType const Numeric;

  /// @brief Field Object value: static_cast<int32_t>(0x6)
  static ::System::Data::ValueType const Object;

  /// @brief Field Str value: static_cast<int32_t>(0x3)
  static ::System::Data::ValueType const Str;

  /// @brief Field Unknown value: static_cast<int32_t>(0xffffffff)
  static ::System::Data::ValueType const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ValueType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::ValueType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ValueType, "System.Data", "ValueType");