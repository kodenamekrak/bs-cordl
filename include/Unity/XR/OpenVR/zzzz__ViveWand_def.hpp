#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
CORDL_MODULE_EXPORT(ViveWand)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class ViveWand;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::ViveWand);
// Type: Unity.XR.OpenVR::ViveWand
// SizeInfo { instance_size: 456, native_size: -1, calculated_instance_size: 456, calculated_native_size: 456, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6326))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6117))
// CS Name: ::Unity.XR.OpenVR::ViveWand*
class CORDL_TYPE ViveWand : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <grip>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__grip_k__BackingField, put = __set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__gripPressed_k__BackingField, put = __set__gripPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <primary>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__primary_k__BackingField, put = __set__primary_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField;

  /// @brief Field <trackpadPressed>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__trackpadPressed_k__BackingField, put = __set__trackpadPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField;

  /// @brief Field <trackpadTouched>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__trackpadTouched_k__BackingField, put = __set__trackpadTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadTouched_k__BackingField;

  /// @brief Field <trackpad>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__trackpad_k__BackingField, put = __set__trackpad_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _trackpad_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__trigger_k__BackingField, put = __set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__triggerPressed_k__BackingField, put = __set__triggerPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__deviceVelocity_k__BackingField, put = __set__deviceVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__deviceAngularVelocity_k__BackingField,
                      put = __set__deviceAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed))::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_primary, put = set_primary))::UnityEngine::InputSystem::Controls::ButtonControl* primary;

  __declspec(property(get = get_trackpadPressed, put = set_trackpadPressed))::UnityEngine::InputSystem::Controls::ButtonControl* trackpadPressed;

  __declspec(property(get = get_trackpadTouched, put = set_trackpadTouched))::UnityEngine::InputSystem::Controls::ButtonControl* trackpadTouched;

  __declspec(property(get = get_trackpad, put = set_trackpad))::UnityEngine::InputSystem::Controls::Vector2Control* trackpad;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed))::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__grip_k__BackingField() const;

  constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__gripPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__gripPressed_k__BackingField() const;

  constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__primary_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__primary_k__BackingField() const;

  constexpr void __set__primary_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__trackpadPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__trackpadPressed_k__BackingField() const;

  constexpr void __set__trackpadPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__trackpadTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__trackpadTouched_k__BackingField() const;

  constexpr void __set__trackpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__trackpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__trackpad_k__BackingField() const;

  constexpr void __set__trackpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__trigger_k__BackingField() const;

  constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__triggerPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__triggerPressed_k__BackingField() const;

  constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceVelocity_k__BackingField() const;

  constexpr void __set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceAngularVelocity_k__BackingField() const;

  constexpr void __set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_grip addr 0x2a342dc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method set_grip addr 0x2a342e4 size 0x8 virtual false final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_gripPressed addr 0x2a342ec size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method set_gripPressed addr 0x2a342f4 size 0x8 virtual false final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_primary addr 0x2a342fc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary();

  /// @brief Method set_primary addr 0x2a34304 size 0x8 virtual false final false
  inline void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackpadPressed addr 0x2a3430c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed();

  /// @brief Method set_trackpadPressed addr 0x2a34314 size 0x8 virtual false final false
  inline void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackpadTouched addr 0x2a3431c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadTouched();

  /// @brief Method set_trackpadTouched addr 0x2a34324 size 0x8 virtual false final false
  inline void set_trackpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackpad addr 0x2a3432c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_trackpad();

  /// @brief Method set_trackpad addr 0x2a34334 size 0x8 virtual false final false
  inline void set_trackpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_trigger addr 0x2a3433c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method set_trigger addr 0x2a34344 size 0x8 virtual false final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_triggerPressed addr 0x2a3434c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_triggerPressed addr 0x2a34354 size 0x8 virtual false final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_deviceVelocity addr 0x2a3435c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// @brief Method set_deviceVelocity addr 0x2a34364 size 0x8 virtual false final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceAngularVelocity addr 0x2a3436c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method set_deviceAngularVelocity addr 0x2a34374 size 0x8 virtual false final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method FinishSetup addr 0x2a3437c size 0x238 virtual true final false
  inline void FinishSetup();

  static inline ::Unity::XR::OpenVR::ViveWand* New_ctor();

  /// @brief Method .ctor addr 0x2a345b4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ViveWand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViveWand(ViveWand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViveWand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViveWand(ViveWand const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViveWand();

public:
  /// @brief Field <grip>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <primary>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primary_k__BackingField;

  /// @brief Field <trackpadPressed>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadPressed_k__BackingField;

  /// @brief Field <trackpadTouched>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadTouched_k__BackingField;

  /// @brief Field <trackpad>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____trackpad_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::ViveWand, 0x1c8>, "Size mismatch!");

} // namespace Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::ViveWand);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::ViveWand*, "Unity.XR.OpenVR", "ViveWand");