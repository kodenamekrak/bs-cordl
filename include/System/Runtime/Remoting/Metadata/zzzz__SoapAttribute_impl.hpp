#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.get_UseAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapAttribute::get_UseAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5c94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.get_XmlNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(
    &::System::Runtime::Remoting::Metadata::SoapAttribute::get_XmlNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5c9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.SetReflectionObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapAttribute::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Metadata::SoapAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5ca4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(), 9));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Remoting::Metadata::SoapAttribute::__get__useAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useAttribute;
}
constexpr bool const& System::Runtime::Remoting::Metadata::SoapAttribute::__get__useAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____useAttribute;
}
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__set__useAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____useAttribute = value;
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapAttribute::__get_ProtXmlNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ProtXmlNamespace;
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapAttribute::__get_ProtXmlNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ProtXmlNamespace;
}
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__set_ProtXmlNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProtXmlNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Remoting::Metadata::SoapAttribute::__get_ReflectInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ReflectInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Metadata::SoapAttribute::__get_ReflectInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ReflectInfo;
}
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__set_ReflectInfo(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReflectInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Metadata::SoapAttribute* System::Runtime::Remoting::Metadata::SoapAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Metadata::SoapAttribute*>());
}
inline void System::Runtime::Remoting::Metadata::SoapAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Metadata::SoapAttribute::get_UseAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                                                             "get_UseAttribute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Metadata::SoapAttribute::get_XmlNamespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                                                             "get_XmlNamespace", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Metadata::SoapAttribute::SetReflectionObject(::System::Object* reflectionObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(), "SetReflectionObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reflectionObject);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Metadata::SoapAttribute::SoapAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif