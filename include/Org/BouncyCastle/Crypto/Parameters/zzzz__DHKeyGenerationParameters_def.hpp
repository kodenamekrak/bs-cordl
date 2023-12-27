#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHKeyGenerationParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DHKeyGenerationParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1019))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DHKeyGenerationParameters*
class CORDL_TYPE DHKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  /// @brief Field parameters, offset 0x20, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Crypto::Parameters::DHParameters* Parameters;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHParameters*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                             ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  /// @brief Method .ctor addr 0xf30320 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  /// @brief Method get_Parameters addr 0xf30390 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* get_Parameters();

  /// @brief Method GetStrength addr 0xf3035c size 0x34 virtual false final false
  static inline int32_t GetStrength(::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  // Ctor Parameters [CppParam { name: "", ty: "DHKeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHKeyGenerationParameters(DHKeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHKeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHKeyGenerationParameters(DHKeyGenerationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHKeyGenerationParameters();

public:
  /// @brief Field parameters, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHParameters* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHKeyGenerationParameters");