#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ComponentMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentMode)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ComponentMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ComponentMode);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ComponentMode
struct CORDL_TYPE ComponentMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ComponentMode_Unwrapped
  enum struct __ComponentMode_Unwrapped : int32_t {
    __E_Vertex = static_cast<int32_t>(0x0),
    __E_Edge = static_cast<int32_t>(0x1),
    __E_Face = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ComponentMode_Unwrapped() const noexcept {
    return static_cast<__ComponentMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComponentMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ComponentMode(int32_t value__) noexcept;

  /// @brief Field Edge value: I32(1)
  static ::UnityEngine::ProBuilder::ComponentMode const Edge;

  /// @brief Field Face value: I32(2)
  static ::UnityEngine::ProBuilder::ComponentMode const Face;

  /// @brief Field Vertex value: I32(0)
  static ::UnityEngine::ProBuilder::ComponentMode const Vertex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14270 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ComponentMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ComponentMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ComponentMode, "UnityEngine.ProBuilder", "ComponentMode");
