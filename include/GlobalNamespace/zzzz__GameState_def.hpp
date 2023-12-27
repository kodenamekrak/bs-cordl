#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameState)
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class GameState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameState);
// Type: ::GameState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12764))
// CS Name: ::GameState*
class CORDL_TYPE GameState : public ::System::Object {
public:
  // Declarations
  /// @brief Field fsm, offset 0x10, size 0x8
  __declspec(property(get = __get_fsm, put = __set_fsm))::GlobalNamespace::GameplayServerFiniteStateMachine* fsm;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine*& __get_fsm();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayServerFiniteStateMachine*> const& __get_fsm() const;

  constexpr void __set_fsm(::GlobalNamespace::GameplayServerFiniteStateMachine* value);

  static inline ::GlobalNamespace::GameState* New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm);

  /// @brief Method .ctor addr 0xe3c22c size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Dispose();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init();

  // Ctor Parameters [CppParam { name: "", ty: "GameState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameState(GameState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameState(GameState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameState();

public:
  /// @brief Field fsm, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayServerFiniteStateMachine* ___fsm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameState, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameState*, "", "GameState");