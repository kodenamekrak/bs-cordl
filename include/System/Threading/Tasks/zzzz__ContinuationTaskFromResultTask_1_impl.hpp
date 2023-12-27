#pragma once
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationTaskFromResultTask_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
template <typename TAntecedentResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>*& System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__get_m_antecedent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> const&
System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__get_m_antecedent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_antecedent;
}
template <typename TAntecedentResult>
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_antecedent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TAntecedentResult>
inline ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*
System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action,
                                                                                        ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                        ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>(antecedent, action, state, creationOptions, internalOptions));
}
template <typename TAntecedentResult>
inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, ::System::Delegate* action,
                                                                                                 ::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions,
                                                                                                 ::System::Threading::Tasks::InternalTaskOptions internalOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
template <typename TAntecedentResult> inline void System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::InnerInvoke() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>*>::get(),
                                               "InnerInvoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TAntecedentResult> constexpr ::System::Threading::Tasks::ContinuationTaskFromResultTask_1<TAntecedentResult>::ContinuationTaskFromResultTask_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif