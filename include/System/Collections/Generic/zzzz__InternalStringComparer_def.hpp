#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalStringComparer)
// Forward declare root types
namespace System::Collections::Generic {
class InternalStringComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::InternalStringComparer);
// Type: System.Collections.Generic::InternalStringComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 397 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3878))
// CS Name: ::System.Collections.Generic::InternalStringComparer*
class CORDL_TYPE InternalStringComparer : public ::System::Collections::Generic::EqualityComparer_1<::StringW> {
public:
  // Declarations
  /// @brief Method GetHashCode addr 0x258c090 size 0x20 virtual true final false
  inline int32_t GetHashCode(::StringW obj);

  /// @brief Method Equals addr 0x258c0b0 size 0x30 virtual true final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method IndexOf addr 0x258c0e0 size 0x6c virtual true final false
  inline int32_t IndexOf(::ArrayW<::StringW, ::Array<::StringW>*> array, ::StringW value, int32_t startIndex, int32_t count);

  static inline ::System::Collections::Generic::InternalStringComparer* New_ctor();

  /// @brief Method .ctor addr 0x258c14c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InternalStringComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalStringComparer(InternalStringComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalStringComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalStringComparer(InternalStringComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalStringComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::InternalStringComparer, 0x10>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::InternalStringComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::InternalStringComparer*, "System.Collections.Generic", "InternalStringComparer");