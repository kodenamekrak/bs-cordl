#pragma once
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
template <typename T> inline T System::Threading::AsyncLocalValueChangedArgs_1<T>::get_CurrentValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocalValueChangedArgs_1<T>>::get(),
                                                                             "get_CurrentValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void System::Threading::AsyncLocalValueChangedArgs_1<T>::_ctor(T previousValue, T currentValue, bool contextChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocalValueChangedArgs_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previousValue, currentValue, contextChanged);
}
// Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Threading::AsyncLocalValueChangedArgs_1<T>::AsyncLocalValueChangedArgs_1(T _PreviousValue_k__BackingField, T _CurrentValue_k__BackingField,
                                                                                             bool _ThreadContextChanged_k__BackingField) noexcept {
  this->_PreviousValue_k__BackingField = _PreviousValue_k__BackingField;
  this->_CurrentValue_k__BackingField = _CurrentValue_k__BackingField;
  this->_ThreadContextChanged_k__BackingField = _ThreadContextChanged_k__BackingField;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Threading::AsyncLocalValueChangedArgs_1<T>::AsyncLocalValueChangedArgs_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif