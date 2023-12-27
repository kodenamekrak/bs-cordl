#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NaccacheSternKeyParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::NaccacheSternKeyParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1069))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::NaccacheSternKeyParameters*
class CORDL_TYPE NaccacheSternKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field n, offset 0x20, size 0x8
  __declspec(property(get = __get_n, put = __set_n))::Org::BouncyCastle::Math::BigInteger* n;

  /// @brief Field lowerSigmaBound, offset 0x28, size 0x4
  __declspec(property(get = __get_lowerSigmaBound, put = __set_lowerSigmaBound)) int32_t lowerSigmaBound;

  __declspec(property(get = get_G))::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_LowerSigmaBound)) int32_t LowerSigmaBound;

  __declspec(property(get = get_Modulus))::Org::BouncyCastle::Math::BigInteger* Modulus;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_n();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_n() const;

  constexpr void __set_n(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr int32_t& __get_lowerSigmaBound();

  constexpr int32_t const& __get_lowerSigmaBound() const;

  constexpr void __set_lowerSigmaBound(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* New_ctor(bool privateKey, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                              int32_t lowerSigmaBound);

  /// @brief Method .ctor addr 0xf38d4c size 0x40 virtual false final false
  inline void _ctor(bool privateKey, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n, int32_t lowerSigmaBound);

  /// @brief Method get_G addr 0xf38d8c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_LowerSigmaBound addr 0xf38d94 size 0x8 virtual false final false
  inline int32_t get_LowerSigmaBound();

  /// @brief Method get_Modulus addr 0xf38d9c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NaccacheSternKeyParameters(NaccacheSternKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NaccacheSternKeyParameters(NaccacheSternKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NaccacheSternKeyParameters();

public:
  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field n, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___n;

  /// @brief Field lowerSigmaBound, offset: 0x28, size: 0x4, def value: None
  int32_t ___lowerSigmaBound;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "NaccacheSternKeyParameters");