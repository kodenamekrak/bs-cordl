#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataLoaderUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapDataLoaderUtils)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class EnvironmentKeywords;
}
namespace GlobalNamespace {
class IEnvironmentInfo;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataLoaderUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataLoaderUtils);
// Type: ::BeatmapDataLoaderUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDataLoaderUtils*
class CORDL_TYPE BeatmapDataLoaderUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEnvironmentKeywords, addr 0x268283c, size 0x14c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentKeywords* GetEnvironmentKeywords(::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                               ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion);

  /// @brief Method GetEnvironmentLightGroups, addr 0x2682988, size 0x110, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::IEnvironmentLightGroups* GetEnvironmentLightGroups(::GlobalNamespace::IEnvironmentInfo* environmentInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataLoaderUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoaderUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataLoaderUtils(BeatmapDataLoaderUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataLoaderUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataLoaderUtils(BeatmapDataLoaderUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataLoaderUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoaderUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoaderUtils*, "", "BeatmapDataLoaderUtils");
