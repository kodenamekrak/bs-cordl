#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEnergyCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IGameEnergyCounter)
namespace GlobalNamespace {
struct GameplayModifiers_EnergyType;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameEnergyCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IGameEnergyCounter);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameEnergyCounter
class CORDL_TYPE IGameEnergyCounter {
public:
  // Declarations
  __declspec(property(get = get_batteryEnergy)) int32_t batteryEnergy;

  __declspec(property(get = get_batteryLives)) int32_t batteryLives;

  __declspec(property(get = get_energy)) float_t energy;

  __declspec(property(get = get_energyType)) ::GlobalNamespace::GameplayModifiers_EnergyType energyType;

  __declspec(property(get = get_failOnSaberClash)) bool failOnSaberClash;

  __declspec(property(get = get_instaFail)) bool instaFail;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_noFail)) bool noFail;

  /// @brief Method add_didInitEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_didInitEvent(::System::Action* value);

  /// @brief Method add_gameEnergyDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_gameEnergyDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method add_gameEnergyDidReach0Event, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_gameEnergyDidReach0Event(::System::Action* value);

  /// @brief Method get_batteryEnergy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_batteryEnergy();

  /// @brief Method get_batteryLives, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_batteryLives();

  /// @brief Method get_energy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_energy();

  /// @brief Method get_energyType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers_EnergyType get_energyType();

  /// @brief Method get_failOnSaberClash, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_failOnSaberClash();

  /// @brief Method get_instaFail, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_instaFail();

  /// @brief Method get_isInitialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_noFail, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_noFail();

  /// @brief Method remove_didInitEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_didInitEvent(::System::Action* value);

  /// @brief Method remove_gameEnergyDidChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_gameEnergyDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method remove_gameEnergyDidReach0Event, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_gameEnergyDidReach0Event(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IGameEnergyCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameEnergyCounter(IGameEnergyCounter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IGameEnergyCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGameEnergyCounter*, "", "IGameEnergyCounter");
