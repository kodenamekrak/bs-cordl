#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspRequiredAttributeAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspRequiredAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2eba7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute.get_Attribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)()>(
    &::JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eba818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute*>::get(),
                                                                               "get_Attribute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute.set_Attribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eba820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute*>::get(), "set_Attribute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::AspRequiredAttributeAttribute::__get__Attribute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Attribute_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::AspRequiredAttributeAttribute::__get__Attribute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Attribute_k__BackingField;
}
constexpr void JetBrains::Annotations::AspRequiredAttributeAttribute::__set__Attribute_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Attribute_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::JetBrains::Annotations::AspRequiredAttributeAttribute* JetBrains::Annotations::AspRequiredAttributeAttribute::New_ctor(::StringW attribute) {
  return THROW_UNLESS(::il2cpp_utils::New<::JetBrains::Annotations::AspRequiredAttributeAttribute*>(attribute));
}
inline void JetBrains::Annotations::AspRequiredAttributeAttribute::_ctor(::StringW attribute) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline ::StringW JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute*>::get(),
                                                                             "get_Attribute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute*>::get(), "set_Attribute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspRequiredAttributeAttribute::AspRequiredAttributeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif