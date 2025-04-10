#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_VolumeVisualInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeVisualType_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_VolumeVisualInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeVisualInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_VolumeVisualInfo);
// Dependencies HoudiniEngineUnity.HAPI_VolumeVisualType
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_VolumeVisualInfo
struct CORDL_TYPE HAPI_VolumeVisualInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_VolumeVisualInfo();

  // Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_VolumeVisualType", modifiers: "", def_value: None }, CppParam { name: "iso", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "density", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HAPI_VolumeVisualInfo(::HoudiniEngineUnity::HAPI_VolumeVisualType type, float_t iso, float_t density) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11735 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_VolumeVisualType type;

  /// @brief Field iso, offset: 0x4, size: 0x4, def value: None
  float_t iso;

  /// @brief Field density, offset: 0x8, size: 0x4, def value: None
  float_t density;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeVisualInfo, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeVisualInfo, iso) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeVisualInfo, density) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_VolumeVisualInfo, 0xc>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeVisualInfo, "HoudiniEngineUnity", "HAPI_VolumeVisualInfo");
