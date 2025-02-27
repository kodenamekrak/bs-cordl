#pragma once
// IWYU pragma private; include "BGLib/AsyncInitialization/AddressablesLoader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AsyncInitialization/zzzz__AddressablesLoader_def.hpp"
#include "BGLib/AsyncInitialization/zzzz__AddressablesLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceGameObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TInstantiate, typename TReturn> inline void BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TInstantiate, typename TReturn>
inline void BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TInstantiate, typename TReturn>
constexpr BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename TInstantiate, typename TReturn>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn>", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefab", ty:
// "::UnityEngine::AddressableAssets::AssetReferenceGameObject*", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}") }]
template <typename TInstantiate, typename TReturn>
constexpr ::BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TReturn> __t__builder, ::UnityEngine::AddressableAssets::AssetReferenceGameObject* prefab,
    ::Zenject::DiContainer* container, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->prefab = prefab;
  this->container = container;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename TInstantiate, typename TReturn>
constexpr ::BGLib::AsyncInitialization::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2<TInstantiate, TReturn>::AddressablesLoader__InstantiateFromAddressableToContainer_d__0_2() {}
template <typename TInstantiate, typename TReturn>
inline ::System::Threading::Tasks::Task_1<TReturn>*
BGLib::AsyncInitialization::AddressablesLoader::InstantiateFromAddressableToContainer(::UnityEngine::AddressableAssets::AssetReferenceGameObject* prefab, ::Zenject::DiContainer* container) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AsyncInitialization::AddressablesLoader*>::get(), "InstantiateFromAddressableToContainer",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstantiate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TReturn>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AssetReferenceGameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstantiate>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TReturn>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TReturn>*, false>(nullptr, ___internal_method, prefab, container);
}
// Ctor Parameters []
constexpr ::BGLib::AsyncInitialization::AddressablesLoader::AddressablesLoader() {}
