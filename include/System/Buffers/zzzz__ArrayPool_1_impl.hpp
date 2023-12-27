#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__ArrayPool_1_def.hpp"
template <typename T> inline void System::Buffers::ArrayPool_1<T>::setStaticF__Shared_k__BackingField(::System::Buffers::ArrayPool_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Buffers::ArrayPool_1<T>*, "<Shared>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPool_1<T>*>::get>(
      std::forward<::System::Buffers::ArrayPool_1<T>*>(value));
}
template <typename T> inline ::System::Buffers::ArrayPool_1<T>* System::Buffers::ArrayPool_1<T>::getStaticF__Shared_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Buffers::ArrayPool_1<T>*, "<Shared>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPool_1<T>*>::get>();
}
template <typename T> inline ::System::Buffers::ArrayPool_1<T>* System::Buffers::ArrayPool_1<T>::get_Shared() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPool_1<T>*>::get(), "get_Shared",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Buffers::ArrayPool_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Buffers::ArrayPool_1<T>::Rent(int32_t minimumLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPool_1<T>*>::get(), "Rent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, minimumLength);
}
/// @param clearArray: bool (default: false)
template <typename T> inline void System::Buffers::ArrayPool_1<T>::Return(::ArrayW<T, ::Array<T>*> array, bool clearArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPool_1<T>*>::get(), "Return", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, clearArray);
}
template <typename T> inline ::System::Buffers::ArrayPool_1<T>* System::Buffers::ArrayPool_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::ArrayPool_1<T>*>());
}
template <typename T> inline void System::Buffers::ArrayPool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPool_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Buffers::ArrayPool_1<T>::ArrayPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif