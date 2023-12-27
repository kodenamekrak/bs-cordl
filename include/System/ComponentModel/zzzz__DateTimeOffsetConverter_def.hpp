#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(DateTimeOffsetConverter)
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Forward declare root types
namespace System::ComponentModel {
class DateTimeOffsetConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DateTimeOffsetConverter);
// Type: System.ComponentModel::DateTimeOffsetConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9471))
// CS Name: ::System.ComponentModel::DateTimeOffsetConverter*
class CORDL_TYPE DateTimeOffsetConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method CanConvertFrom addr 0x291a570 size 0xa8 virtual true final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo addr 0x291a618 size 0xa8 virtual true final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom addr 0x291a6c0 size 0x380 virtual true final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo addr 0x291aa40 size 0xac0 virtual true final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::ComponentModel::DateTimeOffsetConverter* New_ctor();

  /// @brief Method .ctor addr 0x291b500 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeOffsetConverter(DateTimeOffsetConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeOffsetConverter(DateTimeOffsetConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeOffsetConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DateTimeOffsetConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DateTimeOffsetConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DateTimeOffsetConverter*, "System.ComponentModel", "DateTimeOffsetConverter");