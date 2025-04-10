#pragma once
// IWYU pragma private; include "Mono/Security/Interface/ICertificateValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICertificateValidator)
// Forward declare root types
namespace Mono::Security::Interface {
class ICertificateValidator;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Interface::ICertificateValidator);
// Dependencies
namespace Mono::Security::Interface {
// Is value type: false
// CS Name: Mono.Security.Interface.ICertificateValidator
class CORDL_TYPE ICertificateValidator {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ICertificateValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICertificateValidator(ICertificateValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15954 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono::Security::Interface
NEED_NO_BOX(::Mono::Security::Interface::ICertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::ICertificateValidator*, "Mono.Security.Interface", "ICertificateValidator");
