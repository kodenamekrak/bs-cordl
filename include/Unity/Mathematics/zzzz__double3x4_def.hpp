#pragma once
// IWYU pragma private; include "Unity/Mathematics/double3x4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__double3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(double3x4)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool3x4;
}
namespace Unity::Mathematics {
struct double3;
}
namespace Unity::Mathematics {
struct float3x4;
}
namespace Unity::Mathematics {
struct int3x4;
}
namespace Unity::Mathematics {
struct uint3x4;
}
// Forward declare root types
namespace Unity::Mathematics {
struct double3x4;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::double3x4);
// Type: Unity.Mathematics::double3x4
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: true
// CS Name: ::Unity.Mathematics::double3x4
struct CORDL_TYPE double3x4 {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::Unity::Mathematics::double3 Item[];

  /// @brief Field zero, offset 0xffffffff, size 0x60
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::double3x4 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::double3x4>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::double3x4>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x461d054, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x461cf88, size 0xcc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::double3x4 rhs);

  /// @brief Method GetHashCode, addr 0x461d17c, size 0x12c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x461d2a8, size 0x3ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x461d654, size 0x394, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x461b4e8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3);

  /// @brief Method .ctor, addr 0x461b518, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(double_t m00, double_t m01, double_t m02, double_t m03, double_t m10, double_t m11, double_t m12, double_t m13, double_t m20, double_t m21, double_t m22, double_t m23);

  /// @brief Method .ctor, addr 0x461b584, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool3x4 v);

  /// @brief Method .ctor, addr 0x461b768, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3x4 v);

  /// @brief Method .ctor, addr 0x461b640, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int3x4 v);

  /// @brief Method .ctor, addr 0x461b6d4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint3x4 v);

  /// @brief Method .ctor, addr 0x461b558, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x461b53c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x461b748, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x461b620, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x461b6b4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  static inline ::Unity::Mathematics::double3x4 getStaticF_zero();

  /// @brief Method get_Item, addr 0x461cf7c, size 0xc, virtual false, abstract: false, final false
  inline ByRef<::Unity::Mathematics::double3> get_Item(int32_t index);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::double3x4>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::double3x4>* i___System__IEquatable_1___Unity__Mathematics__double3x4_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x461bab4, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Addition(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Addition, addr 0x461baf4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Addition(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Addition, addr 0x461bb2c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Addition(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Decrement, addr 0x461c0f0, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Decrement(::Unity::Mathematics::double3x4 val);

  /// @brief Method op_Division, addr 0x461bc14, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Division(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Division, addr 0x461bc54, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Division(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Division, addr 0x461bc8c, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Division(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Equality, addr 0x461cad4, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Equality, addr 0x461cbb0, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Equality, addr 0x461cc6c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Equality(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Explicit, addr 0x461b814, size 0x9c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Explicit___Unity__Mathematics__double3x4(::Unity::Mathematics::bool3x4 v);

  /// @brief Method op_Explicit, addr 0x461b7e8, size 0x2c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Explicit___Unity__Mathematics__double3x4(bool v);

  /// @brief Method op_GreaterThan, addr 0x461c5dc, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_GreaterThan, addr 0x461c6b8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_GreaterThan, addr 0x461c774, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThan(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x461c830, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x461c90c, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x461c9c8, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_GreaterThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Implicit, addr 0x461b9d8, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::float3x4 v);

  /// @brief Method op_Implicit, addr 0x461b8d0, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::int3x4 v);

  /// @brief Method op_Implicit, addr 0x461b954, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(::Unity::Mathematics::uint3x4 v);

  /// @brief Method op_Implicit, addr 0x461b7cc, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(double_t v);

  /// @brief Method op_Implicit, addr 0x461b9b8, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(float_t v);

  /// @brief Method op_Implicit, addr 0x461b8b0, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(int32_t v);

  /// @brief Method op_Implicit, addr 0x461b934, size 0x20, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Implicit___Unity__Mathematics__double3x4(uint32_t v);

  /// @brief Method op_Increment, addr 0x461c0ac, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Increment(::Unity::Mathematics::double3x4 val);

  /// @brief Method op_Inequality, addr 0x461cd28, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Inequality, addr 0x461ce04, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Inequality, addr 0x461cec0, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_Inequality(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_LessThan, addr 0x461c134, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_LessThan, addr 0x461c210, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_LessThan, addr 0x461c2cc, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThan(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x461c388, size 0xdc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x461c464, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x461c520, size 0xbc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool3x4 op_LessThanOrEqual(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Modulus, addr 0x461bcc4, size 0x160, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Modulus(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Modulus, addr 0x461be24, size 0x14c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Modulus(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Modulus, addr 0x461bf70, size 0x13c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Modulus(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Multiply, addr 0x461ba0c, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Multiply(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Multiply, addr 0x461ba4c, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Multiply(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Multiply, addr 0x461ba80, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Multiply(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x461bb64, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Subtraction(::Unity::Mathematics::double3x4 lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_Subtraction, addr 0x461bba4, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Subtraction(::Unity::Mathematics::double3x4 lhs, double_t rhs);

  /// @brief Method op_Subtraction, addr 0x461bbdc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_Subtraction(double_t lhs, ::Unity::Mathematics::double3x4 rhs);

  /// @brief Method op_UnaryNegation, addr 0x461ca84, size 0x34, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_UnaryNegation(::Unity::Mathematics::double3x4 val);

  /// @brief Method op_UnaryPlus, addr 0x461cab8, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::double3x4 op_UnaryPlus(::Unity::Mathematics::double3x4 val);

  static inline void setStaticF_zero(::Unity::Mathematics::double3x4 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr double3x4();

  // Ctor Parameters [CppParam { name: "c0", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c1", ty: "::Unity::Mathematics::double3", modifiers: "",
  // def_value: None }, CppParam { name: "c2", ty: "::Unity::Mathematics::double3", modifiers: "", def_value: None }, CppParam { name: "c3", ty: "::Unity::Mathematics::double3", modifiers: "",
  // def_value: None }]
  constexpr double3x4(::Unity::Mathematics::double3 c0, ::Unity::Mathematics::double3 c1, ::Unity::Mathematics::double3 c2, ::Unity::Mathematics::double3 c3) noexcept;

  /// @brief Field c0, offset: 0x0, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c0;

  /// @brief Field c1, offset: 0x18, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c1;

  /// @brief Field c2, offset: 0x30, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c2;

  /// @brief Field c3, offset: 0x48, size: 0x18, def value: None
  ::Unity::Mathematics::double3 c3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9938 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::double3x4, 0x60>, "Size mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::double3x4, c3) == 0x48, "Offset mismatch!");

} // namespace Unity::Mathematics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::double3x4, "Unity.Mathematics", "double3x4");
