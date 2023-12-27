#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/zzzz__RuntimeGPtrArrayHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SafeGPtrArrayHandle)
namespace System {
class IDisposable;
}
namespace Mono {
struct RuntimeGPtrArrayHandle;
}
// Forward declare root types
namespace Mono {
struct SafeGPtrArrayHandle;
}
// Write type traits
MARK_VAL_T(::Mono::SafeGPtrArrayHandle);
// Type: Mono::SafeGPtrArrayHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2248))
// CS Name: ::Mono::SafeGPtrArrayHandle
struct CORDL_TYPE SafeGPtrArrayHandle {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Item)) void* Item[];

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x2412e38 size 0x20 virtual false final false
  inline void _ctor(void* ptr);

  /// @brief Method Dispose addr 0x2412e58 size 0x1c virtual true final true
  inline void Dispose();

  /// @brief Method get_Length addr 0x2412e74 size 0x1c virtual false final false
  inline int32_t get_Length();

  /// @brief Method get_Item addr 0x2412e90 size 0x4 virtual false final false
  inline void* get_Item(int32_t i);

  // Ctor Parameters [CppParam { name: "handle", ty: "::Mono::RuntimeGPtrArrayHandle", modifiers: "", def_value: None }]
  constexpr SafeGPtrArrayHandle(::Mono::RuntimeGPtrArrayHandle handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeGPtrArrayHandle();

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  ::Mono::RuntimeGPtrArrayHandle handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SafeGPtrArrayHandle, 0x8>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeGPtrArrayHandle, "Mono", "SafeGPtrArrayHandle");