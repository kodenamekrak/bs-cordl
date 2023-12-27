#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OneTimeLightColorEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OneTimeLightColorEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OneTimeLightColorEffect::*)()>(&::GlobalNamespace::OneTimeLightColorEffect::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x239b084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OneTimeLightColorEffect*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OneTimeLightColorEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OneTimeLightColorEffect::*)()>(&::GlobalNamespace::OneTimeLightColorEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x239b0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OneTimeLightColorEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::OneTimeLightColorEffect::__get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::OneTimeLightColorEffect::__get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::OneTimeLightColorEffect::__set__color(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____color)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OneTimeLightColorEffect::__get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alpha;
}
constexpr float_t const& GlobalNamespace::OneTimeLightColorEffect::__get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alpha;
}
constexpr void GlobalNamespace::OneTimeLightColorEffect::__set__alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____alpha = value;
}
constexpr int32_t& GlobalNamespace::OneTimeLightColorEffect::__get__lightsId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightsId;
}
constexpr int32_t const& GlobalNamespace::OneTimeLightColorEffect::__get__lightsId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightsId;
}
constexpr void GlobalNamespace::OneTimeLightColorEffect::__set__lightsId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lightsId = value;
}
constexpr ::GlobalNamespace::LightWithIdManager*& GlobalNamespace::OneTimeLightColorEffect::__get__lightWithIdManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightWithIdManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> const& GlobalNamespace::OneTimeLightColorEffect::__get__lightWithIdManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightWithIdManager;
}
constexpr void GlobalNamespace::OneTimeLightColorEffect::__set__lightWithIdManager(::GlobalNamespace::LightWithIdManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightWithIdManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OneTimeLightColorEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OneTimeLightColorEffect*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OneTimeLightColorEffect* GlobalNamespace::OneTimeLightColorEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OneTimeLightColorEffect*>());
}
inline void GlobalNamespace::OneTimeLightColorEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OneTimeLightColorEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OneTimeLightColorEffect::OneTimeLightColorEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif