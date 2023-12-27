#pragma once
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_impl.hpp"
#include "Zenject/zzzz__AddToNewGameObjectComponentProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
//  Writing Method size for method: ::Zenject::AddToNewGameObjectComponentProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::AddToNewGameObjectComponentProvider::*)(
    ::Zenject::DiContainer*, ::System::Type*, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*, ::Zenject::GameObjectCreationParameters*, ::System::Object*,
    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*)>(&::Zenject::AddToNewGameObjectComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f06bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToNewGameObjectComponentProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToNewGameObjectComponentProvider.get_ShouldToggleActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::AddToNewGameObjectComponentProvider::*)()>(
    &::Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f06bf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToNewGameObjectComponentProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToNewGameObjectComponentProvider*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AddToNewGameObjectComponentProvider.GetGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::Zenject::AddToNewGameObjectComponentProvider::*)(::Zenject::InjectContext*)>(
    &::Zenject::AddToNewGameObjectComponentProvider::GetGameObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f06bf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToNewGameObjectComponentProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToNewGameObjectComponentProvider*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::Zenject::GameObjectCreationParameters*& Zenject::AddToNewGameObjectComponentProvider::__get__gameObjectBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameObjectBindInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& Zenject::AddToNewGameObjectComponentProvider::__get__gameObjectBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameObjectBindInfo;
}
constexpr void Zenject::AddToNewGameObjectComponentProvider::__set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObjectBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::AddToNewGameObjectComponentProvider* Zenject::AddToNewGameObjectComponentProvider::New_ctor(::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                                                              ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                                                              ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                                              ::System::Object* concreteIdentifier,
                                                                                                              ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::AddToNewGameObjectComponentProvider*>(container, componentType, extraArguments, gameObjectBindInfo, concreteIdentifier, instantiateCallback));
}
inline void Zenject::AddToNewGameObjectComponentProvider::_ctor(::Zenject::DiContainer* container, ::System::Type* componentType,
                                                                ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                                                                ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Object* concreteIdentifier,
                                                                ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToNewGameObjectComponentProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::GameObjectCreationParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, componentType, extraArguments, gameObjectBindInfo, concreteIdentifier, instantiateCallback);
}
inline bool Zenject::AddToNewGameObjectComponentProvider::get_ShouldToggleActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToNewGameObjectComponentProvider*>::get(),
                                                                             "get_ShouldToggleActive", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* Zenject::AddToNewGameObjectComponentProvider::GetGameObject(::Zenject::InjectContext* context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::AddToNewGameObjectComponentProvider*>::get(), "GetGameObject", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::Zenject::AddToNewGameObjectComponentProvider::AddToNewGameObjectComponentProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif