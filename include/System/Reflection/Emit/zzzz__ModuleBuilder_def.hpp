#pragma once
// IWYU pragma private; include "System/Reflection/Emit/ModuleBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Module_def.hpp"
CORDL_MODULE_EXPORT(ModuleBuilder)
// Forward declare root types
namespace System::Reflection::Emit {
class ModuleBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::ModuleBuilder);
// Type: System.Reflection.Emit::ModuleBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: ::System.Reflection.Emit::ModuleBuilder*
class CORDL_TYPE ModuleBuilder : public ::System::Reflection::Module {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModuleBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModuleBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModuleBuilder(ModuleBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModuleBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModuleBuilder(ModuleBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3547 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::ModuleBuilder, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::ModuleBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::ModuleBuilder*, "System.Reflection.Emit", "ModuleBuilder");
