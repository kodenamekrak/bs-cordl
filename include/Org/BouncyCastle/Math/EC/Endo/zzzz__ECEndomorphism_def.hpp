#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Endo/ECEndomorphism.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ECEndomorphism)
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism);
// Dependencies
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
class CORDL_TYPE ECEndomorphism {
public:
  // Declarations
  __declspec(property(get = get_HasEfficientPointMap)) bool HasEfficientPointMap;

  __declspec(property(get = get_PointMap)) ::Org::BouncyCastle::Math::EC::ECPointMap* PointMap;

  /// @brief Method get_HasEfficientPointMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_HasEfficientPointMap();

  /// @brief Method get_PointMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap();

  // Ctor Parameters [CppParam { name: "", ty: "ECEndomorphism", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECEndomorphism(ECEndomorphism const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1515 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism");
