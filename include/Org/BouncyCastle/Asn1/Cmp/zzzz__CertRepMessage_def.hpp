#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CertRepMessage)
namespace Org::BouncyCastle::Asn1::Cmp {
class CertResponse;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertRepMessage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertRepMessage);
// Type: Org.BouncyCastle.Asn1.Cmp::CertRepMessage
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertRepMessage*
class CORDL_TYPE CertRepMessage : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field caPubs, offset 0x10, size 0x8
  __declspec(property(get = __get_caPubs, put = __set_caPubs))::Org::BouncyCastle::Asn1::Asn1Sequence* caPubs;

  /// @brief Field response, offset 0x18, size 0x8
  __declspec(property(get = __get_response, put = __set_response))::Org::BouncyCastle::Asn1::Asn1Sequence* response;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_caPubs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_caPubs() const;

  constexpr void __set_caPubs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_response();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_response() const;

  constexpr void __set_response(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe6503c size 0xf8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe65134 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertRepMessage* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> caPubs,
                                                                         ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>*> response);

  /// @brief Method .ctor addr 0xe652bc size 0xf4 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> caPubs,
                    ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>*> response);

  /// @brief Method GetCAPubs addr 0xe653b0 size 0xfc virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> GetCAPubs();

  /// @brief Method GetResponse addr 0xe654ac size 0xf4 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertResponse*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertResponse*>*> GetResponse();

  /// @brief Method ToAsn1Object addr 0xe65728 size 0xb8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertRepMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertRepMessage(CertRepMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertRepMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertRepMessage(CertRepMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertRepMessage();

public:
  /// @brief Field caPubs, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___caPubs;

  /// @brief Field response, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___response;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertRepMessage, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertRepMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertRepMessage*, "Org.BouncyCastle.Asn1.Cmp", "CertRepMessage");