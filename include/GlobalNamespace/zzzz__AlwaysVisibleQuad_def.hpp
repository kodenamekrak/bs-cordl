#pragma once
// IWYU pragma private; include "GlobalNamespace/AlwaysVisibleQuad.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AlwaysVisibleQuad)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysVisibleQuad;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlwaysVisibleQuad);
// Type: ::AlwaysVisibleQuad
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AlwaysVisibleQuad*
class CORDL_TYPE AlwaysVisibleQuad : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh> _mesh;

  static inline ::GlobalNamespace::AlwaysVisibleQuad* New_ctor();

  /// @brief Method OnDisable, addr 0x401e258, size 0xc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x401e04c, size 0x20c, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  /// @brief Method .ctor, addr 0x401e264, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlwaysVisibleQuad();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlwaysVisibleQuad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlwaysVisibleQuad(AlwaysVisibleQuad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysVisibleQuad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlwaysVisibleQuad(AlwaysVisibleQuad const&) = delete;

  /// @brief Field _mesh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17797 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlwaysVisibleQuad, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AlwaysVisibleQuad, ____mesh) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlwaysVisibleQuad);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysVisibleQuad*, "", "AlwaysVisibleQuad");
