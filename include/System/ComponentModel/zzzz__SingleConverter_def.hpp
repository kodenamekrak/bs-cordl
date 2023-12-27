#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SingleConverter)
namespace System {
class Object;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class SingleConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::SingleConverter);
// Type: System.ComponentModel::SingleConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9455))
// CS Name: ::System.ComponentModel::SingleConverter*
class CORDL_TYPE SingleConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_AllowHex)) bool AllowHex;

  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method get_AllowHex addr 0x291837c size 0x8 virtual true final false
  inline bool get_AllowHex();

  /// @brief Method get_TargetType addr 0x2918384 size 0x6c virtual true final false
  inline ::System::Type* get_TargetType();

  /// @brief Method FromString addr 0x29183f0 size 0xc0 virtual true final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  /// @brief Method FromString addr 0x29184b0 size 0x70 virtual true final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method ToString addr 0x2918520 size 0xb0 virtual true final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  static inline ::System::ComponentModel::SingleConverter* New_ctor();

  /// @brief Method .ctor addr 0x29185d0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SingleConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleConverter(SingleConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleConverter(SingleConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::SingleConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::SingleConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SingleConverter*, "System.ComponentModel", "SingleConverter");