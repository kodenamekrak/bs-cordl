#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncBackgroundCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SyncBackgroundCommand)
namespace GlobalNamespace {
class IBackgroundCommand;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncBackgroundCommand;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SyncBackgroundCommand);
// Type: ::SyncBackgroundCommand
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SyncBackgroundCommand*
class CORDL_TYPE SyncBackgroundCommand : public ::System::Object {
public:
  // Declarations
  /// @brief Field _taskCompletionSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__taskCompletionSource,
                      put = __cordl_internal_set__taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* _taskCompletionSource;

  __declspec(property(get = get_resultTask)) ::System::Threading::Tasks::Task* resultTask;

  /// @brief Convert operator to "::GlobalNamespace::IBackgroundCommand"
  constexpr operator ::GlobalNamespace::IBackgroundCommand*() noexcept;

  /// @brief Method Execute, addr 0x227dcdc, size 0x168, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Execute();

  /// @brief Method ExecuteInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ExecuteInternal();

  static inline ::GlobalNamespace::SyncBackgroundCommand* New_ctor();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& __cordl_internal_get__taskCompletionSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*> const& __cordl_internal_get__taskCompletionSource() const;

  constexpr void __cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x227de44, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_resultTask, addr 0x227dc94, size 0x48, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* get_resultTask();

  /// @brief Convert to "::GlobalNamespace::IBackgroundCommand"
  constexpr ::GlobalNamespace::IBackgroundCommand* i___GlobalNamespace__IBackgroundCommand() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyncBackgroundCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SyncBackgroundCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyncBackgroundCommand(SyncBackgroundCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyncBackgroundCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyncBackgroundCommand(SyncBackgroundCommand const&) = delete;

  /// @brief Field _taskCompletionSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* ____taskCompletionSource;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17174 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SyncBackgroundCommand, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncBackgroundCommand, ____taskCompletionSource) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SyncBackgroundCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncBackgroundCommand*, "", "SyncBackgroundCommand");
