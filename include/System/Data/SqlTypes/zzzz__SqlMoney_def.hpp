#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlMoney.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlMoney)
namespace System::Data::SqlTypes {
class INullable;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
}
namespace System::Data::SqlTypes {
struct SqlByte;
}
namespace System::Data::SqlTypes {
struct SqlDecimal;
}
namespace System::Data::SqlTypes {
struct SqlDouble;
}
namespace System::Data::SqlTypes {
struct SqlInt16;
}
namespace System::Data::SqlTypes {
struct SqlInt32;
}
namespace System::Data::SqlTypes {
struct SqlInt64;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
struct Decimal;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlMoney;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlMoney);
// Type: System.Data.SqlTypes::SqlMoney
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlMoney
struct CORDL_TYPE SqlMoney {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlMoney MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::Data::SqlTypes::SqlMoney MinValue;

  /// @brief Field Null, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::Data::SqlTypes::SqlMoney Null;

  __declspec(property(get = get_Value)) ::System::Decimal Value;

  /// @brief Field Zero, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::Data::SqlTypes::SqlMoney Zero;

  /// @brief Field s_dTickBase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_dTickBase, put = setStaticF_s_dTickBase)) double_t s_dTickBase;

  /// @brief Field s_iMoneyScale, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_iMoneyScale, put = setStaticF_s_iMoneyScale)) int32_t s_iMoneyScale;

  /// @brief Field s_lTickBase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lTickBase, put = setStaticF_s_lTickBase)) int64_t s_lTickBase;

  /// @brief Field s_maxLong, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_maxLong, put = setStaticF_s_maxLong)) int64_t s_maxLong;

  /// @brief Field s_minLong, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_minLong, put = setStaticF_s_minLong)) int64_t s_minLong;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method CompareTo, addr 0x415acb8, size 0x168, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlMoney value);

  /// @brief Method CompareTo, addr 0x415abb0, size 0x108, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x415ae20, size 0x144, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x415af64, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x415b29c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GreaterThan, addr 0x415aa48, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method LessThan, addr 0x415a9c4, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x415afd4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x415afdc, size 0x170, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x415b14c, size 0x150, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToDecimal, addr 0x41513e0, size 0x104, virtual false, abstract: false, final false
  inline ::System::Decimal ToDecimal();

  /// @brief Method ToDouble, addr 0x4153dac, size 0x90, virtual false, abstract: false, final false
  inline double_t ToDouble();

  /// @brief Method ToSqlDecimal, addr 0x415ab28, size 0x88, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDecimal ToSqlDecimal();

  /// @brief Method ToSqlDouble, addr 0x415aacc, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble();

  /// @brief Method ToString, addr 0x4159c20, size 0x100, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x415981c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x41599b0, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::System::Decimal value);

  /// @brief Method .ctor, addr 0x4159838, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x41598b4, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x4159828, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int64_t value, int32_t ignored);

  static inline ::System::Data::SqlTypes::SqlMoney getStaticF_MaxValue();

  static inline ::System::Data::SqlTypes::SqlMoney getStaticF_MinValue();

  static inline ::System::Data::SqlTypes::SqlMoney getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlMoney getStaticF_Zero();

  static inline double_t getStaticF_s_dTickBase();

  static inline int32_t getStaticF_s_iMoneyScale();

  static inline int64_t getStaticF_s_lTickBase();

  static inline int64_t getStaticF_s_maxLong();

  static inline int64_t getStaticF_s_minLong();

  /// @brief Method get_IsNull, addr 0x41513d0, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x4159b0c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Decimal get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Addition, addr 0x4159e1c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Addition(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Division, addr 0x415a2b4, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Division(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Equality, addr 0x415a718, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Explicit, addr 0x41524c8, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Explicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlDecimal x);

  /// @brief Method op_GreaterThan, addr 0x415a8e0, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Implicit, addr 0x415a3f0, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlByte x);

  /// @brief Method op_Implicit, addr 0x415a4c0, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlInt16 x);

  /// @brief Method op_Implicit, addr 0x415a588, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlInt32 x);

  /// @brief Method op_Implicit, addr 0x415a650, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlInt64 x);

  /// @brief Method op_Implicit, addr 0x4159b98, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Decimal x);

  /// @brief Method op_Implicit, addr 0x4159bc4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(int64_t x);

  /// @brief Method op_LessThan, addr 0x415a7fc, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Multiply, addr 0x415a178, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Multiply(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Subtraction, addr 0x4159fcc, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Subtraction(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_UnaryNegation, addr 0x4159d20, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_UnaryNegation(::System::Data::SqlTypes::SqlMoney x);

  static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlMoney value);

  static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlMoney value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlMoney value);

  static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlMoney value);

  static inline void setStaticF_s_dTickBase(double_t value);

  static inline void setStaticF_s_iMoneyScale(int32_t value);

  static inline void setStaticF_s_lTickBase(int64_t value);

  static inline void setStaticF_s_maxLong(int64_t value);

  static inline void setStaticF_s_minLong(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlMoney();

  // Ctor Parameters [CppParam { name: "_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr SqlMoney(bool _fNotNull, int64_t _value) noexcept;

  /// @brief Field _fNotNull, offset: 0x0, size: 0x1, def value: None
  bool _fNotNull;

  /// @brief Field _value, offset: 0x8, size: 0x8, def value: None
  int64_t _value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11467 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlMoney, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlMoney, _fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlMoney, _value) == 0x8, "Offset mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlMoney, "System.Data.SqlTypes", "SqlMoney");
