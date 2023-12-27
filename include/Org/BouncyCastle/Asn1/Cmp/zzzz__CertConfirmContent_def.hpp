#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CertConfirmContent)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertConfirmContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent);
// Type: Org.BouncyCastle.Asn1.Cmp::CertConfirmContent
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertConfirmContent*
class CORDL_TYPE CertConfirmContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field content, offset 0x10, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::Org::BouncyCastle::Asn1::Asn1Sequence* content;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_content() const;

  constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe64398 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe643c0 size 0x18c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* GetInstance(::System::Object* obj);

  /// @brief Method ToCertStatusArray addr 0xe6454c size 0xf4 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertStatus*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertStatus*>*> ToCertStatusArray();

  /// @brief Method ToAsn1Object addr 0xe647c8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertConfirmContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertConfirmContent(CertConfirmContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertConfirmContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertConfirmContent(CertConfirmContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertConfirmContent();

public:
  /// @brief Field content, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*, "Org.BouncyCastle.Asn1.Cmp", "CertConfirmContent");