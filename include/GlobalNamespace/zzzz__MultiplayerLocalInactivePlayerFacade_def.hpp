#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalInactivePlayerFacade.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerFacade)
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerOutroAnimator;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerFacade__Factory;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerFacade;
}
namespace GlobalNamespace {
class __MultiplayerLocalInactivePlayerFacade__Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory);
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalInactivePlayerFacade::Factory*
class CORDL_TYPE __MultiplayerLocalInactivePlayerFacade__Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState, ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory* New_ctor();

  /// @brief Method .ctor, addr 0x3b5fe40, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLocalInactivePlayerFacade__Factory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalInactivePlayerFacade__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalInactivePlayerFacade__Factory(__MultiplayerLocalInactivePlayerFacade__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalInactivePlayerFacade__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalInactivePlayerFacade__Factory(__MultiplayerLocalInactivePlayerFacade__Factory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4510 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLocalInactivePlayerFacade
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalInactivePlayerFacade*
class CORDL_TYPE MultiplayerLocalInactivePlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory;

  /// @brief Field _inactivePlayerSongSyncController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__inactivePlayerSongSyncController,
                      put = __cordl_internal_set__inactivePlayerSongSyncController)) ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController>
      _inactivePlayerSongSyncController;

  /// @brief Field _introAnimator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__introAnimator, put = __cordl_internal_set__introAnimator)) ::UnityW<::UnityEngine::Playables::PlayableDirector> _introAnimator;

  /// @brief Field _outroAnimator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__outroAnimator, put = __cordl_internal_set__outroAnimator)) ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> _outroAnimator;

  /// @brief Field _spectatorController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatorController, put = __cordl_internal_set__spectatorController)) ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>
      _spectatorController;

  __declspec(property(get = get_introAnimator)) ::UnityW<::UnityEngine::GameObject> introAnimator;

  __declspec(property(get = get_introPlayableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector> introPlayableDirector;

  __declspec(property(get = get_outroAnimator)) ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> outroAnimator;

  /// @brief Field playerDidFinishEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDidFinishEvent,
                      put = __cordl_internal_set_playerDidFinishEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_playerNetworkDidFailedEvent,
                      put = __cordl_internal_set_playerNetworkDidFailedEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerNetworkDidFailedEvent;

  __declspec(property(get = get_songController)) ::GlobalNamespace::IStartSeekSongController* songController;

  __declspec(property(get = get_spectatorController)) ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> spectatorController;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
  constexpr operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept;

  static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* New_ctor();

  /// @brief Method ReportPlayerDidFinish, addr 0x3b5fe00, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method ReportPlayerNetworkDidFailed, addr 0x3b5fe1c, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController> const& __cordl_internal_get__inactivePlayerSongSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController>& __cordl_internal_get__inactivePlayerSongSyncController();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__introAnimator() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__introAnimator();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> const& __cordl_internal_get__outroAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator>& __cordl_internal_get__outroAnimator();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> const& __cordl_internal_get__spectatorController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>& __cordl_internal_get__spectatorController();

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_playerDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __cordl_internal_get_playerDidFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_playerNetworkDidFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __cordl_internal_get_playerNetworkDidFailedEvent() const;

  constexpr void __cordl_internal_set__inactivePlayerSongSyncController(::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController> value);

  constexpr void __cordl_internal_set__introAnimator(::UnityW<::UnityEngine::Playables::PlayableDirector> value);

  constexpr void __cordl_internal_set__outroAnimator(::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> value);

  constexpr void __cordl_internal_set__spectatorController(::UnityW<::GlobalNamespace::MultiplayerSpectatorController> value);

  constexpr void __cordl_internal_set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr void __cordl_internal_set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method .ctor, addr 0x3b5fe38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerDidFinishEvent, addr 0x3b5fb40, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_playerNetworkDidFailedEvent, addr 0x3b5fca0, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method get_introAnimator, addr 0x3b5fb14, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_introAnimator();

  /// @brief Method get_introPlayableDirector, addr 0x3b5fb30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Playables::PlayableDirector> get_introPlayableDirector();

  /// @brief Method get_outroAnimator, addr 0x3b5fb38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> get_outroAnimator();

  /// @brief Method get_songController, addr 0x3b5fb04, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IStartSeekSongController* get_songController();

  /// @brief Method get_spectatorController, addr 0x3b5fb0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> get_spectatorController();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* i___GlobalNamespace__IMultiplayerLevelEndActionsListener() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* i___GlobalNamespace__IMultiplayerLevelEndActionsPublisher() noexcept;

  /// @brief Convert to "::GlobalNamespace::IStartSeekSongControllerProvider"
  constexpr ::GlobalNamespace::IStartSeekSongControllerProvider* i___GlobalNamespace__IStartSeekSongControllerProvider() noexcept;

  /// @brief Method remove_playerDidFinishEvent, addr 0x3b5fbf0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerNetworkDidFailedEvent, addr 0x3b5fd50, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalInactivePlayerFacade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerFacade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalInactivePlayerFacade(MultiplayerLocalInactivePlayerFacade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerFacade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalInactivePlayerFacade(MultiplayerLocalInactivePlayerFacade const&) = delete;

  /// @brief Field _inactivePlayerSongSyncController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController> ____inactivePlayerSongSyncController;

  /// @brief Field _spectatorController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> ____spectatorController;

  /// @brief Field _introAnimator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableDirector> ____introAnimator;

  /// @brief Field _outroAnimator, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> ____outroAnimator;

  /// @brief Field playerDidFinishEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerNetworkDidFailedEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4511 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ____inactivePlayerSongSyncController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ____spectatorController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ____introAnimator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ____outroAnimator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ___playerDidFinishEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, ___playerNetworkDidFailedEvent) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*, "", "MultiplayerLocalInactivePlayerFacade");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*, "", "MultiplayerLocalInactivePlayerFacade/Factory");
