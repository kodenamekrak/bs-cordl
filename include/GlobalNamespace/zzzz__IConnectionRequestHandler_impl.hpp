#pragma once
// IWYU pragma private; include "GlobalNamespace/IConnectionRequestHandler.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IConnectionRequestHandler.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IConnectionRequestHandler::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool)>(&::GlobalNamespace::IConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectionRequestHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectionRequestHandler*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IConnectionRequestHandler.ValidateConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IConnectionRequestHandler::*)(
    ::LiteNetLib::Utils::NetDataReader*, ::ByRef<::StringW>, ::ByRef<::StringW>, ::ByRef<bool>)>(&::GlobalNamespace::IConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectionRequestHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectionRequestHandler*>::get(), 1));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IConnectionRequestHandler::GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectionRequestHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, userId, userName, isConnectionOwner);
}
inline bool GlobalNamespace::IConnectionRequestHandler::ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::ByRef<::StringW> userId, ::ByRef<::StringW> userName,
                                                                                  ::ByRef<bool> isConnectionOwner) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectionRequestHandler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, userId, userName, isConnectionOwner);
}
