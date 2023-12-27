#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataBox.get_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LightColorBeatmapEventDataBox::*)()>(
    &::GlobalNamespace::LightColorBeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233b82c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataBox.get_beatStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightColorBeatmapEventDataBox::*)()>(
    &::GlobalNamespace::LightColorBeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233b834;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBeatmapEventDataBox::*)(
    ::GlobalNamespace::IndexFilter*, float_t, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, float_t, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, bool,
    ::GlobalNamespace::EaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*)>(&::GlobalNamespace::LightColorBeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x23366d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataBox.Unpack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBeatmapEventDataBox::*)(
    float_t, int32_t, int32_t, int32_t, int32_t, float_t, ::GlobalNamespace::IBeatToTimeConvertor*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*)>(
    &::GlobalNamespace::LightColorBeatmapEventDataBox::Unpack)> {
  constexpr static std::size_t size = 0x14e8;
  constexpr static std::size_t addrs = 0x233b83c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*& GlobalNamespace::LightColorBeatmapEventDataBox::__get__lightColorBaseDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightColorBaseDataList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*> const&
GlobalNamespace::LightColorBeatmapEventDataBox::__get__lightColorBaseDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightColorBaseDataList;
}
constexpr void GlobalNamespace::LightColorBeatmapEventDataBox::__set__lightColorBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightColorBaseDataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::LightColorBeatmapEventDataBox::__get__brightnessStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____brightnessStep;
}
constexpr float_t const& GlobalNamespace::LightColorBeatmapEventDataBox::__get__brightnessStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____brightnessStep;
}
constexpr void GlobalNamespace::LightColorBeatmapEventDataBox::__set__brightnessStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____brightnessStep = value;
}
constexpr float_t& GlobalNamespace::LightColorBeatmapEventDataBox::__get__beatStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatStep;
}
constexpr float_t const& GlobalNamespace::LightColorBeatmapEventDataBox::__get__beatStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatStep;
}
constexpr void GlobalNamespace::LightColorBeatmapEventDataBox::__set__beatStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____beatStep = value;
}
constexpr bool& GlobalNamespace::LightColorBeatmapEventDataBox::__get__brightnessDistributionShouldAffectFirstBaseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____brightnessDistributionShouldAffectFirstBaseEvent;
}
constexpr bool const& GlobalNamespace::LightColorBeatmapEventDataBox::__get__brightnessDistributionShouldAffectFirstBaseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____brightnessDistributionShouldAffectFirstBaseEvent;
}
constexpr void GlobalNamespace::LightColorBeatmapEventDataBox::__set__brightnessDistributionShouldAffectFirstBaseEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____brightnessDistributionShouldAffectFirstBaseEvent = value;
}
inline int32_t GlobalNamespace::LightColorBeatmapEventDataBox::get_subtypeIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(),
                                                                             "get_subtypeIdentifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightColorBeatmapEventDataBox::get_beatStep() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(),
                                                                             "get_beatStep", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightColorBeatmapEventDataBox* GlobalNamespace::LightColorBeatmapEventDataBox::New_ctor(
    ::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
    float_t brightnessDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType brightnessDistributionParamType, bool brightnessDistributionShouldAffectFirstBaseEvent,
    ::GlobalNamespace::EaseType brightnessDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* lightColorBaseDataList) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightColorBeatmapEventDataBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam,
                                                                                             brightnessDistributionParamType, brightnessDistributionShouldAffectFirstBaseEvent,
                                                                                             brightnessDistributionEaseType, lightColorBaseDataList));
}
inline void GlobalNamespace::LightColorBeatmapEventDataBox::_ctor(::GlobalNamespace::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                  ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam,
                                                                  ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType brightnessDistributionParamType,
                                                                  bool brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType brightnessDistributionEaseType,
                                                                  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>* lightColorBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam,
                                                          brightnessDistributionParamType, brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionEaseType, lightColorBaseDataList);
}
inline void GlobalNamespace::LightColorBeatmapEventDataBox::Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex,
                                                                   float_t maxBeat, ::GlobalNamespace::IBeatToTimeConvertor* beatToTimeConvertor,
                                                                   ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox*>::get(), "Unpack", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConvertor, output);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorBeatmapEventDataBox::LightColorBeatmapEventDataBox() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif