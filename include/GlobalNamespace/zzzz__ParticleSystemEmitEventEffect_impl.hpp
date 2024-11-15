#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemEmitEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventController_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__SongSpeedData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "Zenject/zzzz__TickableManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::*)(
    ::GlobalNamespace::BasicBeatmapEventType, ::UnityEngine::Transform*, int32_t, ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BeatmapCallbacksController*,
    ::GlobalNamespace::__ParticleSystemEventController__Pool*)>(&::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3b31a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ParticleSystemEventController__Pool*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3b31c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::*)(
    ::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3b31de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(), "HandleBeatmapEvent",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior.EmitParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::ParticleSystemEventController> (
    ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::*)(float_t)>(&::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::EmitParticles)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3b31f4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(), 6));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const&
GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>*&
GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemEventControllerPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEventControllerPoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>*> const&
GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemEventControllerPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEventControllerPoolContainer;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_set__particleSystemEventControllerPoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystemEventControllerPoolContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemParentTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemParentTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemParentTransform;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_set__particleSystemParentTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystemParentTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemMaxSpawnedSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemMaxSpawnedSystems;
}
constexpr int32_t const& GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__particleSystemMaxSpawnedSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemMaxSpawnedSystems;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_set__particleSystemMaxSpawnedSystems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemMaxSpawnedSystems = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*
GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform,
                                                                                       int32_t particleSystemMaxSpawnedSystems, ::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                       ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                       ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>(
      beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool));
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent,
                                                                                                ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                                                                                                ::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                                ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ParticleSystemEventController__Pool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource,
                                                          beatmapCallbacksController, particleSystemEventControllerPool);
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(), "HandleBeatmapEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::UnityW<::GlobalNamespace::ParticleSystemEventController> GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::EmitParticles(float_t startTime) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ParticleSystemEventController>, false>(this, ___internal_method, startTime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::*)(
    ::GlobalNamespace::BasicBeatmapEventType, ::UnityEngine::Transform*, int32_t, ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BeatmapCallbacksController*,
    ::GlobalNamespace::__ParticleSystemEventController__Pool*, ::Zenject::TickableManager*)>(&::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3b320e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ParticleSystemEventController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TickableManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::Tick)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x3b32120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*>::get(), "Tick",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b324c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*>::get(), 5));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr ::Zenject::TickableManager*& GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::__cordl_internal_get__tickableManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickableManager;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::TickableManager*> const&
GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::__cordl_internal_get__tickableManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickableManager;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::__cordl_internal_set__tickableManager(::Zenject::TickableManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tickableManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior* GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::New_ctor(
    ::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
    ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool, ::Zenject::TickableManager* tickableManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*>(
      beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool, tickableManager));
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::_ctor(
    ::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
    ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool, ::Zenject::TickableManager* tickableManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ParticleSystemEventController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::TickableManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource,
                                                          beatmapCallbacksController, particleSystemEventControllerPool, tickableManager);
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::Tick() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*>::get(), "Tick",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)(
    ::GlobalNamespace::BasicBeatmapEventType, ::UnityEngine::Transform*, int32_t, ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BeatmapCallbacksController*,
    ::GlobalNamespace::__ParticleSystemEventController__Pool*, ::GlobalNamespace::PauseController*, ::GlobalNamespace::SongSpeedData*)>(
    &::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3b324f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ParticleSystemEventController__Pool*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PauseController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongSpeedData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3b32620;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior.HandlePauseControllerDidPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::HandlePauseControllerDidPause)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3b32744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(),
                                                 "HandlePauseControllerDidPause", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior.HandlePauseControllerDidResume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)()>(
    &::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::HandlePauseControllerDidResume)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3b328d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(),
                                                 "HandlePauseControllerDidResume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior.EmitParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::GlobalNamespace::ParticleSystemEventController> (::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)(float_t)>(
        &::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::EmitParticles)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3b32a6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PauseController>& GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__cordl_internal_get__pauseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseController;
}
constexpr ::UnityW<::GlobalNamespace::PauseController> const& GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__cordl_internal_get__pauseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseController;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongSpeedData*& GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__cordl_internal_get__songSpeedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeedData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongSpeedData*> const&
GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__cordl_internal_get__songSpeedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeedData;
}
constexpr void GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__cordl_internal_set__songSpeedData(::GlobalNamespace::SongSpeedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songSpeedData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior* GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::New_ctor(
    ::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
    ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController, ::GlobalNamespace::SongSpeedData* songSpeedData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>(
      beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool, pauseController, songSpeedData));
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::_ctor(
    ::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
    ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController, ::GlobalNamespace::SongSpeedData* songSpeedData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ParticleSystemEventController__Pool*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PauseController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongSpeedData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource,
                                                          beatmapCallbacksController, particleSystemEventControllerPool, pauseController, songSpeedData);
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::HandlePauseControllerDidPause() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(),
                                               "HandlePauseControllerDidPause", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::HandlePauseControllerDidResume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(),
                                               "HandlePauseControllerDidResume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ParticleSystemEventController> GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::EmitParticles(float_t startTime) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ParticleSystemEventController>, false>(this, ___internal_method, startTime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior() {}
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect::Start)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3b317fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffect*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b31a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffect*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(
    &::GlobalNamespace::ParticleSystemEmitEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3b31a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__beatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__beatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEvent;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEvent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemParentTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemParentTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemParentTransform;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__particleSystemParentTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystemParentTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemMaxSpawnedSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemMaxSpawnedSystems;
}
constexpr int32_t const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemMaxSpawnedSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemMaxSpawnedSystems;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__particleSystemMaxSpawnedSystems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystemMaxSpawnedSystems = value;
}
constexpr ::GlobalNamespace::EnvironmentContext& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__environmentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr ::GlobalNamespace::EnvironmentContext const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__environmentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentContext = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__diContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____diContainer;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__diContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____diContainer;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__diContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____diContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*& GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemEmitBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEmitBehavior;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*> const&
GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_get__particleSystemEmitBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystemEmitBehavior;
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__cordl_internal_set__particleSystemEmitBehavior(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystemEmitBehavior)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffect*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffect* GlobalNamespace::ParticleSystemEmitEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ParticleSystemEmitEventEffect*>());
}
inline void GlobalNamespace::ParticleSystemEmitEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect::ParticleSystemEmitEventEffect() {}
