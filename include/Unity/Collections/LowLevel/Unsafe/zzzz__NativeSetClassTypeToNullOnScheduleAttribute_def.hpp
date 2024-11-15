#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeSetClassTypeToNullOnScheduleAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeSetClassTypeToNullOnScheduleAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeSetClassTypeToNullOnScheduleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeSetClassTypeToNullOnScheduleAttribute);
// Type: Unity.Collections.LowLevel.Unsafe::NativeSetClassTypeToNullOnScheduleAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeSetClassTypeToNullOnScheduleAttribute*
class CORDL_TYPE NativeSetClassTypeToNullOnScheduleAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeSetClassTypeToNullOnScheduleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeSetClassTypeToNullOnScheduleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeSetClassTypeToNullOnScheduleAttribute(NativeSetClassTypeToNullOnScheduleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeSetClassTypeToNullOnScheduleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeSetClassTypeToNullOnScheduleAttribute(NativeSetClassTypeToNullOnScheduleAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10591 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeSetClassTypeToNullOnScheduleAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeSetClassTypeToNullOnScheduleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeSetClassTypeToNullOnScheduleAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeSetClassTypeToNullOnScheduleAttribute");
