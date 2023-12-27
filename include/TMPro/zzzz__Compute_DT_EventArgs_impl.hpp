#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_impl.hpp"
#include "TMPro/zzzz__Compute_DT_EventArgs_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_def.hpp"
//  Writing Method size for method: ::TMPro::Compute_DT_EventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::Compute_DT_EventArgs::*)(::TMPro::Compute_DistanceTransform_EventTypes, float_t)>(
    &::TMPro::Compute_DT_EventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bff3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Compute_DT_EventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::Compute_DistanceTransform_EventTypes>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::Compute_DT_EventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::Compute_DT_EventArgs::*)(
    ::TMPro::Compute_DistanceTransform_EventTypes, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(&::TMPro::Compute_DT_EventArgs::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bff428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Compute_DT_EventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::Compute_DistanceTransform_EventTypes>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::TMPro::Compute_DistanceTransform_EventTypes& TMPro::Compute_DT_EventArgs::__get_EventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___EventType;
}
constexpr ::TMPro::Compute_DistanceTransform_EventTypes const& TMPro::Compute_DT_EventArgs::__get_EventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___EventType;
}
constexpr void TMPro::Compute_DT_EventArgs::__set_EventType(::TMPro::Compute_DistanceTransform_EventTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___EventType = value;
}
constexpr float_t& TMPro::Compute_DT_EventArgs::__get_ProgressPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ProgressPercentage;
}
constexpr float_t const& TMPro::Compute_DT_EventArgs::__get_ProgressPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ProgressPercentage;
}
constexpr void TMPro::Compute_DT_EventArgs::__set_ProgressPercentage(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ProgressPercentage = value;
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& TMPro::Compute_DT_EventArgs::__get_Colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Colors;
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& TMPro::Compute_DT_EventArgs::__get_Colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Colors;
}
constexpr void TMPro::Compute_DT_EventArgs::__set_Colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TMPro::Compute_DT_EventArgs* TMPro::Compute_DT_EventArgs::New_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress) {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::Compute_DT_EventArgs*>(type, progress));
}
inline void TMPro::Compute_DT_EventArgs::_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Compute_DT_EventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::Compute_DistanceTransform_EventTypes>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, progress);
}
inline ::TMPro::Compute_DT_EventArgs* TMPro::Compute_DT_EventArgs::New_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors) {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::Compute_DT_EventArgs*>(type, colors));
}
inline void TMPro::Compute_DT_EventArgs::_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Compute_DT_EventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::Compute_DistanceTransform_EventTypes>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, colors);
}
// Ctor Parameters []
constexpr ::TMPro::Compute_DT_EventArgs::Compute_DT_EventArgs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif