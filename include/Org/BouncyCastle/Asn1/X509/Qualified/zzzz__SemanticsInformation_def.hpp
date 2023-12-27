#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SemanticsInformation)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class SemanticsInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::SemanticsInformation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(333))
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::SemanticsInformation*
class CORDL_TYPE SemanticsInformation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field semanticsIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get_semanticsIdentifier, put = __set_semanticsIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier;

  /// @brief Field nameRegistrationAuthorities, offset 0x18, size 0x8
  __declspec(
      property(get = __get_nameRegistrationAuthorities,
               put = __set_nameRegistrationAuthorities))::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> nameRegistrationAuthorities;

  __declspec(property(get = get_SemanticsIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SemanticsIdentifier;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_semanticsIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_semanticsIdentifier() const;

  constexpr void __set_semanticsIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*>& __get_nameRegistrationAuthorities();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> const& __get_nameRegistrationAuthorities() const;

  constexpr void __set_nameRegistrationAuthorities(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> value);

  /// @brief Method GetInstance addr 0x1081ab0 size 0x168 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1081c18 size 0x3a8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*
  New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier,
           ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> generalNames);

  /// @brief Method .ctor addr 0x1081fc0 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier,
                    ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> generalNames);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier);

  /// @brief Method .ctor addr 0x1081fec size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> generalNames);

  /// @brief Method .ctor addr 0x1082014 size 0x28 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> generalNames);

  /// @brief Method get_SemanticsIdentifier addr 0x108203c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SemanticsIdentifier();

  /// @brief Method GetNameRegistrationAuthorities addr 0x1082044 size 0x8 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> GetNameRegistrationAuthorities();

  /// @brief Method ToAsn1Object addr 0x108204c size 0x13c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SemanticsInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SemanticsInformation(SemanticsInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SemanticsInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SemanticsInformation(SemanticsInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SemanticsInformation();

public:
  /// @brief Field semanticsIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___semanticsIdentifier;

  /// @brief Field nameRegistrationAuthorities, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> ___nameRegistrationAuthorities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*, "Org.BouncyCastle.Asn1.X509.Qualified", "SemanticsInformation");