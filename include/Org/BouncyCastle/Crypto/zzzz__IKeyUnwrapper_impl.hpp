#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IKeyUnwrapper.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyUnwrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IKeyUnwrapper.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::IKeyUnwrapper::*)()>(
    &::Org::BouncyCastle::Crypto::IKeyUnwrapper::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IKeyUnwrapper.Unwrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IBlockResult* (
    ::Org::BouncyCastle::Crypto::IKeyUnwrapper::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::IKeyUnwrapper::Unwrap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Object* Org::BouncyCastle::Crypto::IKeyUnwrapper::get_AlgorithmDetails() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBlockResult* Org::BouncyCastle::Crypto::IKeyUnwrapper::Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> cipherText, int32_t offset, int32_t length) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::IKeyUnwrapper*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBlockResult*, false>(this, ___internal_method, cipherText, offset, length);
}
