#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnChevronObjectPoolsInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(SpawnChevronObjectPoolsInstaller)
namespace GlobalNamespace {
class SpawnRotationChevron;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnChevronObjectPoolsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnChevronObjectPoolsInstaller);
// Type: ::SpawnChevronObjectPoolsInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpawnChevronObjectPoolsInstaller*
class CORDL_TYPE SpawnChevronObjectPoolsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _spawnRotationChevronPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnRotationChevronPrefab, put = __cordl_internal_set__spawnRotationChevronPrefab)) ::UnityW<::GlobalNamespace::SpawnRotationChevron>
      _spawnRotationChevronPrefab;

  /// @brief Method InstallBindings, addr 0x3b37f2c, size 0x84, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::SpawnChevronObjectPoolsInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron> const& __cordl_internal_get__spawnRotationChevronPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron>& __cordl_internal_get__spawnRotationChevronPrefab();

  constexpr void __cordl_internal_set__spawnRotationChevronPrefab(::UnityW<::GlobalNamespace::SpawnRotationChevron> value);

  /// @brief Method .ctor, addr 0x3b37fb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnChevronObjectPoolsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpawnChevronObjectPoolsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnChevronObjectPoolsInstaller(SpawnChevronObjectPoolsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnChevronObjectPoolsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnChevronObjectPoolsInstaller(SpawnChevronObjectPoolsInstaller const&) = delete;

  /// @brief Field _spawnRotationChevronPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SpawnRotationChevron> ____spawnRotationChevronPrefab;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4353 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnChevronObjectPoolsInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnChevronObjectPoolsInstaller, ____spawnRotationChevronPrefab) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnChevronObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnChevronObjectPoolsInstaller*, "", "SpawnChevronObjectPoolsInstaller");
