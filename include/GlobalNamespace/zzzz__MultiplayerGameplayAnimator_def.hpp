#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerGameplayAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerGameplayAnimator)
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class LightsAnimator;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLeadPlayerProvider;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace Tweening {
class TimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerGameplayAnimator);
// Type: ::MultiplayerGameplayAnimator
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerGameplayAnimator*
class CORDL_TYPE MultiplayerGameplayAnimator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _activeLightsColor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__activeLightsColor, put = __cordl_internal_set__activeLightsColor)) ::UnityW<::GlobalNamespace::ColorSO> _activeLightsColor;

  /// @brief Field _allLightsAnimators, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__allLightsAnimators,
                      put = __cordl_internal_set__allLightsAnimators)) ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*>
      _allLightsAnimators;

  /// @brief Field _failedLightsColor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__failedLightsColor, put = __cordl_internal_set__failedLightsColor)) ::UnityW<::GlobalNamespace::ColorSO> _failedLightsColor;

  /// @brief Field _gameplayLightsAnimators, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayLightsAnimators,
                      put = __cordl_internal_set__gameplayLightsAnimators)) ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*>
      _gameplayLightsAnimators;

  /// @brief Field _leadPlayerProvider, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__leadPlayerProvider, put = __cordl_internal_set__leadPlayerProvider)) ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> _leadPlayerProvider;

  /// @brief Field _leadingLightsColor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__leadingLightsColor, put = __cordl_internal_set__leadingLightsColor)) ::UnityW<::GlobalNamespace::ColorSO> _leadingLightsColor;

  /// @brief Field _leadingSwitchCrossFadeDuration, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__leadingSwitchCrossFadeDuration, put = __cordl_internal_set__leadingSwitchCrossFadeDuration)) float_t _leadingSwitchCrossFadeDuration;

  /// @brief Field _multiplayerController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController)) ::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field connectedPlayer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayer, put = __cordl_internal_set_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  /// @brief Field tweeningManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_tweeningManager, put = __cordl_internal_set_tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> tweeningManager;

  /// @brief Method AnimateNewLeaderSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AnimateNewLeaderSelected(bool isLeading);

  /// @brief Method HandleNewLeaderWasSelected, addr 0x3b6e200, size 0xe8, virtual false, abstract: false, final false
  inline void HandleNewLeaderWasSelected(::StringW userId);

  /// @brief Method HandleStateChanged, addr 0x3b6dff4, size 0x15c, virtual true, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerGameplayAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b6ddbc, size 0x188, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b6dd28, size 0x94, virtual true, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__activeLightsColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__activeLightsColor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> const& __cordl_internal_get__allLightsAnimators() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*>& __cordl_internal_get__allLightsAnimators();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__failedLightsColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__failedLightsColor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> const& __cordl_internal_get__gameplayLightsAnimators() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*>& __cordl_internal_get__gameplayLightsAnimators();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> const& __cordl_internal_get__leadPlayerProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider>& __cordl_internal_get__leadPlayerProvider();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get__leadingLightsColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get__leadingLightsColor();

  constexpr float_t const& __cordl_internal_get__leadingSwitchCrossFadeDuration() const;

  constexpr float_t& __cordl_internal_get__leadingSwitchCrossFadeDuration();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get_connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get_connectedPlayer() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get_tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get_tweeningManager();

  constexpr void __cordl_internal_set__activeLightsColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__allLightsAnimators(::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> value);

  constexpr void __cordl_internal_set__failedLightsColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__gameplayLightsAnimators(::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> value);

  constexpr void __cordl_internal_set__leadPlayerProvider(::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> value);

  constexpr void __cordl_internal_set__leadingLightsColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set__leadingSwitchCrossFadeDuration(float_t value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set_tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x3b6e2e8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerGameplayAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerGameplayAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerGameplayAnimator(MultiplayerGameplayAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerGameplayAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerGameplayAnimator(MultiplayerGameplayAnimator const&) = delete;

  /// @brief Field _activeLightsColor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____activeLightsColor;

  /// @brief Field _leadingLightsColor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____leadingLightsColor;

  /// @brief Field _failedLightsColor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ____failedLightsColor;

  /// @brief Field _leadingSwitchCrossFadeDuration, offset: 0x38, size: 0x4, def value: None
  float_t ____leadingSwitchCrossFadeDuration;

  /// @brief Field _gameplayLightsAnimators, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> ____gameplayLightsAnimators;

  /// @brief Field _allLightsAnimators, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>, ::Array<::UnityW<::GlobalNamespace::LightsAnimator>>*> ____allLightsAnimators;

  /// @brief Field _leadPlayerProvider, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> ____leadPlayerProvider;

  /// @brief Field _multiplayerController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field tweeningManager, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ___tweeningManager;

  /// @brief Field connectedPlayer, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ___connectedPlayer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4554 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerGameplayAnimator, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____activeLightsColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____leadingLightsColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____failedLightsColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____leadingSwitchCrossFadeDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____gameplayLightsAnimators) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____allLightsAnimators) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____leadPlayerProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ____multiplayerController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ___tweeningManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerGameplayAnimator, ___connectedPlayer) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerGameplayAnimator*, "", "MultiplayerGameplayAnimator");
