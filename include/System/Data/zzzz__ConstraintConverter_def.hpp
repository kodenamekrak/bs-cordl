#pragma once
// IWYU pragma private; include "System/Data/ConstraintConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ExpandableObjectConverter_def.hpp"
CORDL_MODULE_EXPORT(ConstraintConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ConstraintConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ConstraintConverter);
// Type: System.Data::ConstraintConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ConstraintConverter*
class CORDL_TYPE ConstraintConverter : public ::System::ComponentModel::ExpandableObjectConverter {
public:
  // Declarations
  /// @brief Method CanConvertTo, addr 0x40f5980, size 0xc8, virtual true, abstract: false, final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertTo, addr 0x40f5a48, size 0x974, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::Data::ConstraintConverter* New_ctor();

  /// @brief Method .ctor, addr 0x40f5978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstraintConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintConverter(ConstraintConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintConverter(ConstraintConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11333 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ConstraintConverter, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ConstraintConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ConstraintConverter*, "System.Data", "ConstraintConverter");
