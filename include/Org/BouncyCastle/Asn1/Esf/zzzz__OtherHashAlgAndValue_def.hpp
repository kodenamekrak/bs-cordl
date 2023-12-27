#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OtherHashAlgAndValue)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue);
// Type: Org.BouncyCastle.Asn1.Esf::OtherHashAlgAndValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(150))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OtherHashAlgAndValue*
class CORDL_TYPE OtherHashAlgAndValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field hashValue, offset 0x18, size 0x8
  __declspec(property(get = __get_hashValue, put = __set_hashValue))::Org::BouncyCastle::Asn1::Asn1OctetString* hashValue;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_hashAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_hashValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_hashValue() const;

  constexpr void __set_hashValue(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method GetInstance addr 0xe94b44 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe94f1c size 0x210 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> hashValue);

  /// @brief Method .ctor addr 0xe9512c size 0xfc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> hashValue);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                               ::Org::BouncyCastle::Asn1::Asn1OctetString* hashValue);

  /// @brief Method .ctor addr 0xe95228 size 0xa4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* hashValue);

  /// @brief Method get_HashAlgorithm addr 0xe952cc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method GetHashValue addr 0xe94edc size 0x20 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHashValue();

  /// @brief Method ToAsn1Object addr 0xe952d4 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OtherHashAlgAndValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherHashAlgAndValue(OtherHashAlgAndValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherHashAlgAndValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherHashAlgAndValue(OtherHashAlgAndValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherHashAlgAndValue();

public:
  /// @brief Field hashAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field hashValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___hashValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*, "Org.BouncyCastle.Asn1.Esf", "OtherHashAlgAndValue");