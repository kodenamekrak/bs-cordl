#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VoipManager)
// Forward declare root types
namespace GlobalNamespace {
class VoipManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VoipManager);
// Type: ::VoipManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14985))
// CS Name: ::VoipManager*
class CORDL_TYPE VoipManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::VoipManager* New_ctor();

  /// @brief Method .ctor addr 0x263ca44 size 0x1008 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VoipManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoipManager(VoipManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoipManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoipManager(VoipManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VoipManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VoipManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoipManager*, "", "VoipManager");