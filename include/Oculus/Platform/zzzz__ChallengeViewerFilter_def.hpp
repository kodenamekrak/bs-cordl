#pragma once
// IWYU pragma private; include "Oculus/Platform/ChallengeViewerFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeViewerFilter)
// Forward declare root types
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::ChallengeViewerFilter);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.ChallengeViewerFilter
struct CORDL_TYPE ChallengeViewerFilter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ChallengeViewerFilter_Unwrapped
  enum struct __ChallengeViewerFilter_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_AllVisible = static_cast<int32_t>(0x1),
    __E_Participating = static_cast<int32_t>(0x2),
    __E_Invited = static_cast<int32_t>(0x3),
    __E_ParticipatingOrInvited = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ChallengeViewerFilter_Unwrapped() const noexcept {
    return static_cast<__ChallengeViewerFilter_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeViewerFilter();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ChallengeViewerFilter(int32_t value__) noexcept;

  /// @brief Field AllVisible value: I32(1)
  static ::Oculus::Platform::ChallengeViewerFilter const AllVisible;

  /// @brief Field Invited value: I32(3)
  static ::Oculus::Platform::ChallengeViewerFilter const Invited;

  /// @brief Field Participating value: I32(2)
  static ::Oculus::Platform::ChallengeViewerFilter const Participating;

  /// @brief Field ParticipatingOrInvited value: I32(4)
  static ::Oculus::Platform::ChallengeViewerFilter const ParticipatingOrInvited;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::ChallengeViewerFilter const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15332 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::ChallengeViewerFilter, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ChallengeViewerFilter, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeViewerFilter, "Oculus.Platform", "ChallengeViewerFilter");
