#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT239K1Curve)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT239K1Point;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecT239K1Curve__SecT239K1LookupTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT239K1Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecT239K1Curve__SecT239K1LookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT239K1Curve__SecT239K1LookupTable);
// Type: ::SecT239K1LookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1488))
// CS Name: ::SecT239K1Curve::SecT239K1LookupTable*
class CORDL_TYPE __SecT239K1Curve__SecT239K1LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __get_m_outer, put = __set_m_outer))::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve* m_outer;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __get_m_table, put = __set_m_table))::ArrayW<uint64_t, ::Array<uint64_t>*> m_table;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __get_m_size, put = __set_m_size)) int32_t m_size;

  __declspec(property(get = get_Size)) int32_t Size;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve*& __get_m_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve*> const& __get_m_outer() const;

  constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve* value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_m_table();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_m_table() const;

  constexpr void __set_m_table(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr int32_t& __get_m_size();

  constexpr int32_t const& __get_m_size() const;

  constexpr void __set_m_size(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT239K1Curve__SecT239K1LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve* outer,
                                                                                                             ::ArrayW<uint64_t, ::Array<uint64_t>*> table, int32_t size);

  /// @brief Method .ctor addr 0x102258c size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve* outer, ::ArrayW<uint64_t, ::Array<uint64_t>*> table, int32_t size);

  /// @brief Method get_Size addr 0x10226d4 size 0x8 virtual true final false
  inline int32_t get_Size();

  /// @brief Method Lookup addr 0x10226dc size 0x118 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar addr 0x10228d4 size 0xc8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  /// @brief Method CreatePoint addr 0x10227f4 size 0xe0 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  // Ctor Parameters [CppParam { name: "", ty: "__SecT239K1Curve__SecT239K1LookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SecT239K1Curve__SecT239K1LookupTable(__SecT239K1Curve__SecT239K1LookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SecT239K1Curve__SecT239K1LookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SecT239K1Curve__SecT239K1LookupTable(__SecT239K1Curve__SecT239K1LookupTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SecT239K1Curve__SecT239K1LookupTable();

public:
  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve* ___m_outer;

  /// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___m_table;

  /// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT239K1Curve__SecT239K1LookupTable, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT239K1Curve
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1489))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT239K1Curve*
class CORDL_TYPE SecT239K1Curve : public ::Org::BouncyCastle::Math::EC::AbstractF2mCurve {
public:
  // Declarations
  using SecT239K1LookupTable = ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT239K1Curve__SecT239K1LookupTable;

  /// @brief Field m_infinity, offset 0x58, size 0x8
  __declspec(property(get = __get_m_infinity, put = __set_m_infinity))::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Point* m_infinity;

  /// @brief Field SECT239K1_AFFINE_ZS, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_SECT239K1_AFFINE_ZS,
               put = setStaticF_SECT239K1_AFFINE_ZS))::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> SECT239K1_AFFINE_ZS;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_IsKoblitz)) bool IsKoblitz;

  __declspec(property(get = get_M)) int32_t M;

  __declspec(property(get = get_IsTrinomial)) bool IsTrinomial;

  __declspec(property(get = get_K1)) int32_t K1;

  __declspec(property(get = get_K2)) int32_t K2;

  __declspec(property(get = get_K3)) int32_t K3;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Point*& __get_m_infinity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Point*> const& __get_m_infinity() const;

  constexpr void __set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Point* value);

  static inline void setStaticF_SECT239K1_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_SECT239K1_AFFINE_ZS();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve* New_ctor();

  /// @brief Method .ctor addr 0x1021f4c size 0x180 virtual false final false
  inline void _ctor();

  /// @brief Method CloneCurve addr 0x10220d4 size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method SupportsCoordinateSystem addr 0x102212c size 0xc virtual true final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method CreateDefaultMultiplier addr 0x1022138 size 0x5c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();

  /// @brief Method get_Infinity addr 0x1022194 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_FieldSize addr 0x102219c size 0x8 virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method FromBigInteger addr 0x10221a4 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method CreateRawPoint addr 0x1022204 size 0x88 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint addr 0x1022318 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method get_IsKoblitz addr 0x10223b8 size 0x8 virtual true final false
  inline bool get_IsKoblitz();

  /// @brief Method get_M addr 0x10223c0 size 0x8 virtual true final false
  inline int32_t get_M();

  /// @brief Method get_IsTrinomial addr 0x10223c8 size 0x8 virtual true final false
  inline bool get_IsTrinomial();

  /// @brief Method get_K1 addr 0x10223d0 size 0x8 virtual true final false
  inline int32_t get_K1();

  /// @brief Method get_K2 addr 0x10223d8 size 0x8 virtual true final false
  inline int32_t get_K2();

  /// @brief Method get_K3 addr 0x10223e0 size 0x8 virtual true final false
  inline int32_t get_K3();

  /// @brief Method CreateCacheSafeLookupTable addr 0x10223e8 size 0x1a4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "SecT239K1Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT239K1Curve(SecT239K1Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT239K1Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT239K1Curve(SecT239K1Curve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT239K1Curve();

public:
  /// @brief Field m_infinity, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Point* ___m_infinity;

  /// @brief Field SECT239K1_DEFAULT_COORDS offset 0xffffffff size 0x4
  static constexpr int32_t SECT239K1_DEFAULT_COORDS{ static_cast<int32_t>(0x6) };

  /// @brief Field SECT239K1_FE_LONGS offset 0xffffffff size 0x4
  static constexpr int32_t SECT239K1_FE_LONGS{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239K1Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT239K1Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT239K1Curve__SecT239K1LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT239K1Curve__SecT239K1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT239K1Curve/SecT239K1LookupTable");