#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneGraphicSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StandaloneGraphicSettingsViewController)
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class NamedIntListSettingsController;
}
namespace GlobalNamespace {
class PresetsSettingsController;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneGraphicSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandaloneGraphicSettingsViewController);
// Type: ::StandaloneGraphicSettingsViewController
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandaloneGraphicSettingsViewController*
class CORDL_TYPE StandaloneGraphicSettingsViewController : public ::GlobalNamespace::GraphicSettingsViewController {
public:
  // Declarations
  /// @brief Field _antiAliasingLevel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__antiAliasingLevel, put = __cordl_internal_set__antiAliasingLevel))::UnityW<::GlobalNamespace::NamedIntListSettingsController> _antiAliasingLevel;

  /// @brief Field _fullscreen, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__fullscreen, put = __cordl_internal_set__fullscreen))::UnityW<::UnityEngine::UI::Toggle> _fullscreen;

  /// @brief Field _mainEffect, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffect, put = __cordl_internal_set__mainEffect))::UnityW<::GlobalNamespace::PresetsSettingsController> _mainEffect;

  /// @brief Field _mirror, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__mirror, put = __cordl_internal_set__mirror))::UnityW<::GlobalNamespace::PresetsSettingsController> _mirror;

  /// @brief Field _screenDisplacementEffects, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__screenDisplacementEffects, put = __cordl_internal_set__screenDisplacementEffects))::UnityW<::UnityEngine::UI::Toggle> _screenDisplacementEffects;

  /// @brief Field _shockwaveMaxParticles, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwaveMaxParticles,
                      put = __cordl_internal_set__shockwaveMaxParticles))::UnityW<::GlobalNamespace::NamedIntListSettingsController> _shockwaveMaxParticles;

  /// @brief Field _smoke, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__smoke, put = __cordl_internal_set__smoke))::UnityW<::UnityEngine::UI::Toggle> _smoke;

  /// @brief Field _vrRenderingScale, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__vrRenderingScale, put = __cordl_internal_set__vrRenderingScale))::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> _vrRenderingScale;

  /// @brief Method DidActivate, addr 0x268d570, size 0x3ec, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x268da28, size 0x220, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAntiAliasingLevelChanged, addr 0x268dc48, size 0x6c, virtual false, abstract: false, final false
  inline void HandleAntiAliasingLevelChanged(int32_t newValue);

  /// @brief Method HandleFullscreenToggled, addr 0x268dd28, size 0x64, virtual false, abstract: false, final false
  inline void HandleFullscreenToggled(bool newValue);

  /// @brief Method HandleMainEffectChanged, addr 0x268def8, size 0x6c, virtual false, abstract: false, final false
  inline void HandleMainEffectChanged(int32_t newValue);

  /// @brief Method HandleMirrorChanged, addr 0x268df64, size 0x6c, virtual false, abstract: false, final false
  inline void HandleMirrorChanged(int32_t newValue);

  /// @brief Method HandleScreenDisplacementToggled, addr 0x268de8c, size 0x6c, virtual false, abstract: false, final false
  inline void HandleScreenDisplacementToggled(bool newValue);

  /// @brief Method HandleShockwaveMaxParticlesChanged, addr 0x268dd8c, size 0x6c, virtual false, abstract: false, final false
  inline void HandleShockwaveMaxParticlesChanged(int32_t newValue);

  /// @brief Method HandleSmokeToggled, addr 0x268ddf8, size 0x94, virtual false, abstract: false, final false
  inline void HandleSmokeToggled(bool newValue);

  /// @brief Method HandleVrRenderingScaleChanged, addr 0x268dcb4, size 0x74, virtual false, abstract: false, final false
  inline void HandleVrRenderingScaleChanged(::GlobalNamespace::FormattedFloatListSettingsController* _, float_t newValue);

  /// @brief Method LoadPerformancePresetSettings, addr 0x268d95c, size 0xcc, virtual false, abstract: false, final false
  inline void LoadPerformancePresetSettings(::BeatSaber::PerformancePresets::PerformancePreset* preset);

  static inline ::GlobalNamespace::StandaloneGraphicSettingsViewController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController> const& __cordl_internal_get__antiAliasingLevel() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController>& __cordl_internal_get__antiAliasingLevel();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__fullscreen() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__fullscreen();

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController> const& __cordl_internal_get__mainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController>& __cordl_internal_get__mainEffect();

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController> const& __cordl_internal_get__mirror() const;

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController>& __cordl_internal_get__mirror();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__screenDisplacementEffects() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__screenDisplacementEffects();

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController> const& __cordl_internal_get__shockwaveMaxParticles() const;

  constexpr ::UnityW<::GlobalNamespace::NamedIntListSettingsController>& __cordl_internal_get__shockwaveMaxParticles();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__smoke() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__smoke();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__vrRenderingScale() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__vrRenderingScale();

  constexpr void __cordl_internal_set__antiAliasingLevel(::UnityW<::GlobalNamespace::NamedIntListSettingsController> value);

  constexpr void __cordl_internal_set__fullscreen(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__mainEffect(::UnityW<::GlobalNamespace::PresetsSettingsController> value);

  constexpr void __cordl_internal_set__mirror(::UnityW<::GlobalNamespace::PresetsSettingsController> value);

  constexpr void __cordl_internal_set__screenDisplacementEffects(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__shockwaveMaxParticles(::UnityW<::GlobalNamespace::NamedIntListSettingsController> value);

  constexpr void __cordl_internal_set__smoke(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__vrRenderingScale(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  /// @brief Method .ctor, addr 0x268dfd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneGraphicSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandaloneGraphicSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneGraphicSettingsViewController(StandaloneGraphicSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneGraphicSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneGraphicSettingsViewController(StandaloneGraphicSettingsViewController const&) = delete;

  /// @brief Field _antiAliasingLevel, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListSettingsController> ____antiAliasingLevel;

  /// @brief Field _vrRenderingScale, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____vrRenderingScale;

  /// @brief Field _fullscreen, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____fullscreen;

  /// @brief Field _shockwaveMaxParticles, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedIntListSettingsController> ____shockwaveMaxParticles;

  /// @brief Field _smoke, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____smoke;

  /// @brief Field _screenDisplacementEffects, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____screenDisplacementEffects;

  /// @brief Field _mainEffect, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PresetsSettingsController> ____mainEffect;

  /// @brief Field _mirror, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PresetsSettingsController> ____mirror;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneGraphicSettingsViewController, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____antiAliasingLevel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____vrRenderingScale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____fullscreen) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____shockwaveMaxParticles) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____smoke) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____screenDisplacementEffects) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____mainEffect) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneGraphicSettingsViewController, ____mirror) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandaloneGraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneGraphicSettingsViewController*, "", "StandaloneGraphicSettingsViewController");
