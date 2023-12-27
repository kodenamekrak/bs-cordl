#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__SettingsBindableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::SettingsBindableAttribute::*)(bool)>(
    &::System::ComponentModel::SettingsBindableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x291820c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.get_Bindable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::SettingsBindableAttribute::*)()>(
    &::System::ComponentModel::SettingsBindableAttribute::get_Bindable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2918234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(),
                                                                               "get_Bindable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::SettingsBindableAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::SettingsBindableAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x291823c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::SettingsBindableAttribute::*)()>(
    &::System::ComponentModel::SettingsBindableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29182c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(), 2));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::SettingsBindableAttribute::__get__Bindable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Bindable_k__BackingField;
}
constexpr bool const& System::ComponentModel::SettingsBindableAttribute::__get__Bindable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Bindable_k__BackingField;
}
constexpr void System::ComponentModel::SettingsBindableAttribute::__set__Bindable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____Bindable_k__BackingField = value;
}
inline void System::ComponentModel::SettingsBindableAttribute::setStaticF_Yes(::System::ComponentModel::SettingsBindableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::SettingsBindableAttribute*, "Yes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get>(
      std::forward<::System::ComponentModel::SettingsBindableAttribute*>(value));
}
inline ::System::ComponentModel::SettingsBindableAttribute* System::ComponentModel::SettingsBindableAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::SettingsBindableAttribute*, "Yes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get>();
}
inline void System::ComponentModel::SettingsBindableAttribute::setStaticF_No(::System::ComponentModel::SettingsBindableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::SettingsBindableAttribute*, "No",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get>(
      std::forward<::System::ComponentModel::SettingsBindableAttribute*>(value));
}
inline ::System::ComponentModel::SettingsBindableAttribute* System::ComponentModel::SettingsBindableAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::SettingsBindableAttribute*, "No",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get>();
}
inline ::System::ComponentModel::SettingsBindableAttribute* System::ComponentModel::SettingsBindableAttribute::New_ctor(bool bindable) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::SettingsBindableAttribute*>(bindable));
}
inline void System::ComponentModel::SettingsBindableAttribute::_ctor(bool bindable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindable);
}
inline bool System::ComponentModel::SettingsBindableAttribute::get_Bindable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(),
                                                                             "get_Bindable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::SettingsBindableAttribute::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::SettingsBindableAttribute::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute*>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::SettingsBindableAttribute::SettingsBindableAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif