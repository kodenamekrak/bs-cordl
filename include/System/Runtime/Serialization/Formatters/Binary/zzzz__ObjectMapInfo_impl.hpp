#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectMapInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::*)(
    int32_t, int32_t, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24c71dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo.isCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::*)(
    int32_t, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x24c70a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>::get(), "isCompatible", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objectId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__set_objectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___objectId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_numMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___numMembers;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_numMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___numMembers;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__set_numMembers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___numMembers = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_memberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___memberTypes;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_memberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___memberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*
System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::New_ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                            ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>(objectId, numMembers, memberNames, memberTypes));
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::_ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                     ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectId, numMembers, memberNames, memberTypes);
}
inline bool System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible(int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                            ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*>::get(), "isCompatible", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, numMembers, memberNames, memberTypes);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::ObjectMapInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif