#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RSAPKCS1SignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SignatureDescription);
// Type: System.Security.Cryptography::RSAPKCS1SignatureDescription
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2967))
// CS Name: ::System.Security.Cryptography::RSAPKCS1SignatureDescription*
class CORDL_TYPE RSAPKCS1SignatureDescription : public ::System::Security::Cryptography::SignatureDescription {
public:
  // Declarations
  /// @brief Field _hashAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __get__hashAlgorithm, put = __set__hashAlgorithm))::StringW _hashAlgorithm;

  constexpr ::StringW& __get__hashAlgorithm();

  constexpr ::StringW const& __get__hashAlgorithm() const;

  constexpr void __set__hashAlgorithm(::StringW value);

  static inline ::System::Security::Cryptography::RSAPKCS1SignatureDescription* New_ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm);

  /// @brief Method .ctor addr 0x246a060 size 0xa4 virtual false final false
  inline void _ctor(::StringW hashAlgorithm, ::StringW digestAlgorithm);

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAPKCS1SignatureDescription(RSAPKCS1SignatureDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAPKCS1SignatureDescription(RSAPKCS1SignatureDescription const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAPKCS1SignatureDescription();

public:
  /// @brief Field _hashAlgorithm, offset: 0x30, size: 0x8, def value: None
  ::StringW ____hashAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SignatureDescription, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SignatureDescription");