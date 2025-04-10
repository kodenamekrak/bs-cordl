#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableMassProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ModifiableMassProperties)
// Forward declare root types
namespace UnityEngine {
struct ModifiableMassProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ModifiableMassProperties);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ModifiableMassProperties
struct CORDL_TYPE ModifiableMassProperties {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiableMassProperties();

  // Ctor Parameters [CppParam { name: "inverseMassScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "inverseInertiaScale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "otherInverseMassScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "otherInverseInertiaScale", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ModifiableMassProperties(float_t inverseMassScale, float_t inverseInertiaScale, float_t otherInverseMassScale, float_t otherInverseInertiaScale) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field inverseMassScale, offset: 0x0, size: 0x4, def value: None
  float_t inverseMassScale;

  /// @brief Field inverseInertiaScale, offset: 0x4, size: 0x4, def value: None
  float_t inverseInertiaScale;

  /// @brief Field otherInverseMassScale, offset: 0x8, size: 0x4, def value: None
  float_t otherInverseMassScale;

  /// @brief Field otherInverseInertiaScale, offset: 0xc, size: 0x4, def value: None
  float_t otherInverseInertiaScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ModifiableMassProperties, inverseMassScale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableMassProperties, inverseInertiaScale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableMassProperties, otherInverseMassScale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableMassProperties, otherInverseInertiaScale) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ModifiableMassProperties, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableMassProperties, "UnityEngine", "ModifiableMassProperties");
