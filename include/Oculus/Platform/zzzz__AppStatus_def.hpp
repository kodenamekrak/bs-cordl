#pragma once
// IWYU pragma private; include "Oculus/Platform/AppStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppStatus)
// Forward declare root types
namespace Oculus::Platform {
struct AppStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AppStatus);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.AppStatus
struct CORDL_TYPE AppStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AppStatus_Unwrapped
  enum struct __AppStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Entitled = static_cast<int32_t>(0x1),
    __E_DownloadQueued = static_cast<int32_t>(0x2),
    __E_Downloading = static_cast<int32_t>(0x3),
    __E_Installing = static_cast<int32_t>(0x4),
    __E_Installed = static_cast<int32_t>(0x5),
    __E_Uninstalling = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AppStatus_Unwrapped() const noexcept {
    return static_cast<__AppStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AppStatus(int32_t value__) noexcept;

  /// @brief Field DownloadQueued value: I32(2)
  static ::Oculus::Platform::AppStatus const DownloadQueued;

  /// @brief Field Downloading value: I32(3)
  static ::Oculus::Platform::AppStatus const Downloading;

  /// @brief Field Entitled value: I32(1)
  static ::Oculus::Platform::AppStatus const Entitled;

  /// @brief Field Installed value: I32(5)
  static ::Oculus::Platform::AppStatus const Installed;

  /// @brief Field Installing value: I32(4)
  static ::Oculus::Platform::AppStatus const Installing;

  /// @brief Field Uninstalling value: I32(6)
  static ::Oculus::Platform::AppStatus const Uninstalling;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::AppStatus const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15319 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::AppStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AppStatus, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AppStatus, "Oculus.Platform", "AppStatus");
