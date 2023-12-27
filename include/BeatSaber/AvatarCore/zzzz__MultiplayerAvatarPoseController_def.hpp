#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerAvatarPoseController)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T> class Action_1;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseRestriction;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class MultiplayerAvatarPoseController;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController);
// Type: BeatSaber.AvatarCore::MultiplayerAvatarPoseController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15200))
// CS Name: ::BeatSaber.AvatarCore::MultiplayerAvatarPoseController*
class CORDL_TYPE MultiplayerAvatarPoseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _leftSaberTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__leftSaberTransform, put = __set__leftSaberTransform))::UnityEngine::Transform* _leftSaberTransform;

  /// @brief Field _rightSaberTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__rightSaberTransform, put = __set__rightSaberTransform))::UnityEngine::Transform* _rightSaberTransform;

  /// @brief Field _headTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__headTransform, put = __set__headTransform))::UnityEngine::Transform* _headTransform;

  /// @brief Field _nodePoseSyncStateManager, offset 0x30, size 0x8
  __declspec(property(get = __get__nodePoseSyncStateManager, put = __set__nodePoseSyncStateManager))::GlobalNamespace::INodePoseSyncStateManager* _nodePoseSyncStateManager;

  /// @brief Field _avatarPoseRestriction, offset 0x38, size 0x8
  __declspec(property(get = __get__avatarPoseRestriction, put = __set__avatarPoseRestriction))::BeatSaber::AvatarCore::IAvatarPoseRestriction* _avatarPoseRestriction;

  /// @brief Field _connectedPlayer, offset 0x40, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field didUpdatePoseEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_didUpdatePoseEvent, put = __set_didUpdatePoseEvent))::System::Action_1<::UnityEngine::Vector3>* didUpdatePoseEvent;

  __declspec(property(put = set_connectedPlayer))::GlobalNamespace::IConnectedPlayer* connectedPlayer;

  constexpr ::UnityEngine::Transform*& __get__leftSaberTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__leftSaberTransform() const;

  constexpr void __set__leftSaberTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__rightSaberTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__rightSaberTransform() const;

  constexpr void __set__rightSaberTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__headTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__headTransform() const;

  constexpr void __set__headTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::INodePoseSyncStateManager*& __get__nodePoseSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& __get__nodePoseSyncStateManager() const;

  constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value);

  constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction*& __get__avatarPoseRestriction();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseRestriction*> const& __get__avatarPoseRestriction() const;

  constexpr void __set__avatarPoseRestriction(::BeatSaber::AvatarCore::IAvatarPoseRestriction* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::System::Action_1<::UnityEngine::Vector3>*& __get_didUpdatePoseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Vector3>*> const& __get_didUpdatePoseEvent() const;

  constexpr void __set_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method add_didUpdatePoseEvent addr 0xe0bad0 size 0xb0 virtual false final false
  inline void add_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method remove_didUpdatePoseEvent addr 0xe0bc50 size 0xb0 virtual false final false
  inline void remove_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value);

  /// @brief Method set_connectedPlayer addr 0xe0fd50 size 0x8 virtual false final false
  inline void set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  /// @brief Method Start addr 0xe0fd58 size 0x18 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0xe0fd70 size 0x4dc virtual false final false
  inline void Update();

  static inline ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController* New_ctor();

  /// @brief Method .ctor addr 0xe1024c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarPoseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerAvatarPoseController(MultiplayerAvatarPoseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarPoseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerAvatarPoseController(MultiplayerAvatarPoseController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarPoseController();

public:
  /// @brief Field _leftSaberTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____leftSaberTransform;

  /// @brief Field _rightSaberTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____rightSaberTransform;

  /// @brief Field _headTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____headTransform;

  /// @brief Field _nodePoseSyncStateManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::INodePoseSyncStateManager* ____nodePoseSyncStateManager;

  /// @brief Field _avatarPoseRestriction, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarPoseRestriction* ____avatarPoseRestriction;

  /// @brief Field _connectedPlayer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field didUpdatePoseEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Vector3>* ___didUpdatePoseEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController, 0x50>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*, "BeatSaber.AvatarCore", "MultiplayerAvatarPoseController");