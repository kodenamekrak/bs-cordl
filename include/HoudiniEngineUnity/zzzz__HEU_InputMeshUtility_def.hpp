#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputMeshUtility)
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputMeshUtility;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputMeshUtility);
// Type: HoudiniEngineUnity::HEU_InputMeshUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9848))
// CS Name: ::HoudiniEngineUnity::HEU_InputMeshUtility*
class CORDL_TYPE HEU_InputMeshUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetMeshPointAttribute addr 0x21cd330 size 0x28c virtual false final false
  static inline bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                           ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo,
                                           bool bConvertToHoudiniCoordinateSystem);

  /// @brief Method SetMeshPointAttribute addr 0x21cdc30 size 0x1e8 virtual false final false
  static inline bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                           ::ArrayW<float_t, ::Array<float_t>*> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method SetMeshVertexAttribute addr 0x21cde20 size 0x2a8 virtual false final false
  static inline bool SetMeshVertexAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                            ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> data, ::ArrayW<int32_t, ::Array<int32_t>*> indices,
                                            ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, bool bConvertToHoudiniCoordinateSystem);

  /// @brief Method SetMeshVertexFloatAttribute addr 0x21ce0c8 size 0x214 virtual false final false
  static inline bool SetMeshVertexFloatAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                                 ::ArrayW<float_t, ::Array<float_t>*> data, ::ArrayW<int32_t, ::Array<int32_t>*> indices, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method UploadMeshIntoHoudiniNode addr 0x21ce2dc size 0x65c virtual false final false
  static inline bool UploadMeshIntoHoudiniNode(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetNodeID, int32_t objectID, int32_t geoID, ByRef<::UnityEngine::Mesh*> mesh);

  /// @brief Method SetMeshPointAttribute addr 0x21cd5bc size 0x2dc virtual false final false
  static inline bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize,
                                           ::ArrayW<::UnityEngine::Vector3Int, ::Array<::UnityEngine::Vector3Int>*> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method SetMeshPointAttribute addr 0x21cd898 size 0x198 virtual false final false
  static inline bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, ::ArrayW<::StringW, ::Array<::StringW>*> data,
                                           ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  /// @brief Method SetMeshDetailAttribute addr 0x21cda30 size 0x200 virtual false final false
  static inline bool SetMeshDetailAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize, ::UnityEngine::Vector3 data,
                                            ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputMeshUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputMeshUtility(HEU_InputMeshUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputMeshUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputMeshUtility(HEU_InputMeshUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputMeshUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputMeshUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputMeshUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputMeshUtility*, "HoudiniEngineUnity", "HEU_InputMeshUtility");