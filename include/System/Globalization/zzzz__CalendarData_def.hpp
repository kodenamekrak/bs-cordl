#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CalendarData)
// Forward declare root types
namespace System::Globalization {
class CalendarData;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CalendarData);
// Type: System.Globalization::CalendarData
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3697))
// CS Name: ::System.Globalization::CalendarData*
class CORDL_TYPE CalendarData : public ::System::Object {
public:
  // Declarations
  /// @brief Field sNativeName, offset 0x10, size 0x8
  __declspec(property(get = __get_sNativeName, put = __set_sNativeName))::StringW sNativeName;

  /// @brief Field saShortDates, offset 0x18, size 0x8
  __declspec(property(get = __get_saShortDates, put = __set_saShortDates))::ArrayW<::StringW, ::Array<::StringW>*> saShortDates;

  /// @brief Field saYearMonths, offset 0x20, size 0x8
  __declspec(property(get = __get_saYearMonths, put = __set_saYearMonths))::ArrayW<::StringW, ::Array<::StringW>*> saYearMonths;

  /// @brief Field saLongDates, offset 0x28, size 0x8
  __declspec(property(get = __get_saLongDates, put = __set_saLongDates))::ArrayW<::StringW, ::Array<::StringW>*> saLongDates;

  /// @brief Field sMonthDay, offset 0x30, size 0x8
  __declspec(property(get = __get_sMonthDay, put = __set_sMonthDay))::StringW sMonthDay;

  /// @brief Field saEraNames, offset 0x38, size 0x8
  __declspec(property(get = __get_saEraNames, put = __set_saEraNames))::ArrayW<::StringW, ::Array<::StringW>*> saEraNames;

  /// @brief Field saAbbrevEraNames, offset 0x40, size 0x8
  __declspec(property(get = __get_saAbbrevEraNames, put = __set_saAbbrevEraNames))::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevEraNames;

  /// @brief Field saAbbrevEnglishEraNames, offset 0x48, size 0x8
  __declspec(property(get = __get_saAbbrevEnglishEraNames, put = __set_saAbbrevEnglishEraNames))::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevEnglishEraNames;

  /// @brief Field saDayNames, offset 0x50, size 0x8
  __declspec(property(get = __get_saDayNames, put = __set_saDayNames))::ArrayW<::StringW, ::Array<::StringW>*> saDayNames;

  /// @brief Field saAbbrevDayNames, offset 0x58, size 0x8
  __declspec(property(get = __get_saAbbrevDayNames, put = __set_saAbbrevDayNames))::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevDayNames;

  /// @brief Field saSuperShortDayNames, offset 0x60, size 0x8
  __declspec(property(get = __get_saSuperShortDayNames, put = __set_saSuperShortDayNames))::ArrayW<::StringW, ::Array<::StringW>*> saSuperShortDayNames;

  /// @brief Field saMonthNames, offset 0x68, size 0x8
  __declspec(property(get = __get_saMonthNames, put = __set_saMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> saMonthNames;

  /// @brief Field saAbbrevMonthNames, offset 0x70, size 0x8
  __declspec(property(get = __get_saAbbrevMonthNames, put = __set_saAbbrevMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevMonthNames;

  /// @brief Field saMonthGenitiveNames, offset 0x78, size 0x8
  __declspec(property(get = __get_saMonthGenitiveNames, put = __set_saMonthGenitiveNames))::ArrayW<::StringW, ::Array<::StringW>*> saMonthGenitiveNames;

  /// @brief Field saAbbrevMonthGenitiveNames, offset 0x80, size 0x8
  __declspec(property(get = __get_saAbbrevMonthGenitiveNames, put = __set_saAbbrevMonthGenitiveNames))::ArrayW<::StringW, ::Array<::StringW>*> saAbbrevMonthGenitiveNames;

  /// @brief Field saLeapYearMonthNames, offset 0x88, size 0x8
  __declspec(property(get = __get_saLeapYearMonthNames, put = __set_saLeapYearMonthNames))::ArrayW<::StringW, ::Array<::StringW>*> saLeapYearMonthNames;

  /// @brief Field iTwoDigitYearMax, offset 0x90, size 0x4
  __declspec(property(get = __get_iTwoDigitYearMax, put = __set_iTwoDigitYearMax)) int32_t iTwoDigitYearMax;

  /// @brief Field iCurrentEra, offset 0x94, size 0x4
  __declspec(property(get = __get_iCurrentEra, put = __set_iCurrentEra)) int32_t iCurrentEra;

  /// @brief Field bUseUserOverrides, offset 0x98, size 0x1
  __declspec(property(get = __get_bUseUserOverrides, put = __set_bUseUserOverrides)) bool bUseUserOverrides;

  /// @brief Field Invariant, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Invariant, put = setStaticF_Invariant))::System::Globalization::CalendarData* Invariant;

  /// @brief Field HEBREW_MONTH_NAMES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HEBREW_MONTH_NAMES, put = setStaticF_HEBREW_MONTH_NAMES))::ArrayW<::StringW, ::Array<::StringW>*> HEBREW_MONTH_NAMES;

  /// @brief Field HEBREW_LEAP_MONTH_NAMES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HEBREW_LEAP_MONTH_NAMES, put = setStaticF_HEBREW_LEAP_MONTH_NAMES))::ArrayW<::StringW, ::Array<::StringW>*> HEBREW_LEAP_MONTH_NAMES;

  constexpr ::StringW& __get_sNativeName();

  constexpr ::StringW const& __get_sNativeName() const;

  constexpr void __set_sNativeName(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saShortDates();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saShortDates() const;

  constexpr void __set_saShortDates(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saYearMonths();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saYearMonths() const;

  constexpr void __set_saYearMonths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saLongDates();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saLongDates() const;

  constexpr void __set_saLongDates(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __get_sMonthDay();

  constexpr ::StringW const& __get_sMonthDay() const;

  constexpr void __set_sMonthDay(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saEraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saEraNames() const;

  constexpr void __set_saEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saAbbrevEraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saAbbrevEraNames() const;

  constexpr void __set_saAbbrevEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saAbbrevEnglishEraNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saAbbrevEnglishEraNames() const;

  constexpr void __set_saAbbrevEnglishEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saDayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saDayNames() const;

  constexpr void __set_saDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saAbbrevDayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saAbbrevDayNames() const;

  constexpr void __set_saAbbrevDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saSuperShortDayNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saSuperShortDayNames() const;

  constexpr void __set_saSuperShortDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saMonthNames() const;

  constexpr void __set_saMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saAbbrevMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saAbbrevMonthNames() const;

  constexpr void __set_saAbbrevMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saMonthGenitiveNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saMonthGenitiveNames() const;

  constexpr void __set_saMonthGenitiveNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saAbbrevMonthGenitiveNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saAbbrevMonthGenitiveNames() const;

  constexpr void __set_saAbbrevMonthGenitiveNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_saLeapYearMonthNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_saLeapYearMonthNames() const;

  constexpr void __set_saLeapYearMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get_iTwoDigitYearMax();

  constexpr int32_t const& __get_iTwoDigitYearMax() const;

  constexpr void __set_iTwoDigitYearMax(int32_t value);

  constexpr int32_t& __get_iCurrentEra();

  constexpr int32_t const& __get_iCurrentEra() const;

  constexpr void __set_iCurrentEra(int32_t value);

  constexpr bool& __get_bUseUserOverrides();

  constexpr bool const& __get_bUseUserOverrides() const;

  constexpr void __set_bUseUserOverrides(bool value);

  static inline void setStaticF_Invariant(::System::Globalization::CalendarData* value);

  static inline ::System::Globalization::CalendarData* getStaticF_Invariant();

  static inline void setStaticF_HEBREW_MONTH_NAMES(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_HEBREW_MONTH_NAMES();

  static inline void setStaticF_HEBREW_LEAP_MONTH_NAMES(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_HEBREW_LEAP_MONTH_NAMES();

  static inline ::System::Globalization::CalendarData* New_ctor();

  /// @brief Method .ctor addr 0x255ea1c size 0x10 virtual false final false
  inline void _ctor();

  static inline ::System::Globalization::CalendarData* New_ctor(::StringW localeName, int32_t calendarId, bool bUseUserOverrides);

  /// @brief Method .ctor addr 0x255ff58 size 0x518 virtual false final false
  inline void _ctor(::StringW localeName, int32_t calendarId, bool bUseUserOverrides);

  /// @brief Method InitializeEraNames addr 0x2560534 size 0x3bc virtual false final false
  inline void InitializeEraNames(::StringW localeName, int32_t calendarId);

  /// @brief Method GetJapaneseEraNames addr 0x2560cd8 size 0xec virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetJapaneseEraNames();

  /// @brief Method GetJapaneseEnglishEraNames addr 0x2560bec size 0xec virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetJapaneseEnglishEraNames();

  /// @brief Method InitializeAbbreviatedEraNames addr 0x25608f0 size 0x2fc virtual false final false
  inline void InitializeAbbreviatedEraNames(::StringW localeName, int32_t calendarId);

  /// @brief Method GetCalendarData addr 0x255e320 size 0xa4 virtual false final false
  static inline ::System::Globalization::CalendarData* GetCalendarData(int32_t calendarId);

  /// @brief Method CalendarIdToCultureName addr 0x2560fec size 0xcc virtual false final false
  static inline ::StringW CalendarIdToCultureName(int32_t calendarId);

  /// @brief Method nativeGetTwoDigitYearMax addr 0x255ea14 size 0x8 virtual false final false
  static inline int32_t nativeGetTwoDigitYearMax(int32_t calID);

  /// @brief Method nativeGetCalendarData addr 0x2560470 size 0xbc virtual false final false
  static inline bool nativeGetCalendarData(::System::Globalization::CalendarData* data, ::StringW localeName, int32_t calendarId);

  /// @brief Method fill_calendar_data addr 0x25611d0 size 0x4 virtual false final false
  inline bool fill_calendar_data(::StringW localeName, int32_t datetimeIndex);

  // Ctor Parameters [CppParam { name: "", ty: "CalendarData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CalendarData(CalendarData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CalendarData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CalendarData(CalendarData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CalendarData();

public:
  /// @brief Field sNativeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___sNativeName;

  /// @brief Field saShortDates, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saShortDates;

  /// @brief Field saYearMonths, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saYearMonths;

  /// @brief Field saLongDates, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saLongDates;

  /// @brief Field sMonthDay, offset: 0x30, size: 0x8, def value: None
  ::StringW ___sMonthDay;

  /// @brief Field saEraNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saEraNames;

  /// @brief Field saAbbrevEraNames, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevEraNames;

  /// @brief Field saAbbrevEnglishEraNames, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevEnglishEraNames;

  /// @brief Field saDayNames, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saDayNames;

  /// @brief Field saAbbrevDayNames, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevDayNames;

  /// @brief Field saSuperShortDayNames, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saSuperShortDayNames;

  /// @brief Field saMonthNames, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saMonthNames;

  /// @brief Field saAbbrevMonthNames, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevMonthNames;

  /// @brief Field saMonthGenitiveNames, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saMonthGenitiveNames;

  /// @brief Field saAbbrevMonthGenitiveNames, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saAbbrevMonthGenitiveNames;

  /// @brief Field saLeapYearMonthNames, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___saLeapYearMonthNames;

  /// @brief Field iTwoDigitYearMax, offset: 0x90, size: 0x4, def value: None
  int32_t ___iTwoDigitYearMax;

  /// @brief Field iCurrentEra, offset: 0x94, size: 0x4, def value: None
  int32_t ___iCurrentEra;

  /// @brief Field bUseUserOverrides, offset: 0x98, size: 0x1, def value: None
  bool ___bUseUserOverrides;

  /// @brief Field MAX_CALENDARS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_CALENDARS{ static_cast<int32_t>(0x17) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CalendarData, 0xa0>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CalendarData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CalendarData*, "System.Globalization", "CalendarData");