#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationMoveEvent)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct __NavigationMoveEvent__Direction;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __NavigationMoveEvent__Direction;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__NavigationMoveEvent__Direction);
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationMoveEvent);
// Type: ::Direction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7249))
// CS Name: ::NavigationMoveEvent::Direction
struct CORDL_TYPE __NavigationMoveEvent__Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NavigationMoveEvent__Direction_Unwrapped
  enum struct ____NavigationMoveEvent__Direction_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Up = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
    __E_Down = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NavigationMoveEvent__Direction_Unwrapped() const noexcept {
    return static_cast<____NavigationMoveEvent__Direction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NavigationMoveEvent__Direction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavigationMoveEvent__Direction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const None;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Left;

  /// @brief Field Up value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Up;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Right;

  /// @brief Field Down value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const Down;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigationMoveEvent__Direction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigationMoveEvent
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7248)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7248), inst: 4702 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7249)), TypeDefinitionIndex(TypeDefinitionIndex(10243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7250)) CS Name:
// ::UnityEngine.UIElements::NavigationMoveEvent*
class CORDL_TYPE NavigationMoveEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationMoveEvent*> {
public:
  // Declarations
  using Direction = ::UnityEngine::UIElements::__NavigationMoveEvent__Direction;

  /// @brief Field <direction>k__BackingField, offset 0x7c, size 0x4
  __declspec(property(get = __get__direction_k__BackingField, put = __set__direction_k__BackingField))::UnityEngine::UIElements::__NavigationMoveEvent__Direction _direction_k__BackingField;

  /// @brief Field <move>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__move_k__BackingField, put = __set__move_k__BackingField))::UnityEngine::Vector2 _move_k__BackingField;

  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::UIElements::__NavigationMoveEvent__Direction direction;

  __declspec(property(put = set_move))::UnityEngine::Vector2 move;

  constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction& __get__direction_k__BackingField();

  constexpr ::UnityEngine::UIElements::__NavigationMoveEvent__Direction const& __get__direction_k__BackingField() const;

  constexpr void __set__direction_k__BackingField(::UnityEngine::UIElements::__NavigationMoveEvent__Direction value);

  constexpr ::UnityEngine::Vector2& __get__move_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__move_k__BackingField() const;

  constexpr void __set__move_k__BackingField(::UnityEngine::Vector2 value);

  /// @brief Method DetermineMoveDirection addr 0x2e52eb4 size 0x54 virtual false final false
  static inline ::UnityEngine::UIElements::__NavigationMoveEvent__Direction DetermineMoveDirection(float_t x, float_t y, float_t deadZone);

  /// @brief Method get_direction addr 0x2e52f08 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::__NavigationMoveEvent__Direction get_direction();

  /// @brief Method set_direction addr 0x2e52f10 size 0x8 virtual false final false
  inline void set_direction(::UnityEngine::UIElements::__NavigationMoveEvent__Direction value);

  /// @brief Method set_move addr 0x2e52f18 size 0x8 virtual false final false
  inline void set_move(::UnityEngine::Vector2 value);

  /// @brief Method GetPooled addr 0x2e52f20 size 0xe0 virtual false final false
  static inline ::UnityEngine::UIElements::NavigationMoveEvent* GetPooled(::UnityEngine::Vector2 moveVector);

  /// @brief Method Init addr 0x2e53000 size 0x88 virtual true final false
  inline void Init();

  static inline ::UnityEngine::UIElements::NavigationMoveEvent* New_ctor();

  /// @brief Method .ctor addr 0x2e53088 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationMoveEvent(NavigationMoveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationMoveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationMoveEvent(NavigationMoveEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationMoveEvent();

public:
  /// @brief Field <direction>k__BackingField, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::UIElements::__NavigationMoveEvent__Direction ____direction_k__BackingField;

  /// @brief Field <move>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____move_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationMoveEvent, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigationMoveEvent__Direction, "UnityEngine.UIElements", "NavigationMoveEvent/Direction");
NEED_NO_BOX(::UnityEngine::UIElements::NavigationMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationMoveEvent*, "UnityEngine.UIElements", "NavigationMoveEvent");