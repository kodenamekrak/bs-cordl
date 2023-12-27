#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawParams_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::DrawParams.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::DrawParams::*)()>(&::UnityEngine::UIElements::UIR::DrawParams::Reset)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2dd3870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::DrawParams*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::DrawParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::DrawParams::*)()>(&::UnityEngine::UIElements::UIR::DrawParams::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2dce574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::DrawParams*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*& UnityEngine::UIElements::UIR::DrawParams::__get_view() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___view;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*> const& UnityEngine::UIElements::UIR::DrawParams::__get_view() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___view;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__set_view(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___view)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*& UnityEngine::UIElements::UIR::DrawParams::__get_scissor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scissor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*> const& UnityEngine::UIElements::UIR::DrawParams::__get_scissor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scissor;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__set_scissor(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scissor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>*& UnityEngine::UIElements::UIR::DrawParams::__get_renderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___renderTexture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>*> const& UnityEngine::UIElements::UIR::DrawParams::__get_renderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___renderTexture;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__set_renderTexture(::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& UnityEngine::UIElements::UIR::DrawParams::__get_defaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Material*>*> const& UnityEngine::UIElements::UIR::DrawParams::__get_defaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultMaterial;
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__set_defaultMaterial(::System::Collections::Generic::List_1<::UnityEngine::Material*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UIR::DrawParams::setStaticF_k_UnlimitedRect(::UnityEngine::Rect value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rect, "k_UnlimitedRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::DrawParams*>::get>(
      std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::DrawParams::getStaticF_k_UnlimitedRect() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rect, "k_UnlimitedRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::DrawParams*>::get>();
}
inline void UnityEngine::UIElements::UIR::DrawParams::setStaticF_k_FullNormalizedRect(::UnityEngine::Rect value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rect, "k_FullNormalizedRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::DrawParams*>::get>(
      std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::DrawParams::getStaticF_k_FullNormalizedRect() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rect, "k_FullNormalizedRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::DrawParams*>::get>();
}
inline void UnityEngine::UIElements::UIR::DrawParams::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::DrawParams*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::DrawParams* UnityEngine::UIElements::UIR::DrawParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::DrawParams*>());
}
inline void UnityEngine::UIElements::UIR::DrawParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::DrawParams*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::DrawParams::DrawParams() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif