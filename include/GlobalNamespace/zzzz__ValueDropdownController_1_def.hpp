#pragma once
// IWYU pragma private; include "GlobalNamespace/ValueDropdownController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueDropdownController_1)
namespace GlobalNamespace {
template <typename T> class __ValueDropdownController_1____c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ValueDropdownController_1;
}
namespace GlobalNamespace {
template <typename T> class __ValueDropdownController_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ValueDropdownController_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ValueDropdownController_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ValueDropdownController`1::<>c<T>*
class CORDL_TYPE __ValueDropdownController_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__ValueDropdownController_1____c<T>* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* __9__9_0;

  static inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* New_ctor();

  /// @brief Method <Start>b__9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW _Start_b__9_0(::System::Tuple_2<T, ::StringW>* x);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* getStaticF___9();

  static inline ::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* getStaticF___9__9_0();

  static inline void setStaticF___9(::GlobalNamespace::__ValueDropdownController_1____c<T>* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueDropdownController_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueDropdownController_1____c(__ValueDropdownController_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueDropdownController_1____c(__ValueDropdownController_1____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ValueDropdownController`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ValueDropdownController`1<T>*
class CORDL_TYPE ValueDropdownController_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ValueDropdownController_1____c<T>;

  /// @brief Field _namedValues, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__namedValues,
                      put = __cordl_internal_set__namedValues)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* _namedValues;

  /// @brief Field _simpleTextDropdown, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleTextDropdown, put = __cordl_internal_set__simpleTextDropdown)) ::UnityW<::HMUI::SimpleTextDropdown> _simpleTextDropdown;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellWithIdxEvent, put = __cordl_internal_set_didSelectCellWithIdxEvent)) ::System::Action_2<int32_t, T>* didSelectCellWithIdxEvent;

  __declspec(property(get = get_innerDropdown)) ::UnityW<::HMUI::SimpleTextDropdown> innerDropdown;

  __declspec(property(get = get_namedValues)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* namedValues;

  /// @brief Method GetIdxForValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIdxForValue(T value);

  /// @brief Method GetNamedValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* GetNamedValues();

  /// @brief Method GetSelectedItemValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetSelectedItemValue();

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  static inline ::GlobalNamespace::ValueDropdownController_1<T>* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SelectCellWithValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SelectCellWithValue(T value);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*& __cordl_internal_get__namedValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*> const& __cordl_internal_get__namedValues() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__simpleTextDropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__simpleTextDropdown();

  constexpr ::System::Action_2<int32_t, T>*& __cordl_internal_get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, T>*> const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

  constexpr void __cordl_internal_set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* value);

  constexpr void __cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value);

  /// @brief Method get_innerDropdown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::SimpleTextDropdown> get_innerDropdown();

  /// @brief Method get_namedValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* get_namedValues();

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueDropdownController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueDropdownController_1(ValueDropdownController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueDropdownController_1(ValueDropdownController_1 const&) = delete;

  /// @brief Field _simpleTextDropdown, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____simpleTextDropdown;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<int32_t, T>* ___didSelectCellWithIdxEvent;

  /// @brief Field _namedValues, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* ____namedValues;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ValueDropdownController_1, "", "ValueDropdownController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ValueDropdownController_1____c, "", "ValueDropdownController`1/<>c");
