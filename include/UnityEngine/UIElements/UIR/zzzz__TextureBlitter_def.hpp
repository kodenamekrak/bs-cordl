#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureBlitter)
namespace UnityEngine::UIElements::UIR {
struct __TextureBlitter__BlitInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class RenderTexture;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Material;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TextureBlitter;
}
namespace UnityEngine::UIElements::UIR {
struct __TextureBlitter__BlitInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::TextureBlitter);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo);
// Type: ::BlitInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10162)), TypeDefinitionIndex(TypeDefinitionIndex(10244))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7386))
// CS Name: ::TextureBlitter::BlitInfo
struct CORDL_TYPE __TextureBlitter__BlitInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "src", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "srcRect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None
  // }, CppParam { name: "dstPos", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "border", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "tint", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr __TextureBlitter__BlitInfo(::UnityEngine::Texture* src, ::UnityEngine::RectInt srcRect, ::UnityEngine::Vector2Int dstPos, int32_t border, ::UnityEngine::Color tint) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextureBlitter__BlitInfo();

  /// @brief Field src, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Texture* src;

  /// @brief Field srcRect, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::RectInt srcRect;

  /// @brief Field dstPos, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2Int dstPos;

  /// @brief Field border, offset: 0x20, size: 0x4, def value: None
  int32_t border;

  /// @brief Field tint, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Color tint;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::TextureBlitter
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10162)), TypeDefinitionIndex(TypeDefinitionIndex(9966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7387))
// CS Name: ::UnityEngine.UIElements.UIR::TextureBlitter*
class CORDL_TYPE TextureBlitter : public ::System::Object {
public:
  // Declarations
  using BlitInfo = ::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo;

  /// @brief Field m_SingleBlit, offset 0x10, size 0x8
  __declspec(property(get = __get_m_SingleBlit,
                      put = __set_m_SingleBlit))::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, ::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> m_SingleBlit;

  /// @brief Field m_BlitMaterial, offset 0x18, size 0x8
  __declspec(property(get = __get_m_BlitMaterial, put = __set_m_BlitMaterial))::UnityEngine::Material* m_BlitMaterial;

  /// @brief Field m_Properties, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Properties, put = __set_m_Properties))::UnityEngine::MaterialPropertyBlock* m_Properties;

  /// @brief Field m_Viewport, offset 0x28, size 0x10
  __declspec(property(get = __get_m_Viewport, put = __set_m_Viewport))::UnityEngine::RectInt m_Viewport;

  /// @brief Field m_PrevRT, offset 0x38, size 0x8
  __declspec(property(get = __get_m_PrevRT, put = __set_m_PrevRT))::UnityEngine::RenderTexture* m_PrevRT;

  /// @brief Field m_PendingBlits, offset 0x40, size 0x8
  __declspec(property(get = __get_m_PendingBlits, put = __set_m_PendingBlits))::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>* m_PendingBlits;

  /// @brief Field <disposed>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field k_TextureIds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TextureIds, put = setStaticF_k_TextureIds))::ArrayW<int32_t, ::Array<int32_t>*> k_TextureIds;

  /// @brief Field s_CommitSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CommitSampler, put = setStaticF_s_CommitSampler))::Unity::Profiling::ProfilerMarker s_CommitSampler;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, ::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*>& __get_m_SingleBlit();

  constexpr ::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, ::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> const& __get_m_SingleBlit() const;

  constexpr void __set_m_SingleBlit(::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, ::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> value);

  constexpr ::UnityEngine::Material*& __get_m_BlitMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_m_BlitMaterial() const;

  constexpr void __set_m_BlitMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::MaterialPropertyBlock*& __get_m_Properties();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __get_m_Properties() const;

  constexpr void __set_m_Properties(::UnityEngine::MaterialPropertyBlock* value);

  constexpr ::UnityEngine::RectInt& __get_m_Viewport();

  constexpr ::UnityEngine::RectInt const& __get_m_Viewport() const;

  constexpr void __set_m_Viewport(::UnityEngine::RectInt value);

  constexpr ::UnityEngine::RenderTexture*& __get_m_PrevRT();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get_m_PrevRT() const;

  constexpr void __set_m_PrevRT(::UnityEngine::RenderTexture* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*& __get_m_PendingBlits();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> const& __get_m_PendingBlits() const;

  constexpr void __set_m_PendingBlits(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>* value);

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  static inline void setStaticF_k_TextureIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_TextureIds();

  static inline void setStaticF_s_CommitSampler(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_CommitSampler();

  /// @brief Method get_disposed addr 0x2e8b8e0 size 0x8 virtual false final false
  inline bool get_disposed();

  /// @brief Method set_disposed addr 0x2e8b8e8 size 0xc virtual false final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose addr 0x2e7d444 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2e8b8f4 size 0x7c virtual true final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::UIR::TextureBlitter* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x2e7d13c size 0xb4 virtual false final false
  inline void _ctor(int32_t capacity);

  /// @brief Method QueueBlit addr 0x2e7d830 size 0x1a4 virtual false final false
  inline void QueueBlit(::UnityEngine::Texture* src, ::UnityEngine::RectInt srcRect, ::UnityEngine::Vector2Int dstPos, bool addBorder, ::UnityEngine::Color tint);

  /// @brief Method BlitOneNow addr 0x2e7e0b4 size 0xe4 virtual false final false
  inline void BlitOneNow(::UnityEngine::RenderTexture* dst, ::UnityEngine::Texture* src, ::UnityEngine::RectInt srcRect, ::UnityEngine::Vector2Int dstPos, bool addBorder, ::UnityEngine::Color tint);

  /// @brief Method Commit addr 0x2e7de90 size 0xec virtual false final false
  inline void Commit(::UnityEngine::RenderTexture* dst);

  /// @brief Method BeginBlit addr 0x2e8ba9c size 0x1fc virtual false final false
  inline void BeginBlit(::UnityEngine::RenderTexture* dst);

  /// @brief Method DoBlit addr 0x2e8bc98 size 0x51c virtual false final false
  inline void DoBlit(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>* blitInfos, int32_t startIndex);

  /// @brief Method EndBlit addr 0x2e8c1b4 size 0xe0 virtual false final false
  inline void EndBlit();

  // Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureBlitter(TextureBlitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureBlitter(TextureBlitter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureBlitter();

public:
  /// @brief Field m_SingleBlit, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, ::Array<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>*> ___m_SingleBlit;

  /// @brief Field m_BlitMaterial, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Material* ___m_BlitMaterial;

  /// @brief Field m_Properties, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_Properties;

  /// @brief Field m_Viewport, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::RectInt ___m_Viewport;

  /// @brief Field m_PrevRT, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ___m_PrevRT;

  /// @brief Field m_PendingBlits, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo>* ___m_PendingBlits;

  /// @brief Field <disposed>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextureBlitter, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::TextureBlitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureBlitter*, "UnityEngine.UIElements.UIR", "TextureBlitter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__TextureBlitter__BlitInfo, "UnityEngine.UIElements.UIR", "TextureBlitter/BlitInfo");