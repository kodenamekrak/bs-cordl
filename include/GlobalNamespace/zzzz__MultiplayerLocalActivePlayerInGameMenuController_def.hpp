#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerInGameMenuController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerInGameMenuController)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuViewController;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class __MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuController;
}
namespace GlobalNamespace {
class __MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0);
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalActivePlayerInGameMenuController::<>c__DisplayClass19_0*
class CORDL_TYPE __MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) bool value;

  static inline ::GlobalNamespace::__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0* New_ctor();

  constexpr bool const& __cordl_internal_get_value() const;

  constexpr bool& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(bool value);

  /// @brief Method .ctor, addr 0x26fb79c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_canShowInGameMenu>b__0, addr 0x26fc6ac, size 0x10, virtual false, abstract: false, final false
  inline void _get_canShowInGameMenu_b__0(bool newValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0(__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0(__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0 const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x1, def value: None
  bool ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0, ___value) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLocalActivePlayerInGameMenuController
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalActivePlayerInGameMenuController*
class CORDL_TYPE MultiplayerLocalActivePlayerInGameMenuController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass19_0 = ::GlobalNamespace::__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0;

  /// @brief Field _beatmapObjectManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _gameMenuIsShown, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__gameMenuIsShown, put = __cordl_internal_set__gameMenuIsShown)) bool _gameMenuIsShown;

  /// @brief Field _gamePause, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause))::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _inGameMenuViewController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inGameMenuViewController,
                      put = __cordl_internal_set__inGameMenuViewController))::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController> _inGameMenuViewController;

  /// @brief Field _menuButtonTrigger, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__menuButtonTrigger, put = __cordl_internal_set__menuButtonTrigger))::GlobalNamespace::IMenuButtonTrigger* _menuButtonTrigger;

  /// @brief Field _multiplayerController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerController, put = __cordl_internal_set__multiplayerController))::UnityW<::GlobalNamespace::MultiplayerController> _multiplayerController;

  /// @brief Field _saberManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager))::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _vrPlatformHelper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_canShowInGameMenu)) bool canShowInGameMenu;

  /// @brief Field canShowInGameMenuEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_canShowInGameMenuEvent, put = __cordl_internal_set_canShowInGameMenuEvent))::System::Action_1<::System::Action_1<bool>*>* canShowInGameMenuEvent;

  /// @brief Field didGiveUpEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_didGiveUpEvent, put = __cordl_internal_set_didGiveUpEvent))::System::Action* didGiveUpEvent;

  __declspec(property(get = get_gameMenuIsShown)) bool gameMenuIsShown;

  /// @brief Field requestsDisconnectEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_requestsDisconnectEvent, put = __cordl_internal_set_requestsDisconnectEvent))::System::Action* requestsDisconnectEvent;

  /// @brief Method HandleInGameMenuViewControllerDidPressDisconnectButton, addr 0x26fc4b8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleInGameMenuViewControllerDidPressDisconnectButton();

  /// @brief Method HandleInGameMenuViewControllerDidPressGiveUpButton, addr 0x26fc47c, size 0x3c, virtual false, abstract: false, final false
  inline void HandleInGameMenuViewControllerDidPressGiveUpButton();

  /// @brief Method HandleInGameMenuViewControllerDidPressResumeButton, addr 0x26fc478, size 0x4, virtual false, abstract: false, final false
  inline void HandleInGameMenuViewControllerDidPressResumeButton();

  /// @brief Method HandleInputFocusWasCaptured, addr 0x26fc474, size 0x4, virtual false, abstract: false, final false
  inline void HandleInputFocusWasCaptured();

  /// @brief Method HandleMenuButtonTriggered, addr 0x26fc470, size 0x4, virtual false, abstract: false, final false
  inline void HandleMenuButtonTriggered();

  /// @brief Method HandleStateChanged, addr 0x26fc4d4, size 0x1d0, virtual false, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  /// @brief Method HideInGameMenu, addr 0x26fba84, size 0x150, virtual false, abstract: false, final false
  inline void HideInGameMenu();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x26fc2d0, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x26fbda8, size 0x354, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ShowInGameMenu, addr 0x26fc2dc, size 0x100, virtual false, abstract: false, final false
  inline void ShowInGameMenu();

  /// @brief Method Start, addr 0x26fb7a4, size 0x2e0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr bool const& __cordl_internal_get__gameMenuIsShown() const;

  constexpr bool& __cordl_internal_get__gameMenuIsShown();

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __cordl_internal_get__gamePause() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController> const& __cordl_internal_get__inGameMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController>& __cordl_internal_get__inGameMenuViewController();

  constexpr ::GlobalNamespace::IMenuButtonTrigger*& __cordl_internal_get__menuButtonTrigger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuButtonTrigger*> const& __cordl_internal_get__menuButtonTrigger() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& __cordl_internal_get__multiplayerController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& __cordl_internal_get__multiplayerController();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::System::Action_1<::System::Action_1<bool>*>*& __cordl_internal_get_canShowInGameMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Action_1<bool>*>*> const& __cordl_internal_get_canShowInGameMenuEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didGiveUpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didGiveUpEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_requestsDisconnectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_requestsDisconnectEvent() const;

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__gameMenuIsShown(bool value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__inGameMenuViewController(::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController> value);

  constexpr void __cordl_internal_set__menuButtonTrigger(::GlobalNamespace::IMenuButtonTrigger* value);

  constexpr void __cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_canShowInGameMenuEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  constexpr void __cordl_internal_set_didGiveUpEvent(::System::Action* value);

  constexpr void __cordl_internal_set_requestsDisconnectEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x26fc6a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_canShowInGameMenuEvent, addr 0x26fb410, size 0xb0, virtual false, abstract: false, final false
  inline void add_canShowInGameMenuEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method add_didGiveUpEvent, addr 0x26fb2d8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didGiveUpEvent(::System::Action* value);

  /// @brief Method add_requestsDisconnectEvent, addr 0x26fb570, size 0x9c, virtual false, abstract: false, final false
  inline void add_requestsDisconnectEvent(::System::Action* value);

  /// @brief Method get_canShowInGameMenu, addr 0x26fb6b0, size 0xec, virtual false, abstract: false, final false
  inline bool get_canShowInGameMenu();

  /// @brief Method get_gameMenuIsShown, addr 0x26fb6a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_gameMenuIsShown();

  /// @brief Method remove_canShowInGameMenuEvent, addr 0x26fb4c0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_canShowInGameMenuEvent(::System::Action_1<::System::Action_1<bool>*>* value);

  /// @brief Method remove_didGiveUpEvent, addr 0x26fb374, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didGiveUpEvent(::System::Action* value);

  /// @brief Method remove_requestsDisconnectEvent, addr 0x26fb60c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_requestsDisconnectEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerInGameMenuController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerInGameMenuController(MultiplayerLocalActivePlayerInGameMenuController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerInGameMenuController(MultiplayerLocalActivePlayerInGameMenuController const&) = delete;

  /// @brief Field _inGameMenuViewController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController> ____inGameMenuViewController;

  /// @brief Field _menuButtonTrigger, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMenuButtonTrigger* ____menuButtonTrigger;

  /// @brief Field _vrPlatformHelper, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _gamePause, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _multiplayerController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerController> ____multiplayerController;

  /// @brief Field _saberManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _beatmapObjectManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field didGiveUpEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___didGiveUpEvent;

  /// @brief Field canShowInGameMenuEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::System::Action_1<bool>*>* ___canShowInGameMenuEvent;

  /// @brief Field requestsDisconnectEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___requestsDisconnectEvent;

  /// @brief Field _gameMenuIsShown, offset: 0x68, size: 0x1, def value: None
  bool ____gameMenuIsShown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____inGameMenuViewController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____menuButtonTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____vrPlatformHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____gamePause) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____multiplayerController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____saberManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____beatmapObjectManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ___didGiveUpEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ___canShowInGameMenuEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ___requestsDisconnectEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, ____gameMenuIsShown) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*, "", "MultiplayerLocalActivePlayerInGameMenuController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0*, "", "MultiplayerLocalActivePlayerInGameMenuController/<>c__DisplayClass19_0");
