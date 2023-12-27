#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::__ScoreMultiplierCounter__MultiplierEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::__ScoreMultiplierCounter__MultiplierEventType() {}
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::Positive{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::Neutral{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType::Negative{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter.get_multiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ScoreMultiplierCounter::*)()>(
    &::GlobalNamespace::ScoreMultiplierCounter::get_multiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2267dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(),
                                                                               "get_multiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter.get_normalizedProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ScoreMultiplierCounter::*)()>(
    &::GlobalNamespace::ScoreMultiplierCounter::get_normalizedProgress)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2267570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(),
                                                                               "get_normalizedProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreMultiplierCounter::*)()>(&::GlobalNamespace::ScoreMultiplierCounter::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2267dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter.ProcessMultiplierEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ScoreMultiplierCounter::*)(
    ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType)>(&::GlobalNamespace::ScoreMultiplierCounter::ProcessMultiplierEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22674cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), "ProcessMultiplierEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMultiplierCounter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreMultiplierCounter::*)()>(&::GlobalNamespace::ScoreMultiplierCounter::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2267da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ScoreMultiplierCounter::__get__multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplier;
}
constexpr int32_t const& GlobalNamespace::ScoreMultiplierCounter::__get__multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplier;
}
constexpr void GlobalNamespace::ScoreMultiplierCounter::__set__multiplier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____multiplier = value;
}
constexpr int32_t& GlobalNamespace::ScoreMultiplierCounter::__get__multiplierIncreaseProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplierIncreaseProgress;
}
constexpr int32_t const& GlobalNamespace::ScoreMultiplierCounter::__get__multiplierIncreaseProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplierIncreaseProgress;
}
constexpr void GlobalNamespace::ScoreMultiplierCounter::__set__multiplierIncreaseProgress(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____multiplierIncreaseProgress = value;
}
constexpr int32_t& GlobalNamespace::ScoreMultiplierCounter::__get__multiplierIncreaseMaxProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplierIncreaseMaxProgress;
}
constexpr int32_t const& GlobalNamespace::ScoreMultiplierCounter::__get__multiplierIncreaseMaxProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplierIncreaseMaxProgress;
}
constexpr void GlobalNamespace::ScoreMultiplierCounter::__set__multiplierIncreaseMaxProgress(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____multiplierIncreaseMaxProgress = value;
}
inline int32_t GlobalNamespace::ScoreMultiplierCounter::get_multiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(),
                                                                             "get_multiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::ScoreMultiplierCounter::get_normalizedProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(),
                                                                             "get_normalizedProgress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreMultiplierCounter::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ScoreMultiplierCounter::ProcessMultiplierEvent(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType multiplierEventType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), "ProcessMultiplierEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, multiplierEventType);
}
inline ::GlobalNamespace::ScoreMultiplierCounter* GlobalNamespace::ScoreMultiplierCounter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ScoreMultiplierCounter*>());
}
inline void GlobalNamespace::ScoreMultiplierCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreMultiplierCounter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreMultiplierCounter::ScoreMultiplierCounter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif