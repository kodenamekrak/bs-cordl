#pragma once
// IWYU pragma private; include "Zenject/IFactory_3.hpp"
#include "Zenject/zzzz__IFactory_impl.hpp"
#include "Zenject/zzzz__IFactory_3_def.hpp"
template <typename TParam1, typename TParam2, typename TValue> inline TValue Zenject::IFactory_3<TParam1, TParam2, TValue>::Create(TParam1 param1, TParam2 param2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_3<TParam1, TParam2, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param1, param2);
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TValue> constexpr Zenject::IFactory_3<TParam1, TParam2, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TValue> constexpr ::Zenject::IFactory* Zenject::IFactory_3<TParam1, TParam2, TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
