#pragma once
// IWYU pragma private; include "Oculus/Platform/LaunchResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchResult)
// Forward declare root types
namespace Oculus::Platform {
struct LaunchResult;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LaunchResult);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.LaunchResult
struct CORDL_TYPE LaunchResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LaunchResult_Unwrapped
  enum struct __LaunchResult_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Success = static_cast<int32_t>(0x1),
    __E_FailedRoomFull = static_cast<int32_t>(0x2),
    __E_FailedGameAlreadyStarted = static_cast<int32_t>(0x3),
    __E_FailedRoomNotFound = static_cast<int32_t>(0x4),
    __E_FailedUserDeclined = static_cast<int32_t>(0x5),
    __E_FailedOtherReason = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LaunchResult_Unwrapped() const noexcept {
    return static_cast<__LaunchResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LaunchResult(int32_t value__) noexcept;

  /// @brief Field FailedGameAlreadyStarted value: I32(3)
  static ::Oculus::Platform::LaunchResult const FailedGameAlreadyStarted;

  /// @brief Field FailedOtherReason value: I32(6)
  static ::Oculus::Platform::LaunchResult const FailedOtherReason;

  /// @brief Field FailedRoomFull value: I32(2)
  static ::Oculus::Platform::LaunchResult const FailedRoomFull;

  /// @brief Field FailedRoomNotFound value: I32(4)
  static ::Oculus::Platform::LaunchResult const FailedRoomNotFound;

  /// @brief Field FailedUserDeclined value: I32(5)
  static ::Oculus::Platform::LaunchResult const FailedUserDeclined;

  /// @brief Field Success value: I32(1)
  static ::Oculus::Platform::LaunchResult const Success;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::LaunchResult const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15340 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::LaunchResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LaunchResult, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LaunchResult, "Oculus.Platform", "LaunchResult");
