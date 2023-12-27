#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoadSceneParameters)
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::LoadSceneParameters);
// Type: UnityEngine.SceneManagement::LoadSceneParameters
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10376)), TypeDefinitionIndex(TypeDefinitionIndex(10375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10377))
// CS Name: ::UnityEngine.SceneManagement::LoadSceneParameters
struct CORDL_TYPE LoadSceneParameters {
public:
  // Declarations
  __declspec(property(put = set_loadSceneMode))::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode;

  /// @brief Method set_loadSceneMode addr 0x2cef280 size 0x8 virtual false final false
  inline void set_loadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode value);

  /// @brief Method .ctor addr 0x2cef288 size 0x8 virtual false final false
  inline void _ctor(::UnityEngine::SceneManagement::LoadSceneMode mode);

  // Ctor Parameters [CppParam { name: "m_LoadSceneMode", ty: "::UnityEngine::SceneManagement::LoadSceneMode", modifiers: "", def_value: None }, CppParam { name: "m_LocalPhysicsMode", ty:
  // "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: None }]
  constexpr LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadSceneParameters();

  /// @brief Field m_LoadSceneMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode;

  /// @brief Field m_LocalPhysicsMode, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::LoadSceneParameters, 0x8>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::LoadSceneParameters, "UnityEngine.SceneManagement", "LoadSceneParameters");