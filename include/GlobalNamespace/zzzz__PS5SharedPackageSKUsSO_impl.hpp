#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5SharedPackageSKUsSO.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5PublisherSKUSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyContentVersion_def.hpp"
#include "GlobalNamespace/zzzz__SonyVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::__PS5SharedPackageSKUsSO__BuildType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::__PS5SharedPackageSKUsSO__BuildType() {}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::Application{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::RemasterPatch{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion.get_masterVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SonyVersion* (::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(
    &::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::get_masterVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b2758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), "get_masterVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion.get_contentVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SonyContentVersion* (::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(
    &::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::get_contentVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b2760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), "get_contentVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion.CopyValueFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::*)(
    ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*)>(&::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::CopyValueFrom)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26b2768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), "CopyValueFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion.IncreaseContentVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(
    &::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::IncreaseContentVersion)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26b27d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), "IncreaseContentVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(
    &::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b2834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SonyVersion*& GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__cordl_internal_get__masterVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterVersion;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyVersion*> const& GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__cordl_internal_get__masterVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____masterVersion;
}
constexpr void GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__cordl_internal_set__masterVersion(::GlobalNamespace::SonyVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____masterVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SonyContentVersion*& GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__cordl_internal_get__contentVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentVersion;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyContentVersion*> const& GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__cordl_internal_get__contentVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentVersion;
}
constexpr void GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__cordl_internal_set__contentVersion(::GlobalNamespace::SonyContentVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contentVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SonyVersion* GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::get_masterVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), "get_masterVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SonyVersion*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SonyContentVersion* GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::get_contentVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), "get_contentVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SonyContentVersion*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::CopyValueFrom(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* newVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), "CopyValueFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newVersion);
}
inline void GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::IncreaseContentVersion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), "IncreaseContentVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>());
}
inline void GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__PS5SharedPackageSKUsSO__PS5BuildVersion() {}
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_availableSKUs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(
        &::GlobalNamespace::PS5SharedPackageSKUsSO::get_availableSKUs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b2704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                               "get_availableSKUs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_conceptId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(
    &::GlobalNamespace::PS5SharedPackageSKUsSO::get_conceptId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b270c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                               "get_conceptId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_buildType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(
    &::GlobalNamespace::PS5SharedPackageSKUsSO::get_buildType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b2714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                               "get_buildType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_buildVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(
    &::GlobalNamespace::PS5SharedPackageSKUsSO::get_buildVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b271c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                               "get_buildVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_latestBuildVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(
    &::GlobalNamespace::PS5SharedPackageSKUsSO::get_latestBuildVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b2724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                               "get_latestBuildVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.GetPrimarySKU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO> (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(
    &::GlobalNamespace::PS5SharedPackageSKUsSO::GetPrimarySKU)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26b272c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                               "GetPrimarySKU", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&::GlobalNamespace::PS5SharedPackageSKUsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b2750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*>&
GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__availableSKUs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableSKUs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> const&
GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__availableSKUs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableSKUs;
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_set__availableSKUs(
    ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____availableSKUs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__conceptId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conceptId;
}
constexpr ::StringW const& GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__conceptId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conceptId;
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_set__conceptId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____conceptId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType& GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__buildType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildType;
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType const& GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__buildType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildType;
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_set__buildType(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buildType = value;
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*& GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__buildVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildVersion;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*> const&
GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__buildVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildVersion;
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_set__buildVersion(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buildVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*& GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__latestBuildVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestBuildVersion;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*> const&
GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_get__latestBuildVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestBuildVersion;
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__cordl_internal_set__latestBuildVersion(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____latestBuildVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*> GlobalNamespace::PS5SharedPackageSKUsSO::get_availableSKUs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                             "get_availableSKUs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, ::Array<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>>*>, false>(
      this, ___internal_method);
}
inline ::StringW GlobalNamespace::PS5SharedPackageSKUsSO::get_conceptId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(), "get_conceptId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType GlobalNamespace::PS5SharedPackageSKUsSO::get_buildType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(), "get_buildType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* GlobalNamespace::PS5SharedPackageSKUsSO::get_buildVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                             "get_buildVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* GlobalNamespace::PS5SharedPackageSKUsSO::get_latestBuildVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                                                                             "get_latestBuildVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO> GlobalNamespace::PS5SharedPackageSKUsSO::GetPrimarySKU() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(), "GetPrimarySKU",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PS5PublisherSKUSettingsSO>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PS5SharedPackageSKUsSO* GlobalNamespace::PS5SharedPackageSKUsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PS5SharedPackageSKUsSO*>());
}
inline void GlobalNamespace::PS5SharedPackageSKUsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO::PS5SharedPackageSKUsSO() {}
