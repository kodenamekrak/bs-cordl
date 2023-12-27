#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDragger)
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine::UIElements {
struct __ListViewDragger__DragPosition;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
struct ListDragAndDropArgs;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct DragAndDropPosition;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
struct __ListViewDragger__DragPosition;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewDragger);
MARK_VAL_T(::UnityEngine::UIElements::__ListViewDragger__DragPosition);
// Type: ::DragPosition
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6958))
// CS Name: ::ListViewDragger::DragPosition
struct CORDL_TYPE __ListViewDragger__DragPosition {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::__ListViewDragger__DragPosition>*();

  /// @brief Method Equals addr 0x2e0b020 size 0x58 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::__ListViewDragger__DragPosition other);

  /// @brief Method Equals addr 0x2e0bbf0 size 0x9c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e0bc8c size 0x48 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "insertAtIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "recycledItem", ty: "::UnityEngine::UIElements::ReusableCollectionItem*",
  // modifiers: "", def_value: None }, CppParam { name: "dragAndDropPosition", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value: None }]
  constexpr __ListViewDragger__DragPosition(int32_t insertAtIndex, ::UnityEngine::UIElements::ReusableCollectionItem* recycledItem,
                                            ::UnityEngine::UIElements::DragAndDropPosition dragAndDropPosition) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListViewDragger__DragPosition();

  /// @brief Field insertAtIndex, offset: 0x0, size: 0x4, def value: None
  int32_t insertAtIndex;

  /// @brief Field recycledItem, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ReusableCollectionItem* recycledItem;

  /// @brief Field dragAndDropPosition, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::DragAndDropPosition dragAndDropPosition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListViewDragger__DragPosition, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ListViewDragger
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6958)), TypeDefinitionIndex(TypeDefinitionIndex(6969))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6959))
// CS Name: ::UnityEngine.UIElements::ListViewDragger*
class CORDL_TYPE ListViewDragger : public ::UnityEngine::UIElements::DragEventsProcessor {
public:
  // Declarations
  using DragPosition = ::UnityEngine::UIElements::__ListViewDragger__DragPosition;

  /// @brief Field m_LastDragPosition, offset 0x38, size 0x18
  __declspec(property(get = __get_m_LastDragPosition, put = __set_m_LastDragPosition))::UnityEngine::UIElements::__ListViewDragger__DragPosition m_LastDragPosition;

  /// @brief Field m_DragHoverBar, offset 0x50, size 0x8
  __declspec(property(get = __get_m_DragHoverBar, put = __set_m_DragHoverBar))::UnityEngine::UIElements::VisualElement* m_DragHoverBar;

  /// @brief Field <dragAndDropController>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__dragAndDropController_k__BackingField,
                      put = __set__dragAndDropController_k__BackingField))::UnityEngine::UIElements::ICollectionDragAndDropController* _dragAndDropController_k__BackingField;

  __declspec(property(get = get_targetListView))::UnityEngine::UIElements::BaseVerticalCollectionView* targetListView;

  __declspec(property(get = get_targetScrollView))::UnityEngine::UIElements::ScrollView* targetScrollView;

  __declspec(property(get = get_dragAndDropController, put = set_dragAndDropController))::UnityEngine::UIElements::ICollectionDragAndDropController* dragAndDropController;

  constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition& __get_m_LastDragPosition();

  constexpr ::UnityEngine::UIElements::__ListViewDragger__DragPosition const& __get_m_LastDragPosition() const;

  constexpr void __set_m_LastDragPosition(::UnityEngine::UIElements::__ListViewDragger__DragPosition value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_DragHoverBar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_DragHoverBar() const;

  constexpr void __set_m_DragHoverBar(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::ICollectionDragAndDropController*& __get__dragAndDropController_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ICollectionDragAndDropController*> const& __get__dragAndDropController_k__BackingField() const;

  constexpr void __set__dragAndDropController_k__BackingField(::UnityEngine::UIElements::ICollectionDragAndDropController* value);

  /// @brief Method get_targetListView addr 0x2e0998c size 0x7c virtual false final false
  inline ::UnityEngine::UIElements::BaseVerticalCollectionView* get_targetListView();

  /// @brief Method get_targetScrollView addr 0x2e09a08 size 0x1c virtual false final false
  inline ::UnityEngine::UIElements::ScrollView* get_targetScrollView();

  /// @brief Method get_dragAndDropController addr 0x2e09a24 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ICollectionDragAndDropController* get_dragAndDropController();

  /// @brief Method set_dragAndDropController addr 0x2e09a2c size 0x8 virtual false final false
  inline void set_dragAndDropController(::UnityEngine::UIElements::ICollectionDragAndDropController* value);

  static inline ::UnityEngine::UIElements::ListViewDragger* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method .ctor addr 0x2e09a34 size 0x4 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* listView);

  /// @brief Method CanStartDrag addr 0x2e09b74 size 0x23c virtual true final false
  inline bool CanStartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method StartDrag addr 0x2e0a148 size 0x1bc virtual true final false
  inline ::UnityEngine::UIElements::StartDragArgs* StartDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method UpdateDrag addr 0x2e0a304 size 0x6c virtual true final false
  inline ::UnityEngine::UIElements::DragVisualMode UpdateDrag(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method GetVisualMode addr 0x2e0a370 size 0x164 virtual false final false
  inline ::UnityEngine::UIElements::DragVisualMode GetVisualMode(::UnityEngine::Vector3 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  /// @brief Method OnDrop addr 0x2e0ae40 size 0x1e0 virtual true final false
  inline void OnDrop(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method HandleDragAndScroll addr 0x2e0aab4 size 0x23c virtual false final false
  inline void HandleDragAndScroll(::UnityEngine::Vector2 pointerPosition);

  /// @brief Method ApplyDragAndDropUI addr 0x2e0a4d4 size 0x5e0 virtual false final false
  inline void ApplyDragAndDropUI(::UnityEngine::UIElements::__ListViewDragger__DragPosition dragPosition);

  /// @brief Method TryGetDragPosition addr 0x2e0b2b8 size 0x340 virtual true final false
  inline bool TryGetDragPosition(::UnityEngine::Vector2 pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition> dragPosition);

  /// @brief Method MakeDragAndDropArgs addr 0x2e0acf0 size 0x150 virtual false final false
  inline ::UnityEngine::UIElements::ListDragAndDropArgs MakeDragAndDropArgs(::UnityEngine::UIElements::__ListViewDragger__DragPosition dragPosition);

  /// @brief Method PlaceHoverBarAtElement addr 0x2e0b1fc size 0xbc virtual false final false
  inline void PlaceHoverBarAtElement(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method PlaceHoverBarAt addr 0x2e0b078 size 0x184 virtual false final false
  inline void PlaceHoverBarAt(float_t top);

  /// @brief Method ClearDragAndDropUI addr 0x2e0b6d8 size 0x410 virtual true final false
  inline void ClearDragAndDropUI();

  /// @brief Method GetRecycledItem addr 0x2e09db0 size 0x398 virtual false final false
  inline ::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItem(::UnityEngine::Vector3 pointerPosition);

  /// @brief Method <ApplyDragAndDropUI>b__22_0 addr 0x2e0bae8 size 0x108 virtual false final false
  inline void _ApplyDragAndDropUI_b__22_0(::UnityEngine::UIElements::GeometryChangedEvent* e);

  // Ctor Parameters [CppParam { name: "", ty: "ListViewDragger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListViewDragger(ListViewDragger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListViewDragger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListViewDragger(ListViewDragger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListViewDragger();

public:
  /// @brief Field m_LastDragPosition, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::UIElements::__ListViewDragger__DragPosition ___m_LastDragPosition;

  /// @brief Field m_DragHoverBar, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragHoverBar;

  /// @brief Field <dragAndDropController>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::ICollectionDragAndDropController* ____dragAndDropController_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDragger, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDragger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDragger*, "UnityEngine.UIElements", "ListViewDragger");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListViewDragger__DragPosition, "UnityEngine.UIElements", "ListViewDragger/DragPosition");