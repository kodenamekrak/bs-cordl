#pragma once
// IWYU pragma private; include "GlobalNamespace/DlcPromoPanelModel.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "BeatSaber/Init/zzzz__IPlatformInit_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__PromoBannerInfoSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType::__DlcPromoPanelModel__PromoInfo__PromoType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType::__DlcPromoPanelModel__PromoInfo__PromoType() {}
constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType::Pack{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType::Level{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel__PromoInfo::*)(
    ::StringW, ::GlobalNamespace::PromoBannerInfoSO*, ::GlobalNamespace::PlayerSensitivityFlag)>(&::GlobalNamespace::__DlcPromoPanelModel__PromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26c1ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel__PromoInfo::*)(
    ::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*, ::GlobalNamespace::PlayerSensitivityFlag)>(&::GlobalNamespace::__DlcPromoPanelModel__PromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26c1f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_promoType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoType;
}
constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType const& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_promoType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___promoType;
}
constexpr void GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_set_promoType(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___promoType = value;
}
constexpr ::StringW& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_contentRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_contentRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr void GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentRating = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_bannerImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_bannerImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerImage;
}
constexpr void GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_set_bannerImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bannerImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_bannerPromoText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerPromoText;
}
constexpr ::StringW const& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_bannerPromoText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerPromoText;
}
constexpr void GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_set_bannerPromoText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bannerPromoText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_bannerPromoTextPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerPromoTextPosition;
}
constexpr float_t const& GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_get_bannerPromoTextPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bannerPromoTextPosition;
}
constexpr void GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__cordl_internal_set_bannerPromoTextPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bannerPromoTextPosition = value;
}
inline ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* GlobalNamespace::__DlcPromoPanelModel__PromoInfo::New_ctor(::StringW packId, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo,
                                                                                                                      ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>(packId, promoBannerInfo, contentRating));
}
inline void GlobalNamespace::__DlcPromoPanelModel__PromoInfo::_ctor(::StringW packId, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PromoBannerInfoSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packId, promoBannerInfo, contentRating);
}
inline ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* GlobalNamespace::__DlcPromoPanelModel__PromoInfo::New_ctor(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo* levelPromoInfo,
                                                                                                                      ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>(levelPromoInfo, contentRating));
}
inline void GlobalNamespace::__DlcPromoPanelModel__PromoInfo::_ctor(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo* levelPromoInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPromoInfo, contentRating);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo::__DlcPromoPanelModel__PromoInfo() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel____c::*)()>(&::GlobalNamespace::__DlcPromoPanelModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c2010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c.__ctor_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel____c::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel____c::__ctor_b__24_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26c2018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get(),
                                                                               "<.ctor>b__24_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c.__ctor_b__24_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel____c::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel____c::__ctor_b__24_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26c201c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get(),
                                                                               "<.ctor>b__24_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c._UpdatePromoInfosAsync_b__31_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DlcPromoPanelModel____c::*)(::GlobalNamespace::PackDefinitionSO*)>(
    &::GlobalNamespace::__DlcPromoPanelModel____c::_UpdatePromoInfosAsync_b__31_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26c2020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get(), "<UpdatePromoInfosAsync>b__31_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__DlcPromoPanelModel____c::setStaticF___9(::GlobalNamespace::__DlcPromoPanelModel____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DlcPromoPanelModel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get>(
      std::forward<::GlobalNamespace::__DlcPromoPanelModel____c*>(value));
}
inline ::GlobalNamespace::__DlcPromoPanelModel____c* GlobalNamespace::__DlcPromoPanelModel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DlcPromoPanelModel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get>();
}
inline void GlobalNamespace::__DlcPromoPanelModel____c::setStaticF___9__24_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::__DlcPromoPanelModel____c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get>();
}
inline void GlobalNamespace::__DlcPromoPanelModel____c::setStaticF___9__24_1(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__24_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::__DlcPromoPanelModel____c::getStaticF___9__24_1() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__24_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get>();
}
inline void GlobalNamespace::__DlcPromoPanelModel____c::setStaticF___9__31_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*, "<>9__31_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* GlobalNamespace::__DlcPromoPanelModel____c::getStaticF___9__31_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>*, "<>9__31_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get>();
}
inline ::GlobalNamespace::__DlcPromoPanelModel____c* GlobalNamespace::__DlcPromoPanelModel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DlcPromoPanelModel____c*>());
}
inline void GlobalNamespace::__DlcPromoPanelModel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel____c::__ctor_b__24_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get(),
                                                                             "<.ctor>b__24_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel____c::__ctor_b__24_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get(),
                                                                             "<.ctor>b__24_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__DlcPromoPanelModel____c::_UpdatePromoInfosAsync_b__31_0(::GlobalNamespace::PackDefinitionSO* packDefinition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c*>::get(), "<UpdatePromoInfosAsync>b__31_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packDefinition);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel____c::__DlcPromoPanelModel____c() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c2048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0._GetPackDataForMainMenuPromoBannerInternal_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::*)(
    ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*)>(&::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::_GetPackDataForMainMenuPromoBannerInternal_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26c2050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0*>::get(),
                                    "<GetPackDataForMainMenuPromoBannerInternal>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0._GetPackDataForMainMenuPromoBannerInternal_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::*)(
    ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*)>(&::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::_GetPackDataForMainMenuPromoBannerInternal_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26c2074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0*>::get(),
                                    "<GetPackDataForMainMenuPromoBannerInternal>b__1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::__cordl_internal_get_sensitivityFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sensitivityFlag;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::__cordl_internal_get_sensitivityFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sensitivityFlag;
}
constexpr void GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::__cordl_internal_set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sensitivityFlag = value;
}
inline ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0* GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0*>());
}
inline void GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::_GetPackDataForMainMenuPromoBannerInternal_b__0(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0*>::get(),
                                  "<GetPackDataForMainMenuPromoBannerInternal>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::_GetPackDataForMainMenuPromoBannerInternal_b__1(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0*>::get(),
                                  "<GetPackDataForMainMenuPromoBannerInternal>b__1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0::__DlcPromoPanelModel____c__DisplayClass34_0() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x26c2098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26c2308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,bool>>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,bool>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __t__builder,
    ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__33() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x26c2384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26c29f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,bool>>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty:
// "::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __t__builder,
    ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass34_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__34() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x26c2a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c2c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__43() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x26c2ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c2f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29::__DlcPromoPanelModel___HandleDidCatalogLoadOrUpdate_d__29() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x26c2f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c317c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::__DlcPromoPanelModel___Initialize_d__25(int32_t __1__state,
                                                                                                              ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                              ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                                                                              ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__25::__DlcPromoPanelModel___Initialize_d__25() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x26c3188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26c37f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::__DlcPromoPanelModel___InitializeInternalAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__27::__DlcPromoPanelModel___InitializeInternalAsync_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x26c3858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26c3c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "pack", ty:
// "::UnityW<::GlobalNamespace::PackDefinitionSO>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __t__builder, ::UnityW<::GlobalNamespace::PackDefinitionSO> pack,
    ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->pack = pack;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x26c3cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26c403c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_loadPanelDataOperationHandle_5__2", ty:
// "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> _loadPanelDataOperationHandle_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_loadPanelDataOperationHandle_5__2 = _loadPanelDataOperationHandle_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30::__DlcPromoPanelModel___UpdateDlcPromoPanelDataAsync_d__30() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x26c40a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26c43f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::__DlcPromoPanelModel___UpdateModelDataAsync_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__28::__DlcPromoPanelModel___UpdateModelDataAsync_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x26c4458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26c4cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "_newOwnedMusicPackPromoInfos_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_allPromoInfos_5__4", ty:
// "::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus,::Array<::GlobalNamespace::EntitlementStatus>*>>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2,
    ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newOwnedMusicPackPromoInfos_5__3,
    ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> _allPromoInfos_5__4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus, ::Array<::GlobalNamespace::EntitlementStatus>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_newNotOwnedMusicPackPromoInfos_5__2 = _newNotOwnedMusicPackPromoInfos_5__2;
  this->_newOwnedMusicPackPromoInfos_5__3 = _newOwnedMusicPackPromoInfos_5__3;
  this->_allPromoInfos_5__4 = _allPromoInfos_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__42() {}
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::*)()>(
    &::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x960;
  constexpr static std::size_t addrs = 0x26c4d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26c5690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_validPackDefinitions_5__2", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>,::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _validPackDefinitions_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>, ::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_validPackDefinitions_5__2 = _validPackDefinitions_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__31() {}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.add_hotReloadDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Action*)>(
    &::GlobalNamespace::DlcPromoPanelModel::add_hotReloadDidStart)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26c0aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "add_hotReloadDidStart",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.remove_hotReloadDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Action*)>(
    &::GlobalNamespace::DlcPromoPanelModel::remove_hotReloadDidStart)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26c0b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "remove_hotReloadDidStart",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.add_hotReloadDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Action*)>(
    &::GlobalNamespace::DlcPromoPanelModel::add_hotReloadDidFinish)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26c0bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "add_hotReloadDidFinish",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.remove_hotReloadDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::System::Action*)>(
    &::GlobalNamespace::DlcPromoPanelModel::remove_hotReloadDidFinish)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26c0c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "remove_hotReloadDidFinish",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(
    ::GlobalNamespace::IAdditionalContentModel*, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::IAnalyticsModel*, ::GlobalNamespace::DlcPromoPanelDataSO*,
    ::GlobalNamespace::PlayerDataModel*, ::BeatSaber::Init::IPlatformInit*, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*)>(&::GlobalNamespace::DlcPromoPanelModel::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x26c0d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnalyticsModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelDataSO*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::IPlatformInit*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26c0fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::InitializeAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26c1034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "InitializeAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.InitializeInternalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26c1058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "InitializeInternalAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateModelDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdateModelDataAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26c111c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "UpdateModelDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleDidCatalogLoadOrUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::HandleDidCatalogLoadOrUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26c11dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "HandleDidCatalogLoadOrUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateDlcPromoPanelDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdateDlcPromoPanelDataAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26c126c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "UpdateDlcPromoPanelDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdatePromoInfosAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdatePromoInfosAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26c1330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "UpdatePromoInfosAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.LoadPackPromoInfoAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* (
    ::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::PackDefinitionSO*)>(&::GlobalNamespace::DlcPromoPanelModel::LoadPackPromoInfoAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26c13f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "LoadPackPromoInfoAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetPackDataForMainMenuPromoBanner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
        &::GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x26c14e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetPackDataForMainMenuPromoBanner",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetPackDataForMainMenuPromoBannerInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
        &::GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBannerInternal)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26c15c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetPackDataForMainMenuPromoBannerInternal",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasShown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x26c16ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "MainMenuDlcPromoBannerWasShown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26c18e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "MainMenuDlcPromoBannerWasPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevel*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26c19dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyLevelButtonWasPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasShown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevel*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26c1acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyLevelButtonWasShown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26c1bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyPackButtonWasPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasShown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::BeatmapLevelPack*, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26c1cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyPackButtonWasShown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetExperimentEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::StringW, ::StringW, ::StringW)>(
    &::GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x26c17c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetExperimentEventData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateOwnedPacksAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::UpdateOwnedPacksAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26c1d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                               "UpdateOwnedPacksAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleAdditionalContentModelDidInvalidateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(
    &::GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26c1e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "HandleAdditionalContentModelDidInvalidateData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::DlcPromoPanelModel::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::DlcPromoPanelModel::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalContentModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__dlcPromoPanelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelData;
}
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__dlcPromoPanelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelData;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanelData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Init::IPlatformInit*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__platformInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformInit;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Init::IPlatformInit*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__platformInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformInit;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__platformInit(::BeatSaber::Init::IPlatformInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__metaRemoteAssetsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaRemoteAssetsManager;
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__metaRemoteAssetsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaRemoteAssetsManager;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__metaRemoteAssetsManager(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____metaRemoteAssetsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*>&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__notOwnedMusicPackPromoInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwnedMusicPackPromoInfos;
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__notOwnedMusicPackPromoInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwnedMusicPackPromoInfos;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__notOwnedMusicPackPromoInfos(
    ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notOwnedMusicPackPromoInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*>&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__ownedMusicPackPromoInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownedMusicPackPromoInfos;
}
constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__ownedMusicPackPromoInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownedMusicPackPromoInfos;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__ownedMusicPackPromoInfos(
    ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ownedMusicPackPromoInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__updatingNotOwnedPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatingNotOwnedPacks;
}
constexpr bool const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__updatingNotOwnedPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatingNotOwnedPacks;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__updatingNotOwnedPacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updatingNotOwnedPacks = value;
}
constexpr bool& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::System::Random*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__promoInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__promoInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoInfos;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__promoInfos(::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__defaultPromoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPromoInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__defaultPromoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPromoInfo;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__defaultPromoInfo(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultPromoInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initializationTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>*&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__cacheNextPackDataTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheNextPackDataTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__cacheNextPackDataTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheNextPackDataTask;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__cacheNextPackDataTask(
    ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheNextPackDataTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>*&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__loadPackPromoInfoHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadPackPromoInfoHandles;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>*> const&
GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get__loadPackPromoInfoHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadPackPromoInfoHandles;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set__loadPackPromoInfoHandles(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadPackPromoInfoHandles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_hotReloadDidStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hotReloadDidStart;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_hotReloadDidStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hotReloadDidStart;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set_hotReloadDidStart(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hotReloadDidStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_hotReloadDidFinish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hotReloadDidFinish;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::DlcPromoPanelModel::__cordl_internal_get_hotReloadDidFinish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hotReloadDidFinish;
}
constexpr void GlobalNamespace::DlcPromoPanelModel::__cordl_internal_set_hotReloadDidFinish(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hotReloadDidFinish)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DlcPromoPanelModel::add_hotReloadDidStart(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "add_hotReloadDidStart",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DlcPromoPanelModel::remove_hotReloadDidStart(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "remove_hotReloadDidStart",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DlcPromoPanelModel::add_hotReloadDidFinish(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "add_hotReloadDidFinish",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DlcPromoPanelModel::remove_hotReloadDidFinish(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "remove_hotReloadDidFinish",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::DlcPromoPanelModel* GlobalNamespace::DlcPromoPanelModel::New_ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel,
                                                                                            ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                                            ::GlobalNamespace::IAnalyticsModel* analyticsModel,
                                                                                            ::GlobalNamespace::DlcPromoPanelDataSO* defaultDlcPromoPanelData,
                                                                                            ::GlobalNamespace::PlayerDataModel* playerDataModel, ::BeatSaber::Init::IPlatformInit* platformInit,
                                                                                            ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DlcPromoPanelModel*>(additionalContentModel, beatmapLevelsModel, analyticsModel, defaultDlcPromoPanelData, playerDataModel,
                                                                                          platformInit, metaRemoteAssetsManager));
}
inline void GlobalNamespace::DlcPromoPanelModel::_ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                       ::GlobalNamespace::IAnalyticsModel* analyticsModel, ::GlobalNamespace::DlcPromoPanelDataSO* defaultDlcPromoPanelData,
                                                       ::GlobalNamespace::PlayerDataModel* playerDataModel, ::BeatSaber::Init::IPlatformInit* platformInit,
                                                       ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnalyticsModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DlcPromoPanelDataSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Init::IPlatformInit*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionalContentModel, beatmapLevelsModel, analyticsModel, defaultDlcPromoPanelData, playerDataModel, platformInit,
                                                          metaRemoteAssetsManager);
}
inline void GlobalNamespace::DlcPromoPanelModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::InitializeAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "InitializeAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::InitializeInternalAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "InitializeInternalAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateModelDataAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "UpdateModelDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleDidCatalogLoadOrUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "HandleDidCatalogLoadOrUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateDlcPromoPanelDataAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "UpdateDlcPromoPanelDataAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdatePromoInfosAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "UpdatePromoInfosAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* GlobalNamespace::DlcPromoPanelModel::LoadPackPromoInfoAsync(::GlobalNamespace::PackDefinitionSO* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "LoadPackPromoInfoAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*, false>(this, ___internal_method, pack);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetPackDataForMainMenuPromoBanner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>*
GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBannerInternal() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetPackDataForMainMenuPromoBannerInternal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown(::StringW packId, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "MainMenuDlcPromoBannerWasShown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packId, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed(::StringW packId, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "MainMenuDlcPromoBannerWasPressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packId, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyLevelButtonWasPressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyLevelButtonWasShown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyPackButtonWasPressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, page, customText);
}
inline void GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "BuyPackButtonWasShown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, page, customText);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "GetExperimentEventData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(nullptr, ___internal_method, itemId, page, customText);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DlcPromoPanelModel::UpdateOwnedPacksAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(),
                                                                             "UpdateOwnedPacksAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel*>::get(), "HandleAdditionalContentModelDidInvalidateData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DlcPromoPanelModel::DlcPromoPanelModel() {}
