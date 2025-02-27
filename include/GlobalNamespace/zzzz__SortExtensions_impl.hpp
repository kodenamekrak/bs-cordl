#pragma once
// IWYU pragma private; include "GlobalNamespace/SortExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SortExtensions_def.hpp"
#include "GlobalNamespace/zzzz__SortExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename T> constexpr ::System::Func_2<T, int32_t>*& GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::__cordl_internal_get_getSortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSortIndex;
}
template <typename T> constexpr ::System::Func_2<T, int32_t>* const& GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::__cordl_internal_get_getSortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSortIndex;
}
template <typename T> constexpr void GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::__cordl_internal_set_getSortIndex(::System::Func_2<T, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___getSortIndex, value);
}
template <typename T> inline void GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int32_t GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::_Sort_b__0(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>*>::get(), "<Sort>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
template <typename T> inline ::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>* GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SortExtensions___c__DisplayClass1_0_1<T>::SortExtensions___c__DisplayClass1_0_1() {}
template <typename T> inline void GlobalNamespace::SortExtensions::InsertSorted(::System::Collections::Generic::List_1<T>* list, T item, ::System::Func_2<T, int32_t>* getSortIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortExtensions*>::get(), "InsertSorted",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, int32_t>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, item, getSortIndex);
}
template <typename T> inline void GlobalNamespace::SortExtensions::Sort(::System::Collections::Generic::List_1<T>* list, ::System::Func_2<T, int32_t>* getSortIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortExtensions*>::get(), "Sort",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, int32_t>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, getSortIndex);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SortExtensions::SortExtensions() {}
