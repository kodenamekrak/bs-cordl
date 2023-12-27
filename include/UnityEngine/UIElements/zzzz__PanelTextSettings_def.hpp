#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PanelTextSettings)
namespace UnityEngine {
class Font;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Object;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelTextSettings);
// Type: UnityEngine.UIElements::PanelTextSettings
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13684))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7148))
// CS Name: ::UnityEngine.UIElements::PanelTextSettings*
class CORDL_TYPE PanelTextSettings : public ::UnityEngine::TextCore::Text::TextSettings {
public:
  // Declarations
  /// @brief Field s_DefaultPanelTextSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultPanelTextSettings, put = setStaticF_s_DefaultPanelTextSettings))::UnityEngine::UIElements::PanelTextSettings* s_DefaultPanelTextSettings;

  /// @brief Field EditorGUIUtilityLoad, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EditorGUIUtilityLoad, put = setStaticF_EditorGUIUtilityLoad))::System::Func_2<::StringW, ::UnityEngine::Object*>* EditorGUIUtilityLoad;

  /// @brief Field GetCurrentLanguage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetCurrentLanguage, put = setStaticF_GetCurrentLanguage))::System::Func_1<::UnityEngine::SystemLanguage>* GetCurrentLanguage;

  /// @brief Field s_DefaultEditorPanelTextSettingPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultEditorPanelTextSettingPath, put = setStaticF_s_DefaultEditorPanelTextSettingPath))::StringW s_DefaultEditorPanelTextSettingPath;

  static inline void setStaticF_s_DefaultPanelTextSettings(::UnityEngine::UIElements::PanelTextSettings* value);

  static inline ::UnityEngine::UIElements::PanelTextSettings* getStaticF_s_DefaultPanelTextSettings();

  static inline void setStaticF_EditorGUIUtilityLoad(::System::Func_2<::StringW, ::UnityEngine::Object*>* value);

  static inline ::System::Func_2<::StringW, ::UnityEngine::Object*>* getStaticF_EditorGUIUtilityLoad();

  static inline void setStaticF_GetCurrentLanguage(::System::Func_1<::UnityEngine::SystemLanguage>* value);

  static inline ::System::Func_1<::UnityEngine::SystemLanguage>* getStaticF_GetCurrentLanguage();

  static inline void setStaticF_s_DefaultEditorPanelTextSettingPath(::StringW value);

  static inline ::StringW getStaticF_s_DefaultEditorPanelTextSettingPath();

  /// @brief Method get_defaultPanelTextSettings addr 0x2e4740c size 0x134 virtual false final false
  static inline ::UnityEngine::UIElements::PanelTextSettings* get_defaultPanelTextSettings();

  /// @brief Method UpdateLocalizationFontAsset addr 0x2e478f4 size 0x4c0 virtual false final false
  static inline void UpdateLocalizationFontAsset();

  /// @brief Method GetCachedFontAsset addr 0x2e46f04 size 0x8 virtual false final false
  inline ::UnityEngine::TextCore::Text::FontAsset* GetCachedFontAsset(::UnityEngine::Font* font);

  static inline ::UnityEngine::UIElements::PanelTextSettings* New_ctor();

  /// @brief Method .ctor addr 0x2e47db4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelTextSettings(PanelTextSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelTextSettings(PanelTextSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelTextSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelTextSettings, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PanelTextSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelTextSettings*, "UnityEngine.UIElements", "PanelTextSettings");