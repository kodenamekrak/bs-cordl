#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(ProximitySensor)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class ProximitySensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::ProximitySensor);
// Type: UnityEngine.InputSystem::ProximitySensor
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6283))
// CS Name: ::UnityEngine.InputSystem::ProximitySensor*
class CORDL_TYPE ProximitySensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <distance>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__distance_k__BackingField, put = __set__distance_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _distance_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::ProximitySensor* _current_k__BackingField;

  __declspec(property(get = get_distance, put = set_distance))::UnityEngine::InputSystem::Controls::AxisControl* distance;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__distance_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__distance_k__BackingField() const;

  constexpr void __set__distance_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::ProximitySensor* value);

  static inline ::UnityEngine::InputSystem::ProximitySensor* getStaticF__current_k__BackingField();

  /// @brief Method get_distance addr 0x2aa8bb4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_distance();

  /// @brief Method set_distance addr 0x2aa8bbc size 0x8 virtual false final false
  inline void set_distance(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_current addr 0x2aa8bc4 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::ProximitySensor* get_current();

  /// @brief Method set_current addr 0x2aa8c0c size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::ProximitySensor* value);

  /// @brief Method MakeCurrent addr 0x2aa8c58 size 0x54 virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved addr 0x2aa8cac size 0x84 virtual true final false
  inline void OnRemoved();

  /// @brief Method FinishSetup addr 0x2aa8d30 size 0x78 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::ProximitySensor* New_ctor();

  /// @brief Method .ctor addr 0x2aa8da8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ProximitySensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProximitySensor(ProximitySensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProximitySensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProximitySensor(ProximitySensor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProximitySensor();

public:
  /// @brief Field <distance>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____distance_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::ProximitySensor, 0x160>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::ProximitySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::ProximitySensor*, "UnityEngine.InputSystem", "ProximitySensor");