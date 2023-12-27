#pragma once
#include "GlobalNamespace/zzzz__CuttableBySaber_impl.hpp"
#include "GlobalNamespace/zzzz__SphereCuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SphereCuttableBySaber.get_radius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SphereCuttableBySaber::*)()>(&::GlobalNamespace::SphereCuttableBySaber::get_radius)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2264c94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCuttableBySaber.set_canBeCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SphereCuttableBySaber::*)(bool)>(&::GlobalNamespace::SphereCuttableBySaber::set_canBeCut)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2264cb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCuttableBySaber.get_canBeCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SphereCuttableBySaber::*)()>(&::GlobalNamespace::SphereCuttableBySaber::get_canBeCut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264ce8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCuttableBySaber.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SphereCuttableBySaber::*)()>(&::GlobalNamespace::SphereCuttableBySaber::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2264cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCuttableBySaber.Cut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SphereCuttableBySaber::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::SphereCuttableBySaber::Cut)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2264d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SphereCuttableBySaber._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SphereCuttableBySaber::*)()>(&::GlobalNamespace::SphereCuttableBySaber::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SphereCollider*& GlobalNamespace::SphereCuttableBySaber::__get__collider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____collider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SphereCollider*> const& GlobalNamespace::SphereCuttableBySaber::__get__collider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____collider;
}
constexpr void GlobalNamespace::SphereCuttableBySaber::__set__collider(::UnityEngine::SphereCollider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SphereCuttableBySaber::__get__canBeCut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____canBeCut;
}
constexpr bool const& GlobalNamespace::SphereCuttableBySaber::__get__canBeCut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____canBeCut;
}
constexpr void GlobalNamespace::SphereCuttableBySaber::__set__canBeCut(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____canBeCut = value;
}
inline float_t GlobalNamespace::SphereCuttableBySaber::get_radius() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), "get_radius",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SphereCuttableBySaber::set_canBeCut(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), "set_canBeCut", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::SphereCuttableBySaber::get_canBeCut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), "get_canBeCut",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::SphereCuttableBySaber::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SphereCuttableBySaber::Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), "Cut", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline ::GlobalNamespace::SphereCuttableBySaber* GlobalNamespace::SphereCuttableBySaber::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SphereCuttableBySaber*>());
}
inline void GlobalNamespace::SphereCuttableBySaber::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SphereCuttableBySaber*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SphereCuttableBySaber::SphereCuttableBySaber() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif