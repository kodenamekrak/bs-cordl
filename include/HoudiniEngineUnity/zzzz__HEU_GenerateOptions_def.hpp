#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GenerateOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(HEU_GenerateOptions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_GenerateOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_GenerateOptions);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_GenerateOptions
struct CORDL_TYPE HEU_GenerateOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_GenerateOptions();

  // Ctor Parameters [CppParam { name: "_generateUVs", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_generateTangents", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "_generateNormals", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useLODGroups", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_splitPoints", ty:
  // "bool", modifiers: "", def_value: None }]
  constexpr HEU_GenerateOptions(bool _generateUVs, bool _generateTangents, bool _generateNormals, bool _useLODGroups, bool _splitPoints) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11781 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x5 };

  /// @brief Field _generateUVs, offset: 0x0, size: 0x1, def value: None
  bool _generateUVs;

  /// @brief Field _generateTangents, offset: 0x1, size: 0x1, def value: None
  bool _generateTangents;

  /// @brief Field _generateNormals, offset: 0x2, size: 0x1, def value: None
  bool _generateNormals;

  /// @brief Field _useLODGroups, offset: 0x3, size: 0x1, def value: None
  bool _useLODGroups;

  /// @brief Field _splitPoints, offset: 0x4, size: 0x1, def value: None
  bool _splitPoints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateOptions, _generateUVs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateOptions, _generateTangents) == 0x1, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateOptions, _generateNormals) == 0x2, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateOptions, _useLODGroups) == 0x3, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GenerateOptions, _splitPoints) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GenerateOptions, 0x5>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GenerateOptions, "HoudiniEngineUnity", "HEU_GenerateOptions");
