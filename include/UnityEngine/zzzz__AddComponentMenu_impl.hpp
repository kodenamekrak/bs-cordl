#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__AddComponentMenu_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddComponentMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddComponentMenu::*)(::StringW)>(&::UnityEngine::AddComponentMenu::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2cd27c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddComponentMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddComponentMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddComponentMenu::*)(::StringW, int32_t)>(&::UnityEngine::AddComponentMenu::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cd27ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddComponentMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddComponentMenu::__get_m_AddComponentMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AddComponentMenu;
}
constexpr ::StringW const& UnityEngine::AddComponentMenu::__get_m_AddComponentMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AddComponentMenu;
}
constexpr void UnityEngine::AddComponentMenu::__set_m_AddComponentMenu(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AddComponentMenu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::AddComponentMenu::__get_m_Ordering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Ordering;
}
constexpr int32_t const& UnityEngine::AddComponentMenu::__get_m_Ordering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Ordering;
}
constexpr void UnityEngine::AddComponentMenu::__set_m_Ordering(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Ordering = value;
}
inline ::UnityEngine::AddComponentMenu* UnityEngine::AddComponentMenu::New_ctor(::StringW menuName) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AddComponentMenu*>(menuName));
}
inline void UnityEngine::AddComponentMenu::_ctor(::StringW menuName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddComponentMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuName);
}
inline ::UnityEngine::AddComponentMenu* UnityEngine::AddComponentMenu::New_ctor(::StringW menuName, int32_t order) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AddComponentMenu*>(menuName, order));
}
inline void UnityEngine::AddComponentMenu::_ctor(::StringW menuName, int32_t order) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddComponentMenu*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuName, order);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddComponentMenu::AddComponentMenu() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif