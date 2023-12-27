#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationEventSource)
// Forward declare root types
namespace UnityEngine {
struct AnimationEventSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimationEventSource);
// Type: UnityEngine::AnimationEventSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14863))
// CS Name: ::UnityEngine::AnimationEventSource
struct CORDL_TYPE AnimationEventSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimationEventSource_Unwrapped
  enum struct __AnimationEventSource_Unwrapped : int32_t {
    __E_NoSource = static_cast<int32_t>(0x0),
    __E_Legacy = static_cast<int32_t>(0x1),
    __E_Animator = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimationEventSource_Unwrapped() const noexcept {
    return static_cast<__AnimationEventSource_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimationEventSource(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationEventSource();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoSource value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AnimationEventSource const NoSource;

  /// @brief Field Legacy value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AnimationEventSource const Legacy;

  /// @brief Field Animator value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AnimationEventSource const Animator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationEventSource, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationEventSource, "UnityEngine", "AnimationEventSource");