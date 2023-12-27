#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeLoadExceptionHolder)
// Forward declare root types
namespace System::Runtime::Serialization {
class TypeLoadExceptionHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::TypeLoadExceptionHolder);
// Type: System.Runtime.Serialization::TypeLoadExceptionHolder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3224))
// CS Name: ::System.Runtime.Serialization::TypeLoadExceptionHolder*
class CORDL_TYPE TypeLoadExceptionHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_typeName, offset 0x10, size 0x8
  __declspec(property(get = __get_m_typeName, put = __set_m_typeName))::StringW m_typeName;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  constexpr ::StringW& __get_m_typeName();

  constexpr ::StringW const& __get_m_typeName() const;

  constexpr void __set_m_typeName(::StringW value);

  static inline ::System::Runtime::Serialization::TypeLoadExceptionHolder* New_ctor(::StringW typeName);

  /// @brief Method .ctor addr 0x24bcd64 size 0x28 virtual false final false
  inline void _ctor(::StringW typeName);

  /// @brief Method get_TypeName addr 0x24bcd8c size 0x8 virtual false final false
  inline ::StringW get_TypeName();

  // Ctor Parameters [CppParam { name: "", ty: "TypeLoadExceptionHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeLoadExceptionHolder(TypeLoadExceptionHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeLoadExceptionHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeLoadExceptionHolder(TypeLoadExceptionHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeLoadExceptionHolder();

public:
  /// @brief Field m_typeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::TypeLoadExceptionHolder, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::TypeLoadExceptionHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::TypeLoadExceptionHolder*, "System.Runtime.Serialization", "TypeLoadExceptionHolder");