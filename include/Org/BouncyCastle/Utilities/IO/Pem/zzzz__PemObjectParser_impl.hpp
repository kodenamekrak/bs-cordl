#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/Pem/PemObjectParser.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectParser_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser.ParseObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject*)>(&::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::ParseObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Object* Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser::ParseObject(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj);
}
