#pragma once
// IWYU pragma private; include "ModestTree/Util/ValuePair_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2> constexpr T1& ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_get_First() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2> constexpr T1 const& ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_get_First() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2> constexpr void ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_set_First(T1 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___First, value);
}
template <typename T1, typename T2> constexpr T2& ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_get_Second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2> constexpr T2 const& ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_get_Second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2> constexpr void ModestTree::Util::ValuePair_2<T1, T2>::__cordl_internal_set_Second(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Second, value);
}
template <typename T1, typename T2> inline void ModestTree::Util::ValuePair_2<T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1, T2>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline void ModestTree::Util::ValuePair_2<T1, T2>::_ctor(T1 first, T2 second) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1, T2>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, second);
}
template <typename T1, typename T2> inline bool ModestTree::Util::ValuePair_2<T1, T2>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1, T2>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2> inline bool ModestTree::Util::ValuePair_2<T1, T2>::Equals(::ModestTree::Util::ValuePair_2<T1, T2>* that) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1, T2>*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_2<T1, T2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, that);
}
template <typename T1, typename T2> inline int32_t ModestTree::Util::ValuePair_2<T1, T2>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_2<T1, T2>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::ModestTree::Util::ValuePair_2<T1, T2>* ModestTree::Util::ValuePair_2<T1, T2>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ModestTree::Util::ValuePair_2<T1, T2>*>());
}
template <typename T1, typename T2> inline ::ModestTree::Util::ValuePair_2<T1, T2>* ModestTree::Util::ValuePair_2<T1, T2>::New_ctor(T1 first, T2 second) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ModestTree::Util::ValuePair_2<T1, T2>*>(first, second));
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::ModestTree::Util::ValuePair_2<T1, T2>::ValuePair_2() {}
