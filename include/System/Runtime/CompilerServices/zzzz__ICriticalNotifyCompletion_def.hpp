#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICriticalNotifyCompletion)
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::ICriticalNotifyCompletion);
// Type: System.Runtime.CompilerServices::ICriticalNotifyCompletion
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::ICriticalNotifyCompletion*
class CORDL_TYPE ICriticalNotifyCompletion {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept;

  /// @brief Method UnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICriticalNotifyCompletion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICriticalNotifyCompletion(ICriticalNotifyCompletion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICriticalNotifyCompletion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICriticalNotifyCompletion(ICriticalNotifyCompletion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::ICriticalNotifyCompletion);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ICriticalNotifyCompletion*, "System.Runtime.CompilerServices", "ICriticalNotifyCompletion");
