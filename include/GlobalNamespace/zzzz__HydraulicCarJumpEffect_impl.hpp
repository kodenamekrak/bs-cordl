#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HydraulicCarJumpEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22202d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2220448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2220464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2220580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarJumpEffect::__get__event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____event;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarJumpEffect::__get__event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____event;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__event(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____event = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::HydraulicCarJumpEffect::__get__eventValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::HydraulicCarJumpEffect::__get__eventValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventValues;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__eventValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HydraulicCarJumpEffect::__get__impulse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____impulse;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HydraulicCarJumpEffect::__get__impulse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____impulse;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__impulse(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____impulse = value;
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__get__randomness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomness;
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__get__randomness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____randomness;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__randomness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____randomness = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HydraulicCarJumpEffect::__get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HydraulicCarJumpEffect::__get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____position;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____position = value;
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__get__minDelayBetweenEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minDelayBetweenEvents;
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__get__minDelayBetweenEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minDelayBetweenEvents;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__minDelayBetweenEvents(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minDelayBetweenEvents = value;
}
constexpr ::UnityEngine::Rigidbody*& GlobalNamespace::HydraulicCarJumpEffect::__get__rigidbody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rigidbody;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> const& GlobalNamespace::HydraulicCarJumpEffect::__get__rigidbody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rigidbody;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__rigidbody(::UnityEngine::Rigidbody* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rigidbody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::HydraulicCarJumpEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::HydraulicCarJumpEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__get__lastEventTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastEventTime;
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__get__lastEventTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastEventTime;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__lastEventTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lastEventTime = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::HydraulicCarJumpEffect::__get__eventValuesHashSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventValuesHashSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& GlobalNamespace::HydraulicCarJumpEffect::__get__eventValuesHashSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventValuesHashSet;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__eventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventValuesHashSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::HydraulicCarJumpEffect::__get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::HydraulicCarJumpEffect::__get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HydraulicCarJumpEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::HydraulicCarJumpEffect* GlobalNamespace::HydraulicCarJumpEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HydraulicCarJumpEffect*>());
}
inline void GlobalNamespace::HydraulicCarJumpEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HydraulicCarJumpEffect::HydraulicCarJumpEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif