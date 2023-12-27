#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDuration)
namespace System::Xml::Schema {
struct __XsdDuration__DurationType;
}
namespace System::Xml::Schema {
struct __XsdDuration__Parts;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __XsdDuration__DurationType;
}
namespace System::Xml::Schema {
struct __XsdDuration__Parts;
}
namespace System::Xml::Schema {
struct XsdDuration;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__XsdDuration__DurationType);
MARK_VAL_T(::System::Xml::Schema::__XsdDuration__Parts);
MARK_VAL_T(::System::Xml::Schema::XsdDuration);
// Type: ::Parts
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11764))
// CS Name: ::XsdDuration::Parts
struct CORDL_TYPE __XsdDuration__Parts {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XsdDuration__Parts_Unwrapped
  enum struct ____XsdDuration__Parts_Unwrapped : int32_t {
    __E_HasNone = static_cast<int32_t>(0x0),
    __E_HasYears = static_cast<int32_t>(0x1),
    __E_HasMonths = static_cast<int32_t>(0x2),
    __E_HasDays = static_cast<int32_t>(0x4),
    __E_HasHours = static_cast<int32_t>(0x8),
    __E_HasMinutes = static_cast<int32_t>(0x10),
    __E_HasSeconds = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XsdDuration__Parts_Unwrapped() const noexcept {
    return static_cast<____XsdDuration__Parts_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XsdDuration__Parts(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XsdDuration__Parts();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HasNone value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasNone;

  /// @brief Field HasYears value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasYears;

  /// @brief Field HasMonths value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasMonths;

  /// @brief Field HasDays value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasDays;

  /// @brief Field HasHours value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasHours;

  /// @brief Field HasMinutes value: static_cast<int32_t>(0x10)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasMinutes;

  /// @brief Field HasSeconds value: static_cast<int32_t>(0x20)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasSeconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XsdDuration__Parts, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: ::DurationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11765))
// CS Name: ::XsdDuration::DurationType
struct CORDL_TYPE __XsdDuration__DurationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XsdDuration__DurationType_Unwrapped
  enum struct ____XsdDuration__DurationType_Unwrapped : int32_t {
    __E_Duration = static_cast<int32_t>(0x0),
    __E_YearMonthDuration = static_cast<int32_t>(0x1),
    __E_DayTimeDuration = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XsdDuration__DurationType_Unwrapped() const noexcept {
    return static_cast<____XsdDuration__DurationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XsdDuration__DurationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XsdDuration__DurationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Duration value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__XsdDuration__DurationType const Duration;

  /// @brief Field YearMonthDuration value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__XsdDuration__DurationType const YearMonthDuration;

  /// @brief Field DayTimeDuration value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__XsdDuration__DurationType const DayTimeDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XsdDuration__DurationType, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::XsdDuration
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11766))
// CS Name: ::System.Xml.Schema::XsdDuration
struct CORDL_TYPE XsdDuration {
public:
  // Declarations
  using DurationType = ::System::Xml::Schema::__XsdDuration__DurationType;

  using Parts = ::System::Xml::Schema::__XsdDuration__Parts;

  __declspec(property(get = get_IsNegative)) bool IsNegative;

  __declspec(property(get = get_Years)) int32_t Years;

  __declspec(property(get = get_Months)) int32_t Months;

  __declspec(property(get = get_Days)) int32_t Days;

  __declspec(property(get = get_Hours)) int32_t Hours;

  __declspec(property(get = get_Minutes)) int32_t Minutes;

  __declspec(property(get = get_Seconds)) int32_t Seconds;

  __declspec(property(get = get_Nanoseconds)) int32_t Nanoseconds;

  /// @brief Method .ctor addr 0x28e94ac size 0x178 virtual false final false
  inline void _ctor(bool isNegative, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t nanoseconds);

  /// @brief Method .ctor addr 0x28e9624 size 0xd8 virtual false final false
  inline void _ctor(::System::TimeSpan timeSpan);

  /// @brief Method .ctor addr 0x28e96fc size 0x180 virtual false final false
  inline void _ctor(::System::TimeSpan timeSpan, ::System::Xml::Schema::__XsdDuration__DurationType durationType);

  /// @brief Method .ctor addr 0x28e987c size 0x8c virtual false final false
  inline void _ctor(::StringW s, ::System::Xml::Schema::__XsdDuration__DurationType durationType);

  /// @brief Method get_IsNegative addr 0x28ea000 size 0xc virtual false final false
  inline bool get_IsNegative();

  /// @brief Method get_Years addr 0x28ea00c size 0x8 virtual false final false
  inline int32_t get_Years();

  /// @brief Method get_Months addr 0x28ea014 size 0x8 virtual false final false
  inline int32_t get_Months();

  /// @brief Method get_Days addr 0x28ea01c size 0x8 virtual false final false
  inline int32_t get_Days();

  /// @brief Method get_Hours addr 0x28ea024 size 0x8 virtual false final false
  inline int32_t get_Hours();

  /// @brief Method get_Minutes addr 0x28ea02c size 0x8 virtual false final false
  inline int32_t get_Minutes();

  /// @brief Method get_Seconds addr 0x28ea034 size 0x8 virtual false final false
  inline int32_t get_Seconds();

  /// @brief Method get_Nanoseconds addr 0x28e9ff4 size 0xc virtual false final false
  inline int32_t get_Nanoseconds();

  /// @brief Method ToTimeSpan addr 0x28ea03c size 0x48 virtual false final false
  inline ::System::TimeSpan ToTimeSpan(::System::Xml::Schema::__XsdDuration__DurationType durationType);

  /// @brief Method TryToTimeSpan addr 0x28ea564 size 0xc virtual false final false
  inline ::System::Exception* TryToTimeSpan(ByRef<::System::TimeSpan> result);

  /// @brief Method TryToTimeSpan addr 0x28ea084 size 0x4e0 virtual false final false
  inline ::System::Exception* TryToTimeSpan(::System::Xml::Schema::__XsdDuration__DurationType durationType, ByRef<::System::TimeSpan> result);

  /// @brief Method ToString addr 0x28ea570 size 0x8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x28ea578 size 0x3fc virtual false final false
  inline ::StringW ToString(::System::Xml::Schema::__XsdDuration__DurationType durationType);

  /// @brief Method TryParse addr 0x28ea974 size 0xc virtual false final false
  static inline ::System::Exception* TryParse(::StringW s, ByRef<::System::Xml::Schema::XsdDuration> result);

  /// @brief Method TryParse addr 0x28e9908 size 0x6ec virtual false final false
  static inline ::System::Exception* TryParse(::StringW s, ::System::Xml::Schema::__XsdDuration__DurationType durationType, ByRef<::System::Xml::Schema::XsdDuration> result);

  /// @brief Method TryParseDigits addr 0x28ea980 size 0x1bc virtual false final false
  static inline ::StringW TryParseDigits(::StringW s, ByRef<int32_t> offset, bool eatDigits, ByRef<int32_t> result, ByRef<int32_t> numDigits);

  // Ctor Parameters [CppParam { name: "years", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "months", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "days",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hours", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minutes", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "seconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nanoseconds", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr XsdDuration(int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, uint32_t nanoseconds) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdDuration();

  /// @brief Field years, offset: 0x0, size: 0x4, def value: None
  int32_t years;

  /// @brief Field months, offset: 0x4, size: 0x4, def value: None
  int32_t months;

  /// @brief Field days, offset: 0x8, size: 0x4, def value: None
  int32_t days;

  /// @brief Field hours, offset: 0xc, size: 0x4, def value: None
  int32_t hours;

  /// @brief Field minutes, offset: 0x10, size: 0x4, def value: None
  int32_t minutes;

  /// @brief Field seconds, offset: 0x14, size: 0x4, def value: None
  int32_t seconds;

  /// @brief Field nanoseconds, offset: 0x18, size: 0x4, def value: None
  uint32_t nanoseconds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDuration, 0x1c>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XsdDuration__DurationType, "System.Xml.Schema", "XsdDuration/DurationType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XsdDuration__Parts, "System.Xml.Schema", "XsdDuration/Parts");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDuration, "System.Xml.Schema", "XsdDuration");