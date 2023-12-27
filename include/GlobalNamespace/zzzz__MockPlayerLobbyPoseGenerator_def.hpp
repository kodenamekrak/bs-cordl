#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockPlayerLobbyPoseGenerator)
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockNodePoseSyncStateSender;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerLobbyPoseGenerator);
// Type: ::MockPlayerLobbyPoseGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15522))
// CS Name: ::MockPlayerLobbyPoseGenerator*
class CORDL_TYPE MockPlayerLobbyPoseGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get_multiplayerSessionManager, put = __set_multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;

  /// @brief Field mockNodePoseSyncStateSender, offset 0x18, size 0x8
  __declspec(property(get = __get_mockNodePoseSyncStateSender, put = __set_mockNodePoseSyncStateSender))::GlobalNamespace::MockNodePoseSyncStateSender* mockNodePoseSyncStateSender;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get_multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get_multiplayerSessionManager() const;

  constexpr void __set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr ::GlobalNamespace::MockNodePoseSyncStateSender*& __get_mockNodePoseSyncStateSender();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockNodePoseSyncStateSender*> const& __get_mockNodePoseSyncStateSender() const;

  constexpr void __set_mockNodePoseSyncStateSender(::GlobalNamespace::MockNodePoseSyncStateSender* value);

  static inline ::GlobalNamespace::MockPlayerLobbyPoseGenerator* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method .ctor addr 0x23ebde0 size 0x7c virtual false final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method Dispose addr 0x23ebe5c size 0x10 virtual true final false
  inline void Dispose();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init();

  /// @brief Method Tick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Tick();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerLobbyPoseGenerator(MockPlayerLobbyPoseGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerLobbyPoseGenerator(MockPlayerLobbyPoseGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerLobbyPoseGenerator();

public:
  /// @brief Field multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ___multiplayerSessionManager;

  /// @brief Field mockNodePoseSyncStateSender, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MockNodePoseSyncStateSender* ___mockNodePoseSyncStateSender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerLobbyPoseGenerator, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerLobbyPoseGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerLobbyPoseGenerator*, "", "MockPlayerLobbyPoseGenerator");