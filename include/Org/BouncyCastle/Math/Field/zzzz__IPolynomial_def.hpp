#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Field/IPolynomial.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPolynomial)
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class IPolynomial;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::IPolynomial);
// Dependencies
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Field.IPolynomial
class CORDL_TYPE IPolynomial {
public:
  // Declarations
  __declspec(property(get = get_Degree)) int32_t Degree;

  /// @brief Method GetExponentsPresent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetExponentsPresent();

  /// @brief Method get_Degree, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Degree();

  // Ctor Parameters [CppParam { name: "", ty: "IPolynomial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPolynomial(IPolynomial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1585 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::IPolynomial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::IPolynomial*, "Org.BouncyCastle.Math.Field", "IPolynomial");
