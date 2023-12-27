#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__BrowsableAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::BrowsableAttribute::*)(bool)>(&::System::ComponentModel::BrowsableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29039d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute.get_Browsable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::BrowsableAttribute::*)()>(
    &::System::ComponentModel::BrowsableAttribute::get_Browsable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29039f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(),
                                                                               "get_Browsable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::BrowsableAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::BrowsableAttribute::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2903a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::BrowsableAttribute::*)()>(
    &::System::ComponentModel::BrowsableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2903ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BrowsableAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::BrowsableAttribute::*)()>(
    &::System::ComponentModel::BrowsableAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2903b04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(), 6));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::BrowsableAttribute::__get__Browsable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Browsable_k__BackingField;
}
constexpr bool const& System::ComponentModel::BrowsableAttribute::__get__Browsable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Browsable_k__BackingField;
}
constexpr void System::ComponentModel::BrowsableAttribute::__set__Browsable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____Browsable_k__BackingField = value;
}
inline void System::ComponentModel::BrowsableAttribute::setStaticF_Yes(::System::ComponentModel::BrowsableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::BrowsableAttribute*, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get>(
      std::forward<::System::ComponentModel::BrowsableAttribute*>(value));
}
inline ::System::ComponentModel::BrowsableAttribute* System::ComponentModel::BrowsableAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::BrowsableAttribute*, "Yes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get>();
}
inline void System::ComponentModel::BrowsableAttribute::setStaticF_No(::System::ComponentModel::BrowsableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::BrowsableAttribute*, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get>(
      std::forward<::System::ComponentModel::BrowsableAttribute*>(value));
}
inline ::System::ComponentModel::BrowsableAttribute* System::ComponentModel::BrowsableAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::BrowsableAttribute*, "No",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get>();
}
inline void System::ComponentModel::BrowsableAttribute::setStaticF_Default(::System::ComponentModel::BrowsableAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::BrowsableAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get>(
      std::forward<::System::ComponentModel::BrowsableAttribute*>(value));
}
inline ::System::ComponentModel::BrowsableAttribute* System::ComponentModel::BrowsableAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::BrowsableAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get>();
}
inline ::System::ComponentModel::BrowsableAttribute* System::ComponentModel::BrowsableAttribute::New_ctor(bool browsable) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::BrowsableAttribute*>(browsable));
}
inline void System::ComponentModel::BrowsableAttribute::_ctor(bool browsable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, browsable);
}
inline bool System::ComponentModel::BrowsableAttribute::get_Browsable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(),
                                                                             "get_Browsable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::BrowsableAttribute::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::BrowsableAttribute::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::ComponentModel::BrowsableAttribute::IsDefaultAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::BrowsableAttribute*>::get(),
                                                                             "IsDefaultAttribute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::BrowsableAttribute::BrowsableAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif