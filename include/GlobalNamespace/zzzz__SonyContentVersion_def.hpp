#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyContentVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyContentVersion)
namespace GlobalNamespace {
struct __SonyContentVersion__VersionFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SonyContentVersion__VersionFormat;
}
namespace GlobalNamespace {
class SonyContentVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SonyContentVersion__VersionFormat);
MARK_REF_PTR_T(::GlobalNamespace::SonyContentVersion);
// Type: ::VersionFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SonyContentVersion::VersionFormat
struct CORDL_TYPE __SonyContentVersion__VersionFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SonyContentVersion__VersionFormat_Unwrapped
  enum struct ____SonyContentVersion__VersionFormat_Unwrapped : int32_t {
    __E_Long = static_cast<int32_t>(0x0),
    __E_Short = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SonyContentVersion__VersionFormat_Unwrapped() const noexcept {
    return static_cast<____SonyContentVersion__VersionFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyContentVersion__VersionFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SonyContentVersion__VersionFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Long value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SonyContentVersion__VersionFormat const Long;

  /// @brief Field Short value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SonyContentVersion__VersionFormat const Short;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13135 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyContentVersion__VersionFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyContentVersion__VersionFormat, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyContentVersion
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyContentVersion*
class CORDL_TYPE SonyContentVersion : public ::System::Object {
public:
  // Declarations
  using VersionFormat = ::GlobalNamespace::__SonyContentVersion__VersionFormat;

  /// @brief Field _majorVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__majorVersion, put = __cordl_internal_set__majorVersion)) uint32_t _majorVersion;

  /// @brief Field _minorVersion, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__minorVersion, put = __cordl_internal_set__minorVersion)) uint32_t _minorVersion;

  /// @brief Field _revision, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__revision, put = __cordl_internal_set__revision)) uint32_t _revision;

  __declspec(property(get = get_majorVersion)) uint32_t majorVersion;

  __declspec(property(get = get_minorVersion)) uint32_t minorVersion;

  __declspec(property(get = get_revision)) uint32_t revision;

  /// @brief Method CopyValueFrom, addr 0x26b27b4, size 0x24, virtual false, abstract: false, final false
  inline void CopyValueFrom(::GlobalNamespace::SonyContentVersion* other);

  /// @brief Method Get, addr 0x26b2c20, size 0x1b4, virtual false, abstract: false, final false
  inline ::StringW Get(::GlobalNamespace::__SonyContentVersion__VersionFormat versionFormat);

  /// @brief Method GetFromString, addr 0x26b2890, size 0x300, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SonyContentVersion* GetFromString(::StringW versionString);

  /// @brief Method IncreaseMinorVersion, addr 0x26b2810, size 0x24, virtual false, abstract: false, final false
  inline void IncreaseMinorVersion();

  /// @brief Method IsVersionFormatValid, addr 0x26b2b90, size 0x90, virtual false, abstract: false, final false
  static inline bool IsVersionFormatValid(::StringW versionString);

  static inline ::GlobalNamespace::SonyContentVersion* New_ctor(uint32_t majorVersion, uint32_t minorVersion, uint32_t revision);

  /// @brief Method ToString, addr 0x26b2dd4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr uint32_t const& __cordl_internal_get__majorVersion() const;

  constexpr uint32_t& __cordl_internal_get__majorVersion();

  constexpr uint32_t const& __cordl_internal_get__minorVersion() const;

  constexpr uint32_t& __cordl_internal_get__minorVersion();

  constexpr uint32_t const& __cordl_internal_get__revision() const;

  constexpr uint32_t& __cordl_internal_get__revision();

  constexpr void __cordl_internal_set__majorVersion(uint32_t value);

  constexpr void __cordl_internal_set__minorVersion(uint32_t value);

  constexpr void __cordl_internal_set__revision(uint32_t value);

  /// @brief Method .ctor, addr 0x26b2854, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(uint32_t majorVersion, uint32_t minorVersion, uint32_t revision);

  /// @brief Method get_majorVersion, addr 0x26b283c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_majorVersion();

  /// @brief Method get_minorVersion, addr 0x26b2844, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_minorVersion();

  /// @brief Method get_revision, addr 0x26b284c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_revision();

  /// @brief Method op_Implicit, addr 0x26b2ddc, size 0x14, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::GlobalNamespace::SonyContentVersion* version);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyContentVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyContentVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyContentVersion(SonyContentVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyContentVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyContentVersion(SonyContentVersion const&) = delete;

  /// @brief Field _majorVersion, offset: 0x10, size: 0x4, def value: None
  uint32_t ____majorVersion;

  /// @brief Field _minorVersion, offset: 0x14, size: 0x4, def value: None
  uint32_t ____minorVersion;

  /// @brief Field _revision, offset: 0x18, size: 0x4, def value: None
  uint32_t ____revision;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13136 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyContentVersion, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyContentVersion, ____majorVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyContentVersion, ____minorVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyContentVersion, ____revision) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyContentVersion__VersionFormat, "", "SonyContentVersion/VersionFormat");
NEED_NO_BOX(::GlobalNamespace::SonyContentVersion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyContentVersion*, "", "SonyContentVersion");
