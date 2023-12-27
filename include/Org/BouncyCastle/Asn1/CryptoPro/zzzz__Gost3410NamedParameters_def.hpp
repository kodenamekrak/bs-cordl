#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Gost3410NamedParameters)
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410ParamSetParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410NamedParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters);
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost3410NamedParameters
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(129))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::Gost3410NamedParameters*
class CORDL_TYPE Gost3410NamedParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field objIds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_objIds, put = setStaticF_objIds))::System::Collections::IDictionary* objIds;

  /// @brief Field parameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_parameters, put = setStaticF_parameters))::System::Collections::IDictionary* parameters;

  /// @brief Field cryptoProA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptoProA, put = setStaticF_cryptoProA))::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProA;

  /// @brief Field cryptoProB, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptoProB, put = setStaticF_cryptoProB))::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProB;

  /// @brief Field cryptoProXchA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cryptoProXchA, put = setStaticF_cryptoProXchA))::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProXchA;

  static inline void setStaticF_objIds(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_objIds();

  static inline void setStaticF_parameters(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_parameters();

  static inline void setStaticF_cryptoProA(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* getStaticF_cryptoProA();

  static inline void setStaticF_cryptoProB(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* getStaticF_cryptoProB();

  static inline void setStaticF_cryptoProXchA(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* getStaticF_cryptoProXchA();

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters* New_ctor();

  /// @brief Method .ctor addr 0xe8cd10 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method GetByOid addr 0xe8d46c size 0x11c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method get_Names addr 0xe8d588 size 0x10c virtual false final false
  static inline ::System::Collections::IEnumerable* get_Names();

  /// @brief Method GetByName addr 0xe8d694 size 0x1ec virtual false final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetByName(::StringW name);

  /// @brief Method GetOid addr 0xe8d880 size 0x11c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410NamedParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410NamedParameters(Gost3410NamedParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410NamedParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410NamedParameters(Gost3410NamedParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410NamedParameters();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410NamedParameters");