#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasePlatformInit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusInit)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __OculusInit___CheckEntitlementsAsync_d__8;
}
namespace GlobalNamespace {
struct __OculusInit___CheckUserAgeCategoryAsync_d__9;
}
namespace GlobalNamespace {
struct __OculusInit___GetAppVersionQuestAsync_d__5;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeCoreAsync_d__7;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeInternalAsync_d__3;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeOculusAsync_d__6;
}
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusInit;
}
namespace GlobalNamespace {
struct __OculusInit___CheckEntitlementsAsync_d__8;
}
namespace GlobalNamespace {
struct __OculusInit___CheckUserAgeCategoryAsync_d__9;
}
namespace GlobalNamespace {
struct __OculusInit___GetAppVersionQuestAsync_d__5;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeCoreAsync_d__7;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeInternalAsync_d__3;
}
namespace GlobalNamespace {
struct __OculusInit___InitializeOculusAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusInit);
MARK_VAL_T(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__8);
MARK_VAL_T(::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9);
MARK_VAL_T(::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__3);
MARK_VAL_T(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__6);
// Type: ::<CheckEntitlementsAsync>d__8
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusInit::<CheckEntitlementsAsync>d__8
struct CORDL_TYPE __OculusInit___CheckEntitlementsAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2243774, size 0x23c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2243b3c, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___CheckEntitlementsAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>", modifiers: "", def_value: None }]
  constexpr __OculusInit___CheckEntitlementsAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__8, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__8, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckUserAgeCategoryAsync>d__9
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusInit::<CheckUserAgeCategoryAsync>d__9
struct CORDL_TYPE __OculusInit___CheckUserAgeCategoryAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2243ba4, size 0x44c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2243ff0, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___CheckUserAgeCategoryAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusInit*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __OculusInit___CheckUserAgeCategoryAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::OculusInit* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18217 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9, __u__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetAppVersionQuestAsync>d__5
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusInit::<GetAppVersionQuestAsync>d__5
struct CORDL_TYPE __OculusInit___GetAppVersionQuestAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2244058, size 0x3e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x224443c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___GetAppVersionQuestAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusInit*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion*>*>", modifiers: "", def_value: None }]
  constexpr __OculusInit___GetAppVersionQuestAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::GlobalNamespace::OculusInit* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion*>*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion*>*> __u__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18218 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5, __u__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeCoreAsync>d__7
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusInit::<InitializeCoreAsync>d__7
struct CORDL_TYPE __OculusInit___InitializeCoreAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22444b8, size 0x3ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2244864, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___InitializeCoreAsync_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>", modifiers: "", def_value: None }]
  constexpr __OculusInit___InitializeCoreAsync_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18219 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__7, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__7, __u__1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeInternalAsync>d__3
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusInit::<InitializeInternalAsync>d__3
struct CORDL_TYPE __OculusInit___InitializeInternalAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22448cc, size 0x2c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2244b8c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___InitializeInternalAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusInit*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __OculusInit___InitializeInternalAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::OculusInit* __4__this,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18220 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__3, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__3, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__3, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeOculusAsync>d__6
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusInit::<InitializeOculusAsync>d__6
struct CORDL_TYPE __OculusInit___InitializeOculusAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2244c08, size 0x360, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2244f68, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusInit___InitializeOculusAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusInit*", modifiers: "", def_value: None
  // }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __OculusInit___InitializeOculusAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::OculusInit* __4__this,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusInit* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18221 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__6, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__6, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusInit
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusInit*
class CORDL_TYPE OculusInit : public ::GlobalNamespace::BasePlatformInit {
public:
  // Declarations
  using _CheckEntitlementsAsync_d__8 = ::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__8;

  using _CheckUserAgeCategoryAsync_d__9 = ::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9;

  using _GetAppVersionQuestAsync_d__5 = ::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5;

  using _InitializeCoreAsync_d__7 = ::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__7;

  using _InitializeInternalAsync_d__3 = ::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__3;

  using _InitializeOculusAsync_d__6 = ::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__6;

  /// @brief Field _playerDataModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Method CheckEntitlementsAsync, addr 0x22435f4, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* CheckEntitlementsAsync();

  /// @brief Method CheckUserAgeCategoryAsync, addr 0x22436b0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CheckUserAgeCategoryAsync();

  /// @brief Method GetAppVersionAsync, addr 0x224338c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAppVersionAsync();

  /// @brief Method GetAppVersionQuestAsync, addr 0x2243390, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAppVersionQuestAsync();

  /// @brief Method InitializeCoreAsync, addr 0x2243538, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* InitializeCoreAsync();

  /// @brief Method InitializeInternalAsync, addr 0x224329c, size 0xf0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync();

  /// @brief Method InitializeOculusAsync, addr 0x2243478, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeOculusAsync();

  static inline ::GlobalNamespace::OculusInit* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  /// @brief Method .ctor, addr 0x2243294, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusInit(OculusInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusInit(OculusInit const&) = delete;

  /// @brief Field _playerDataModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18222 };

  /// @brief Field kPlatformNotInstalledMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlatformNotInstalledMessage{
    u"Install the Oculus app to support Oculus platform on PC from: https://www.meta.com/help/quest/articles/getting-started/getting-started-with-rift-s/install-oculus-pc-app/"
  };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusInit, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusInit, ____playerDataModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInit*, "", "OculusInit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___CheckEntitlementsAsync_d__8, "", "OculusInit/<CheckEntitlementsAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___CheckUserAgeCategoryAsync_d__9, "", "OculusInit/<CheckUserAgeCategoryAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___GetAppVersionQuestAsync_d__5, "", "OculusInit/<GetAppVersionQuestAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___InitializeCoreAsync_d__7, "", "OculusInit/<InitializeCoreAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__3, "", "OculusInit/<InitializeInternalAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusInit___InitializeOculusAsync_d__6, "", "OculusInit/<InitializeOculusAsync>d__6");
