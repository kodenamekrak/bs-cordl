#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncMethodBuilderCore_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncVoidMethodBuilder)
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncMethodBuilderCore;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder);
// Type: System.Runtime.CompilerServices::AsyncVoidMethodBuilder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3400))
// CS Name: ::System.Runtime.CompilerServices::AsyncVoidMethodBuilder
struct CORDL_TYPE AsyncVoidMethodBuilder {
public:
  // Declarations
  __declspec(property(get = get_Task))::System::Threading::Tasks::Task* Task;

  /// @brief Method Create addr 0x24dc3a0 size 0x40 virtual false final false
  static inline ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Create();

  /// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TStateMachine> inline void Start(ByRef<TStateMachine> stateMachine);

  /// @brief Method SetStateMachine addr 0x24dc3e0 size 0x8 virtual false final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method AwaitOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine);

  /// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine);

  /// @brief Method SetResult addr 0x24dc4b0 size 0x5c virtual false final false
  inline void SetResult();

  /// @brief Method SetException addr 0x24dc61c size 0x134 virtual false final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method NotifySynchronizationContextOfCompletion addr 0x24dc578 size 0xa4 virtual false final false
  inline void NotifySynchronizationContextOfCompletion();

  /// @brief Method get_Task addr 0x24dc50c size 0x6c virtual false final false
  inline ::System::Threading::Tasks::Task* get_Task();

  // Ctor Parameters [CppParam { name: "m_synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None }, CppParam { name: "m_coreState", ty:
  // "::System::Runtime::CompilerServices::AsyncMethodBuilderCore", modifiers: "", def_value: None }, CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None
  // }]
  constexpr AsyncVoidMethodBuilder(::System::Threading::SynchronizationContext* m_synchronizationContext, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState,
                                   ::System::Threading::Tasks::Task* m_task) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncVoidMethodBuilder();

  /// @brief Field m_synchronizationContext, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* m_synchronizationContext;

  /// @brief Field m_coreState, offset: 0x8, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState;

  /// @brief Field m_task, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* m_task;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder");