#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO.get_positiveBadges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* (
    ::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::get_positiveBadges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                                                                               "get_positiveBadges", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO.get_negativeBadges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* (
    ::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::get_negativeBadges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                                                                               "get_negativeBadges", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgesModelSO::*)()>(&::GlobalNamespace::MultiplayerBadgesModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*& GlobalNamespace::MultiplayerBadgesModelSO::__get__positiveBadges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positiveBadges;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*> const&
GlobalNamespace::MultiplayerBadgesModelSO::__get__positiveBadges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positiveBadges;
}
constexpr void GlobalNamespace::MultiplayerBadgesModelSO::__set__positiveBadges(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positiveBadges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*& GlobalNamespace::MultiplayerBadgesModelSO::__get__negativeBadges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____negativeBadges;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*> const&
GlobalNamespace::MultiplayerBadgesModelSO::__get__negativeBadges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____negativeBadges;
}
constexpr void GlobalNamespace::MultiplayerBadgesModelSO::__set__negativeBadges(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____negativeBadges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* GlobalNamespace::MultiplayerBadgesModelSO::get_positiveBadges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                                                                             "get_positiveBadges", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>* GlobalNamespace::MultiplayerBadgesModelSO::get_negativeBadges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(),
                                                                             "get_negativeBadges", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerBadgeDataSO*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgesModelSO* GlobalNamespace::MultiplayerBadgesModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerBadgesModelSO*>());
}
inline void GlobalNamespace::MultiplayerBadgesModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgesModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgesModelSO::MultiplayerBadgesModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif