#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidView_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatar_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.get_resultAvatarDirectors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> (
    ::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2257e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                                                                               "get_resultAvatarDirectors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.get_badgeTimelines
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> (
    ::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2257e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                                                                               "get_badgeTimelines", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.PrespawnAvatars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*)>(&::GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x22560d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(), "PrespawnAvatars", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.SetupResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(
    &::GlobalNamespace::MultiplayerResultsPyramidView::SetupResults)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x2255aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(), "SetupResults", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(
    &::GlobalNamespace::MultiplayerResultsPyramidView::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2258820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*& GlobalNamespace::MultiplayerResultsPyramidView::__get__multiplayerOffsetByLocalPlayerPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerOffsetByLocalPlayerPosition;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*> const&
GlobalNamespace::MultiplayerResultsPyramidView::__get__multiplayerOffsetByLocalPlayerPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerOffsetByLocalPlayerPosition;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__multiplayerOffsetByLocalPlayerPosition(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerOffsetByLocalPlayerPosition)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spawnPoints;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spawnPoints;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__spawnPoints(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnPoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPointsParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spawnPointsParent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPointsParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spawnPointsParent;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__spawnPointsParent(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnPointsParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerResultsPyramidView::__get__evenCountOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____evenCountOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsPyramidView::__get__evenCountOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____evenCountOffset;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__evenCountOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____evenCountOffset = value;
}
constexpr ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*& GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarsFactory;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarsFactory;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__avatarsFactory(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarsFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*&
GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarsDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*> const&
GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarsDictionary;
}
constexpr void
GlobalNamespace::MultiplayerResultsPyramidView::__set__avatarsDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarsDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::MultiplayerResultsPyramidView::__get__resultAvatarDirectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____resultAvatarDirectors;
}
constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__resultAvatarDirectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____resultAvatarDirectors;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__resultAvatarDirectors(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultAvatarDirectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::MultiplayerResultsPyramidView::__get__badgeTimelines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____badgeTimelines;
}
constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__badgeTimelines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____badgeTimelines;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__badgeTimelines(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____badgeTimelines)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*& GlobalNamespace::MultiplayerResultsPyramidView::__get__anyResultsAvatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____anyResultsAvatar;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__anyResultsAvatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____anyResultsAvatar;
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__anyResultsAvatar(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____anyResultsAvatar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                                                                             "get_resultAvatarDirectors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                                                                             "get_badgeTimelines", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* activePlayers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(), "PrespawnAvatars", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activePlayers);
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::SetupResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                         ::UnityEngine::Transform* badgeStartTransform, ::UnityEngine::Transform* badgeMidTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(), "SetupResults", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsData, badgeStartTransform, badgeMidTransform);
}
inline ::GlobalNamespace::MultiplayerResultsPyramidView* GlobalNamespace::MultiplayerResultsPyramidView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerResultsPyramidView*>());
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerResultsPyramidView::MultiplayerResultsPyramidView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif