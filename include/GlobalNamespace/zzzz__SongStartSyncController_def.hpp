#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SongStartSyncController)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class SongStartHandler;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
// Forward declare root types
namespace GlobalNamespace {
class SongStartSyncController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongStartSyncController);
// Type: ::SongStartSyncController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14978))
// CS Name: ::SongStartSyncController*
class CORDL_TYPE SongStartSyncController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x18, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset 0x20, size 0x8
  __declspec(property(get = __get__gameplayRpcManager, put = __set__gameplayRpcManager))::GlobalNamespace::IGameplayRpcManager* _gameplayRpcManager;

  /// @brief Field _waitStartTime, offset 0x28, size 0x4
  __declspec(property(get = __get__waitStartTime, put = __set__waitStartTime)) float_t _waitStartTime;

  /// @brief Field _songStarted, offset 0x2c, size 0x1
  __declspec(property(get = __get__songStarted, put = __set__songStarted)) bool _songStarted;

  /// @brief Field _startTime, offset 0x30, size 0x4
  __declspec(property(get = __get__startTime, put = __set__startTime)) float_t _startTime;

  /// @brief Field _sessionGameId, offset 0x38, size 0x8
  __declspec(property(get = __get__sessionGameId, put = __set__sessionGameId))::StringW _sessionGameId;

  /// @brief Field _songStartHandler, offset 0x40, size 0x8
  __declspec(property(get = __get__songStartHandler, put = __set__songStartHandler))::GlobalNamespace::SongStartHandler* _songStartHandler;

  /// @brief Field syncStartFailedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_syncStartFailedEvent, put = __set_syncStartFailedEvent))::System::Action* syncStartFailedEvent;

  /// @brief Field syncStartSuccessEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_syncStartSuccessEvent, put = __set_syncStartSuccessEvent))::System::Action_1<int64_t>* syncStartSuccessEvent;

  /// @brief Field syncResumeEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_syncResumeEvent, put = __set_syncResumeEvent))::System::Action_1<int64_t>* syncResumeEvent;

  __declspec(property(get = get_isSongStarted)) bool isSongStarted;

  __declspec(property(get = get_songStartSyncTime)) int64_t songStartSyncTime;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::IGameplayRpcManager*& __get__gameplayRpcManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __get__gameplayRpcManager() const;

  constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value);

  constexpr float_t& __get__waitStartTime();

  constexpr float_t const& __get__waitStartTime() const;

  constexpr void __set__waitStartTime(float_t value);

  constexpr bool& __get__songStarted();

  constexpr bool const& __get__songStarted() const;

  constexpr void __set__songStarted(bool value);

  constexpr float_t& __get__startTime();

  constexpr float_t const& __get__startTime() const;

  constexpr void __set__startTime(float_t value);

  constexpr ::StringW& __get__sessionGameId();

  constexpr ::StringW const& __get__sessionGameId() const;

  constexpr void __set__sessionGameId(::StringW value);

  constexpr ::GlobalNamespace::SongStartHandler*& __get__songStartHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongStartHandler*> const& __get__songStartHandler() const;

  constexpr void __set__songStartHandler(::GlobalNamespace::SongStartHandler* value);

  constexpr ::System::Action*& __get_syncStartFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_syncStartFailedEvent() const;

  constexpr void __set_syncStartFailedEvent(::System::Action* value);

  constexpr ::System::Action_1<int64_t>*& __get_syncStartSuccessEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int64_t>*> const& __get_syncStartSuccessEvent() const;

  constexpr void __set_syncStartSuccessEvent(::System::Action_1<int64_t>* value);

  constexpr ::System::Action_1<int64_t>*& __get_syncResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int64_t>*> const& __get_syncResumeEvent() const;

  constexpr void __set_syncResumeEvent(::System::Action_1<int64_t>* value);

  /// @brief Method get_isSongStarted addr 0x26395f4 size 0x8 virtual false final false
  inline bool get_isSongStarted();

  /// @brief Method get_songStartSyncTime addr 0x26395fc size 0x1c virtual false final false
  inline int64_t get_songStartSyncTime();

  /// @brief Method add_syncStartFailedEvent addr 0x2639618 size 0x9c virtual false final false
  inline void add_syncStartFailedEvent(::System::Action* value);

  /// @brief Method remove_syncStartFailedEvent addr 0x26396b4 size 0x9c virtual false final false
  inline void remove_syncStartFailedEvent(::System::Action* value);

  /// @brief Method add_syncStartSuccessEvent addr 0x2639750 size 0xb0 virtual false final false
  inline void add_syncStartSuccessEvent(::System::Action_1<int64_t>* value);

  /// @brief Method remove_syncStartSuccessEvent addr 0x2639800 size 0xb0 virtual false final false
  inline void remove_syncStartSuccessEvent(::System::Action_1<int64_t>* value);

  /// @brief Method add_syncResumeEvent addr 0x26398b0 size 0xb0 virtual false final false
  inline void add_syncResumeEvent(::System::Action_1<int64_t>* value);

  /// @brief Method remove_syncResumeEvent addr 0x2639960 size 0xb0 virtual false final false
  inline void remove_syncResumeEvent(::System::Action_1<int64_t>* value);

  /// @brief Method Start addr 0x2639a10 size 0xc virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2639a1c size 0x14 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x2639a30 size 0x60 virtual false final false
  inline void Update();

  /// @brief Method OnApplicationPause addr 0x2639a90 size 0x44 virtual false final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method StartSong addr 0x2639ad4 size 0x15c virtual false final false
  inline void StartSong(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel, ::StringW sessionGameId);

  /// @brief Method HandleSetSongStartSyncTime addr 0x2639c30 size 0x2c virtual false final false
  inline void HandleSetSongStartSyncTime(int64_t songStartSyncTime);

  static inline ::GlobalNamespace::SongStartSyncController* New_ctor();

  /// @brief Method .ctor addr 0x2639c5c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongStartSyncController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongStartSyncController(SongStartSyncController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongStartSyncController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongStartSyncController(SongStartSyncController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongStartSyncController();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _gameplayRpcManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IGameplayRpcManager* ____gameplayRpcManager;

  /// @brief Field _waitStartTime, offset: 0x28, size: 0x4, def value: None
  float_t ____waitStartTime;

  /// @brief Field _songStarted, offset: 0x2c, size: 0x1, def value: None
  bool ____songStarted;

  /// @brief Field _startTime, offset: 0x30, size: 0x4, def value: None
  float_t ____startTime;

  /// @brief Field _sessionGameId, offset: 0x38, size: 0x8, def value: None
  ::StringW ____sessionGameId;

  /// @brief Field _songStartHandler, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SongStartHandler* ____songStartHandler;

  /// @brief Field syncStartFailedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___syncStartFailedEvent;

  /// @brief Field syncStartSuccessEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<int64_t>* ___syncStartSuccessEvent;

  /// @brief Field syncResumeEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<int64_t>* ___syncResumeEvent;

  /// @brief Field kAudioLoadTimeout offset 0xffffffff size 0x4
  static constexpr float_t kAudioLoadTimeout{ 15.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongStartSyncController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongStartSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongStartSyncController*, "", "SongStartSyncController");