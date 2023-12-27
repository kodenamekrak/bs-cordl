#pragma once
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "Zenject/zzzz__ExecutionOrderInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::ExecutionOrderInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ExecutionOrderInstaller::*)(::System::Collections::Generic::List_1<::System::Type*>*)>(
    &::Zenject::ExecutionOrderInstaller::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f1e0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ExecutionOrderInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ExecutionOrderInstaller::*)()>(&::Zenject::ExecutionOrderInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2f1e10c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ExecutionOrderInstaller.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ExecutionOrderInstaller::__zenCreate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2f1e270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ExecutionOrderInstaller.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ExecutionOrderInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2f1e334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Zenject::ExecutionOrderInstaller::__get__typeOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____typeOrder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& Zenject::ExecutionOrderInstaller::__get__typeOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____typeOrder;
}
constexpr void Zenject::ExecutionOrderInstaller::__set__typeOrder(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeOrder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::ExecutionOrderInstaller* Zenject::ExecutionOrderInstaller::New_ctor(::System::Collections::Generic::List_1<::System::Type*>* typeOrder) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ExecutionOrderInstaller*>(typeOrder));
}
inline void Zenject::ExecutionOrderInstaller::_ctor(::System::Collections::Generic::List_1<::System::Type*>* typeOrder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeOrder);
}
inline void Zenject::ExecutionOrderInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(), "InstallBindings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::ExecutionOrderInstaller::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ExecutionOrderInstaller::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ExecutionOrderInstaller*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::ExecutionOrderInstaller::ExecutionOrderInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif