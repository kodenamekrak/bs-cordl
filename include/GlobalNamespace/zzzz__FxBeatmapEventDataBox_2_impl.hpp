#pragma once
// IWYU pragma private; include "GlobalNamespace/FxBeatmapEventDataBox_2.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__FxBeatmapEventDataBox_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename TIn, typename TOut> constexpr float_t& GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::__cordl_internal_get__beatStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatStep;
}
template <typename TIn, typename TOut> constexpr float_t const& GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::__cordl_internal_get__beatStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatStep;
}
template <typename TIn, typename TOut> constexpr void GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::__cordl_internal_set__beatStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatStep = value;
}
template <typename TIn, typename TOut> constexpr ::System::Collections::Generic::IReadOnlyList_1<TIn>*& GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::__cordl_internal_get__fxBaseDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxBaseDataList;
}
template <typename TIn, typename TOut>
constexpr ::System::Collections::Generic::IReadOnlyList_1<TIn>* const& GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::__cordl_internal_get__fxBaseDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fxBaseDataList;
}
template <typename TIn, typename TOut>
constexpr void GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::__cordl_internal_set__fxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<TIn>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____fxBaseDataList, value);
}
template <typename TIn, typename TOut>
inline void GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::_ctor(::GlobalNamespace::IndexFilter* indexFilter,
                                                                       ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType, float_t beatDistributionParam,
                                                                       ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType, float_t eventDistributionParam,
                                                                       bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                                       ::System::Collections::Generic::IReadOnlyList_1<TIn>* fxBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<TIn>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam,
                                                          eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType, fxBaseDataList);
}
template <typename TIn, typename TOut>
inline void GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex,
                                                                        float_t maxBeat, ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                                                        ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter,
                                                                        ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConverter,
                                                          lightEventConverter, output);
}
template <typename TIn, typename TOut>
inline TOut GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::CreateVfxBeatmapEventData(TIn data, float_t time, int32_t groupId, int32_t elementId, float_t distributionOffset) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<TOut, false>(this, ___internal_method, data, time, groupId, elementId, distributionOffset);
}
template <typename TIn, typename TOut>
inline ::GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>*
GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType beatDistributionParamType,
                                                              float_t beatDistributionParam, ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType eventDistributionParamType,
                                                              float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                              ::System::Collections::Generic::IReadOnlyList_1<TIn>* fxBaseDataList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>*>(indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType,
                                                                                                          eventDistributionParam, eventDistributionShouldAffectFirstBaseEvent,
                                                                                                          eventDistributionEaseType, fxBaseDataList));
}
// Ctor Parameters []
template <typename TIn, typename TOut> constexpr ::GlobalNamespace::FxBeatmapEventDataBox_2<TIn, TOut>::FxBeatmapEventDataBox_2() {}
