#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FloatingTransformEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatingTransformEffect::*)()>(&::GlobalNamespace::FloatingTransformEffect::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2397e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatingTransformEffect::*)()>(&::GlobalNamespace::FloatingTransformEffect::Tick)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2397f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), "Tick",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatingTransformEffect::*)()>(&::GlobalNamespace::FloatingTransformEffect::Refresh)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2397ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), "Refresh",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect.GetPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::FloatingTransformEffect::*)(float_t)>(
    &::GlobalNamespace::FloatingTransformEffect::GetPoint)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23980e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), "GetPoint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatingTransformEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatingTransformEffect::*)()>(&::GlobalNamespace::FloatingTransformEffect::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2398174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::FloatingTransformEffect::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloatingTransformEffect::__get__positionMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positionMultiplier;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloatingTransformEffect::__get__positionMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positionMultiplier;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__positionMultiplier(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____positionMultiplier = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloatingTransformEffect::__get__rotationMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotationMultiplier;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloatingTransformEffect::__get__rotationMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotationMultiplier;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__rotationMultiplier(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____rotationMultiplier = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::FloatingTransformEffect::__get__rotationTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotationTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::FloatingTransformEffect::__get__rotationTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotationTransform;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__rotationTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__maxRotationDegrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxRotationDegrees;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__maxRotationDegrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxRotationDegrees;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__maxRotationDegrees(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maxRotationDegrees = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__xAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xAmplitude;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__xAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xAmplitude;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__xAmplitude(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____xAmplitude = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__xFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xFrequency;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__xFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xFrequency;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__xFrequency(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____xFrequency = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__yAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____yAmplitude;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__yAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____yAmplitude;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__yAmplitude(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____yAmplitude = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__yFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____yFrequency;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__yFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____yFrequency;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__yFrequency(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____yFrequency = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__zAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____zAmplitude;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__zAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____zAmplitude;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__zAmplitude(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____zAmplitude = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::FloatingTransformEffect::__get__zFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____zFrequency;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::FloatingTransformEffect::__get__zFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____zFrequency;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__zFrequency(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____zFrequency = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::FloatingTransformEffect::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::FloatingTransformEffect::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FloatingTransformEffect::__get__origin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____origin;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FloatingTransformEffect::__get__origin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____origin;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__origin(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____origin = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__offsetX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____offsetX;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__offsetX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____offsetX;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__offsetX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____offsetX = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__offsetY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____offsetY;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__offsetY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____offsetY;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__offsetY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____offsetY = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__offsetZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____offsetZ;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__offsetZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____offsetZ;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__offsetZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____offsetZ = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__amplitudeX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____amplitudeX;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__amplitudeX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____amplitudeX;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__amplitudeX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____amplitudeX = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__amplitudeY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____amplitudeY;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__amplitudeY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____amplitudeY;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__amplitudeY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____amplitudeY = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__amplitudeZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____amplitudeZ;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__amplitudeZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____amplitudeZ;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__amplitudeZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____amplitudeZ = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__frequencyX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____frequencyX;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__frequencyX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____frequencyX;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__frequencyX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____frequencyX = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__frequencyY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____frequencyY;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__frequencyY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____frequencyY;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__frequencyY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____frequencyY = value;
}
constexpr float_t& GlobalNamespace::FloatingTransformEffect::__get__frequencyZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____frequencyZ;
}
constexpr float_t const& GlobalNamespace::FloatingTransformEffect::__get__frequencyZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____frequencyZ;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__frequencyZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____frequencyZ = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FloatingTransformEffect::__get__targetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targetRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FloatingTransformEffect::__get__targetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targetRotation;
}
constexpr void GlobalNamespace::FloatingTransformEffect::__set__targetRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____targetRotation = value;
}
inline void GlobalNamespace::FloatingTransformEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloatingTransformEffect::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), "Tick",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FloatingTransformEffect::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), "Refresh",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::FloatingTransformEffect::GetPoint(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), "GetPoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, time);
}
inline ::GlobalNamespace::FloatingTransformEffect* GlobalNamespace::FloatingTransformEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloatingTransformEffect*>());
}
inline void GlobalNamespace::FloatingTransformEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatingTransformEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatingTransformEffect::FloatingTransformEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif