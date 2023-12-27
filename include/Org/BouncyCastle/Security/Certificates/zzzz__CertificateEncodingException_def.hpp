#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertificateEncodingException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateEncodingException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::Certificates::CertificateEncodingException);
// Type: Org.BouncyCastle.Security.Certificates::CertificateEncodingException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1734))
// CS Name: ::Org.BouncyCastle.Security.Certificates::CertificateEncodingException*
class CORDL_TYPE CertificateEncodingException : public ::Org::BouncyCastle::Security::Certificates::CertificateException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException* New_ctor();

  /// @brief Method .ctor addr 0x111d9ac size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException* New_ctor(::StringW msg);

  /// @brief Method .ctor addr 0x111d9b4 size 0x8 virtual false final false
  inline void _ctor(::StringW msg);

  static inline ::Org::BouncyCastle::Security::Certificates::CertificateEncodingException* New_ctor(::StringW msg, ::System::Exception* e);

  /// @brief Method .ctor addr 0x111d9bc size 0x8 virtual false final false
  inline void _ctor(::StringW msg, ::System::Exception* e);

  // Ctor Parameters [CppParam { name: "", ty: "CertificateEncodingException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateEncodingException(CertificateEncodingException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateEncodingException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateEncodingException(CertificateEncodingException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateEncodingException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::Certificates::CertificateEncodingException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CertificateEncodingException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CertificateEncodingException*, "Org.BouncyCastle.Security.Certificates", "CertificateEncodingException");