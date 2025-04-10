#pragma once
// IWYU pragma private; include "UnityEngine/CastHelper_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CastHelper_1)
// Forward declare root types
namespace UnityEngine {
template <typename T> struct CastHelper_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::CastHelper_1);
// Dependencies System.IntPtr
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.CastHelper`1<T>
struct CORDL_TYPE CastHelper_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CastHelper_1();

  // Ctor Parameters [CppParam { name: "t", ty: "T", modifiers: "", def_value: None }, CppParam { name: "onePointerFurtherThanT", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr CastHelper_1(T t, ::System::IntPtr onePointerFurtherThanT) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10873 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field t, offset: 0x0, size: 0x8, def value: None
  T t;

  /// @brief Field onePointerFurtherThanT, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr onePointerFurtherThanT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::CastHelper_1, "UnityEngine", "CastHelper`1");
