#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RevAnnContent)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusEncodable;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevAnnContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent);
// Type: Org.BouncyCastle.Asn1.Cmp::RevAnnContent
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(49))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::RevAnnContent*
class CORDL_TYPE RevAnnContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __get_status, put = __set_status))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* status;

  /// @brief Field certId, offset 0x18, size 0x8
  __declspec(property(get = __get_certId, put = __set_certId))::Org::BouncyCastle::Asn1::Crmf::CertId* certId;

  /// @brief Field willBeRevokedAt, offset 0x20, size 0x8
  __declspec(property(get = __get_willBeRevokedAt, put = __set_willBeRevokedAt))::Org::BouncyCastle::Asn1::DerGeneralizedTime* willBeRevokedAt;

  /// @brief Field badSinceDate, offset 0x28, size 0x8
  __declspec(property(get = __get_badSinceDate, put = __set_badSinceDate))::Org::BouncyCastle::Asn1::DerGeneralizedTime* badSinceDate;

  /// @brief Field crlDetails, offset 0x30, size 0x8
  __declspec(property(get = __get_crlDetails, put = __set_crlDetails))::Org::BouncyCastle::Asn1::X509::X509Extensions* crlDetails;

  __declspec(property(get = get_Status))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* Status;

  __declspec(property(get = get_CertID))::Org::BouncyCastle::Asn1::Crmf::CertId* CertID;

  __declspec(property(get = get_WillBeRevokedAt))::Org::BouncyCastle::Asn1::DerGeneralizedTime* WillBeRevokedAt;

  __declspec(property(get = get_BadSinceDate))::Org::BouncyCastle::Asn1::DerGeneralizedTime* BadSinceDate;

  __declspec(property(get = get_CrlDetails))::Org::BouncyCastle::Asn1::X509::X509Extensions* CrlDetails;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*& __get_status();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*> const& __get_status() const;

  constexpr void __set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertId*& __get_certId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertId*> const& __get_certId() const;

  constexpr void __set_certId(::Org::BouncyCastle::Asn1::Crmf::CertId* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_willBeRevokedAt();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_willBeRevokedAt() const;

  constexpr void __set_willBeRevokedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_badSinceDate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_badSinceDate() const;

  constexpr void __set_badSinceDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_crlDetails();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_crlDetails() const;

  constexpr void __set_crlDetails(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe6e4fc size 0x15c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe69a40 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::RevAnnContent* GetInstance(::System::Object* obj);

  /// @brief Method get_Status addr 0xe6e658 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* get_Status();

  /// @brief Method get_CertID addr 0xe6e660 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertId* get_CertID();

  /// @brief Method get_WillBeRevokedAt addr 0xe6e668 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_WillBeRevokedAt();

  /// @brief Method get_BadSinceDate addr 0xe6e670 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_BadSinceDate();

  /// @brief Method get_CrlDetails addr 0xe6e678 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_CrlDetails();

  /// @brief Method ToAsn1Object addr 0xe6e680 size 0x1cc virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "RevAnnContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevAnnContent(RevAnnContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevAnnContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevAnnContent(RevAnnContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevAnnContent();

public:
  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* ___status;

  /// @brief Field certId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertId* ___certId;

  /// @brief Field willBeRevokedAt, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___willBeRevokedAt;

  /// @brief Field badSinceDate, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___badSinceDate;

  /// @brief Field crlDetails, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___crlDetails;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::RevAnnContent, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevAnnContent*, "Org.BouncyCastle.Asn1.Cmp", "RevAnnContent");