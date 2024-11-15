#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion3/BeatmapDataLoader.hpp"
#include "BeatmapDataLoaderVersion3/zzzz__BeatmapDataLoader_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion3/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapDataLoaderVersion3/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BasicEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BombNoteData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BpmChangeEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BurstSliderData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorBoostEventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ColorNoteData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__FxEventsCollection_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__IndexFilter_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorBaseData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationBaseData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightRotationEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationBaseData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightTranslationEventBox_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__ObstacleData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__SliderData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__WaypointData_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBaseData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__IntFxBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26de914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter.BeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::*)(float_t)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::BeatToTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26de9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*>::get(), "BeatToTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter.BeatToRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::*)(float_t)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::BeatToRotation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26de9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*>::get(), "BeatToRotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BpmTimeProcessor*& BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::__cordl_internal_get__bpmTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BpmTimeProcessor*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::__cordl_internal_get__bpmTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmTimeProcessor;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::__cordl_internal_set__bpmTimeProcessor(::GlobalNamespace::BpmTimeProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bpmTimeProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RotationTimeProcessor*& BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::__cordl_internal_get__rotationTimeProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationTimeProcessor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RotationTimeProcessor*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::__cordl_internal_get__rotationTimeProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationTimeProcessor;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::__cordl_internal_set__rotationTimeProcessor(::GlobalNamespace::RotationTimeProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationTimeProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                   ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                            ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline float_t BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::BeatToTime(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*>::get(), "BeatToTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
inline int32_t BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::BeatToRotation(float_t beat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter*>::get(), "BeatToRotation",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, beat);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BeatmapDataItemConverter::__BeatmapDataLoader__BeatmapDataItemConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*, ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26dcdc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventData* (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::*)(::BeatmapSaveDataVersion3::BasicEventData*)>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::Convert)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x26dce2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BasicEventData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*& BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_get__specialEventsFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_get__specialEventsFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEventsFilter;
}
constexpr void
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::__cordl_internal_set__specialEventsFilter(::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specialEventsFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor,
                                                                              ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter*>(bpmTimeProcessor, rotationTimeProcessor, specialEventsFilter));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                       ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor,
                                                                                       ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter* specialEventsFilter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor, specialEventsFilter);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::Convert(::BeatmapSaveDataVersion3::BasicEventData* basicEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BasicEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, basicEventSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BasicEventConverter::__BeatmapDataLoader__BasicEventConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26daa84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter::*)(::BeatmapSaveDataVersion3::BombNoteData*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter::Convert)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26dac3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BombNoteData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                     ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter::Convert(::BeatmapSaveDataVersion3::BombNoteData* bombNoteSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BombNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, bombNoteSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BombNoteConverter::__BeatmapDataLoader__BombNoteConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26db244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BPMChangeBeatmapEventData* (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter::*)(::BeatmapSaveDataVersion3::BpmChangeEventData*)>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter::Convert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26db270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BpmChangeEventData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                     ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BPMChangeBeatmapEventData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter::Convert(::BeatmapSaveDataVersion3::BpmChangeEventData* bpmChangeEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BpmChangeEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BPMChangeBeatmapEventData*, false>(this, ___internal_method, bpmChangeEventSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BpmEventConverter::__BeatmapDataLoader__BpmEventConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26dce00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventData* (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter::*)(::BeatmapSaveDataVersion3::ColorBoostEventData*)>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter::Convert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26dcef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ColorBoostEventData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                   ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                            ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapEventData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter::Convert(::BeatmapSaveDataVersion3::ColorBoostEventData* colorBoostEventSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ColorBoostEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*, false>(this, ___internal_method, colorBoostEventSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorBoostEventConverter::__BeatmapDataLoader__ColorBoostEventConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26daa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter::*)(::BeatmapSaveDataVersion3::ColorNoteData*)>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter::Convert)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x26dab60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ColorNoteData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                      ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter::Convert(::BeatmapSaveDataVersion3::ColorNoteData* colorNoteSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ColorNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, colorNoteSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ColorNoteConverter::__BeatmapDataLoader__ColorNoteConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::*)(
    ::BeatmapSaveDataVersion3::FxEventsCollection*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26dde0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBox* (
    ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::*)(::BeatmapSaveDataVersion3::FxEventBox*, ::GlobalNamespace::ILightGroup*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x26de3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventBox*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::__cordl_internal_get__fxEventsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::FxEventsCollection*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::__cordl_internal_get__fxEventsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::__cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fxEventsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::New_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter*>(fxEventsCollection));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fxEventsCollection);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::Convert(::BeatmapSaveDataVersion3::FxEventBox* saveData,
                                                                                                                                ::GlobalNamespace::ILightGroup* lightGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(this, ___internal_method, saveData, lightGroup);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxEventBoxConverter::__BeatmapDataLoader__IntVfxEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::*)(
    ::BeatmapSaveDataVersion3::FxEventsCollection*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26ddde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBox* (
    ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::*)(::BeatmapSaveDataVersion3::FxEventBox*, ::GlobalNamespace::ILightGroup*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x26dde34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter*>::get(), "Convert",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion3::FxEventsCollection*& BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::__cordl_internal_get__fxEventsCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::FxEventsCollection*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::__cordl_internal_get__fxEventsCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxEventsCollection;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::__cordl_internal_set__fxEventsCollection(::BeatmapSaveDataVersion3::FxEventsCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fxEventsCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::New_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter*>(fxEventsCollection));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::_ctor(::BeatmapSaveDataVersion3::FxEventsCollection* fxEventsCollection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fxEventsCollection);
}
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::Convert(::BeatmapSaveDataVersion3::FxEventBox* saveData,
                                                                                                                                  ::GlobalNamespace::ILightGroup* lightGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventBox*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(this, ___internal_method, saveData, lightGroup);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxEventBoxConverter::__BeatmapDataLoader__FloatVfxEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IntFxBaseData* (*)(int32_t, ::BeatmapSaveDataVersion3::FxEventsCollection*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x26ded78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IntFxBaseData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor::Convert(int32_t vfxEventBaseData,
                                                                                                                          ::BeatmapSaveDataVersion3::FxEventsCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IntFxBaseData*, false>(nullptr, ___internal_method, vfxEventBaseData, collection);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IntVfxBaseDataConvertor::__BeatmapDataLoader__IntVfxBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::FloatFxBaseData* (*)(int32_t, ::BeatmapSaveDataVersion3::FxEventsCollection*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x26dee7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor*>::get(), "Convert",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::FloatFxBaseData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor::Convert(int32_t vfxEventBaseData,
                                                                                                                              ::BeatmapSaveDataVersion3::FxEventsCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::FxEventsCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FloatFxBaseData*, false>(nullptr, ___internal_method, vfxEventBaseData, collection);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__FloatVfxBaseDataConvertor::__BeatmapDataLoader__FloatVfxBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IndexFilter* (*)(::BeatmapSaveDataVersion3::IndexFilter*, int32_t)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter::Convert)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x26de9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::IndexFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IndexFilter* BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter::Convert(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, int32_t groupSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter*, false>(nullptr, ___internal_method, indexFilter, groupSize);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__IndexFilterConverter::__BeatmapDataLoader__IndexFilterConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (*)(::BeatmapSaveDataVersion3::LightColorEventBox*, ::GlobalNamespace::ILightGroup*)>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x26dcf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter*>::get(),
                                                 "Convert", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightColorEventBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter::*)()>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26df090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter::Convert(::BeatmapSaveDataVersion3::LightColorEventBox* saveData,
                                                                                                                                    ::GlobalNamespace::ILightGroup* lightGroupData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter*>::get(), "Convert",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightColorEventBox*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(nullptr, ___internal_method, saveData, lightGroupData);
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter* BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter*>());
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColorEventBoxConverter::__BeatmapDataLoader__LightColorEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightColorBaseData* (*)(::BeatmapSaveDataVersion3::LightColorBaseData*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x26def9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor*>::get(), "Convert",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightColorBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightColorBaseData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::LightColorBaseData* saveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightColorBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightColorBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightColoBaseDataConvertor::__BeatmapDataLoader__LightColoBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (*)(::BeatmapSaveDataVersion3::LightRotationEventBox*, ::GlobalNamespace::ILightGroup*)>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x26dd2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter*>::get(),
                                                 "Convert", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightRotationEventBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter::*)()>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26df15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter::Convert(::BeatmapSaveDataVersion3::LightRotationEventBox* saveData,
                                                                                                                                       ::GlobalNamespace::ILightGroup* lightGroupData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter*>::get(),
                                               "Convert", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightRotationEventBox*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(nullptr, ___internal_method, saveData, lightGroupData);
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter* BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter*>());
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationEventBoxConverter::__BeatmapDataLoader__LightRotationEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBaseData* (*)(::BeatmapSaveDataVersion3::LightRotationBaseData*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26df098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightRotationBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightRotationBaseData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::LightRotationBaseData* saveData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor*>::get(),
                                               "Convert", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightRotationBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightRotationBaseDataConvertor::__BeatmapDataLoader__LightRotationBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapEventDataBox* (*)(::BeatmapSaveDataVersion3::LightTranslationEventBox*, ::GlobalNamespace::ILightGroup*)>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter::Convert)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x26dd858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter*>::get(),
                                                 "Convert", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightTranslationEventBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter::*)()>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26df200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapEventDataBox* BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter::Convert(::BeatmapSaveDataVersion3::LightTranslationEventBox* saveData,
                                                                                                                                          ::GlobalNamespace::ILightGroup* lightGroupData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter*>::get(),
                                               "Convert", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightTranslationEventBox*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox*, false>(nullptr, ___internal_method, saveData, lightGroupData);
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter* BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter*>());
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationEventBoxConverter::__BeatmapDataLoader__LightTranslationEventBoxConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightTranslationBaseData* (*)(::BeatmapSaveDataVersion3::LightTranslationBaseData*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor::Convert)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26df164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor*>::get(), "Convert",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightTranslationBaseData*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor::Convert(::BeatmapSaveDataVersion3::LightTranslationBaseData* saveData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor*>::get(), "Convert",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::LightTranslationBaseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightTranslationBaseData*, false>(nullptr, ___internal_method, saveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__LightTranslationBaseDataConvertor::__BeatmapDataLoader__LightTranslationBaseDataConvertor() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26daab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::*)(::BeatmapSaveDataVersion3::ObstacleData*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::Convert)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x26dacc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ObstacleData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter.GetNoteLineLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (*)(int32_t)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::GetNoteLineLayer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26df208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*>::get(), "GetNoteLineLayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                     ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::Convert(::BeatmapSaveDataVersion3::ObstacleData* obstacleSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, obstacleSaveData);
}
inline ::GlobalNamespace::NoteLineLayer BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::GetNoteLineLayer(int32_t lineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter*>::get(), "GetNoteLineLayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(nullptr, ___internal_method, lineLayer);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__ObstacleConverter::__BeatmapDataLoader__ObstacleConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26daadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter::*)(::BeatmapSaveDataVersion3::SliderData*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter::Convert)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x26dae18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::SliderData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                   ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter::Convert(::BeatmapSaveDataVersion3::SliderData* sliderSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, sliderSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SliderConverter::__BeatmapDataLoader__SliderConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26dab08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapObjectData* (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter::*)(::BeatmapSaveDataVersion3::BurstSliderData*)>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter::Convert)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x26dafd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BurstSliderData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                        ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter::Convert(::BeatmapSaveDataVersion3::BurstSliderData* sliderSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BurstSliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, sliderSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__BurstSliderConverter::__BeatmapDataLoader__BurstSliderConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::*)(
    ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*, ::GlobalNamespace::EnvironmentKeywords*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x26dcaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter.IsEventValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::*)(
    ::BeatmapSaveDataCommon::BeatmapEventType)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::IsEventValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26de940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*>::get(), "IsEventValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*&
BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::__cordl_internal_get__eventTypesToFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventTypesToFilter;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::__cordl_internal_set__eventTypesToFilter(
    ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventTypesToFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::New_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                              ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*>(basicEventTypesWithKeywords, environmentKeywords));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::_ctor(::BeatmapSaveDataCommon::BasicEventTypesWithKeywords* basicEventTypesWithKeywords,
                                                                                       ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicEventTypesWithKeywords, environmentKeywords);
}
inline bool BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::IsEventValid(::BeatmapSaveDataCommon::BeatmapEventType basicBeatmapEventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter*>::get(), "IsEventValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::BeatmapEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, basicBeatmapEventType);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__SpecialEventsFilter::__BeatmapDataLoader__SpecialEventsFilter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter::*)(
    ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26dab34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectData* (
    ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter::*)(::BeatmapSaveDataVersion3::WaypointData*)>(&::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter::Convert)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26db158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::WaypointData*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter*
BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter::New_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter*>(bpmTimeProcessor, rotationTimeProcessor));
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter::_ctor(::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                     ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpmTimeProcessor, rotationTimeProcessor);
}
inline ::GlobalNamespace::BeatmapObjectData* BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter::Convert(::BeatmapSaveDataVersion3::WaypointData* waypointSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::WaypointData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectData*, false>(this, ___internal_method, waypointSaveData);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader__WaypointConverter::__BeatmapDataLoader__WaypointConverter() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::*)()>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26df278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c._GetBeatmapDataBasicInfoFromSaveDataJson_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::*)(::BeatmapSaveDataVersion3::BurstSliderData*)>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::_GetBeatmapDataBasicInfoFromSaveDataJson_b__5_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26df280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>::get(), "<GetBeatmapDataBasicInfoFromSaveDataJson>b__5_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BurstSliderData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::setStaticF___9(::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c* value) {
  ::cordl_internals::setStaticField<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>::get>(
      std::forward<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>(value));
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c* BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>::get>();
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::setStaticF___9__5_0(::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>::get>(
      std::forward<::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>*>(value));
}
inline ::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>* BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatmapSaveDataVersion3::BurstSliderData*, int32_t>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>::get>();
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c* BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>());
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::_GetBeatmapDataBasicInfoFromSaveDataJson_b__5_0(::BeatmapSaveDataVersion3::BurstSliderData* bs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c*>::get(), "<GetBeatmapDataBasicInfoFromSaveDataJson>b__5_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BurstSliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bs);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c::__BeatmapDataLoader____c() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::*)()>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d9a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0._GetBeatmapDataFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::*)()>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26df29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0*>::get(),
                                                 "<GetBeatmapDataFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_defaultLightshowJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_defaultLightshowJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowJson;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_defaultLightshowJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultLightshowJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr float_t& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_startBpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr float_t const& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_startBpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startBpm;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_startBpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startBpm = value;
}
constexpr bool& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_loadingForDesignatedEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr bool const& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_loadingForDesignatedEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_loadingForDesignatedEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadingForDesignatedEnvironment = value;
}
constexpr ::GlobalNamespace::IEnvironmentInfo*& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentInfo*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentInfo;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_beatmapLevelDataVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_beatmapLevelDataVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelDataVersion = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_lightEventConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightEventConverter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLightEventConverter*> const&
BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_get_lightEventConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightEventConverter;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightEventConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0* BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0*>());
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0*>::get(),
                                               "<GetBeatmapDataFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass3_0::__BeatmapDataLoader____c__DisplayClass3_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::*)()>(
    &::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d9b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0._GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::*)()>(
        &::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26df2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0*>::get(),
                                                 "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0* BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0*>());
}
inline void BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0*>::get(),
                                               "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::__BeatmapDataLoader____c__DisplayClass4_0::__BeatmapDataLoader____c__DisplayClass4_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::BeatmapData*>* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion,
                                          ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x26d9940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJsonAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26d9a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJsonAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x26d9b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJson",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataFromSaveDataJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                                    ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x26d9d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJson", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.GetBeatmapDataFromSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BeatmapDifficulty, float_t, bool,
                                                    ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::PlayerSpecificSettings*,
                                                    ::GlobalNamespace::IBeatmapLightEventConverter*, ::System::Diagnostics::Stopwatch*)>(
        &::BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveData)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x26d9e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Stopwatch*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.ConvertBasicEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::RotationTimeProcessor*,
                         ::GlobalNamespace::EnvironmentKeywords*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader::ConvertBasicEvents)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x26db300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "ConvertBasicEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader.ConvertEventBoxGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::IEnvironmentLightGroups*,
                         ::GlobalNamespace::IBeatmapLightEventConverter*)>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader::ConvertEventBoxGroups)> {
  constexpr static std::size_t size = 0x11ac;
  constexpr static std::size_t addrs = 0x26db940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "ConvertEventBoxGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion3::BeatmapDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion3::BeatmapDataLoader::*)()>(&::BeatmapDataLoaderVersion3::BeatmapDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26de90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync(
    ::StringW beatmapJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJsonAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*, false>(nullptr, ___internal_method, beatmapJson, defaultLightshowJson,
                                                                                                                          beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentInfo,
                                                                                                                          beatmapLevelDataVersion, playerSpecificSettings, lightEventConverter);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJsonAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*, false>(nullptr, ___internal_method, beatmapJson);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapJson) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataBasicInfoFromSaveDataJson",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(nullptr, ___internal_method, beatmapJson);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson(
    ::StringW beatmapJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float_t startBpm, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveDataJson", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapJson, defaultLightshowJson, beatmapDifficulty, startBpm,
                                                                                     loadingForDesignatedEnvironment, environmentInfo, beatmapLevelDataVersion, playerSpecificSettings,
                                                                                     lightEventConverter);
}
/// @param stopwatch: ::System::Diagnostics::Stopwatch* (default: nullptr)
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion3::BeatmapDataLoader::GetBeatmapDataFromSaveData(
    ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
    float_t startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter, ::System::Diagnostics::Stopwatch* stopwatch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "GetBeatmapDataFromSaveData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Stopwatch*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, beatmapSaveData, defaultLightshowSaveData, beatmapDifficulty, startBpm,
                                                                                     loadingForDesignatedEnvironment, environmentKeywords, environmentLightGroups, playerSpecificSettings,
                                                                                     lightEventConverter, stopwatch);
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader::ConvertBasicEvents(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData,
                                                                             ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::RotationTimeProcessor* rotationTimeProcessor,
                                                                             ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "ConvertBasicEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RotationTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, beatmapSaveData, bpmTimeProcessor, rotationTimeProcessor, environmentKeywords);
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader::ConvertEventBoxGroups(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData,
                                                                                ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                                                                ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), "ConvertEventBoxGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLightEventConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, beatmapSaveData, bpmTimeProcessor, environmentLightGroups, lightEventConverter);
}
inline ::BeatmapDataLoaderVersion3::BeatmapDataLoader* BeatmapDataLoaderVersion3::BeatmapDataLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>());
}
inline void BeatmapDataLoaderVersion3::BeatmapDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion3::BeatmapDataLoader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion3::BeatmapDataLoader::BeatmapDataLoader() {}
