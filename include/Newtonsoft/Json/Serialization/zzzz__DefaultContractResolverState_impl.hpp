#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolverState_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ResolverContractKey_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PropertyNameTable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultContractResolverState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultContractResolverState::*)()>(
    &::Newtonsoft::Json::Serialization::DefaultContractResolverState::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x266edb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultContractResolverState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>*&
Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_ContractCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ContractCache;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>*> const&
Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_ContractCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ContractCache;
}
constexpr void Newtonsoft::Json::Serialization::DefaultContractResolverState::__set_ContractCache(
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::ResolverContractKey, ::Newtonsoft::Json::Serialization::JsonContract*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContractCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Utilities::PropertyNameTable*& Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_NameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___NameTable;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::PropertyNameTable*> const& Newtonsoft::Json::Serialization::DefaultContractResolverState::__get_NameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___NameTable;
}
constexpr void Newtonsoft::Json::Serialization::DefaultContractResolverState::__set_NameTable(::Newtonsoft::Json::Utilities::PropertyNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Serialization::DefaultContractResolverState* Newtonsoft::Json::Serialization::DefaultContractResolverState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::DefaultContractResolverState*>());
}
inline void Newtonsoft::Json::Serialization::DefaultContractResolverState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultContractResolverState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DefaultContractResolverState::DefaultContractResolverState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif