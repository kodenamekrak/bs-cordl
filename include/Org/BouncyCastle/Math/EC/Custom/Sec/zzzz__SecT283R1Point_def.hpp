#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SecT283R1Point)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT283R1Point;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT283R1Point
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1498))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT283R1Point*
class CORDL_TYPE SecT283R1Point : public ::Org::BouncyCastle::Math::EC::AbstractF2mPoint {
public:
  // Declarations
  __declspec(property(get = get_YCoord))::Org::BouncyCastle::Math::EC::ECFieldElement* YCoord;

  __declspec(property(get = get_CompressionYTilde)) bool CompressionYTilde;

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method .ctor addr 0x102803c size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                                     ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method .ctor addr 0x10281a0 size 0x8c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*
  New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
           ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method .ctor addr 0x10282c0 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                    ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs, bool withCompression);

  /// @brief Method Detach addr 0x10288a8 size 0x98 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Detach();

  /// @brief Method get_YCoord addr 0x1028940 size 0xd0 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_YCoord();

  /// @brief Method get_CompressionYTilde addr 0x1028a10 size 0x7c virtual true final false
  inline bool get_CompressionYTilde();

  /// @brief Method Add addr 0x1028a8c size 0x73c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Add(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Twice addr 0x10291c8 size 0x34c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Twice();

  /// @brief Method TwicePlus addr 0x1029514 size 0x4e8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint* b);

  /// @brief Method Negate addr 0x10299fc size 0x164 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Negate();

  // Ctor Parameters [CppParam { name: "", ty: "SecT283R1Point", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT283R1Point(SecT283R1Point&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT283R1Point", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT283R1Point(SecT283R1Point const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT283R1Point();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283R1Point");