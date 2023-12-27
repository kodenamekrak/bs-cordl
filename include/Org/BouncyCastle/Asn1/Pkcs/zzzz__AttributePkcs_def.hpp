#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AttributePkcs)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class AttributePkcs;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::AttributePkcs);
// Type: Org.BouncyCastle.Asn1.Pkcs::AttributePkcs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(226))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::AttributePkcs*
class CORDL_TYPE AttributePkcs : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field attrType, offset 0x10, size 0x8
  __declspec(property(get = __get_attrType, put = __set_attrType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType;

  /// @brief Field attrValues, offset 0x18, size 0x8
  __declspec(property(get = __get_attrValues, put = __set_attrValues))::Org::BouncyCastle::Asn1::Asn1Set* attrValues;

  __declspec(property(get = get_AttrType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* AttrType;

  __declspec(property(get = get_AttrValues))::Org::BouncyCastle::Asn1::Asn1Set* AttrValues;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_attrType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_attrType() const;

  constexpr void __set_attrType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_attrValues();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_attrValues() const;

  constexpr void __set_attrValues(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method GetInstance addr 0xf855f4 size 0x154 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::AttributePkcs* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::AttributePkcs* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf85748 size 0x130 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::AttributePkcs* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Set* attrValues);

  /// @brief Method .ctor addr 0xf85878 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Set* attrValues);

  /// @brief Method get_AttrType addr 0xf858a4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_AttrType();

  /// @brief Method get_AttrValues addr 0xf858ac size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_AttrValues();

  /// @brief Method ToAsn1Object addr 0xf858b4 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "AttributePkcs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributePkcs(AttributePkcs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributePkcs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributePkcs(AttributePkcs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributePkcs();

public:
  /// @brief Field attrType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___attrType;

  /// @brief Field attrValues, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___attrValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::AttributePkcs, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::AttributePkcs);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::AttributePkcs*, "Org.BouncyCastle.Asn1.Pkcs", "AttributePkcs");