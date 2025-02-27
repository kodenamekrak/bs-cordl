#pragma once
// IWYU pragma private; include "Zenject/MonoInstaller_1.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TDerived> inline TDerived Zenject::MonoInstaller_1<TDerived>::InstallFromResource(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, container);
}
template <typename TDerived> inline TDerived Zenject::MonoInstaller_1<TDerived>::InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, resourcePath, container);
}
template <typename TDerived>
inline TDerived Zenject::MonoInstaller_1<TDerived>::InstallFromResource(::Zenject::DiContainer* container, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, container, extraArgs);
}
template <typename TDerived>
inline TDerived Zenject::MonoInstaller_1<TDerived>::InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TDerived, false>(nullptr, ___internal_method, resourcePath, container, extraArgs);
}
template <typename TDerived> inline void Zenject::MonoInstaller_1<TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_1<TDerived>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TDerived> inline ::Zenject::InjectTypeInfo* Zenject::MonoInstaller_1<TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstaller_1<TDerived>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TDerived> inline ::Zenject::MonoInstaller_1<TDerived>* Zenject::MonoInstaller_1<TDerived>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MonoInstaller_1<TDerived>*>());
}
// Ctor Parameters []
template <typename TDerived> constexpr ::Zenject::MonoInstaller_1<TDerived>::MonoInstaller_1() {}
