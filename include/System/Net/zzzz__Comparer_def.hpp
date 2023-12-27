#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Comparer)
namespace System {
class Object;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Net {
class Comparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Comparer);
// Type: System.Net::Comparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9125))
// CS Name: ::System.Net::Comparer*
class CORDL_TYPE Comparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method System.Collections.IComparer.Compare addr 0x29adc18 size 0xdc virtual true final true
  inline int32_t System_Collections_IComparer_Compare(::System::Object* ol, ::System::Object* _cordl_or);

  static inline ::System::Net::Comparer* New_ctor();

  /// @brief Method .ctor addr 0x29acc04 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Comparer(Comparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Comparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Comparer(Comparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Comparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Comparer, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::Comparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Comparer*, "System.Net", "Comparer");