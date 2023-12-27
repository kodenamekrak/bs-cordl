#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FxBaseData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FxBaseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FxBaseData::*)(float_t, bool)>(&::GlobalNamespace::FxBaseData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x233aeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBaseData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FxBaseData::__get_beat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beat;
}
constexpr float_t const& GlobalNamespace::FxBaseData::__get_beat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___beat;
}
constexpr void GlobalNamespace::FxBaseData::__set_beat(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___beat = value;
}
constexpr bool& GlobalNamespace::FxBaseData::__get_usePreviousEventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___usePreviousEventValue;
}
constexpr bool const& GlobalNamespace::FxBaseData::__get_usePreviousEventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___usePreviousEventValue;
}
constexpr void GlobalNamespace::FxBaseData::__set_usePreviousEventValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___usePreviousEventValue = value;
}
inline ::GlobalNamespace::FxBaseData* GlobalNamespace::FxBaseData::New_ctor(float_t beat, bool usePreviousEventValue) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FxBaseData*>(beat, usePreviousEventValue));
}
inline void GlobalNamespace::FxBaseData::_ctor(float_t beat, bool usePreviousEventValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FxBaseData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, usePreviousEventValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FxBaseData::FxBaseData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif