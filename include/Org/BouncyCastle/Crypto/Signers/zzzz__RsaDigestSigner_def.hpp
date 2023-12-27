#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaDigestSigner)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class RsaDigestSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner);
// Type: Org.BouncyCastle.Crypto.Signers::RsaDigestSigner
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1152))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::RsaDigestSigner*
class CORDL_TYPE RsaDigestSigner : public ::System::Object {
public:
  // Declarations
  /// @brief Field rsaEngine, offset 0x10, size 0x8
  __declspec(property(get = __get_rsaEngine, put = __set_rsaEngine))::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine;

  /// @brief Field algId, offset 0x18, size 0x8
  __declspec(property(get = __get_algId, put = __set_algId))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId;

  /// @brief Field digest, offset 0x20, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field forSigning, offset 0x28, size 0x1
  __declspec(property(get = __get_forSigning, put = __set_forSigning)) bool forSigning;

  /// @brief Field oidMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_oidMap, put = setStaticF_oidMap))::System::Collections::IDictionary* oidMap;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __get_rsaEngine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __get_rsaEngine() const;

  constexpr void __set_rsaEngine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algId() const;

  constexpr void __set_algId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr bool& __get_forSigning();

  constexpr bool const& __get_forSigning() const;

  constexpr void __set_forSigning(bool value);

  static inline void setStaticF_oidMap(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_oidMap();

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0xf56750 size 0x1ac virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method .ctor addr 0xf568fc size 0xb0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  /// @brief Method .ctor addr 0xf569ac size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  /// @brief Method .ctor addr 0xf56ab4 size 0xc0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  /// @brief Method .ctor addr 0xf56a28 size 0x8c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IRsa* rsa, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  static inline ::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  /// @brief Method .ctor addr 0xf56b74 size 0x90 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId);

  /// @brief Method get_AlgorithmName addr 0xf56c04 size 0xc0 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xf56cc4 size 0x228 virtual true final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Update addr 0xf56eec size 0xac virtual true final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xf56f98 size 0xc4 virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method GenerateSignature addr 0xf5705c size 0x230 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method VerifySignature addr 0xf57314 size 0x428 virtual true final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Reset addr 0xf5773c size 0xa4 virtual true final false
  inline void Reset();

  /// @brief Method DerEncode addr 0xf5728c size 0x88 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DerEncode(::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  // Ctor Parameters [CppParam { name: "", ty: "RsaDigestSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaDigestSigner(RsaDigestSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaDigestSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaDigestSigner(RsaDigestSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaDigestSigner();

public:
  /// @brief Field rsaEngine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___rsaEngine;

  /// @brief Field algId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algId;

  /// @brief Field digest, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field forSigning, offset: 0x28, size: 0x1, def value: None
  bool ___forSigning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*, "Org.BouncyCastle.Crypto.Signers", "RsaDigestSigner");