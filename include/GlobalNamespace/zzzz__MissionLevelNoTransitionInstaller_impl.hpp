#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelNoTransitionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelNoTransitionInstaller::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x231b0f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelNoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelNoTransitionInstaller::*)()>(
    &::GlobalNamespace::MissionLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231b6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelSO*& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapLevel(::GlobalNamespace::BeatmapLevelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapDifficulty;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____beatmapDifficulty = value;
}
constexpr ::GlobalNamespace::ColorSchemeSO*& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorScheme;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorScheme;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__colorScheme(::GlobalNamespace::ColorSchemeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorScheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionObjectives;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerSpecificSettings;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____backButtonText;
}
constexpr ::StringW const& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____backButtonText;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& GlobalNamespace::MissionLevelNoTransitionInstaller::__get__scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::MissionLevelNoTransitionInstaller::__get__scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__scenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(), "InstallBindings", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::MissionLevelNoTransitionInstaller* GlobalNamespace::MissionLevelNoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionLevelNoTransitionInstaller*>());
}
inline void GlobalNamespace::MissionLevelNoTransitionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelNoTransitionInstaller*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelNoTransitionInstaller::MissionLevelNoTransitionInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif