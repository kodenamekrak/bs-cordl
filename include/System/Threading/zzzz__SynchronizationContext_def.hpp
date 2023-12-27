#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SynchronizationContextProperties_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SynchronizationContext)
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Threading {
class SynchronizationContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::SynchronizationContext);
// Type: System.Threading::SynchronizationContext
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2717))
// CS Name: ::System.Threading::SynchronizationContext*
class CORDL_TYPE SynchronizationContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _props, offset 0x10, size 0x4
  __declspec(property(get = __get__props, put = __set__props))::System::Threading::SynchronizationContextProperties _props;

  /// @brief Field s_cachedPreparedType1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType1, put = setStaticF_s_cachedPreparedType1))::System::Type* s_cachedPreparedType1;

  /// @brief Field s_cachedPreparedType2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType2, put = setStaticF_s_cachedPreparedType2))::System::Type* s_cachedPreparedType2;

  /// @brief Field s_cachedPreparedType3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType3, put = setStaticF_s_cachedPreparedType3))::System::Type* s_cachedPreparedType3;

  /// @brief Field s_cachedPreparedType4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType4, put = setStaticF_s_cachedPreparedType4))::System::Type* s_cachedPreparedType4;

  /// @brief Field s_cachedPreparedType5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType5, put = setStaticF_s_cachedPreparedType5))::System::Type* s_cachedPreparedType5;

  constexpr ::System::Threading::SynchronizationContextProperties& __get__props();

  constexpr ::System::Threading::SynchronizationContextProperties const& __get__props() const;

  constexpr void __set__props(::System::Threading::SynchronizationContextProperties value);

  static inline void setStaticF_s_cachedPreparedType1(::System::Type* value);

  static inline ::System::Type* getStaticF_s_cachedPreparedType1();

  static inline void setStaticF_s_cachedPreparedType2(::System::Type* value);

  static inline ::System::Type* getStaticF_s_cachedPreparedType2();

  static inline void setStaticF_s_cachedPreparedType3(::System::Type* value);

  static inline ::System::Type* getStaticF_s_cachedPreparedType3();

  static inline void setStaticF_s_cachedPreparedType4(::System::Type* value);

  static inline ::System::Type* getStaticF_s_cachedPreparedType4();

  static inline void setStaticF_s_cachedPreparedType5(::System::Type* value);

  static inline ::System::Type* getStaticF_s_cachedPreparedType5();

  static inline ::System::Threading::SynchronizationContext* New_ctor();

  /// @brief Method .ctor addr 0x2618734 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method IsWaitNotificationRequired addr 0x261873c size 0xc virtual false final false
  inline bool IsWaitNotificationRequired();

  /// @brief Method Send addr 0x2618748 size 0x28 virtual true final false
  inline void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method Post addr 0x2618770 size 0x8c virtual true final false
  inline void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method OperationStarted addr 0x2618928 size 0x4 virtual true final false
  inline void OperationStarted();

  /// @brief Method OperationCompleted addr 0x261892c size 0x4 virtual true final false
  inline void OperationCompleted();

  /// @brief Method Wait addr 0x2618930 size 0x64 virtual true final false
  inline int32_t Wait(::ArrayW<void*, ::Array<void*>*> waitHandles, bool waitAll, int32_t millisecondsTimeout);

  /// @brief Method WaitHelper addr 0x2618994 size 0x8c virtual false final false
  static inline int32_t WaitHelper(::ArrayW<void*, ::Array<void*>*> waitHandles, bool waitAll, int32_t millisecondsTimeout);

  /// @brief Method SetSynchronizationContext addr 0x2618a20 size 0x28 virtual false final false
  static inline void SetSynchronizationContext(::System::Threading::SynchronizationContext* syncContext);

  /// @brief Method get_Current addr 0x26106f4 size 0x30 virtual false final false
  static inline ::System::Threading::SynchronizationContext* get_Current();

  /// @brief Method get_CurrentNoFlow addr 0x2618a94 size 0x30 virtual false final false
  static inline ::System::Threading::SynchronizationContext* get_CurrentNoFlow();

  /// @brief Method GetThreadLocalContext addr 0x2618a48 size 0x4c virtual false final false
  static inline ::System::Threading::SynchronizationContext* GetThreadLocalContext();

  /// @brief Method CreateCopy addr 0x2618c20 size 0x5c virtual true final false
  inline ::System::Threading::SynchronizationContext* CreateCopy();

  /// @brief Method get_CurrentExplicit addr 0x2618c7c size 0x4 virtual false final false
  static inline ::System::Threading::SynchronizationContext* get_CurrentExplicit();

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SynchronizationContext(SynchronizationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SynchronizationContext(SynchronizationContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronizationContext();

public:
  /// @brief Field _props, offset: 0x10, size: 0x4, def value: None
  ::System::Threading::SynchronizationContextProperties ____props;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SynchronizationContext, 0x18>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::SynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SynchronizationContext*, "System.Threading", "SynchronizationContext");