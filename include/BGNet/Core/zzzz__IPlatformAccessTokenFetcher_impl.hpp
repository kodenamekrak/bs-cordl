#pragma once
// IWYU pragma private; include "BGNet/Core/IPlatformAccessTokenFetcher.hpp"
#include "BGNet/Core/zzzz__IPlatformAccessTokenFetcher_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::BGNet::Core::IPlatformAccessTokenFetcher.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* (
    ::BGNet::Core::IPlatformAccessTokenFetcher::*)(::System::Threading::CancellationToken, bool)>(&::BGNet::Core::IPlatformAccessTokenFetcher::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IPlatformAccessTokenFetcher*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IPlatformAccessTokenFetcher*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*
BGNet::Core::IPlatformAccessTokenFetcher::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::IPlatformAccessTokenFetcher*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>*, false>(this, ___internal_method, cancellationToken, skipCache);
}
