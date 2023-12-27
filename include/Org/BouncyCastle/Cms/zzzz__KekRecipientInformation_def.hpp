#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
CORDL_MODULE_EXPORT(KekRecipientInformation)
namespace Org::BouncyCastle::Asn1::Cms {
class KekRecipientInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KekRecipientInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::KekRecipientInformation);
// Type: Org.BouncyCastle.Cms::KekRecipientInformation
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(672))
// CS Name: ::Org.BouncyCastle.Cms::KekRecipientInformation*
class CORDL_TYPE KekRecipientInformation : public ::Org::BouncyCastle::Cms::RecipientInformation {
public:
  // Declarations
  /// @brief Field info, offset 0x30, size 0x8
  __declspec(property(get = __get_info, put = __set_info))::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info;

  constexpr ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*& __get_info();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo*> const& __get_info() const;

  constexpr void __set_info(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* value);

  static inline ::Org::BouncyCastle::Cms::KekRecipientInformation* New_ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method .ctor addr 0x11e391c size 0xb4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method GetContentStream addr 0x120273c size 0x338 virtual true final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key);

  // Ctor Parameters [CppParam { name: "", ty: "KekRecipientInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KekRecipientInformation(KekRecipientInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KekRecipientInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KekRecipientInformation(KekRecipientInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KekRecipientInformation();

public:
  /// @brief Field info, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* ___info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::KekRecipientInformation, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::KekRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KekRecipientInformation*, "Org.BouncyCastle.Cms", "KekRecipientInformation");