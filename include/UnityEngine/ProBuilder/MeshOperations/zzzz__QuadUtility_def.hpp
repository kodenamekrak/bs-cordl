#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QuadUtility)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class QuadUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::MeshOperations::QuadUtility);
// Type: UnityEngine.ProBuilder.MeshOperations::QuadUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12279))
// CS Name: ::UnityEngine.ProBuilder.MeshOperations::QuadUtility*
class CORDL_TYPE QuadUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToQuads addr 0x2bbab58 size 0x854 virtual false final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* ToQuads(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                  ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, bool smoothing);

  /// @brief Method GetBestQuadConnection addr 0x2bbeec4 size 0x270 virtual false final false
  static inline ::UnityEngine::ProBuilder::Face* GetBestQuadConnection(::UnityEngine::ProBuilder::WingedEdge* wing,
                                                                       ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, float_t>* connections);

  /// @brief Method GetQuadScore addr 0x2bbe858 size 0x66c virtual false final false
  static inline float_t GetQuadScore(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right,
                                     float_t normalThreshold);

  // Ctor Parameters [CppParam { name: "", ty: "QuadUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuadUtility(QuadUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuadUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuadUtility(QuadUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuadUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshOperations::QuadUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::QuadUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::QuadUtility*, "UnityEngine.ProBuilder.MeshOperations", "QuadUtility");