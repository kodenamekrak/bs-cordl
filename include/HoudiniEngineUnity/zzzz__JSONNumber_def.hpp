#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNumber)
namespace System {
class Object;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace HoudiniEngineUnity {
struct __JSONNode__Enumerator;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSONNumber;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSONNumber);
// Type: HoudiniEngineUnity::JSONNumber
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9876))
// CS Name: ::HoudiniEngineUnity::JSONNumber*
class CORDL_TYPE JSONNumber : public ::HoudiniEngineUnity::JSONNode {
public:
  // Declarations
  /// @brief Field m_Data, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Data, put = __set_m_Data)) double_t m_Data;

  __declspec(property(get = get_Tag))::HoudiniEngineUnity::JSONNodeType Tag;

  __declspec(property(get = get_IsNumber)) bool IsNumber;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_AsDouble, put = set_AsDouble)) double_t AsDouble;

  __declspec(property(get = get_AsLong, put = set_AsLong)) int64_t AsLong;

  constexpr double_t& __get_m_Data();

  constexpr double_t const& __get_m_Data() const;

  constexpr void __set_m_Data(double_t value);

  /// @brief Method get_Tag addr 0x21da9f0 size 0x8 virtual true final false
  inline ::HoudiniEngineUnity::JSONNodeType get_Tag();

  /// @brief Method get_IsNumber addr 0x21da9f8 size 0x8 virtual true final false
  inline bool get_IsNumber();

  /// @brief Method GetEnumerator addr 0x21daa00 size 0x14 virtual true final false
  inline ::HoudiniEngineUnity::__JSONNode__Enumerator GetEnumerator();

  /// @brief Method get_Value addr 0x21daa14 size 0x68 virtual true final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x21daa7c size 0x8c virtual true final false
  inline void set_Value(::StringW value);

  /// @brief Method get_AsDouble addr 0x21dab08 size 0x8 virtual true final false
  inline double_t get_AsDouble();

  /// @brief Method set_AsDouble addr 0x21dab10 size 0x8 virtual true final false
  inline void set_AsDouble(double_t value);

  /// @brief Method get_AsLong addr 0x21dab18 size 0x20 virtual true final false
  inline int64_t get_AsLong();

  /// @brief Method set_AsLong addr 0x21dab38 size 0xc virtual true final false
  inline void set_AsLong(int64_t value);

  static inline ::HoudiniEngineUnity::JSONNumber* New_ctor(double_t aData);

  /// @brief Method .ctor addr 0x21d4b6c size 0x28 virtual false final false
  inline void _ctor(double_t aData);

  static inline ::HoudiniEngineUnity::JSONNumber* New_ctor(::StringW aData);

  /// @brief Method .ctor addr 0x21dab44 size 0x34 virtual false final false
  inline void _ctor(::StringW aData);

  /// @brief Method WriteToStringBuilder addr 0x21dab78 size 0x34 virtual true final false
  inline void WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode);

  /// @brief Method IsNumeric addr 0x21dabac size 0x1a0 virtual false final false
  static inline bool IsNumeric(::System::Object* value);

  /// @brief Method Equals addr 0x21dad4c size 0x100 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x21dae4c size 0x70 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "JSONNumber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSONNumber(JSONNumber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSONNumber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSONNumber(JSONNumber const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSONNumber();

public:
  /// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
  double_t ___m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSONNumber, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSONNumber);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONNumber*, "HoudiniEngineUnity", "JSONNumber");