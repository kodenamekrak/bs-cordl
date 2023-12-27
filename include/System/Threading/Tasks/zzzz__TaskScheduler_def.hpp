#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TaskScheduler)
namespace System::Threading::Tasks {
class UnobservedTaskExceptionEventArgs;
}
namespace System {
class Object;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System::Threading::Tasks {
class __TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class Lock;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
class __TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskScheduler);
MARK_REF_PTR_T(::System::Threading::Tasks::__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView);
// Type: ::SystemThreadingTasks_TaskSchedulerDebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2811))
// CS Name: ::TaskScheduler::SystemThreadingTasks_TaskSchedulerDebugView*
class CORDL_TYPE __TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView(__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView(__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::TaskScheduler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2812))
// CS Name: ::System.Threading.Tasks::TaskScheduler*
class CORDL_TYPE TaskScheduler : public ::System::Object {
public:
  // Declarations
  using SystemThreadingTasks_TaskSchedulerDebugView = ::System::Threading::Tasks::__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView;

  /// @brief Field m_taskSchedulerId, offset 0x10, size 0x4
  __declspec(property(get = __get_m_taskSchedulerId, put = __set_m_taskSchedulerId)) int32_t m_taskSchedulerId;

  /// @brief Field s_activeTaskSchedulers, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_activeTaskSchedulers,
      put = setStaticF_s_activeTaskSchedulers))::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>* s_activeTaskSchedulers;

  /// @brief Field s_defaultTaskScheduler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultTaskScheduler, put = setStaticF_s_defaultTaskScheduler))::System::Threading::Tasks::TaskScheduler* s_defaultTaskScheduler;

  /// @brief Field s_taskSchedulerIdCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_taskSchedulerIdCounter, put = setStaticF_s_taskSchedulerIdCounter)) int32_t s_taskSchedulerIdCounter;

  /// @brief Field _unobservedTaskException, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__unobservedTaskException,
                             put = setStaticF__unobservedTaskException))::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* _unobservedTaskException;

  /// @brief Field _unobservedTaskExceptionLockObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__unobservedTaskExceptionLockObject, put = setStaticF__unobservedTaskExceptionLockObject))::System::Threading::Lock* _unobservedTaskExceptionLockObject;

  __declspec(property(get = get_RequiresAtomicStartTransition)) bool RequiresAtomicStartTransition;

  __declspec(property(get = get_Id)) int32_t Id;

  constexpr int32_t& __get_m_taskSchedulerId();

  constexpr int32_t const& __get_m_taskSchedulerId() const;

  constexpr void __set_m_taskSchedulerId(int32_t value);

  static inline void setStaticF_s_activeTaskSchedulers(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>* value);

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Threading::Tasks::TaskScheduler*, ::System::Object*>* getStaticF_s_activeTaskSchedulers();

  static inline void setStaticF_s_defaultTaskScheduler(::System::Threading::Tasks::TaskScheduler* value);

  static inline ::System::Threading::Tasks::TaskScheduler* getStaticF_s_defaultTaskScheduler();

  static inline void setStaticF_s_taskSchedulerIdCounter(int32_t value);

  static inline int32_t getStaticF_s_taskSchedulerIdCounter();

  static inline void setStaticF__unobservedTaskException(::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* value);

  static inline ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* getStaticF__unobservedTaskException();

  static inline void setStaticF__unobservedTaskExceptionLockObject(::System::Threading::Lock* value);

  static inline ::System::Threading::Lock* getStaticF__unobservedTaskExceptionLockObject();

  /// @brief Method QueueTask addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void QueueTask(::System::Threading::Tasks::Task* task);

  /// @brief Method TryExecuteTaskInline addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryExecuteTaskInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);

  /// @brief Method TryRunInline addr 0x26273b0 size 0x1f8 virtual false final false
  inline bool TryRunInline(::System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);

  /// @brief Method TryDequeue addr 0x262d8e0 size 0x8 virtual true final false
  inline bool TryDequeue(::System::Threading::Tasks::Task* task);

  /// @brief Method NotifyWorkItemProgress addr 0x262d8e8 size 0x4 virtual true final false
  inline void NotifyWorkItemProgress();

  /// @brief Method get_RequiresAtomicStartTransition addr 0x262d8ec size 0x8 virtual true final false
  inline bool get_RequiresAtomicStartTransition();

  static inline ::System::Threading::Tasks::TaskScheduler* New_ctor();

  /// @brief Method .ctor addr 0x262d8f4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Default addr 0x262d8fc size 0x58 virtual false final false
  static inline ::System::Threading::Tasks::TaskScheduler* get_Default();

  /// @brief Method get_Current addr 0x2627ce8 size 0xa0 virtual false final false
  static inline ::System::Threading::Tasks::TaskScheduler* get_Current();

  /// @brief Method get_InternalCurrent addr 0x26268c8 size 0xa4 virtual false final false
  static inline ::System::Threading::Tasks::TaskScheduler* get_InternalCurrent();

  /// @brief Method get_Id addr 0x26275a8 size 0x94 virtual false final false
  inline int32_t get_Id();

  /// @brief Method PublishUnobservedTaskException addr 0x262ca14 size 0x134 virtual false final false
  static inline void PublishUnobservedTaskException(::System::Object* sender, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* ueea);

  // Ctor Parameters [CppParam { name: "", ty: "TaskScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskScheduler(TaskScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskScheduler(TaskScheduler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskScheduler();

public:
  /// @brief Field m_taskSchedulerId, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_taskSchedulerId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskScheduler, 0x18>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskScheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskScheduler*, "System.Threading.Tasks", "TaskScheduler");
NEED_NO_BOX(::System::Threading::Tasks::__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView*, "System.Threading.Tasks",
                       "TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView");