#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LobbyGameStateModel)
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyGameStateModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyGameStateModel);
// Type: ::LobbyGameStateModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12880)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4503))
// CS Name: ::LobbyGameStateModel*
class CORDL_TYPE LobbyGameStateModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameStateDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_gameStateDidChangeEvent, put = __set_gameStateDidChangeEvent))::System::Action_1<::GlobalNamespace::MultiplayerGameState>* gameStateDidChangeEvent;

  /// @brief Field gameStateDidChangeAlwaysSentEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_gameStateDidChangeAlwaysSentEvent,
                      put = __set_gameStateDidChangeAlwaysSentEvent))::System::Action_1<::GlobalNamespace::MultiplayerGameState>* gameStateDidChangeAlwaysSentEvent;

  /// @brief Field _gameState, offset 0x20, size 0x4
  __declspec(property(get = __get__gameState, put = __set__gameState))::GlobalNamespace::MultiplayerGameState _gameState;

  __declspec(property(get = get_gameState))::GlobalNamespace::MultiplayerGameState gameState;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*& __get_gameStateDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*> const& __get_gameStateDidChangeEvent() const;

  constexpr void __set_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*& __get_gameStateDidChangeAlwaysSentEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*> const& __get_gameStateDidChangeAlwaysSentEvent() const;

  constexpr void __set_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value);

  constexpr ::GlobalNamespace::MultiplayerGameState& __get__gameState();

  constexpr ::GlobalNamespace::MultiplayerGameState const& __get__gameState() const;

  constexpr void __set__gameState(::GlobalNamespace::MultiplayerGameState value);

  /// @brief Method get_gameState addr 0x235b51c size 0x8 virtual false final false
  inline ::GlobalNamespace::MultiplayerGameState get_gameState();

  /// @brief Method add_gameStateDidChangeEvent addr 0x235b524 size 0xb0 virtual false final false
  inline void add_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method remove_gameStateDidChangeEvent addr 0x235b5d4 size 0xb0 virtual false final false
  inline void remove_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method add_gameStateDidChangeAlwaysSentEvent addr 0x235b684 size 0xb0 virtual false final false
  inline void add_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method remove_gameStateDidChangeAlwaysSentEvent addr 0x235b734 size 0xb0 virtual false final false
  inline void remove_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value);

  /// @brief Method SetGameState addr 0x235a924 size 0x8 virtual false final false
  inline void SetGameState(::GlobalNamespace::MultiplayerGameState newGameState);

  /// @brief Method SetGameStateWithoutNotification addr 0x23589b0 size 0x2c virtual false final false
  inline void SetGameStateWithoutNotification(::GlobalNamespace::MultiplayerGameState newGameState);

  /// @brief Method SetGameState addr 0x235b7e4 size 0x70 virtual false final false
  inline void SetGameState(::GlobalNamespace::MultiplayerGameState newGameState, bool sendNotification);

  static inline ::GlobalNamespace::LobbyGameStateModel* New_ctor();

  /// @brief Method .ctor addr 0x235b854 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyGameStateModel(LobbyGameStateModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyGameStateModel(LobbyGameStateModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyGameStateModel();

public:
  /// @brief Field gameStateDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerGameState>* ___gameStateDidChangeEvent;

  /// @brief Field gameStateDidChangeAlwaysSentEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerGameState>* ___gameStateDidChangeAlwaysSentEvent;

  /// @brief Field _gameState, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerGameState ____gameState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyGameStateModel, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyGameStateModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyGameStateModel*, "", "LobbyGameStateModel");