#pragma once
// IWYU pragma private; include "Unity/Mathematics/float2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(float2)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace Unity::Mathematics {
struct bool2;
}
namespace Unity::Mathematics {
struct double2;
}
namespace Unity::Mathematics {
class float2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct half2;
}
namespace Unity::Mathematics {
struct half;
}
namespace Unity::Mathematics {
struct int2;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Mathematics {
class float2_DebuggerProxy;
}
namespace Unity::Mathematics {
struct float2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::float2_DebuggerProxy);
MARK_VAL_T(::Unity::Mathematics::float2);
// Dependencies System.Object
namespace Unity::Mathematics {
// Is value type: false
// CS Name: Unity.Mathematics.float2/DebuggerProxy
class CORDL_TYPE float2_DebuggerProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) float_t x;

  /// @brief Field y, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) float_t y;

  static inline ::Unity::Mathematics::float2_DebuggerProxy* New_ctor(::Unity::Mathematics::float2 v);

  constexpr float_t const& __cordl_internal_get_x() const;

  constexpr float_t& __cordl_internal_get_x();

  constexpr float_t const& __cordl_internal_get_y() const;

  constexpr float_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(float_t value);

  constexpr void __cordl_internal_set_y(float_t value);

  /// @brief Method .ctor, addr 0x4687470, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 v);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr float2_DebuggerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "float2_DebuggerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  float2_DebuggerProxy(float2_DebuggerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "float2_DebuggerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  float2_DebuggerProxy(float2_DebuggerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9974 };

  /// @brief Field x, offset: 0x10, size: 0x4, def value: None
  float_t ___x;

  /// @brief Field y, offset: 0x14, size: 0x4, def value: None
  float_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2_DebuggerProxy, ___x) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2_DebuggerProxy, ___y) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2_DebuggerProxy, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace Unity::Mathematics {
// Is value type: true
// CS Name: Unity.Mathematics.float2
struct CORDL_TYPE float2 {
public:
  // Declarations
  using DebuggerProxy = ::Unity::Mathematics::float2_DebuggerProxy;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_xx)) ::Unity::Mathematics::float2 xx;

  __declspec(property(get = get_xxx)) ::Unity::Mathematics::float3 xxx;

  __declspec(property(get = get_xxxx)) ::Unity::Mathematics::float4 xxxx;

  __declspec(property(get = get_xxxy)) ::Unity::Mathematics::float4 xxxy;

  __declspec(property(get = get_xxy)) ::Unity::Mathematics::float3 xxy;

  __declspec(property(get = get_xxyx)) ::Unity::Mathematics::float4 xxyx;

  __declspec(property(get = get_xxyy)) ::Unity::Mathematics::float4 xxyy;

  __declspec(property(get = get_xy, put = set_xy)) ::Unity::Mathematics::float2 xy;

  __declspec(property(get = get_xyx)) ::Unity::Mathematics::float3 xyx;

  __declspec(property(get = get_xyxx)) ::Unity::Mathematics::float4 xyxx;

  __declspec(property(get = get_xyxy)) ::Unity::Mathematics::float4 xyxy;

  __declspec(property(get = get_xyy)) ::Unity::Mathematics::float3 xyy;

  __declspec(property(get = get_xyyx)) ::Unity::Mathematics::float4 xyyx;

  __declspec(property(get = get_xyyy)) ::Unity::Mathematics::float4 xyyy;

  __declspec(property(get = get_yx, put = set_yx)) ::Unity::Mathematics::float2 yx;

  __declspec(property(get = get_yxx)) ::Unity::Mathematics::float3 yxx;

  __declspec(property(get = get_yxxx)) ::Unity::Mathematics::float4 yxxx;

  __declspec(property(get = get_yxxy)) ::Unity::Mathematics::float4 yxxy;

  __declspec(property(get = get_yxy)) ::Unity::Mathematics::float3 yxy;

  __declspec(property(get = get_yxyx)) ::Unity::Mathematics::float4 yxyx;

  __declspec(property(get = get_yxyy)) ::Unity::Mathematics::float4 yxyy;

  __declspec(property(get = get_yy)) ::Unity::Mathematics::float2 yy;

  __declspec(property(get = get_yyx)) ::Unity::Mathematics::float3 yyx;

  __declspec(property(get = get_yyxx)) ::Unity::Mathematics::float4 yyxx;

  __declspec(property(get = get_yyxy)) ::Unity::Mathematics::float4 yyxy;

  __declspec(property(get = get_yyy)) ::Unity::Mathematics::float3 yyy;

  __declspec(property(get = get_yyyx)) ::Unity::Mathematics::float4 yyyx;

  __declspec(property(get = get_yyyy)) ::Unity::Mathematics::float4 yyyy;

  /// @brief Field zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_zero, put = setStaticF_zero)) ::Unity::Mathematics::float2 zero;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::float2>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::float2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x4687280, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x468725c, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::float2 rhs);

  /// @brief Method GetHashCode, addr 0x4687308, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4687338, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x46873d8, size 0x90, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x4686a88, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::bool2 v);

  /// @brief Method .ctor, addr 0x4686bd0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::double2 v);

  /// @brief Method .ctor, addr 0x4686ae8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half v);

  /// @brief Method .ctor, addr 0x4686b48, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::half2 v);

  /// @brief Method .ctor, addr 0x4686ab4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::int2 v);

  /// @brief Method .ctor, addr 0x4686ad4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::uint2 v);

  /// @brief Method .ctor, addr 0x4686a70, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(bool v);

  /// @brief Method .ctor, addr 0x4686bc4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(double_t v);

  /// @brief Method .ctor, addr 0x4686a68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t v);

  /// @brief Method .ctor, addr 0x4686aa8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t v);

  /// @brief Method .ctor, addr 0x4686ac8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t v);

  /// @brief Method .ctor, addr 0x4686a58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method .ctor, addr 0x4686a60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float2 xy);

  static inline ::Unity::Mathematics::float2 getStaticF_zero();

  /// @brief Method get_Item, addr 0x468724c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_xx, addr 0x4687214, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xx();

  /// @brief Method get_xxx, addr 0x46871ac, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxx();

  /// @brief Method get_xxxx, addr 0x4687094, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxx();

  /// @brief Method get_xxxy, addr 0x46870a8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxxy();

  /// @brief Method get_xxy, addr 0x46871bc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xxy();

  /// @brief Method get_xxyx, addr 0x46870b8, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyx();

  /// @brief Method get_xxyy, addr 0x46870cc, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xxyy();

  /// @brief Method get_xy, addr 0x4687220, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_xy();

  /// @brief Method get_xyx, addr 0x46871c8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyx();

  /// @brief Method get_xyxx, addr 0x46870e0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxx();

  /// @brief Method get_xyxy, addr 0x46870f0, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyxy();

  /// @brief Method get_xyy, addr 0x46871d4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_xyy();

  /// @brief Method get_xyyx, addr 0x4687100, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyx();

  /// @brief Method get_xyyy, addr 0x4687110, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_xyyy();

  /// @brief Method get_yx, addr 0x4687230, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yx();

  /// @brief Method get_yxx, addr 0x46871e0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxx();

  /// @brief Method get_yxxx, addr 0x4687120, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxx();

  /// @brief Method get_yxxy, addr 0x4687130, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxxy();

  /// @brief Method get_yxy, addr 0x46871ec, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yxy();

  /// @brief Method get_yxyx, addr 0x4687140, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyx();

  /// @brief Method get_yxyy, addr 0x4687150, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yxyy();

  /// @brief Method get_yy, addr 0x4687240, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 get_yy();

  /// @brief Method get_yyx, addr 0x46871f8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyx();

  /// @brief Method get_yyxx, addr 0x4687160, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxx();

  /// @brief Method get_yyxy, addr 0x4687174, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyxy();

  /// @brief Method get_yyy, addr 0x4687204, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_yyy();

  /// @brief Method get_yyyx, addr 0x4687188, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyx();

  /// @brief Method get_yyyy, addr 0x4687198, size 0x14, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float4 get_yyyy();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::float2>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::float2>* i___System__IEquatable_1___Unity__Mathematics__float2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x4686d74, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Addition(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Addition, addr 0x4686d80, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Addition(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Addition, addr 0x4686d8c, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Addition(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Decrement, addr 0x4686ec4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Decrement(::Unity::Mathematics::float2 val);

  /// @brief Method op_Division, addr 0x4686dc4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Division(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Division, addr 0x4686dd0, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Division(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Division, addr 0x4686ddc, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Division(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Equality, addr 0x4687004, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Equality, addr 0x468701c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Equality, addr 0x4687034, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Equality(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Explicit, addr 0x4686c00, size 0x1c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Explicit___Unity__Mathematics__float2(::Unity::Mathematics::bool2 v);

  /// @brief Method op_Explicit, addr 0x4686d40, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Explicit___Unity__Mathematics__float2(::Unity::Mathematics::double2 v);

  /// @brief Method op_Explicit, addr 0x4686be8, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Explicit___Unity__Mathematics__float2(bool v);

  /// @brief Method op_Explicit, addr 0x4686d34, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Explicit___Unity__Mathematics__float2(double_t v);

  /// @brief Method op_GreaterThan, addr 0x4686f64, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_GreaterThan, addr 0x4686f7c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_GreaterThan, addr 0x4686f94, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThan(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4686fac, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4686fc4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_GreaterThanOrEqual, addr 0x4686fdc, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_GreaterThanOrEqual(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Implicit, addr 0x4687468, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::Unity::Mathematics::float2 v);

  /// @brief Method op_Implicit, addr 0x4686c54, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::half v);

  /// @brief Method op_Implicit, addr 0x4686cb8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::half2 v);

  /// @brief Method op_Implicit, addr 0x4686c28, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::int2 v);

  /// @brief Method op_Implicit, addr 0x4686c44, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::Unity::Mathematics::uint2 v);

  /// @brief Method op_Implicit, addr 0x468746c, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(::UnityEngine::Vector2 v);

  /// @brief Method op_Implicit, addr 0x4686be0, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(float_t v);

  /// @brief Method op_Implicit, addr 0x4686c1c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(int32_t v);

  /// @brief Method op_Implicit, addr 0x4686c38, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Implicit___Unity__Mathematics__float2(uint32_t v);

  /// @brief Method op_Increment, addr 0x4686eb4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Increment(::Unity::Mathematics::float2 val);

  /// @brief Method op_Inequality, addr 0x468704c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Inequality, addr 0x4687064, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Inequality, addr 0x468707c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_Inequality(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_LessThan, addr 0x4686ed4, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_LessThan, addr 0x4686eec, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_LessThan, addr 0x4686f04, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThan(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4686f1c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4686f34, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_LessThanOrEqual, addr 0x4686f4c, size 0x18, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::bool2 op_LessThanOrEqual(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Modulus, addr 0x4686dec, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Modulus(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Modulus, addr 0x4686e30, size 0x44, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Modulus(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Modulus, addr 0x4686e74, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Modulus(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Multiply, addr 0x4686d4c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Multiply(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Multiply, addr 0x4686d58, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Multiply(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Multiply, addr 0x4686d64, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Multiply(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Subtraction, addr 0x4686d9c, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Subtraction(::Unity::Mathematics::float2 lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_Subtraction, addr 0x4686da8, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Subtraction(::Unity::Mathematics::float2 lhs, float_t rhs);

  /// @brief Method op_Subtraction, addr 0x4686db4, size 0x10, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_Subtraction(float_t lhs, ::Unity::Mathematics::float2 rhs);

  /// @brief Method op_UnaryNegation, addr 0x4686ff4, size 0xc, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_UnaryNegation(::Unity::Mathematics::float2 val);

  /// @brief Method op_UnaryPlus, addr 0x4687000, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 op_UnaryPlus(::Unity::Mathematics::float2 val);

  static inline void setStaticF_zero(::Unity::Mathematics::float2 value);

  /// @brief Method set_Item, addr 0x4687254, size 0x8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method set_xy, addr 0x4687228, size 0x8, virtual false, abstract: false, final false
  inline void set_xy(::Unity::Mathematics::float2 value);

  /// @brief Method set_yx, addr 0x4687238, size 0x8, virtual false, abstract: false, final false
  inline void set_yx(::Unity::Mathematics::float2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr float2();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
  constexpr float2(float_t x, float_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9975 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::float2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::float2, y) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::float2, 0x8>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::float2_DebuggerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2_DebuggerProxy*, "Unity.Mathematics", "float2/DebuggerProxy");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::float2, "Unity.Mathematics", "float2");
