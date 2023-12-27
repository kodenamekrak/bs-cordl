#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PrivateKeyUsagePeriod)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PrivateKeyUsagePeriod;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod);
// Type: Org.BouncyCastle.Asn1.X509::PrivateKeyUsagePeriod
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(378))
// CS Name: ::Org.BouncyCastle.Asn1.X509::PrivateKeyUsagePeriod*
class CORDL_TYPE PrivateKeyUsagePeriod : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field _notBefore, offset 0x10, size 0x8
  __declspec(property(get = __get__notBefore, put = __set__notBefore))::Org::BouncyCastle::Asn1::DerGeneralizedTime* _notBefore;

  /// @brief Field _notAfter, offset 0x18, size 0x8
  __declspec(property(get = __get__notAfter, put = __set__notAfter))::Org::BouncyCastle::Asn1::DerGeneralizedTime* _notAfter;

  __declspec(property(get = get_NotBefore))::Org::BouncyCastle::Asn1::DerGeneralizedTime* NotBefore;

  __declspec(property(get = get_NotAfter))::Org::BouncyCastle::Asn1::DerGeneralizedTime* NotAfter;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get__notBefore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get__notBefore() const;

  constexpr void __set__notBefore(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get__notAfter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get__notAfter() const;

  constexpr void __set__notAfter(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method GetInstance addr 0x1195094 size 0x1d4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1195268 size 0x310 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_NotBefore addr 0x1195578 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotBefore();

  /// @brief Method get_NotAfter addr 0x1195580 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotAfter();

  /// @brief Method ToAsn1Object addr 0x1195588 size 0xc0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyUsagePeriod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKeyUsagePeriod(PrivateKeyUsagePeriod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyUsagePeriod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKeyUsagePeriod(PrivateKeyUsagePeriod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKeyUsagePeriod();

public:
  /// @brief Field _notBefore, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ____notBefore;

  /// @brief Field _notAfter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ____notAfter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*, "Org.BouncyCastle.Asn1.X509", "PrivateKeyUsagePeriod");