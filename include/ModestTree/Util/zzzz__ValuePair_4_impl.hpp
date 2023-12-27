#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3, typename T4> constexpr T1& ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__get_First() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___First;
}
template <typename T1, typename T2, typename T3, typename T4> constexpr T1 const& ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__get_First() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___First;
}
template <typename T1, typename T2, typename T3, typename T4> constexpr void ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__set_First(T1 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___First)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3, typename T4> constexpr T2& ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__get_Second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Second;
}
template <typename T1, typename T2, typename T3, typename T4> constexpr T2 const& ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__get_Second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Second;
}
template <typename T1, typename T2, typename T3, typename T4> constexpr void ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__set_Second(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3, typename T4> constexpr T3& ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__get_Third() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Third;
}
template <typename T1, typename T2, typename T3, typename T4> constexpr T3 const& ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__get_Third() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Third;
}
template <typename T1, typename T2, typename T3, typename T4> constexpr void ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__set_Third(T3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Third)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3, typename T4> constexpr T4& ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__get_Fourth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Fourth;
}
template <typename T1, typename T2, typename T3, typename T4> constexpr T4 const& ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__get_Fourth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Fourth;
}
template <typename T1, typename T2, typename T3, typename T4> constexpr void ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::__set_Fourth(T4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Fourth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3, typename T4> inline ::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>());
}
template <typename T1, typename T2, typename T3, typename T4> inline void ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3, typename T4>
inline ::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::New_ctor(T1 first, T2 second, T3 third, T4 fourth) {
  return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>(first, second, third, fourth));
}
template <typename T1, typename T2, typename T3, typename T4> inline void ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::_ctor(T1 first, T2 second, T3 third, T4 fourth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, second, third, fourth);
}
template <typename T1, typename T2, typename T3, typename T4> inline bool ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3, typename T4> inline bool ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::Equals(::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* that) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, that);
}
template <typename T1, typename T2, typename T3, typename T4> inline int32_t ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>*>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename T4> constexpr ::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>::ValuePair_4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif