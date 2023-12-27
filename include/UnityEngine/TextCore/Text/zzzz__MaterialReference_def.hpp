#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialReference)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MaterialReference);
// Type: UnityEngine.TextCore.Text::MaterialReference
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13697))
// CS Name: ::UnityEngine.TextCore.Text::MaterialReference
struct CORDL_TYPE MaterialReference {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2d43078 size 0x7c virtual false final false
  inline void _ctor(int32_t index, ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, ::UnityEngine::Material* material, float_t padding);

  /// @brief Method AddMaterialReference addr 0x2d430f4 size 0x20c virtual false final false
  static inline int32_t AddMaterialReference(::UnityEngine::Material* material, ::UnityEngine::TextCore::Text::FontAsset* fontAsset,
                                             ByRef<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*>> materialReferences,
                                             ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup);

  /// @brief Method AddMaterialReference addr 0x2d43300 size 0x1d8 virtual false final false
  static inline int32_t AddMaterialReference(::UnityEngine::Material* material, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset,
                                             ByRef<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference, ::Array<::UnityEngine::TextCore::Text::MaterialReference>*>> materialReferences,
                                             ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* materialReferenceIndexLookup);

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "",
  // def_value: None }, CppParam { name: "spriteAsset", ty: "::UnityEngine::TextCore::Text::SpriteAsset*", modifiers: "", def_value: None }, CppParam { name: "material", ty:
  // "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "isDefaultMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isFallbackMaterial", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "fallbackMaterial", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MaterialReference(int32_t index, ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, ::UnityEngine::Material* material,
                              bool isDefaultMaterial, bool isFallbackMaterial, ::UnityEngine::Material* fallbackMaterial, float_t padding, int32_t referenceCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialReference();

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::FontAsset* fontAsset;

  /// @brief Field spriteAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Material* material;

  /// @brief Field isDefaultMaterial, offset: 0x20, size: 0x1, def value: None
  bool isDefaultMaterial;

  /// @brief Field isFallbackMaterial, offset: 0x21, size: 0x1, def value: None
  bool isFallbackMaterial;

  /// @brief Field fallbackMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Material* fallbackMaterial;

  /// @brief Field padding, offset: 0x30, size: 0x4, def value: None
  float_t padding;

  /// @brief Field referenceCount, offset: 0x34, size: 0x4, def value: None
  int32_t referenceCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MaterialReference, 0x38>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MaterialReference, "UnityEngine.TextCore.Text", "MaterialReference");