#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncComputeOperation_1.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& GlobalNamespace::AsyncComputeOperation_1<T>::__cordl_internal_get__tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tcs;
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& GlobalNamespace::AsyncComputeOperation_1<T>::__cordl_internal_get__tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tcs;
}
template <typename T> constexpr void GlobalNamespace::AsyncComputeOperation_1<T>::__cordl_internal_set__tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____tcs, value);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::AsyncComputeOperation_1<T>::get_task() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(), "get_task",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::_ctor(int32_t timeoutMs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeoutMs);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Execute(bool disposed) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposed);
}
template <typename T> inline bool GlobalNamespace::AsyncComputeOperation_1<T>::IsValidRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(),
                                                                             "IsValidRequest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Complete(T computeResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(), "Complete",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computeResult);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(), "Cancel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Fail(::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(), "Fail", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
template <typename T> inline T GlobalNamespace::AsyncComputeOperation_1<T>::Compute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Finally() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::AsyncComputeOperation_1<T>* GlobalNamespace::AsyncComputeOperation_1<T>::New_ctor(int32_t timeoutMs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AsyncComputeOperation_1<T>*>(timeoutMs));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::AsyncComputeOperation_1<T>::AsyncComputeOperation_1() {}
