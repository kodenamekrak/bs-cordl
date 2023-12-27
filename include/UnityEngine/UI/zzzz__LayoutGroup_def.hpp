#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutGroup)
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class ILayoutGroup;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
class __LayoutGroup___DelayedSetDirty_d__56;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutGroup;
}
namespace UnityEngine::UI {
class __LayoutGroup___DelayedSetDirty_d__56;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::LayoutGroup);
MARK_REF_PTR_T(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56);
// Type: ::<DelayedSetDirty>d__56
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13090))
// CS Name: ::LayoutGroup::<DelayedSetDirty>d__56*
class CORDL_TYPE __LayoutGroup___DelayedSetDirty_d__56 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field rectTransform, offset 0x20, size 0x8
  __declspec(property(get = __get_rectTransform, put = __set_rectTransform))::UnityEngine::RectTransform* rectTransform;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::UnityEngine::RectTransform*& __get_rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_rectTransform() const;

  constexpr void __set_rectTransform(::UnityEngine::RectTransform* value);

  static inline ::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2d77dd8 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2d77e00 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2d77e04 size 0x88 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2d77e8c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2d77e94 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d77ed4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__LayoutGroup___DelayedSetDirty_d__56", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LayoutGroup___DelayedSetDirty_d__56(__LayoutGroup___DelayedSetDirty_d__56&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LayoutGroup___DelayedSetDirty_d__56", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LayoutGroup___DelayedSetDirty_d__56(__LayoutGroup___DelayedSetDirty_d__56 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LayoutGroup___DelayedSetDirty_d__56();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field rectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___rectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::LayoutGroup
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10278)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(13214)),
// TypeDefinitionIndex(TypeDefinitionIndex(15901))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13091)) CS Name: ::UnityEngine.UI::LayoutGroup*
class CORDL_TYPE LayoutGroup : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using _DelayedSetDirty_d__56 = ::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56;

  /// @brief Field m_Padding, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Padding, put = __set_m_Padding))::UnityEngine::RectOffset* m_Padding;

  /// @brief Field m_ChildAlignment, offset 0x20, size 0x4
  __declspec(property(get = __get_m_ChildAlignment, put = __set_m_ChildAlignment))::UnityEngine::TextAnchor m_ChildAlignment;

  /// @brief Field m_Rect, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Rect, put = __set_m_Rect))::UnityEngine::RectTransform* m_Rect;

  /// @brief Field m_Tracker, offset 0x30, size 0x1
  __declspec(property(get = __get_m_Tracker, put = __set_m_Tracker))::UnityEngine::DrivenRectTransformTracker m_Tracker;

  /// @brief Field m_TotalMinSize, offset 0x34, size 0x8
  __declspec(property(get = __get_m_TotalMinSize, put = __set_m_TotalMinSize))::UnityEngine::Vector2 m_TotalMinSize;

  /// @brief Field m_TotalPreferredSize, offset 0x3c, size 0x8
  __declspec(property(get = __get_m_TotalPreferredSize, put = __set_m_TotalPreferredSize))::UnityEngine::Vector2 m_TotalPreferredSize;

  /// @brief Field m_TotalFlexibleSize, offset 0x44, size 0x8
  __declspec(property(get = __get_m_TotalFlexibleSize, put = __set_m_TotalFlexibleSize))::UnityEngine::Vector2 m_TotalFlexibleSize;

  /// @brief Field m_RectChildren, offset 0x50, size 0x8
  __declspec(property(get = __get_m_RectChildren, put = __set_m_RectChildren))::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* m_RectChildren;

  __declspec(property(get = get_padding, put = set_padding))::UnityEngine::RectOffset* padding;

  __declspec(property(get = get_childAlignment, put = set_childAlignment))::UnityEngine::TextAnchor childAlignment;

  __declspec(property(get = get_rectTransform))::UnityEngine::RectTransform* rectTransform;

  __declspec(property(get = get_rectChildren))::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* rectChildren;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  __declspec(property(get = get_isRootLayoutGroup)) bool isRootLayoutGroup;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutGroup"
  constexpr operator ::UnityEngine::UI::ILayoutGroup*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  constexpr ::UnityEngine::RectOffset*& __get_m_Padding();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectOffset*> const& __get_m_Padding() const;

  constexpr void __set_m_Padding(::UnityEngine::RectOffset* value);

  constexpr ::UnityEngine::TextAnchor& __get_m_ChildAlignment();

  constexpr ::UnityEngine::TextAnchor const& __get_m_ChildAlignment() const;

  constexpr void __set_m_ChildAlignment(::UnityEngine::TextAnchor value);

  constexpr ::UnityEngine::RectTransform*& __get_m_Rect();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_Rect() const;

  constexpr void __set_m_Rect(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::DrivenRectTransformTracker& __get_m_Tracker();

  constexpr ::UnityEngine::DrivenRectTransformTracker const& __get_m_Tracker() const;

  constexpr void __set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value);

  constexpr ::UnityEngine::Vector2& __get_m_TotalMinSize();

  constexpr ::UnityEngine::Vector2 const& __get_m_TotalMinSize() const;

  constexpr void __set_m_TotalMinSize(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_TotalPreferredSize();

  constexpr ::UnityEngine::Vector2 const& __get_m_TotalPreferredSize() const;

  constexpr void __set_m_TotalPreferredSize(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_TotalFlexibleSize();

  constexpr ::UnityEngine::Vector2 const& __get_m_TotalFlexibleSize() const;

  constexpr void __set_m_TotalFlexibleSize(::UnityEngine::Vector2 value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*& __get_m_RectChildren();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*> const& __get_m_RectChildren() const;

  constexpr void __set_m_RectChildren(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* value);

  /// @brief Method get_padding addr 0x2d778e4 size 0x8 virtual false final false
  inline ::UnityEngine::RectOffset* get_padding();

  /// @brief Method set_padding addr 0x2d778ec size 0x5c virtual false final false
  inline void set_padding(::UnityEngine::RectOffset* value);

  /// @brief Method get_childAlignment addr 0x2d77948 size 0x8 virtual false final false
  inline ::UnityEngine::TextAnchor get_childAlignment();

  /// @brief Method set_childAlignment addr 0x2d77950 size 0x5c virtual false final false
  inline void set_childAlignment(::UnityEngine::TextAnchor value);

  /// @brief Method get_rectTransform addr 0x2d75730 size 0x94 virtual false final false
  inline ::UnityEngine::RectTransform* get_rectTransform();

  /// @brief Method get_rectChildren addr 0x2d779ac size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* get_rectChildren();

  /// @brief Method CalculateLayoutInputHorizontal addr 0x2d750c8 size 0x3bc virtual true final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method get_minWidth addr 0x2d779b4 size 0x8 virtual true final false
  inline float_t get_minWidth();

  /// @brief Method get_preferredWidth addr 0x2d779bc size 0x8 virtual true final false
  inline float_t get_preferredWidth();

  /// @brief Method get_flexibleWidth addr 0x2d779c4 size 0x8 virtual true final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_minHeight addr 0x2d779cc size 0x8 virtual true final false
  inline float_t get_minHeight();

  /// @brief Method get_preferredHeight addr 0x2d779d4 size 0x8 virtual true final false
  inline float_t get_preferredHeight();

  /// @brief Method get_flexibleHeight addr 0x2d779dc size 0x8 virtual true final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_layoutPriority addr 0x2d779e4 size 0x8 virtual true final false
  inline int32_t get_layoutPriority();

  /// @brief Method SetLayoutHorizontal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetLayoutHorizontal();

  /// @brief Method SetLayoutVertical addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetLayoutVertical();

  static inline ::UnityEngine::UI::LayoutGroup* New_ctor();

  /// @brief Method .ctor addr 0x2d74dd0 size 0x12c virtual false final false
  inline void _ctor();

  /// @brief Method OnEnable addr 0x2d779ec size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2d77adc size 0x7c virtual true final false
  inline void OnDisable();

  /// @brief Method OnDidApplyAnimationProperties addr 0x2d77b58 size 0x4 virtual true final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method GetTotalMinSize addr 0x2d7735c size 0x74 virtual false final false
  inline float_t GetTotalMinSize(int32_t axis);

  /// @brief Method GetTotalPreferredSize addr 0x2d77274 size 0x74 virtual false final false
  inline float_t GetTotalPreferredSize(int32_t axis);

  /// @brief Method GetTotalFlexibleSize addr 0x2d772e8 size 0x74 virtual false final false
  inline float_t GetTotalFlexibleSize(int32_t axis);

  /// @brief Method GetStartOffset addr 0x2d75dac size 0x164 virtual false final false
  inline float_t GetStartOffset(int32_t axis, float_t requiredSpaceWithoutPadding);

  /// @brief Method GetAlignmentOnAxis addr 0x2d76d64 size 0x4c virtual false final false
  inline float_t GetAlignmentOnAxis(int32_t axis);

  /// @brief Method SetLayoutInputForAxis addr 0x2d75484 size 0x84 virtual false final false
  inline void SetLayoutInputForAxis(float_t totalMin, float_t totalPreferred, float_t totalFlexible, int32_t axis);

  /// @brief Method SetChildAlongAxis addr 0x2d77b5c size 0xa8 virtual false final false
  inline void SetChildAlongAxis(::UnityEngine::RectTransform* rect, int32_t axis, float_t pos);

  /// @brief Method SetChildAlongAxisWithScale addr 0x2d77034 size 0x240 virtual false final false
  inline void SetChildAlongAxisWithScale(::UnityEngine::RectTransform* rect, int32_t axis, float_t pos, float_t scaleFactor);

  /// @brief Method SetChildAlongAxis addr 0x2d75f10 size 0xb0 virtual false final false
  inline void SetChildAlongAxis(::UnityEngine::RectTransform* rect, int32_t axis, float_t pos, float_t size);

  /// @brief Method SetChildAlongAxisWithScale addr 0x2d76db0 size 0x284 virtual false final false
  inline void SetChildAlongAxisWithScale(::UnityEngine::RectTransform* rect, int32_t axis, float_t pos, float_t size, float_t scaleFactor);

  /// @brief Method get_isRootLayoutGroup addr 0x2d77c04 size 0x138 virtual false final false
  inline bool get_isRootLayoutGroup();

  /// @brief Method OnRectTransformDimensionsChange addr 0x2d77d3c size 0x30 virtual true final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformChildrenChanged addr 0x2d77d6c size 0x4 virtual true final false
  inline void OnTransformChildrenChanged();

  /// @brief Method SetProperty addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetProperty(ByRef<T> currentValue, T newValue);

  /// @brief Method SetDirty addr 0x2d77a08 size 0xd4 virtual false final false
  inline void SetDirty();

  /// @brief Method DelayedSetDirty addr 0x2d77d70 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* DelayedSetDirty(::UnityEngine::RectTransform* rectTransform);

  // Ctor Parameters [CppParam { name: "", ty: "LayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutGroup(LayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutGroup(LayoutGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutGroup();

public:
  /// @brief Field m_Padding, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RectOffset* ___m_Padding;

  /// @brief Field m_ChildAlignment, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::TextAnchor ___m_ChildAlignment;

  /// @brief Field m_Rect, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_Rect;

  /// @brief Field m_Tracker, offset: 0x30, size: 0x1, def value: None
  ::UnityEngine::DrivenRectTransformTracker ___m_Tracker;

  /// @brief Field m_TotalMinSize, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_TotalMinSize;

  /// @brief Field m_TotalPreferredSize, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_TotalPreferredSize;

  /// @brief Field m_TotalFlexibleSize, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_TotalFlexibleSize;

  /// @brief Field m_RectChildren, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* ___m_RectChildren;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::LayoutGroup, 0x58>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::LayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::LayoutGroup*, "UnityEngine.UI", "LayoutGroup");
NEED_NO_BOX(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__LayoutGroup___DelayedSetDirty_d__56*, "UnityEngine.UI", "LayoutGroup/<DelayedSetDirty>d__56");