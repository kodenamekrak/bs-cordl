#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInitSetupData)
namespace GlobalNamespace {
struct __AppInitSetupData__RunMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AppInitSetupData__RunMode;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AppInitSetupData__RunMode);
MARK_REF_PTR_T(::GlobalNamespace::AppInitSetupData);
// Type: ::RunMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AppInitSetupData::RunMode
struct CORDL_TYPE __AppInitSetupData__RunMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AppInitSetupData__RunMode_Unwrapped
  enum struct ____AppInitSetupData__RunMode_Unwrapped : int32_t {
    __E_Game = static_cast<int32_t>(0x0),
    __E_PlayTest = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AppInitSetupData__RunMode_Unwrapped() const noexcept {
    return static_cast<____AppInitSetupData__RunMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInitSetupData__RunMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AppInitSetupData__RunMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Game value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AppInitSetupData__RunMode const Game;

  /// @brief Field PlayTest value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AppInitSetupData__RunMode const PlayTest;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17557 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInitSetupData__RunMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInitSetupData__RunMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AppInitSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AppInitSetupData*
class CORDL_TYPE AppInitSetupData : public ::System::Object {
public:
  // Declarations
  using RunMode = ::GlobalNamespace::__AppInitSetupData__RunMode;

  /// @brief Field runMode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_runMode, put = __cordl_internal_set_runMode)) ::GlobalNamespace::__AppInitSetupData__RunMode runMode;

  static inline ::GlobalNamespace::AppInitSetupData* New_ctor();

  constexpr ::GlobalNamespace::__AppInitSetupData__RunMode const& __cordl_internal_get_runMode() const;

  constexpr ::GlobalNamespace::__AppInitSetupData__RunMode& __cordl_internal_get_runMode();

  constexpr void __cordl_internal_set_runMode(::GlobalNamespace::__AppInitSetupData__RunMode value);

  /// @brief Method .ctor, addr 0x2261238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInitSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitSetupData(AppInitSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitSetupData(AppInitSetupData const&) = delete;

  /// @brief Field runMode, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__AppInitSetupData__RunMode ___runMode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17558 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitSetupData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInitSetupData, ___runMode) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInitSetupData__RunMode, "", "AppInitSetupData/RunMode");
NEED_NO_BOX(::GlobalNamespace::AppInitSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitSetupData*, "", "AppInitSetupData");
