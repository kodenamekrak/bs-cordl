#pragma once
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr System::WeakReference_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Runtime::InteropServices::GCHandle& System::WeakReference_1<T>::__get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handle;
}
template <typename T> constexpr ::System::Runtime::InteropServices::GCHandle const& System::WeakReference_1<T>::__get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handle;
}
template <typename T> constexpr void System::WeakReference_1<T>::__set_handle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___handle = value;
}
template <typename T> constexpr bool& System::WeakReference_1<T>::__get_trackResurrection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___trackResurrection;
}
template <typename T> constexpr bool const& System::WeakReference_1<T>::__get_trackResurrection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___trackResurrection;
}
template <typename T> constexpr void System::WeakReference_1<T>::__set_trackResurrection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___trackResurrection = value;
}
template <typename T> inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(T target) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::WeakReference_1<T>*>(target));
}
template <typename T> inline void System::WeakReference_1<T>::_ctor(T target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
template <typename T> inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(T target, bool trackResurrection) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::WeakReference_1<T>*>(target, trackResurrection));
}
template <typename T> inline void System::WeakReference_1<T>::_ctor(T target, bool trackResurrection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, trackResurrection);
}
template <typename T>
inline ::System::WeakReference_1<T>* System::WeakReference_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::WeakReference_1<T>*>(info, context));
}
template <typename T> inline void System::WeakReference_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T> inline void System::WeakReference_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T> inline void System::WeakReference_1<T>::SetTarget(T target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(), "SetTarget", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
template <typename T> inline bool System::WeakReference_1<T>::TryGetTarget(ByRef<T> target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(), "TryGetTarget", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target);
}
template <typename T> inline void System::WeakReference_1<T>::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::WeakReference_1<T>*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::WeakReference_1<T>::WeakReference_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif