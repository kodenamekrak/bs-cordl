#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__ExpandableObjectConverter_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ExpandableObjectConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ExpandableObjectConverter::*)()>(
    &::System::ComponentModel::ExpandableObjectConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2910004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ExpandableObjectConverter*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExpandableObjectConverter.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::ExpandableObjectConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::ExpandableObjectConverter::GetProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x291000c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ExpandableObjectConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ExpandableObjectConverter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExpandableObjectConverter.GetPropertiesSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ExpandableObjectConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(
    &::System::ComponentModel::ExpandableObjectConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2910074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ExpandableObjectConverter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ExpandableObjectConverter*>::get(), 11));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::ExpandableObjectConverter* System::ComponentModel::ExpandableObjectConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::ExpandableObjectConverter*>());
}
inline void System::ComponentModel::ExpandableObjectConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ExpandableObjectConverter*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::ExpandableObjectConverter::GetProperties(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Object* value,
                                                                 ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ExpandableObjectConverter*>::get(), "GetProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, context, value, attributes);
}
inline bool System::ComponentModel::ExpandableObjectConverter::GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ExpandableObjectConverter*>::get(), "GetPropertiesSupported", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ExpandableObjectConverter::ExpandableObjectConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif