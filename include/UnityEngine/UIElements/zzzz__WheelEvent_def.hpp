#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WheelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(WheelEvent)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class __WheelEvent____c;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class WheelEvent;
}
namespace UnityEngine::UIElements {
class __WheelEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::WheelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__WheelEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::WheelEvent::<>c*
class CORDL_TYPE __WheelEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__WheelEvent____c* __9;

  static inline ::UnityEngine::UIElements::__WheelEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49c6a18, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::WheelEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49c6a10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__WheelEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__WheelEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WheelEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WheelEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WheelEvent____c(__WheelEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WheelEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WheelEvent____c(__WheelEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__WheelEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::WheelEvent
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 196, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::WheelEvent*
class CORDL_TYPE WheelEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::WheelEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__WheelEvent____c;

  /// @brief Field <delta>k__BackingField, offset 0xb8, size 0xc
  __declspec(property(get = __cordl_internal_get__delta_k__BackingField, put = __cordl_internal_set__delta_k__BackingField)) ::UnityEngine::Vector3 _delta_k__BackingField;

  __declspec(property(get = get_delta, put = set_delta)) ::UnityEngine::Vector3 delta;

  /// @brief Method GetPooled, addr 0x49c6774, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::WheelEvent* GetPooled(::UnityEngine::Vector3 delta, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method GetPooled, addr 0x49c683c, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::WheelEvent* GetPooled(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::IPointerEvent* pointerEvent);

  /// @brief Method GetPooled, addr 0x49c66f8, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::WheelEvent* GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method Init, addr 0x49c68b4, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49c6904, size 0x60, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::WheelEvent* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__delta_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__delta_k__BackingField();

  constexpr void __cordl_internal_set__delta_k__BackingField(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x49c6964, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_delta, addr 0x49c66e0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_delta();

  /// @brief Method set_delta, addr 0x49c66ec, size 0xc, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WheelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WheelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WheelEvent(WheelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WheelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WheelEvent(WheelEvent const&) = delete;

  /// @brief Field <delta>k__BackingField, offset: 0xb8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____delta_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::WheelEvent, 0xc8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WheelEvent, ____delta_k__BackingField) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::WheelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::WheelEvent*, "UnityEngine.UIElements", "WheelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__WheelEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__WheelEvent____c*, "UnityEngine.UIElements", "WheelEvent/<>c");
