#pragma once
// IWYU pragma private; include "System/Data/DataColumnChangeEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataColumnChangeEventHandler)
namespace System::Data {
class DataColumnChangeEventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataColumnChangeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataColumnChangeEventHandler);
// Type: System.Data::DataColumnChangeEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataColumnChangeEventHandler*
class CORDL_TYPE DataColumnChangeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x40f6bac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Data::DataColumnChangeEventArgs* e);

  static inline ::System::Data::DataColumnChangeEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40f6aa8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataColumnChangeEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataColumnChangeEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataColumnChangeEventHandler(DataColumnChangeEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataColumnChangeEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataColumnChangeEventHandler(DataColumnChangeEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11339 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataColumnChangeEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataColumnChangeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataColumnChangeEventHandler*, "System.Data", "DataColumnChangeEventHandler");
