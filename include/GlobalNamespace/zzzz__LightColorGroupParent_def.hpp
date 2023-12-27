#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightColorGroupParent)
namespace GlobalNamespace {
class IEditTimeValidated;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroupParent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorGroupParent);
// Type: ::LightColorGroupParent
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4925))
// CS Name: ::LightColorGroupParent*
class CORDL_TYPE LightColorGroupParent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
  constexpr operator ::GlobalNamespace::IEditTimeValidated*() noexcept;

  static inline ::GlobalNamespace::LightColorGroupParent* New_ctor();

  /// @brief Method .ctor addr 0x23a935c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupParent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorGroupParent(LightColorGroupParent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroupParent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorGroupParent(LightColorGroupParent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorGroupParent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorGroupParent, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorGroupParent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroupParent*, "", "LightColorGroupParent");