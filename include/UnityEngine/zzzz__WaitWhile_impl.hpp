#pragma once
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitWhile_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitWhile.get_keepWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::WaitWhile::*)()>(&::UnityEngine::WaitWhile::get_keepWaiting)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cd361c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitWhile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::WaitWhile::*)(::System::Func_1<bool>*)>(&::UnityEngine::WaitWhile::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cd3640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& UnityEngine::WaitWhile::__get_m_Predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Predicate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& UnityEngine::WaitWhile::__get_m_Predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Predicate;
}
constexpr void UnityEngine::WaitWhile::__set_m_Predicate(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::WaitWhile::get_keepWaiting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(), "get_keepWaiting",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::WaitWhile* UnityEngine::WaitWhile::New_ctor(::System::Func_1<bool>* predicate) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::WaitWhile*>(predicate));
}
inline void UnityEngine::WaitWhile::_ctor(::System::Func_1<bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitWhile*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitWhile::WaitWhile() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif