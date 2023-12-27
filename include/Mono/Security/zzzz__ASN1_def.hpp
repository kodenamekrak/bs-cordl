#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASN1)
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security {
class ASN1;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::ASN1);
// Type: Mono.Security::ASN1
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2273))
// CS Name: ::Mono.Security::ASN1*
class CORDL_TYPE ASN1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_nTag, offset 0x10, size 0x1
  __declspec(property(get = __get_m_nTag, put = __set_m_nTag)) uint8_t m_nTag;

  /// @brief Field m_aValue, offset 0x18, size 0x8
  __declspec(property(get = __get_m_aValue, put = __set_m_aValue))::ArrayW<uint8_t, ::Array<uint8_t>*> m_aValue;

  /// @brief Field elist, offset 0x20, size 0x8
  __declspec(property(get = __get_elist, put = __set_elist))::System::Collections::ArrayList* elist;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Value))::ArrayW<uint8_t, ::Array<uint8_t>*> Value;

  constexpr uint8_t& __get_m_nTag();

  constexpr uint8_t const& __get_m_nTag() const;

  constexpr void __set_m_nTag(uint8_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_m_aValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_m_aValue() const;

  constexpr void __set_m_aValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::ArrayList*& __get_elist();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_elist() const;

  constexpr void __set_elist(::System::Collections::ArrayList* value);

  static inline ::Mono::Security::ASN1* New_ctor(uint8_t tag);

  /// @brief Method .ctor addr 0x241d9bc size 0x2c virtual false final false
  inline void _ctor(uint8_t tag);

  static inline ::Mono::Security::ASN1* New_ctor(uint8_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x241d9e8 size 0x30 virtual false final false
  inline void _ctor(uint8_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::ASN1* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x241da18 size 0x178 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_Count addr 0x241dcb4 size 0x1c virtual false final false
  inline int32_t get_Count();

  /// @brief Method get_Value addr 0x241dcd0 size 0x90 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Value();

  /// @brief Method Add addr 0x241dd60 size 0x8c virtual false final false
  inline ::Mono::Security::ASN1* Add(::Mono::Security::ASN1* asn1);

  /// @brief Method GetBytes addr 0x241ddec size 0x698 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  /// @brief Method Decode addr 0x241db90 size 0x124 virtual false final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> asn1, ByRef<int32_t> anPos, int32_t anLength);

  /// @brief Method DecodeTLV addr 0x241e484 size 0x124 virtual false final false
  inline void DecodeTLV(::ArrayW<uint8_t, ::Array<uint8_t>*> asn1, ByRef<int32_t> pos, ByRef<uint8_t> tag, ByRef<int32_t> length, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> content);

  /// @brief Method ToString addr 0x241e5a8 size 0x290 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "ASN1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ASN1(ASN1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ASN1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ASN1(ASN1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ASN1();

public:
  /// @brief Field m_nTag, offset: 0x10, size: 0x1, def value: None
  uint8_t ___m_nTag;

  /// @brief Field m_aValue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_aValue;

  /// @brief Field elist, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___elist;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::ASN1, 0x28>, "Size mismatch!");

} // namespace Mono::Security
NEED_NO_BOX(::Mono::Security::ASN1);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::ASN1*, "Mono.Security", "ASN1");