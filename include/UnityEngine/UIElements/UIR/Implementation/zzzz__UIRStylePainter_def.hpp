#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Implementation/UIRStylePainter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRStylePainter)
namespace GlobalNamespace {
class __MeshBuilder__AllocMeshData__Allocator;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__ClosingInfo;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__Entry;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__RepeatRectUV;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class TempAllocator_1;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
namespace UnityEngine::UIElements::UIR {
struct __MeshBuilder__AllocMeshData;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
class IStylePainter;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
struct MeshWriteDataInterface;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __MeshBuilderNative__NativeRectParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRStylePainter;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__ClosingInfo;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__Entry;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__RepeatRectUV;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter);
MARK_VAL_T(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo);
MARK_VAL_T(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry);
MARK_VAL_T(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV);
// Type: ::Entry
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// CS Name: ::UIRStylePainter::Entry
struct CORDL_TYPE __UIRStylePainter__Entry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRStylePainter__Entry();

  // Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "indices", ty:
  // "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam
  // { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam {
  // name: "customCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "clipRectID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc",
  // modifiers: "", def_value: None }, CppParam { name: "addFlags", ty: "::UnityEngine::UIElements::UIR::VertexFlags", modifiers: "", def_value: None }, CppParam { name: "uvIsDisplacement", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "isTextEntry", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isClipRegisterEntry", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maskDepth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UIRStylePainter__Entry(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices,
                                     ::UnityW<::UnityEngine::Material> material, float_t fontTexSDFScale, ::UnityEngine::UIElements::TextureId texture,
                                     ::UnityEngine::UIElements::UIR::RenderChainCommand* customCommand, ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID,
                                     ::UnityEngine::UIElements::UIR::VertexFlags addFlags, bool uvIsDisplacement, bool isTextEntry, bool isClipRegisterEntry, int32_t stencilRef,
                                     int32_t maskDepth) noexcept;

  /// @brief Field vertices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices;

  /// @brief Field indices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> indices;

  /// @brief Field material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field fontTexSDFScale, offset: 0x28, size: 0x4, def value: None
  float_t fontTexSDFScale;

  /// @brief Field texture, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId texture;

  /// @brief Field customCommand, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* customCommand;

  /// @brief Field clipRectID, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID;

  /// @brief Field addFlags, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::VertexFlags addFlags;

  /// @brief Field uvIsDisplacement, offset: 0x44, size: 0x1, def value: None
  bool uvIsDisplacement;

  /// @brief Field isTextEntry, offset: 0x45, size: 0x1, def value: None
  bool isTextEntry;

  /// @brief Field isClipRegisterEntry, offset: 0x46, size: 0x1, def value: None
  bool isClipRegisterEntry;

  /// @brief Field stencilRef, offset: 0x48, size: 0x4, def value: None
  int32_t stencilRef;

  /// @brief Field maskDepth, offset: 0x4c, size: 0x4, def value: None
  int32_t maskDepth;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6409 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, indices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, fontTexSDFScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, texture) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, customCommand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, clipRectID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, addFlags) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, uvIsDisplacement) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, isTextEntry) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, isClipRegisterEntry) == 0x46, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, stencilRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, maskDepth) == 0x4c, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
// Type: ::ClosingInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// CS Name: ::UIRStylePainter::ClosingInfo
struct CORDL_TYPE __UIRStylePainter__ClosingInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRStylePainter__ClosingInfo();

  // Ctor Parameters [CppParam { name: "needsClosing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "popViewMatrix", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "popScissorClip", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitAndPopRenderTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "PopDefaultMaterial",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clipUnregisterDrawCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam {
  // name: "clipperRegisterVertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "clipperRegisterIndices", ty:
  // "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "clipperRegisterIndexOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "maskStencilRef", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UIRStylePainter__ClosingInfo(bool needsClosing, bool popViewMatrix, bool popScissorClip, bool blitAndPopRenderTexture, bool PopDefaultMaterial,
                                           ::UnityEngine::UIElements::UIR::RenderChainCommand* clipUnregisterDrawCommand,
                                           ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> clipperRegisterVertices,
                                           ::Unity::Collections::NativeSlice_1<uint16_t> clipperRegisterIndices, int32_t clipperRegisterIndexOffset, int32_t maskStencilRef) noexcept;

  /// @brief Field needsClosing, offset: 0x0, size: 0x1, def value: None
  bool needsClosing;

  /// @brief Field popViewMatrix, offset: 0x1, size: 0x1, def value: None
  bool popViewMatrix;

  /// @brief Field popScissorClip, offset: 0x2, size: 0x1, def value: None
  bool popScissorClip;

  /// @brief Field blitAndPopRenderTexture, offset: 0x3, size: 0x1, def value: None
  bool blitAndPopRenderTexture;

  /// @brief Field PopDefaultMaterial, offset: 0x4, size: 0x1, def value: None
  bool PopDefaultMaterial;

  /// @brief Field clipUnregisterDrawCommand, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* clipUnregisterDrawCommand;

  /// @brief Field clipperRegisterVertices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> clipperRegisterVertices;

  /// @brief Field clipperRegisterIndices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> clipperRegisterIndices;

  /// @brief Field clipperRegisterIndexOffset, offset: 0x30, size: 0x4, def value: None
  int32_t clipperRegisterIndexOffset;

  /// @brief Field maskStencilRef, offset: 0x34, size: 0x4, def value: None
  int32_t maskStencilRef;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6410 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, needsClosing) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, popViewMatrix) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, popScissorClip) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, blitAndPopRenderTexture) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, PopDefaultMaterial) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, clipUnregisterDrawCommand) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, clipperRegisterVertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, clipperRegisterIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, clipperRegisterIndexOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, maskStencilRef) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
// Type: ::RepeatRectUV
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// CS Name: ::UIRStylePainter::RepeatRectUV
struct CORDL_TYPE __UIRStylePainter__RepeatRectUV {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRStylePainter__RepeatRectUV();

  // Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }]
  constexpr __UIRStylePainter__RepeatRectUV(::UnityEngine::Rect rect, ::UnityEngine::Rect uv) noexcept;

  /// @brief Field rect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect rect;

  /// @brief Field uv, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rect uv;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6411 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV, uv) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
// Type: UnityEngine.UIElements.UIR.Implementation::UIRStylePainter
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR.Implementation::UIRStylePainter*
class CORDL_TYPE UIRStylePainter : public ::System::Object {
public:
  // Declarations
  using ClosingInfo = ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo;

  using Entry = ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry;

  using RepeatRectUV = ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV;

  /// @brief Field <currentElement>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__currentElement_k__BackingField,
                      put = __cordl_internal_set__currentElement_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _currentElement_k__BackingField;

  /// @brief Field <meshGenerationContext>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__meshGenerationContext_k__BackingField,
                      put = __cordl_internal_set__meshGenerationContext_k__BackingField)) ::UnityEngine::UIElements::MeshGenerationContext* _meshGenerationContext_k__BackingField;

  /// @brief Field <totalIndices>k__BackingField, offset 0x11c, size 0x4
  __declspec(property(get = __cordl_internal_get__totalIndices_k__BackingField, put = __cordl_internal_set__totalIndices_k__BackingField)) int32_t _totalIndices_k__BackingField;

  /// @brief Field <totalVertices>k__BackingField, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__totalVertices_k__BackingField, put = __cordl_internal_set__totalVertices_k__BackingField)) int32_t _totalVertices_k__BackingField;

  __declspec(property(get = get_closingInfo)) ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo closingInfo;

  __declspec(property(get = get_currentElement, put = set_currentElement)) ::UnityEngine::UIElements::VisualElement* currentElement;

  __declspec(property(get = get_entries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* entries;

  /// @brief Field m_AllocRawVertsIndicesDelegate, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllocRawVertsIndicesDelegate,
                      put = __cordl_internal_set_m_AllocRawVertsIndicesDelegate)) ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* m_AllocRawVertsIndicesDelegate;

  /// @brief Field m_AllocThroughDrawMeshDelegate, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllocThroughDrawMeshDelegate,
                      put = __cordl_internal_set_m_AllocThroughDrawMeshDelegate)) ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* m_AllocThroughDrawMeshDelegate;

  /// @brief Field m_Atlas, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Atlas, put = __cordl_internal_set_m_Atlas)) ::UnityEngine::UIElements::AtlasBase* m_Atlas;

  /// @brief Field m_ClipRectID, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClipRectID, put = __cordl_internal_set_m_ClipRectID)) ::UnityEngine::UIElements::UIR::BMPAlloc m_ClipRectID;

  /// @brief Field m_ClosingInfo, offset 0x80, size 0x38
  __declspec(property(get = __cordl_internal_get_m_ClosingInfo, put = __cordl_internal_set_m_ClosingInfo)) ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo m_ClosingInfo;

  /// @brief Field m_CurrentEntry, offset 0x30, size 0x50
  __declspec(property(get = __cordl_internal_get_m_CurrentEntry, put = __cordl_internal_set_m_CurrentEntry)) ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry m_CurrentEntry;

  /// @brief Field m_Entries, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Entries,
                      put = __cordl_internal_set_m_Entries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* m_Entries;

  /// @brief Field m_IndicesPool, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndicesPool, put = __cordl_internal_set_m_IndicesPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* m_IndicesPool;

  /// @brief Field m_MaskDepth, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaskDepth, put = __cordl_internal_set_m_MaskDepth)) int32_t m_MaskDepth;

  /// @brief Field m_MeshWriteDataPool, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshWriteDataPool,
                      put = __cordl_internal_set_m_MeshWriteDataPool)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* m_MeshWriteDataPool;

  /// @brief Field m_NextMeshWriteDataPoolItem, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextMeshWriteDataPoolItem, put = __cordl_internal_set_m_NextMeshWriteDataPoolItem)) int32_t m_NextMeshWriteDataPoolItem;

  /// @brief Field m_Owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Owner, put = __cordl_internal_set_m_Owner)) ::UnityEngine::UIElements::UIR::RenderChain* m_Owner;

  /// @brief Field m_RepeatRectUVList, offset 0xf0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RepeatRectUVList,
      put = __cordl_internal_set_m_RepeatRectUVList)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*,
                                                               ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*>*>
      m_RepeatRectUVList;

  /// @brief Field m_SVGBackgroundEntryIndex, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SVGBackgroundEntryIndex, put = __cordl_internal_set_m_SVGBackgroundEntryIndex)) int32_t m_SVGBackgroundEntryIndex;

  /// @brief Field m_StencilRef, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StencilRef, put = __cordl_internal_set_m_StencilRef)) int32_t m_StencilRef;

  /// @brief Field m_TextInfo, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextInfo, put = __cordl_internal_set_m_TextInfo)) ::UnityEngine::TextCore::Text::TextInfo* m_TextInfo;

  /// @brief Field m_VectorImageManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VectorImageManager, put = __cordl_internal_set_m_VectorImageManager)) ::UnityEngine::UIElements::UIR::VectorImageManager* m_VectorImageManager;

  /// @brief Field m_VertsPool, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VertsPool, put = __cordl_internal_set_m_VertsPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* m_VertsPool;

  __declspec(property(get = get_meshGenerationContext)) ::UnityEngine::UIElements::MeshGenerationContext* meshGenerationContext;

  __declspec(property(get = get_totalIndices, put = set_totalIndices)) int32_t totalIndices;

  __declspec(property(get = get_totalVertices, put = set_totalVertices)) int32_t totalVertices;

  __declspec(property(get = get_visualElement)) ::UnityEngine::UIElements::VisualElement* visualElement;

  /// @brief Convert operator to "::UnityEngine::UIElements::IStylePainter"
  constexpr operator ::UnityEngine::UIElements::IStylePainter*() noexcept;

  /// @brief Method AdjustSpriteWinding, addr 0x49636bc, size 0x320, virtual false, abstract: false, final false
  inline ::ArrayW<uint16_t, ::Array<uint16_t>*> AdjustSpriteWinding(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> vertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> indices);

  /// @brief Method AllocRawVertsIndices, addr 0x495c87c, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshWriteData* AllocRawVertsIndices(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData);

  /// @brief Method AllocThroughDrawMesh, addr 0x495c93c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshWriteData* AllocThroughDrawMesh(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::__MeshBuilder__AllocMeshData> allocatorData);

  /// @brief Method ApplyInset, addr 0x495f300, size 0x21c, virtual false, abstract: false, final false
  inline void ApplyInset(ByRef<::UnityEngine::UIElements::__MeshBuilderNative__NativeRectParams> rectParams, ::UnityEngine::Texture* tex);

  /// @brief Method ApplyVisualElementClipping, addr 0x49627d4, size 0x238, virtual false, abstract: false, final false
  inline void ApplyVisualElementClipping();

  /// @brief Method Begin, addr 0x495d128, size 0x510, virtual false, abstract: false, final false
  inline void Begin(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method BuildEntryFromNativeMesh, addr 0x495d900, size 0x458, virtual false, abstract: false, final false
  inline void BuildEntryFromNativeMesh(::UnityEngine::UIElements::MeshWriteDataInterface meshData, ::UnityEngine::Texture* texture, ::UnityEngine::UIElements::TextureId textureId, bool isAtlas,
                                       ::UnityEngine::Material* material, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags, ::UnityEngine::Rect uvRegion,
                                       ::UnityEngine::UIElements::UIR::VertexFlags addFlags);

  /// @brief Method BuildGradientEntryFromNativeMesh, addr 0x495dd58, size 0x3f4, virtual false, abstract: false, final false
  inline void BuildGradientEntryFromNativeMesh(::UnityEngine::UIElements::MeshWriteDataInterface meshData, ::UnityEngine::UIElements::TextureId svgTextureId);

  /// @brief Method BuildRawEntryFromNativeMesh, addr 0x495e14c, size 0x1e0, virtual false, abstract: false, final false
  inline void BuildRawEntryFromNativeMesh(::UnityEngine::UIElements::MeshWriteDataInterface meshData);

  /// @brief Method DrawBorder, addr 0x495f51c, size 0x90, virtual true, abstract: false, final true
  inline void DrawBorder(::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams borderParams);

  /// @brief Method DrawImmediate, addr 0x495f5ac, size 0x168, virtual true, abstract: false, final true
  inline void DrawImmediate(::System::Action* callback, bool cullingEnabled);

  /// @brief Method DrawMesh, addr 0x495c950, size 0x4a4, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::MeshWriteData* DrawMesh(int32_t vertexCount, int32_t indexCount, ::UnityEngine::Texture* texture, ::UnityEngine::Material* material,
                                                            ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags);

  /// @brief Method DrawRectangle, addr 0x495e9b0, size 0x22c, virtual true, abstract: false, final true
  inline void DrawRectangle(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method DrawRectangleRepeat, addr 0x496084c, size 0x1450, virtual false, abstract: false, final false
  inline void DrawRectangleRepeat(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, ::UnityEngine::Rect totalRect, float_t scaledPixelsPerPoint);

  /// @brief Method DrawSprite, addr 0x495efa0, size 0x360, virtual false, abstract: false, final false
  inline void DrawSprite(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method DrawText, addr 0x495e32c, size 0x98, virtual true, abstract: false, final true
  inline void DrawText(::UnityEngine::UIElements::TextElement* te);

  /// @brief Method DrawTextInfo, addr 0x495e3c4, size 0x5ec, virtual false, abstract: false, final false
  inline void DrawTextInfo(::UnityEngine::TextCore::Text::TextInfo* textInfo, ::UnityEngine::Vector2 offset, bool useHints);

  /// @brief Method DrawVectorImage, addr 0x495ebdc, size 0x3c4, virtual false, abstract: false, final false
  inline void DrawVectorImage(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method DrawVisualElementBackground, addr 0x495f71c, size 0x1130, virtual false, abstract: false, final false
  inline void DrawVisualElementBackground();

  /// @brief Method DrawVisualElementBorder, addr 0x4961e9c, size 0x938, virtual false, abstract: false, final false
  inline void DrawVisualElementBorder();

  /// @brief Method GenerateStencilClipEntryForRoundedRectBackground, addr 0x4962d8c, size 0x930, virtual false, abstract: false, final false
  inline void GenerateStencilClipEntryForRoundedRectBackground();

  /// @brief Method GenerateStencilClipEntryForSVGBackground, addr 0x4962a0c, size 0x380, virtual false, abstract: false, final false
  inline void GenerateStencilClipEntryForSVGBackground();

  /// @brief Method GetPooledMeshWriteData, addr 0x495c76c, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshWriteData* GetPooledMeshWriteData();

  /// @brief Method LandClipRegisterMesh, addr 0x495d6ac, size 0x9c, virtual false, abstract: false, final false
  inline void LandClipRegisterMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexOffset);

  /// @brief Method LandClipUnregisterMeshDrawCommand, addr 0x495d638, size 0x74, virtual false, abstract: false, final false
  inline void LandClipUnregisterMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method MakeVectorGraphics, addr 0x49639dc, size 0x3d0, virtual false, abstract: false, final false
  inline void MakeVectorGraphics(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, bool isUsingGradients, ::UnityEngine::UIElements::TextureId svgTexture,
                                 int32_t settingIndexOffset, ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount);

  static inline ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* New_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method Reset, addr 0x4963dac, size 0x88, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method StampRectangleWithSubRect, addr 0x4961c9c, size 0x200, virtual false, abstract: false, final false
  inline void StampRectangleWithSubRect(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams, ::UnityEngine::Rect targetRect, ::UnityEngine::Rect targetUV);

  /// @brief Method TryAtlasTexture, addr 0x495d748, size 0x1b8, virtual false, abstract: false, final false
  inline void TryAtlasTexture(::UnityEngine::Texture* texture, ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags flags, ByRef<::UnityEngine::Rect> outUVRegion, ByRef<bool> outIsAtlas,
                              ByRef<::UnityEngine::UIElements::TextureId> outTextureId, ByRef<::UnityEngine::UIElements::UIR::VertexFlags> outAddFlags);

  /// @brief Method ValidateMeshWriteData, addr 0x4963e34, size 0x444, virtual false, abstract: false, final false
  inline void ValidateMeshWriteData();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__currentElement_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get__currentElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::MeshGenerationContext*& __cordl_internal_get__meshGenerationContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::MeshGenerationContext*> const& __cordl_internal_get__meshGenerationContext_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__totalIndices_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__totalIndices_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__totalVertices_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__totalVertices_k__BackingField();

  constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*& __cordl_internal_get_m_AllocRawVertsIndicesDelegate();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*> const& __cordl_internal_get_m_AllocRawVertsIndicesDelegate() const;

  constexpr ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*& __cordl_internal_get_m_AllocThroughDrawMeshDelegate();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator*> const& __cordl_internal_get_m_AllocThroughDrawMeshDelegate() const;

  constexpr ::UnityEngine::UIElements::AtlasBase*& __cordl_internal_get_m_Atlas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& __cordl_internal_get_m_Atlas() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_m_ClipRectID() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_m_ClipRectID();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo const& __cordl_internal_get_m_ClosingInfo() const;

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo& __cordl_internal_get_m_ClosingInfo();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry const& __cordl_internal_get_m_CurrentEntry() const;

  constexpr ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry& __cordl_internal_get_m_CurrentEntry();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>*& __cordl_internal_get_m_Entries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>*> const&
  __cordl_internal_get_m_Entries() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*& __cordl_internal_get_m_IndicesPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*> const& __cordl_internal_get_m_IndicesPool() const;

  constexpr int32_t const& __cordl_internal_get_m_MaskDepth() const;

  constexpr int32_t& __cordl_internal_get_m_MaskDepth();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*& __cordl_internal_get_m_MeshWriteDataPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>*> const& __cordl_internal_get_m_MeshWriteDataPool() const;

  constexpr int32_t const& __cordl_internal_get_m_NextMeshWriteDataPoolItem() const;

  constexpr int32_t& __cordl_internal_get_m_NextMeshWriteDataPoolItem();

  constexpr ::UnityEngine::UIElements::UIR::RenderChain*& __cordl_internal_get_m_Owner();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChain*> const& __cordl_internal_get_m_Owner() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*>*> const&
  __cordl_internal_get_m_RepeatRectUVList() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*>*>&
  __cordl_internal_get_m_RepeatRectUVList();

  constexpr int32_t const& __cordl_internal_get_m_SVGBackgroundEntryIndex() const;

  constexpr int32_t& __cordl_internal_get_m_SVGBackgroundEntryIndex();

  constexpr int32_t const& __cordl_internal_get_m_StencilRef() const;

  constexpr int32_t& __cordl_internal_get_m_StencilRef();

  constexpr ::UnityEngine::TextCore::Text::TextInfo*& __cordl_internal_get_m_TextInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextInfo*> const& __cordl_internal_get_m_TextInfo() const;

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& __cordl_internal_get_m_VectorImageManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::VectorImageManager*> const& __cordl_internal_get_m_VectorImageManager() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*& __cordl_internal_get_m_VertsPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*> const& __cordl_internal_get_m_VertsPool() const;

  constexpr void __cordl_internal_set__currentElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__meshGenerationContext_k__BackingField(::UnityEngine::UIElements::MeshGenerationContext* value);

  constexpr void __cordl_internal_set__totalIndices_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__totalVertices_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_AllocRawVertsIndicesDelegate(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* value);

  constexpr void __cordl_internal_set_m_AllocThroughDrawMeshDelegate(::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* value);

  constexpr void __cordl_internal_set_m_Atlas(::UnityEngine::UIElements::AtlasBase* value);

  constexpr void __cordl_internal_set_m_ClipRectID(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_m_ClosingInfo(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo value);

  constexpr void __cordl_internal_set_m_CurrentEntry(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry value);

  constexpr void __cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* value);

  constexpr void __cordl_internal_set_m_IndicesPool(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* value);

  constexpr void __cordl_internal_set_m_MaskDepth(int32_t value);

  constexpr void __cordl_internal_set_m_MeshWriteDataPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* value);

  constexpr void __cordl_internal_set_m_NextMeshWriteDataPoolItem(int32_t value);

  constexpr void __cordl_internal_set_m_Owner(::UnityEngine::UIElements::UIR::RenderChain* value);

  constexpr void __cordl_internal_set_m_RepeatRectUVList(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*,
                                                                  ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*>*>
                                                             value);

  constexpr void __cordl_internal_set_m_SVGBackgroundEntryIndex(int32_t value);

  constexpr void __cordl_internal_set_m_StencilRef(int32_t value);

  constexpr void __cordl_internal_set_m_TextInfo(::UnityEngine::TextCore::Text::TextInfo* value);

  constexpr void __cordl_internal_set_m_VectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value);

  constexpr void __cordl_internal_set_m_VertsPool(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* value);

  /// @brief Method .ctor, addr 0x495cdf4, size 0x2d8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method get_closingInfo, addr 0x495d0ec, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo get_closingInfo();

  /// @brief Method get_currentElement, addr 0x495d0d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_currentElement();

  /// @brief Method get_entries, addr 0x495d0e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* get_entries();

  /// @brief Method get_meshGenerationContext, addr 0x495d0cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshGenerationContext* get_meshGenerationContext();

  /// @brief Method get_totalIndices, addr 0x495d118, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalIndices();

  /// @brief Method get_totalVertices, addr 0x495d108, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalVertices();

  /// @brief Method get_visualElement, addr 0x495f714, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualElement* get_visualElement();

  /// @brief Convert to "::UnityEngine::UIElements::IStylePainter"
  constexpr ::UnityEngine::UIElements::IStylePainter* i___UnityEngine__UIElements__IStylePainter() noexcept;

  /// @brief Method set_currentElement, addr 0x495d0dc, size 0x8, virtual false, abstract: false, final false
  inline void set_currentElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_totalIndices, addr 0x495d120, size 0x8, virtual false, abstract: false, final false
  inline void set_totalIndices(int32_t value);

  /// @brief Method set_totalVertices, addr 0x495d110, size 0x8, virtual false, abstract: false, final false
  inline void set_totalVertices(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRStylePainter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIRStylePainter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRStylePainter(UIRStylePainter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRStylePainter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRStylePainter(UIRStylePainter const&) = delete;

  /// @brief Field m_Owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain* ___m_Owner;

  /// @brief Field m_Entries, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry>* ___m_Entries;

  /// @brief Field m_Atlas, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ___m_Atlas;

  /// @brief Field m_VectorImageManager, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::VectorImageManager* ___m_VectorImageManager;

  /// @brief Field m_CurrentEntry, offset: 0x30, size: 0x50, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry ___m_CurrentEntry;

  /// @brief Field m_ClosingInfo, offset: 0x80, size: 0x38, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo ___m_ClosingInfo;

  /// @brief Field m_MaskDepth, offset: 0xb8, size: 0x4, def value: None
  int32_t ___m_MaskDepth;

  /// @brief Field m_StencilRef, offset: 0xbc, size: 0x4, def value: None
  int32_t ___m_StencilRef;

  /// @brief Field m_ClipRectID, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___m_ClipRectID;

  /// @brief Field m_SVGBackgroundEntryIndex, offset: 0xc8, size: 0x4, def value: None
  int32_t ___m_SVGBackgroundEntryIndex;

  /// @brief Field m_VertsPool, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* ___m_VertsPool;

  /// @brief Field m_IndicesPool, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* ___m_IndicesPool;

  /// @brief Field m_MeshWriteDataPool, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData*>* ___m_MeshWriteDataPool;

  /// @brief Field m_NextMeshWriteDataPoolItem, offset: 0xe8, size: 0x4, def value: None
  int32_t ___m_NextMeshWriteDataPoolItem;

  /// @brief Field m_RepeatRectUVList, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV>*>*>
      ___m_RepeatRectUVList;

  /// @brief Field m_AllocRawVertsIndicesDelegate, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* ___m_AllocRawVertsIndicesDelegate;

  /// @brief Field m_AllocThroughDrawMeshDelegate, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::__MeshBuilder__AllocMeshData__Allocator* ___m_AllocThroughDrawMeshDelegate;

  /// @brief Field <meshGenerationContext>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::MeshGenerationContext* ____meshGenerationContext_k__BackingField;

  /// @brief Field <currentElement>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____currentElement_k__BackingField;

  /// @brief Field <totalVertices>k__BackingField, offset: 0x118, size: 0x4, def value: None
  int32_t ____totalVertices_k__BackingField;

  /// @brief Field <totalIndices>k__BackingField, offset: 0x11c, size: 0x4, def value: None
  int32_t ____totalIndices_k__BackingField;

  /// @brief Field m_TextInfo, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextInfo* ___m_TextInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_Owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_Entries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_Atlas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_VectorImageManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_CurrentEntry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_ClosingInfo) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_MaskDepth) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_StencilRef) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_ClipRectID) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_SVGBackgroundEntryIndex) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_VertsPool) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_IndicesPool) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_MeshWriteDataPool) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_NextMeshWriteDataPoolItem) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_RepeatRectUVList) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_AllocRawVertsIndicesDelegate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_AllocThroughDrawMeshDelegate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____meshGenerationContext_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____currentElement_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____totalVertices_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ____totalIndices_k__BackingField) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter, ___m_TextInfo) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter/ClosingInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__Entry, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter/Entry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__RepeatRectUV, "UnityEngine.UIElements.UIR.Implementation", "UIRStylePainter/RepeatRectUV");
