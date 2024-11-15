#pragma once
// IWYU pragma private; include "GlobalNamespace/BasePlatformInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasePlatformInit)
namespace BeatSaber::Init {
class IPlatformInit;
}
namespace GlobalNamespace {
struct __BasePlatformInit___InitializeAsync_d__7;
}
namespace GlobalNamespace {
struct __BasePlatformInit___Initialize_d__5;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class BasePlatformInit;
}
namespace GlobalNamespace {
struct __BasePlatformInit___InitializeAsync_d__7;
}
namespace GlobalNamespace {
struct __BasePlatformInit___Initialize_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasePlatformInit);
MARK_VAL_T(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__BasePlatformInit___Initialize_d__5);
// Type: ::<Initialize>d__5
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BasePlatformInit::<Initialize>d__5
struct CORDL_TYPE __BasePlatformInit___Initialize_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x401c084, size 0x280, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x401c304, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BasePlatformInit___Initialize_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BasePlatformInit*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BasePlatformInit___Initialize_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::BasePlatformInit* __4__this,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BasePlatformInit* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18655 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BasePlatformInit___Initialize_d__5, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeAsync>d__7
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BasePlatformInit::<InitializeAsync>d__7
struct CORDL_TYPE __BasePlatformInit___InitializeAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x401c310, size 0x274, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x401c584, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BasePlatformInit___InitializeAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BasePlatformInit*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __BasePlatformInit___InitializeAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                      ::GlobalNamespace::BasePlatformInit* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BasePlatformInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BasePlatformInit
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BasePlatformInit*
class CORDL_TYPE BasePlatformInit : public ::System::Object {
public:
  // Declarations
  using _InitializeAsync_d__7 = ::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7;

  using _Initialize_d__5 = ::GlobalNamespace::__BasePlatformInit___Initialize_d__5;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInitialized_k__BackingField, put = __cordl_internal_set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field _initializationTask, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask)) ::System::Threading::Tasks::Task_1<bool>* _initializationTask;

  /// @brief Convert operator to "::BeatSaber::Init::IPlatformInit"
  constexpr operator ::BeatSaber::Init::IPlatformInit*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method GetAppVersionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAppVersionAsync();

  /// @brief Method Initialize, addr 0x401befc, size 0x90, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeAsync, addr 0x401bf8c, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeAsync();

  /// @brief Method InitializeInternalAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync();

  static inline ::GlobalNamespace::BasePlatformInit* New_ctor();

  constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField();

  constexpr ::System::Threading::Tasks::Task_1<bool>*& __cordl_internal_get__initializationTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> const& __cordl_internal_get__initializationTask() const;

  constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task_1<bool>* value);

  /// @brief Method .ctor, addr 0x401c07c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsInitialized, addr 0x401bee8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsInitialized();

  /// @brief Convert to "::BeatSaber::Init::IPlatformInit"
  constexpr ::BeatSaber::Init::IPlatformInit* i___BeatSaber__Init__IPlatformInit() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Method set_IsInitialized, addr 0x401bef0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInitialized(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasePlatformInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasePlatformInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasePlatformInit(BasePlatformInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasePlatformInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasePlatformInit(BasePlatformInit const&) = delete;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field _initializationTask, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<bool>* ____initializationTask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasePlatformInit, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasePlatformInit, ____IsInitialized_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasePlatformInit, ____initializationTask) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasePlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasePlatformInit*, "", "BasePlatformInit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BasePlatformInit___InitializeAsync_d__7, "", "BasePlatformInit/<InitializeAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BasePlatformInit___Initialize_d__5, "", "BasePlatformInit/<Initialize>d__5");
