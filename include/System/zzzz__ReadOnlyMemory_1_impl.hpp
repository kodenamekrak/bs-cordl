#pragma once
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>"
template <typename T> constexpr System::ReadOnlyMemory_1<T>::operator ::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>*() {
  return static_cast<::System::IEquatable_1<::System::ReadOnlyMemory_1<T>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void System::ReadOnlyMemory_1<T>::_ctor(::ArrayW<T, ::Array<T>*> array) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
template <typename T> inline void System::ReadOnlyMemory_1<T>::_ctor(::ArrayW<T, ::Array<T>*> array, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, start, length);
}
template <typename T> inline void System::ReadOnlyMemory_1<T>::_ctor(::System::Object* obj, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, start, length);
}
template <typename T> inline int32_t System::ReadOnlyMemory_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "get_Length",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::StringW System::ReadOnlyMemory_1<T>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::System::ReadOnlyMemory_1<T> System::ReadOnlyMemory_1<T>::Slice(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "Slice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlyMemory_1<T>, false>(this, ___internal_method, start);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> System::ReadOnlyMemory_1<T>::get_Span() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "get_Span",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>, false>(this, ___internal_method);
}
template <typename T> inline bool System::ReadOnlyMemory_1<T>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline bool System::ReadOnlyMemory_1<T>::Equals(::System::ReadOnlyMemory_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t System::ReadOnlyMemory_1<T>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::ReadOnlyMemory_1<T>::CombineHashCodes(int32_t left, int32_t right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "CombineHashCodes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, left, right);
}
template <typename T> inline int32_t System::ReadOnlyMemory_1<T>::CombineHashCodes(int32_t h1, int32_t h2, int32_t h3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "CombineHashCodes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, h1, h2, h3);
}
template <typename T> inline ::System::Object* System::ReadOnlyMemory_1<T>::GetObjectStartLength(ByRef<int32_t> start, ByRef<int32_t> length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ReadOnlyMemory_1<T>>::get(), "GetObjectStartLength", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, start, length);
}
// Ctor Parameters [CppParam { name: "_object", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::ReadOnlyMemory_1<T>::ReadOnlyMemory_1(::System::Object* _object, int32_t _index, int32_t _length) noexcept {
  this->_object = _object;
  this->_index = _index;
  this->_length = _length;
}
// Ctor Parameters []
template <typename T> constexpr ::System::ReadOnlyMemory_1<T>::ReadOnlyMemory_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif