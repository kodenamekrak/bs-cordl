#pragma once
#include "GlobalNamespace/zzzz__FlyingObjectEffect_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteEffect.InitAndPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteEffect::*)(
    float_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::Color, bool)>(
    &::GlobalNamespace::FlyingSpriteEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2398fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteEffect*>::get(), "InitAndPresent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteEffect.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteEffect::*)(float_t)>(&::GlobalNamespace::FlyingSpriteEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x239908c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteEffect::*)()>(&::GlobalNamespace::FlyingSpriteEffect::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23990e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SpriteRenderer*& GlobalNamespace::FlyingSpriteEffect::__get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spriteRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& GlobalNamespace::FlyingSpriteEffect::__get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spriteRenderer;
}
constexpr void GlobalNamespace::FlyingSpriteEffect::__set__spriteRenderer(::UnityEngine::SpriteRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FlyingSpriteEffect::__get__fadeAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fadeAnimationCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::FlyingSpriteEffect::__get__fadeAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fadeAnimationCurve;
}
constexpr void GlobalNamespace::FlyingSpriteEffect::__set__fadeAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeAnimationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingSpriteEffect::__get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingSpriteEffect::__get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::FlyingSpriteEffect::__set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____color = value;
}
inline void GlobalNamespace::FlyingSpriteEffect::InitAndPresent(float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Sprite* sprite,
                                                                ::UnityEngine::Material* material, ::UnityEngine::Color color, bool shake) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteEffect*>::get(), "InitAndPresent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, duration, targetPos, rotation, sprite, material, color, shake);
}
inline void GlobalNamespace::FlyingSpriteEffect::ManualUpdate(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteEffect*>::get(), "ManualUpdate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::GlobalNamespace::FlyingSpriteEffect* GlobalNamespace::FlyingSpriteEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingSpriteEffect*>());
}
inline void GlobalNamespace::FlyingSpriteEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingSpriteEffect::FlyingSpriteEffect() {}
//  Writing Method size for method: ::GlobalNamespace::__FlyingSpriteEffect__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlyingSpriteEffect__Pool::*)()>(&::GlobalNamespace::__FlyingSpriteEffect__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2399118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingSpriteEffect__Pool*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__FlyingSpriteEffect__Pool* GlobalNamespace::__FlyingSpriteEffect__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FlyingSpriteEffect__Pool*>());
}
inline void GlobalNamespace::__FlyingSpriteEffect__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingSpriteEffect__Pool*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FlyingSpriteEffect__Pool::__FlyingSpriteEffect__Pool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif