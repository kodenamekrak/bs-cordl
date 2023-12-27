#pragma once
#include "UnityEngine/zzzz__GUILayoutEntry_impl.hpp"
#include "UnityEngine/zzzz__GUIWordWrapSizer_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIWordWrapSizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUIWordWrapSizer::*)(
    ::UnityEngine::GUIStyle*, ::UnityEngine::GUIContent*, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>)>(&::UnityEngine::GUIWordWrapSizer::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2cfc00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIWordWrapSizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIWordWrapSizer.CalcWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUIWordWrapSizer::*)()>(&::UnityEngine::GUIWordWrapSizer::CalcWidth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2cfc16c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIWordWrapSizer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIWordWrapSizer*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIWordWrapSizer.CalcHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUIWordWrapSizer::*)()>(&::UnityEngine::GUIWordWrapSizer::CalcHeight)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cfc1f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIWordWrapSizer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIWordWrapSizer*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GUIContent*& UnityEngine::GUIWordWrapSizer::__get_m_Content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Content;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIContent*> const& UnityEngine::GUIWordWrapSizer::__get_m_Content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Content;
}
constexpr void UnityEngine::GUIWordWrapSizer::__set_m_Content(::UnityEngine::GUIContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::GUIWordWrapSizer::__get_m_ForcedMinHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ForcedMinHeight;
}
constexpr float_t const& UnityEngine::GUIWordWrapSizer::__get_m_ForcedMinHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ForcedMinHeight;
}
constexpr void UnityEngine::GUIWordWrapSizer::__set_m_ForcedMinHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ForcedMinHeight = value;
}
constexpr float_t& UnityEngine::GUIWordWrapSizer::__get_m_ForcedMaxHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ForcedMaxHeight;
}
constexpr float_t const& UnityEngine::GUIWordWrapSizer::__get_m_ForcedMaxHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ForcedMaxHeight;
}
constexpr void UnityEngine::GUIWordWrapSizer::__set_m_ForcedMaxHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ForcedMaxHeight = value;
}
inline ::UnityEngine::GUIWordWrapSizer* UnityEngine::GUIWordWrapSizer::New_ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content,
                                                                                ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::GUIWordWrapSizer*>(style, content, options));
}
inline void UnityEngine::GUIWordWrapSizer::_ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content,
                                                 ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIWordWrapSizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIContent*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, style, content, options);
}
inline void UnityEngine::GUIWordWrapSizer::CalcWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIWordWrapSizer*>::get(), "CalcWidth",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::GUIWordWrapSizer::CalcHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUIWordWrapSizer*>::get(), "CalcHeight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIWordWrapSizer::GUIWordWrapSizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif