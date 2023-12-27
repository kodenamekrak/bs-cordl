#pragma once
#include "Zenject/zzzz__MemoryPool_1_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
template <typename TValue> constexpr ::UnityEngine::Transform*& Zenject::MonoMemoryPool_1<TValue>::__get__originalParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalParent;
}
template <typename TValue> constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& Zenject::MonoMemoryPool_1<TValue>::__get__originalParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalParent;
}
template <typename TValue> constexpr void Zenject::MonoMemoryPool_1<TValue>::__set__originalParent(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalParent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> inline ::Zenject::MonoMemoryPool_1<TValue>* Zenject::MonoMemoryPool_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MonoMemoryPool_1<TValue>*>());
}
template <typename TValue> inline void Zenject::MonoMemoryPool_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoMemoryPool_1<TValue>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::MonoMemoryPool_1<TValue>::OnCreated(TValue item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoMemoryPool_1<TValue>*>::get(), "OnCreated", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline void Zenject::MonoMemoryPool_1<TValue>::OnDestroyed(TValue item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoMemoryPool_1<TValue>*>::get(), "OnDestroyed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline void Zenject::MonoMemoryPool_1<TValue>::OnSpawned(TValue item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoMemoryPool_1<TValue>*>::get(), "OnSpawned", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline void Zenject::MonoMemoryPool_1<TValue>::OnDespawned(TValue item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoMemoryPool_1<TValue>*>::get(), "OnDespawned", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TValue> inline ::System::Object* Zenject::MonoMemoryPool_1<TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoMemoryPool_1<TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::MonoMemoryPool_1<TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoMemoryPool_1<TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::MonoMemoryPool_1<TValue>::MonoMemoryPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif