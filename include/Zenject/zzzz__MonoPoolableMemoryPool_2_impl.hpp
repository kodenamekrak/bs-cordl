#pragma once
// IWYU pragma private; include "Zenject/MonoPoolableMemoryPool_2.hpp"
#include "Zenject/zzzz__MemoryPool_2_impl.hpp"
#include "Zenject/zzzz__MonoPoolableMemoryPool_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TValue> constexpr ::UnityW<::UnityEngine::Transform>& Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::__cordl_internal_get__originalParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalParent;
}
template <typename TParam1, typename TValue> constexpr ::UnityW<::UnityEngine::Transform> const& Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::__cordl_internal_get__originalParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalParent;
}
template <typename TParam1, typename TValue> constexpr void Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::__cordl_internal_set__originalParent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____originalParent, value);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::OnCreated(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::OnDestroyed(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::OnDespawned(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::Reinitialize(TParam1 p1, TValue item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, item);
}
template <typename TParam1, typename TValue> inline ::System::Object* Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TParam1, typename TValue> inline ::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>* Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TValue> constexpr ::Zenject::MonoPoolableMemoryPool_2<TParam1, TValue>::MonoPoolableMemoryPool_2() {}
