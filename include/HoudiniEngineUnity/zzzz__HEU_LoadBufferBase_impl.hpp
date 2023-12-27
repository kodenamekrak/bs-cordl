#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferBase.InitializeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferBase::*)(int32_t, ::StringW, bool, bool)>(
    &::HoudiniEngineUnity::HEU_LoadBufferBase::InitializeBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21abbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferBase*>::get(), "InitializeBuffer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferBase::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21abc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferBase*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferBase::__get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____id;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferBase::__get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____id;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferBase::__set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____id = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferBase::__get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____name;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferBase::__get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____name;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferBase::__set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferBase::__get__bInstanced() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bInstanced;
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferBase::__get__bInstanced() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bInstanced;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferBase::__set__bInstanced(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bInstanced = value;
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferBase::__get__bInstancer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bInstancer;
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferBase::__get__bInstancer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bInstancer;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferBase::__set__bInstancer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bInstancer = value;
}
constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput*& HoudiniEngineUnity::HEU_LoadBufferBase::__get__generatedOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____generatedOutput;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeneratedOutput*> const& HoudiniEngineUnity::HEU_LoadBufferBase::__get__generatedOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____generatedOutput;
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferBase::__set__generatedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____generatedOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_LoadBufferBase::InitializeBuffer(int32_t id, ::StringW name, bool bInstanced, bool bInstancer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferBase*>::get(), "InitializeBuffer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, name, bInstanced, bInstancer);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferBase* HoudiniEngineUnity::HEU_LoadBufferBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_LoadBufferBase*>());
}
inline void HoudiniEngineUnity::HEU_LoadBufferBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_LoadBufferBase::HEU_LoadBufferBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif