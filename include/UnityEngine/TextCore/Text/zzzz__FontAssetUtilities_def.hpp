#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FontAssetUtilities)
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
namespace UnityEngine::TextCore::Text {
class Character;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::TextCore::Text {
class SpriteCharacter;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontAssetUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FontAssetUtilities);
// Type: UnityEngine.TextCore.Text::FontAssetUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13728))
// CS Name: ::UnityEngine.TextCore.Text::FontAssetUtilities*
class CORDL_TYPE FontAssetUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_SearchedAssets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SearchedAssets, put = setStaticF_k_SearchedAssets))::System::Collections::Generic::HashSet_1<int32_t>* k_SearchedAssets;

  static inline void setStaticF_k_SearchedAssets(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_SearchedAssets();

  /// @brief Method GetCharacterFromFontAsset addr 0x2d4aa48 size 0x108 virtual false final false
  static inline ::UnityEngine::TextCore::Text::Character* GetCharacterFromFontAsset(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* sourceFontAsset, bool includeFallbacks,
                                                                                    ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight,
                                                                                    ByRef<bool> isAlternativeTypeface);

  /// @brief Method GetCharacterFromFontAsset_Internal addr 0x2d4ab50 size 0x3d4 virtual false final false
  static inline ::UnityEngine::TextCore::Text::Character* GetCharacterFromFontAsset_Internal(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* sourceFontAsset, bool includeFallbacks,
                                                                                             ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                             ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ByRef<bool> isAlternativeTypeface);

  /// @brief Method GetCharacterFromFontAssets addr 0x2d4af24 size 0x1b8 virtual false final false
  static inline ::UnityEngine::TextCore::Text::Character* GetCharacterFromFontAssets(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* sourceFontAsset,
                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* fontAssets,
                                                                                     bool includeFallbacks, ::UnityEngine::TextCore::Text::FontStyles fontStyle,
                                                                                     ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ByRef<bool> isAlternativeTypeface);

  /// @brief Method GetSpriteCharacterFromSpriteAsset addr 0x2d4b0dc size 0x298 virtual false final false
  static inline ::UnityEngine::TextCore::Text::SpriteCharacter* GetSpriteCharacterFromSpriteAsset(uint32_t unicode, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset, bool includeFallbacks);

  /// @brief Method GetSpriteCharacterFromSpriteAsset_Internal addr 0x2d4b374 size 0x1b8 virtual false final false
  static inline ::UnityEngine::TextCore::Text::SpriteCharacter* GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, ::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset,
                                                                                                           bool includeFallbacks);

  // Ctor Parameters [CppParam { name: "", ty: "FontAssetUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontAssetUtilities(FontAssetUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontAssetUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontAssetUtilities(FontAssetUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontAssetUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAssetUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAssetUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAssetUtilities*, "UnityEngine.TextCore.Text", "FontAssetUtilities");