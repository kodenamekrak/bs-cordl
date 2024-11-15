#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AttributesStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AttributesStore)
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
namespace HoudiniEngineUnity {
class HEU_AttributeData;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ToolsInfo;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeType;
}
namespace HoudiniEngineUnity {
class __HEU_AttributesStore__SetAttributeValueFunc;
}
namespace HoudiniEngineUnity {
struct __HEU_ToolsInfo__PaintMergeMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AttributesStore;
}
namespace HoudiniEngineUnity {
class __HEU_AttributesStore__SetAttributeValueFunc;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AttributesStore);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc);
// Type: ::SetAttributeValueFunc
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HEU_AttributesStore::SetAttributeValueFunc*
class CORDL_TYPE __HEU_AttributesStore__SetAttributeValueFunc : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x39e3d64, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                             float_t factor, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x39e3e4c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x39e3d50, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex, float_t factor);

  static inline ::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x39e3cb0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AttributesStore__SetAttributeValueFunc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_AttributesStore__SetAttributeValueFunc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_AttributesStore__SetAttributeValueFunc(__HEU_AttributesStore__SetAttributeValueFunc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_AttributesStore__SetAttributeValueFunc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_AttributesStore__SetAttributeValueFunc(__HEU_AttributesStore__SetAttributeValueFunc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AttributesStore
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 146, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_AttributesStore*
class CORDL_TYPE HEU_AttributesStore : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using SetAttributeValueFunc = ::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc;

  __declspec(property(get = get_GeoID)) int32_t GeoID;

  __declspec(property(get = get_GeoName)) ::StringW GeoName;

  __declspec(property(get = get_OutputMesh)) ::UnityW<::UnityEngine::Mesh> OutputMesh;

  __declspec(property(get = get_OutputTransform)) ::UnityW<::UnityEngine::Transform> OutputTransform;

  __declspec(property(get = get_PartID)) int32_t PartID;

  /// @brief Field _attributeDatas, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeDatas,
                      put = __cordl_internal_set__attributeDatas)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* _attributeDatas;

  /// @brief Field _geoID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__geoID, put = __cordl_internal_set__geoID)) int32_t _geoID;

  /// @brief Field _geoName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__geoName, put = __cordl_internal_set__geoName)) ::StringW _geoName;

  /// @brief Field _hasColorAttribute, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__hasColorAttribute, put = __cordl_internal_set__hasColorAttribute)) bool _hasColorAttribute;

  /// @brief Field _localMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__localMaterial, put = __cordl_internal_set__localMaterial)) ::UnityW<::UnityEngine::Material> _localMaterial;

  /// @brief Field _localMeshCollider, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__localMeshCollider, put = __cordl_internal_set__localMeshCollider)) ::UnityW<::UnityEngine::MeshCollider> _localMeshCollider;

  /// @brief Field _outputCollider, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__outputCollider, put = __cordl_internal_set__outputCollider)) ::UnityW<::UnityEngine::MeshCollider> _outputCollider;

  /// @brief Field _outputColliderMesh, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__outputColliderMesh, put = __cordl_internal_set__outputColliderMesh)) ::UnityW<::UnityEngine::Mesh> _outputColliderMesh;

  /// @brief Field _outputGameObject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__outputGameObject, put = __cordl_internal_set__outputGameObject)) ::UnityW<::UnityEngine::GameObject> _outputGameObject;

  /// @brief Field _outputMaterials, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__outputMaterials,
                      put = __cordl_internal_set__outputMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      _outputMaterials;

  /// @brief Field _outputMesh, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__outputMesh, put = __cordl_internal_set__outputMesh)) ::UnityW<::UnityEngine::Mesh> _outputMesh;

  /// @brief Field _outputMeshCollider, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__outputMeshCollider, put = __cordl_internal_set__outputMeshCollider)) ::UnityW<::UnityEngine::MeshCollider> _outputMeshCollider;

  /// @brief Field _outputMeshColliderInitiallyEnabled, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get__outputMeshColliderInitiallyEnabled, put = __cordl_internal_set__outputMeshColliderInitiallyEnabled)) bool _outputMeshColliderInitiallyEnabled;

  /// @brief Field _outputMeshRendererInitiallyEnabled, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__outputMeshRendererInitiallyEnabled, put = __cordl_internal_set__outputMeshRendererInitiallyEnabled)) bool _outputMeshRendererInitiallyEnabled;

  /// @brief Field _outputTransform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__outputTransform, put = __cordl_internal_set__outputTransform)) ::UnityW<::UnityEngine::Transform> _outputTransform;

  /// @brief Field _partID, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__partID, put = __cordl_internal_set__partID)) int32_t _partID;

  /// @brief Field _positionAttributeValues, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__positionAttributeValues, put = __cordl_internal_set__positionAttributeValues)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
      _positionAttributeValues;

  /// @brief Field _vertexIndices, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vertexIndices, put = __cordl_internal_set__vertexIndices)) ::ArrayW<int32_t, ::Array<int32_t>*> _vertexIndices;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*() noexcept;

  /// @brief Method AddAttributeValueFloat, addr 0x39e2db0, size 0x94, virtual false, abstract: false, final false
  static inline void AddAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                            float_t factor);

  /// @brief Method AddAttributeValueInt, addr 0x39e27bc, size 0x1b4, virtual false, abstract: false, final false
  static inline void AddAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                          float_t factor);

  /// @brief Method AreAttributesDirty, addr 0x39e32d4, size 0x15c, virtual false, abstract: false, final false
  inline bool AreAttributesDirty();

  /// @brief Method CopyAttributeValuesTo, addr 0x39e3448, size 0x1d8, virtual false, abstract: false, final false
  inline void CopyAttributeValuesTo(::HoudiniEngineUnity::HEU_AttributesStore* destAttrStore);

  /// @brief Method CreateAttribute, addr 0x39e0440, size 0xb4, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_AttributeData* CreateAttribute(::StringW attributeName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo);

  /// @brief Method DestroyAllData, addr 0x39defac, size 0xcc, virtual false, abstract: false, final false
  inline void DestroyAllData(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method DisablePaintCollider, addr 0x39e2040, size 0x118, virtual false, abstract: false, final false
  inline void DisablePaintCollider();

  /// @brief Method EnablePaintCollider, addr 0x39e1e9c, size 0x1a4, virtual false, abstract: false, final false
  inline void EnablePaintCollider();

  /// @brief Method FillAttribute, addr 0x39e3014, size 0xa0, virtual false, abstract: false, final false
  inline void FillAttribute(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools);

  /// @brief Method GetAttributeData, addr 0x39e1c08, size 0x84, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_AttributeData* GetAttributeData(int32_t index);

  /// @brief Method GetAttributeData, addr 0x39e02d8, size 0x168, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_AttributeData* GetAttributeData(::StringW name);

  /// @brief Method GetAttributeNames, addr 0x39e1c8c, size 0x210, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetAttributeNames();

  /// @brief Method GetAttributeSetValueFunction, addr 0x39e30b4, size 0x220, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc* GetAttributeSetValueFunction(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType attrType,
                                                                                                                 ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode paintMergeMode);

  /// @brief Method GetAttributesList, addr 0x39e133c, size 0x264, virtual false, abstract: false, final false
  inline void GetAttributesList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* attributesList, ::HoudiniEngineUnity::HAPI_AttributeOwner ownerType,
                                int32_t attributeCount);

  /// @brief Method GetPaintMeshCollider, addr 0x39e23c4, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshCollider> GetPaintMeshCollider();

  /// @brief Method GetPositionAttributeValues, addr 0x39e3430, size 0xc, virtual false, abstract: false, final false
  inline void GetPositionAttributeValues(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> positionArray);

  /// @brief Method GetVertexIndices, addr 0x39e343c, size 0xc, virtual false, abstract: false, final false
  inline void GetVertexIndices(ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> indices);

  /// @brief Method HasColorAttribute, addr 0x39e02c0, size 0x8, virtual false, abstract: false, final false
  inline bool HasColorAttribute();

  /// @brief Method HasDirtyAttributes, addr 0x39e0c58, size 0x18c, virtual false, abstract: false, final false
  inline bool HasDirtyAttributes();

  /// @brief Method HasMeshForPainting, addr 0x39e2364, size 0x60, virtual false, abstract: false, final false
  inline bool HasMeshForPainting();

  /// @brief Method HidePaintMesh, addr 0x39e227c, size 0xe8, virtual false, abstract: false, final false
  inline void HidePaintMesh();

  /// @brief Method IsEquivalentTo, addr 0x39e367c, size 0x568, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributesStore* other);

  /// @brief Method IsValidStore, addr 0x39e3620, size 0x5c, virtual false, abstract: false, final false
  inline bool IsValidStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method MultiplyAttributeValueFloat, addr 0x39e2ed8, size 0xb0, virtual false, abstract: false, final false
  static inline void MultiplyAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                                 float_t factor);

  /// @brief Method MultiplyAttributeValueInt, addr 0x39e2b24, size 0x1ec, virtual false, abstract: false, final false
  static inline void MultiplyAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                               float_t factor);

  static inline ::HoudiniEngineUnity::HEU_AttributesStore* New_ctor();

  /// @brief Method PaintAttribute, addr 0x39e243c, size 0x54, virtual false, abstract: false, final false
  inline void PaintAttribute(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t attributeIndex, float_t paintFactor,
                             ::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc* setAttrFunc);

  /// @brief Method PopulateAttributeData, addr 0x39e04f4, size 0x764, virtual false, abstract: false, final false
  inline void PopulateAttributeData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_AttributeData* attributeData,
                                    ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo);

  /// @brief Method RefreshUpstreamInputs, addr 0x39e1b74, size 0x78, virtual false, abstract: false, final false
  inline void RefreshUpstreamInputs(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method ReplaceAttributeValueFloat, addr 0x39e2d10, size 0xa0, virtual false, abstract: false, final false
  static inline void ReplaceAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                                float_t factor);

  /// @brief Method ReplaceAttributeValueInt, addr 0x39e25d4, size 0x1e8, virtual false, abstract: false, final false
  static inline void ReplaceAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                              float_t factor);

  /// @brief Method SetAttributeDataDirty, addr 0x39e1bec, size 0x1c, virtual false, abstract: false, final false
  static inline void SetAttributeDataDirty(::HoudiniEngineUnity::HEU_AttributeData* attributeData);

  /// @brief Method SetAttributeDataSyncd, addr 0x39e1320, size 0x1c, virtual false, abstract: false, final false
  static inline void SetAttributeDataSyncd(::HoudiniEngineUnity::HEU_AttributeData* attributeData);

  /// @brief Method SetAttributeEditValueFloat, addr 0x39e24fc, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAttributeEditValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetAttributeEditValueInt, addr 0x39e2490, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAttributeEditValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetAttributeEditValueString, addr 0x39e2568, size 0x6c, virtual false, abstract: false, final false
  static inline void SetAttributeEditValueString(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t startIndex, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method SetAttributeValueString, addr 0x39e2f88, size 0x8c, virtual false, abstract: false, final false
  static inline void SetAttributeValueString(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                             float_t factor);

  /// @brief Method SetupMeshAndMaterials, addr 0x39dec04, size 0x3a8, virtual false, abstract: false, final false
  inline void SetupMeshAndMaterials(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::HoudiniEngineUnity::HAPI_PartType partType, ::UnityEngine::GameObject* outputGameObject);

  /// @brief Method ShowPaintMesh, addr 0x39e2158, size 0x124, virtual false, abstract: false, final false
  inline void ShowPaintMesh();

  /// @brief Method SubtractAttributeValueFloat, addr 0x39e2e44, size 0x94, virtual false, abstract: false, final false
  static inline void SubtractAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                                 float_t factor);

  /// @brief Method SubtractAttributeValueInt, addr 0x39e2970, size 0x1b4, virtual false, abstract: false, final false
  static inline void SubtractAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* attributeData, int32_t targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, int32_t sourceIndex,
                                               float_t factor);

  /// @brief Method SyncAllAttributesFrom, addr 0x39de568, size 0x69c, virtual false, abstract: false, final false
  inline void SyncAllAttributesFrom(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* asset, int32_t geoID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo,
                                    ::UnityEngine::GameObject* outputGameObject);

  /// @brief Method SyncDirtyAttributesToHoudini, addr 0x39e0de4, size 0x6c, virtual false, abstract: false, final false
  inline void SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UpdateAttribute, addr 0x39e15a0, size 0x480, virtual false, abstract: false, final false
  inline void UpdateAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_AttributeData* attributeData);

  /// @brief Method UpdateAttributeList, addr 0x39e1a20, size 0x154, virtual false, abstract: false, final false
  inline void UpdateAttributeList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* attributeDataList);

  /// @brief Method UploadAttributeViaMeshInput, addr 0x39e0e50, size 0x4d0, virtual false, abstract: false, final false
  inline bool UploadAttributeViaMeshInput(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*& __cordl_internal_get__attributeDatas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*> const& __cordl_internal_get__attributeDatas() const;

  constexpr int32_t const& __cordl_internal_get__geoID() const;

  constexpr int32_t& __cordl_internal_get__geoID();

  constexpr ::StringW const& __cordl_internal_get__geoName() const;

  constexpr ::StringW& __cordl_internal_get__geoName();

  constexpr bool const& __cordl_internal_get__hasColorAttribute() const;

  constexpr bool& __cordl_internal_get__hasColorAttribute();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__localMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__localMaterial();

  constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__localMeshCollider() const;

  constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__localMeshCollider();

  constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__outputCollider() const;

  constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__outputCollider();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__outputColliderMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__outputColliderMesh();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__outputGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__outputGameObject();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__outputMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__outputMaterials();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__outputMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__outputMesh();

  constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get__outputMeshCollider() const;

  constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get__outputMeshCollider();

  constexpr bool const& __cordl_internal_get__outputMeshColliderInitiallyEnabled() const;

  constexpr bool& __cordl_internal_get__outputMeshColliderInitiallyEnabled();

  constexpr bool const& __cordl_internal_get__outputMeshRendererInitiallyEnabled() const;

  constexpr bool& __cordl_internal_get__outputMeshRendererInitiallyEnabled();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__outputTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__outputTransform();

  constexpr int32_t const& __cordl_internal_get__partID() const;

  constexpr int32_t& __cordl_internal_get__partID();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__positionAttributeValues() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__positionAttributeValues();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__vertexIndices() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__vertexIndices();

  constexpr void __cordl_internal_set__attributeDatas(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* value);

  constexpr void __cordl_internal_set__geoID(int32_t value);

  constexpr void __cordl_internal_set__geoName(::StringW value);

  constexpr void __cordl_internal_set__hasColorAttribute(bool value);

  constexpr void __cordl_internal_set__localMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__localMeshCollider(::UnityW<::UnityEngine::MeshCollider> value);

  constexpr void __cordl_internal_set__outputCollider(::UnityW<::UnityEngine::MeshCollider> value);

  constexpr void __cordl_internal_set__outputColliderMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__outputGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__outputMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set__outputMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__outputMeshCollider(::UnityW<::UnityEngine::MeshCollider> value);

  constexpr void __cordl_internal_set__outputMeshColliderInitiallyEnabled(bool value);

  constexpr void __cordl_internal_set__outputMeshRendererInitiallyEnabled(bool value);

  constexpr void __cordl_internal_set__outputTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__partID(int32_t value);

  constexpr void __cordl_internal_set__positionAttributeValues(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__vertexIndices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x39e3be4, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GeoID, addr 0x39e02a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GeoID();

  /// @brief Method get_GeoName, addr 0x39e02b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_GeoName();

  /// @brief Method get_OutputMesh, addr 0x39e02d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_OutputMesh();

  /// @brief Method get_OutputTransform, addr 0x39e02c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_OutputTransform();

  /// @brief Method get_PartID, addr 0x39e02b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PartID();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*
  i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_AttributesStore__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AttributesStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AttributesStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AttributesStore(HEU_AttributesStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AttributesStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AttributesStore(HEU_AttributesStore const&) = delete;

  /// @brief Field _geoID, offset: 0x18, size: 0x4, def value: None
  int32_t ____geoID;

  /// @brief Field _partID, offset: 0x1c, size: 0x4, def value: None
  int32_t ____partID;

  /// @brief Field _geoName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____geoName;

  /// @brief Field _attributeDatas, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* ____attributeDatas;

  /// @brief Field _hasColorAttribute, offset: 0x30, size: 0x1, def value: None
  bool ____hasColorAttribute;

  /// @brief Field _localMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____localMaterial;

  /// @brief Field _outputTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____outputTransform;

  /// @brief Field _positionAttributeValues, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____positionAttributeValues;

  /// @brief Field _vertexIndices, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____vertexIndices;

  /// @brief Field _outputGameObject, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____outputGameObject;

  /// @brief Field _outputMesh, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____outputMesh;

  /// @brief Field _outputMaterials, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____outputMaterials;

  /// @brief Field _outputCollider, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshCollider> ____outputCollider;

  /// @brief Field _outputColliderMesh, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____outputColliderMesh;

  /// @brief Field _outputMeshCollider, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshCollider> ____outputMeshCollider;

  /// @brief Field _localMeshCollider, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshCollider> ____localMeshCollider;

  /// @brief Field _outputMeshRendererInitiallyEnabled, offset: 0x90, size: 0x1, def value: None
  bool ____outputMeshRendererInitiallyEnabled;

  /// @brief Field _outputMeshColliderInitiallyEnabled, offset: 0x91, size: 0x1, def value: None
  bool ____outputMeshColliderInitiallyEnabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11614 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AttributesStore, 0x98>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____geoID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____partID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____geoName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____attributeDatas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____hasColorAttribute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____localMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____positionAttributeValues) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____vertexIndices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputGameObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMesh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMaterials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputCollider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputColliderMesh) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMeshCollider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____localMeshCollider) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMeshRendererInitiallyEnabled) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AttributesStore, ____outputMeshColliderInitiallyEnabled) == 0x91, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AttributesStore);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AttributesStore*, "HoudiniEngineUnity", "HEU_AttributesStore");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AttributesStore__SetAttributeValueFunc*, "HoudiniEngineUnity", "HEU_AttributesStore/SetAttributeValueFunc");
