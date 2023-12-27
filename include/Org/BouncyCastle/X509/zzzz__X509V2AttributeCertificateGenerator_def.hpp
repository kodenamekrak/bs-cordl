#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509V2AttributeCertificateGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class V2AttributeCertificateInfoGenerator;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V2AttributeCertificateGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator);
// Type: Org.BouncyCastle.X509::X509V2AttributeCertificateGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1872))
// CS Name: ::Org.BouncyCastle.X509::X509V2AttributeCertificateGenerator*
class CORDL_TYPE X509V2AttributeCertificateGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field extGenerator, offset 0x10, size 0x8
  __declspec(property(get = __get_extGenerator, put = __set_extGenerator))::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* extGenerator;

  /// @brief Field acInfoGen, offset 0x18, size 0x8
  __declspec(property(get = __get_acInfoGen, put = __set_acInfoGen))::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* acInfoGen;

  /// @brief Field sigOID, offset 0x20, size 0x8
  __declspec(property(get = __get_sigOID, put = __set_sigOID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOID;

  /// @brief Field sigAlgId, offset 0x28, size 0x8
  __declspec(property(get = __get_sigAlgId, put = __set_sigAlgId))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;

  /// @brief Field signatureAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __get_signatureAlgorithm, put = __set_signatureAlgorithm))::StringW signatureAlgorithm;

  __declspec(property(get = get_SignatureAlgNames))::System::Collections::IEnumerable* SignatureAlgNames;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& __get_extGenerator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*> const& __get_extGenerator() const;

  constexpr void __set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*& __get_acInfoGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*> const& __get_acInfoGen() const;

  constexpr void __set_acInfoGen(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_sigOID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_sigOID() const;

  constexpr void __set_sigOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_sigAlgId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_sigAlgId() const;

  constexpr void __set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::StringW& __get_signatureAlgorithm();

  constexpr ::StringW const& __get_signatureAlgorithm() const;

  constexpr void __set_signatureAlgorithm(::StringW value);

  static inline ::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator* New_ctor();

  /// @brief Method .ctor addr 0x11843ac size 0x9c virtual false final false
  inline void _ctor();

  /// @brief Method Reset addr 0x1184448 size 0x6c virtual false final false
  inline void Reset();

  /// @brief Method SetHolder addr 0x11844b4 size 0x24 virtual false final false
  inline void SetHolder(::Org::BouncyCastle::X509::AttributeCertificateHolder* holder);

  /// @brief Method SetIssuer addr 0x11844d8 size 0x2c virtual false final false
  inline void SetIssuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer* issuer);

  /// @brief Method SetSerialNumber addr 0x1184504 size 0x78 virtual false final false
  inline void SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method SetNotBefore addr 0x118457c size 0x78 virtual false final false
  inline void SetNotBefore(::System::DateTime date);

  /// @brief Method SetNotAfter addr 0x11845f4 size 0x78 virtual false final false
  inline void SetNotAfter(::System::DateTime date);

  /// @brief Method SetSignatureAlgorithm addr 0x118466c size 0x15c virtual false final false
  inline void SetSignatureAlgorithm(::StringW signatureAlgorithm);

  /// @brief Method AddAttribute addr 0x11847c8 size 0x44 virtual false final false
  inline void AddAttribute(::Org::BouncyCastle::X509::X509Attribute* attribute);

  /// @brief Method SetIssuerUniqueId addr 0x118480c size 0x44 virtual false final false
  inline void SetIssuerUniqueId(::ArrayW<bool, ::Array<bool>*> iui);

  /// @brief Method AddExtension addr 0x1184850 size 0x98 virtual false final false
  inline void AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);

  /// @brief Method AddExtension addr 0x11848e8 size 0x98 virtual false final false
  inline void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue);

  /// @brief Method Generate addr 0x1184980 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method Generate addr 0x1184988 size 0x84 virtual false final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Generate addr 0x1184a0c size 0x57c virtual false final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory);

  /// @brief Method get_SignatureAlgNames addr 0x1184f88 size 0x4c virtual false final false
  inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

  // Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificateGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509V2AttributeCertificateGenerator(X509V2AttributeCertificateGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509V2AttributeCertificateGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509V2AttributeCertificateGenerator(X509V2AttributeCertificateGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509V2AttributeCertificateGenerator();

public:
  /// @brief Field extGenerator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* ___extGenerator;

  /// @brief Field acInfoGen, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* ___acInfoGen;

  /// @brief Field sigOID, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___sigOID;

  /// @brief Field sigAlgId, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgId;

  /// @brief Field signatureAlgorithm, offset: 0x30, size: 0x8, def value: None
  ::StringW ___signatureAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator*, "Org.BouncyCastle.X509", "X509V2AttributeCertificateGenerator");