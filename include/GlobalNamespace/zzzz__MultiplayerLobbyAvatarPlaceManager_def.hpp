#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLobbyAvatarPlaceManager)
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __MultiplayerLobbyAvatarPlace__Pool;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlaceManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager);
// Type: ::MultiplayerLobbyAvatarPlaceManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5226))
// CS Name: ::MultiplayerLobbyAvatarPlaceManager*
class CORDL_TYPE MultiplayerLobbyAvatarPlaceManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lobbyStateDataModel, offset 0x18, size 0x8
  __declspec(property(get = __get__lobbyStateDataModel, put = __set__lobbyStateDataModel))::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _avatarPlacesPool, offset 0x20, size 0x8
  __declspec(property(get = __get__avatarPlacesPool, put = __set__avatarPlacesPool))::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool* _avatarPlacesPool;

  /// @brief Field _allPlaces, offset 0x28, size 0x8
  __declspec(property(get = __get__allPlaces, put = __set__allPlaces))::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>* _allPlaces;

  /// @brief Field _innerCircleRadius, offset 0x30, size 0x4
  __declspec(property(get = __get__innerCircleRadius, put = __set__innerCircleRadius)) float_t _innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset 0x34, size 0x4
  __declspec(property(get = __get__minOuterCircleRadius, put = __set__minOuterCircleRadius)) float_t _minOuterCircleRadius;

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __get__lobbyStateDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __get__lobbyStateDataModel() const;

  constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*& __get__avatarPlacesPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*> const& __get__avatarPlacesPool() const;

  constexpr void __set__avatarPlacesPool(::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>*& __get__allPlaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>*> const& __get__allPlaces() const;

  constexpr void __set__allPlaces(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>* value);

  constexpr float_t& __get__innerCircleRadius();

  constexpr float_t const& __get__innerCircleRadius() const;

  constexpr void __set__innerCircleRadius(float_t value);

  constexpr float_t& __get__minOuterCircleRadius();

  constexpr float_t const& __get__minOuterCircleRadius() const;

  constexpr void __set__minOuterCircleRadius(float_t value);

  /// @brief Method Activate addr 0x2251dc8 size 0x8 virtual false final false
  inline void Activate(float_t innerCircleRadius, float_t minOuterCircleRadius);

  /// @brief Method Deactivate addr 0x2252268 size 0x4 virtual false final false
  inline void Deactivate();

  /// @brief Method OnDestroy addr 0x22523b8 size 0x4 virtual false final false
  inline void OnDestroy();

  /// @brief Method SpawnAllPlaces addr 0x2251dd0 size 0x498 virtual false final false
  inline void SpawnAllPlaces();

  /// @brief Method DespawnAllPlaces addr 0x225226c size 0x14c virtual false final false
  inline void DespawnAllPlaces();

  static inline ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* New_ctor();

  /// @brief Method .ctor addr 0x22523bc size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLobbyAvatarPlaceManager(MultiplayerLobbyAvatarPlaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLobbyAvatarPlaceManager(MultiplayerLobbyAvatarPlaceManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLobbyAvatarPlaceManager();

public:
  /// @brief Field _lobbyStateDataModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _avatarPlacesPool, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool* ____avatarPlacesPool;

  /// @brief Field _allPlaces, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>* ____allPlaces;

  /// @brief Field _innerCircleRadius, offset: 0x30, size: 0x4, def value: None
  float_t ____innerCircleRadius;

  /// @brief Field _minOuterCircleRadius, offset: 0x34, size: 0x4, def value: None
  float_t ____minOuterCircleRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*, "", "MultiplayerLobbyAvatarPlaceManager");