#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Process)
namespace System::Diagnostics {
class ProcessModuleCollection;
}
namespace System::ComponentModel {
class ISynchronizeInvoke;
}
namespace System::Threading {
class RegisteredWaitHandle;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::IO {
class StreamReader;
}
namespace System::Diagnostics {
class AsyncStreamReader;
}
namespace System::Diagnostics {
class ProcessThreadTimes;
}
namespace System::Diagnostics {
class ProcessInfo;
}
namespace System::Diagnostics {
struct __Process__ProcInfo;
}
namespace System::Diagnostics {
struct __Process__State;
}
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
namespace System::Diagnostics {
class ProcessStartInfo;
}
namespace System::Diagnostics {
class ProcessThreadCollection;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Object;
}
namespace System::Diagnostics {
struct __Process__StreamReadMode;
}
namespace System {
class EventHandler;
}
namespace System::IO {
class StreamWriter;
}
// Forward declare root types
namespace System::Diagnostics {
struct __Process__State;
}
namespace System::Diagnostics {
struct __Process__StreamReadMode;
}
namespace System::Diagnostics {
class Process;
}
namespace System::Diagnostics {
struct __Process__ProcInfo;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::__Process__State);
MARK_VAL_T(::System::Diagnostics::__Process__StreamReadMode);
MARK_REF_PTR_T(::System::Diagnostics::Process);
MARK_VAL_T(::System::Diagnostics::__Process__ProcInfo);
// Type: ::StreamReadMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8948))
// CS Name: ::Process::StreamReadMode
struct CORDL_TYPE __Process__StreamReadMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Process__StreamReadMode_Unwrapped
  enum struct ____Process__StreamReadMode_Unwrapped : int32_t {
    __E_undefined = static_cast<int32_t>(0x0),
    __E_syncMode = static_cast<int32_t>(0x1),
    __E_asyncMode = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Process__StreamReadMode_Unwrapped() const noexcept {
    return static_cast<____Process__StreamReadMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Process__StreamReadMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Process__StreamReadMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field undefined value: static_cast<int32_t>(0x0)
  static ::System::Diagnostics::__Process__StreamReadMode const undefined;

  /// @brief Field syncMode value: static_cast<int32_t>(0x1)
  static ::System::Diagnostics::__Process__StreamReadMode const syncMode;

  /// @brief Field asyncMode value: static_cast<int32_t>(0x2)
  static ::System::Diagnostics::__Process__StreamReadMode const asyncMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::__Process__StreamReadMode, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8949))
// CS Name: ::Process::State
struct CORDL_TYPE __Process__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Process__State_Unwrapped
  enum struct ____Process__State_Unwrapped : int32_t {
    __E_HaveId = static_cast<int32_t>(0x1),
    __E_IsLocal = static_cast<int32_t>(0x2),
    __E_IsNt = static_cast<int32_t>(0x4),
    __E_HaveProcessInfo = static_cast<int32_t>(0x8),
    __E_Exited = static_cast<int32_t>(0x10),
    __E_Associated = static_cast<int32_t>(0x20),
    __E_IsWin2k = static_cast<int32_t>(0x40),
    __E_HaveNtProcessInfo = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Process__State_Unwrapped() const noexcept {
    return static_cast<____Process__State_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Process__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Process__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HaveId value: static_cast<int32_t>(0x1)
  static ::System::Diagnostics::__Process__State const HaveId;

  /// @brief Field IsLocal value: static_cast<int32_t>(0x2)
  static ::System::Diagnostics::__Process__State const IsLocal;

  /// @brief Field IsNt value: static_cast<int32_t>(0x4)
  static ::System::Diagnostics::__Process__State const IsNt;

  /// @brief Field HaveProcessInfo value: static_cast<int32_t>(0x8)
  static ::System::Diagnostics::__Process__State const HaveProcessInfo;

  /// @brief Field Exited value: static_cast<int32_t>(0x10)
  static ::System::Diagnostics::__Process__State const Exited;

  /// @brief Field Associated value: static_cast<int32_t>(0x20)
  static ::System::Diagnostics::__Process__State const Associated;

  /// @brief Field IsWin2k value: static_cast<int32_t>(0x40)
  static ::System::Diagnostics::__Process__State const IsWin2k;

  /// @brief Field HaveNtProcessInfo value: static_cast<int32_t>(0xc)
  static ::System::Diagnostics::__Process__State const HaveNtProcessInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::__Process__State, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
// Type: ::ProcInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8950))
// CS Name: ::Process::ProcInfo
struct CORDL_TYPE __Process__ProcInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "process_handle", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "envVariables", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "Domain", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Password", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "LoadUserProfile", ty: "bool", modifiers:
  // "", def_value: None }]
  constexpr __Process__ProcInfo(void* process_handle, int32_t pid, ::ArrayW<::StringW, ::Array<::StringW>*> envVariables, ::StringW UserName, ::StringW Domain, void* Password,
                                bool LoadUserProfile) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Process__ProcInfo();

  /// @brief Field process_handle, offset: 0x0, size: 0x8, def value: None
  void* process_handle;

  /// @brief Field pid, offset: 0x8, size: 0x4, def value: None
  int32_t pid;

  /// @brief Field envVariables, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> envVariables;

  /// @brief Field UserName, offset: 0x18, size: 0x8, def value: None
  ::StringW UserName;

  /// @brief Field Domain, offset: 0x20, size: 0x8, def value: None
  ::StringW Domain;

  /// @brief Field Password, offset: 0x28, size: 0x8, def value: None
  void* Password;

  /// @brief Field LoadUserProfile, offset: 0x30, size: 0x1, def value: None
  bool LoadUserProfile;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::__Process__ProcInfo, 0x38>, "Size mismatch!");

} // namespace System::Diagnostics
// Type: System.Diagnostics::Process
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8948)), TypeDefinitionIndex(TypeDefinitionIndex(9469))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8951))
// CS Name: ::System.Diagnostics::Process*
class CORDL_TYPE Process : public ::System::ComponentModel::Component {
public:
  // Declarations
  using ProcInfo = ::System::Diagnostics::__Process__ProcInfo;

  using State = ::System::Diagnostics::__Process__State;

  using StreamReadMode = ::System::Diagnostics::__Process__StreamReadMode;

  /// @brief Field haveProcessId, offset 0x28, size 0x1
  __declspec(property(get = __get_haveProcessId, put = __set_haveProcessId)) bool haveProcessId;

  /// @brief Field processId, offset 0x2c, size 0x4
  __declspec(property(get = __get_processId, put = __set_processId)) int32_t processId;

  /// @brief Field haveProcessHandle, offset 0x30, size 0x1
  __declspec(property(get = __get_haveProcessHandle, put = __set_haveProcessHandle)) bool haveProcessHandle;

  /// @brief Field m_processHandle, offset 0x38, size 0x8
  __declspec(property(get = __get_m_processHandle, put = __set_m_processHandle))::Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle;

  /// @brief Field isRemoteMachine, offset 0x40, size 0x1
  __declspec(property(get = __get_isRemoteMachine, put = __set_isRemoteMachine)) bool isRemoteMachine;

  /// @brief Field machineName, offset 0x48, size 0x8
  __declspec(property(get = __get_machineName, put = __set_machineName))::StringW machineName;

  /// @brief Field m_processAccess, offset 0x50, size 0x4
  __declspec(property(get = __get_m_processAccess, put = __set_m_processAccess)) int32_t m_processAccess;

  /// @brief Field threads, offset 0x58, size 0x8
  __declspec(property(get = __get_threads, put = __set_threads))::System::Diagnostics::ProcessThreadCollection* threads;

  /// @brief Field modules, offset 0x60, size 0x8
  __declspec(property(get = __get_modules, put = __set_modules))::System::Diagnostics::ProcessModuleCollection* modules;

  /// @brief Field haveWorkingSetLimits, offset 0x68, size 0x1
  __declspec(property(get = __get_haveWorkingSetLimits, put = __set_haveWorkingSetLimits)) bool haveWorkingSetLimits;

  /// @brief Field havePriorityClass, offset 0x69, size 0x1
  __declspec(property(get = __get_havePriorityClass, put = __set_havePriorityClass)) bool havePriorityClass;

  /// @brief Field startInfo, offset 0x70, size 0x8
  __declspec(property(get = __get_startInfo, put = __set_startInfo))::System::Diagnostics::ProcessStartInfo* startInfo;

  /// @brief Field watchForExit, offset 0x78, size 0x1
  __declspec(property(get = __get_watchForExit, put = __set_watchForExit)) bool watchForExit;

  /// @brief Field watchingForExit, offset 0x79, size 0x1
  __declspec(property(get = __get_watchingForExit, put = __set_watchingForExit)) bool watchingForExit;

  /// @brief Field onExited, offset 0x80, size 0x8
  __declspec(property(get = __get_onExited, put = __set_onExited))::System::EventHandler* onExited;

  /// @brief Field exited, offset 0x88, size 0x1
  __declspec(property(get = __get_exited, put = __set_exited)) bool exited;

  /// @brief Field exitCode, offset 0x8c, size 0x4
  __declspec(property(get = __get_exitCode, put = __set_exitCode)) int32_t exitCode;

  /// @brief Field signaled, offset 0x90, size 0x1
  __declspec(property(get = __get_signaled, put = __set_signaled)) bool signaled;

  /// @brief Field haveExitTime, offset 0x91, size 0x1
  __declspec(property(get = __get_haveExitTime, put = __set_haveExitTime)) bool haveExitTime;

  /// @brief Field raisedOnExited, offset 0x92, size 0x1
  __declspec(property(get = __get_raisedOnExited, put = __set_raisedOnExited)) bool raisedOnExited;

  /// @brief Field registeredWaitHandle, offset 0x98, size 0x8
  __declspec(property(get = __get_registeredWaitHandle, put = __set_registeredWaitHandle))::System::Threading::RegisteredWaitHandle* registeredWaitHandle;

  /// @brief Field waitHandle, offset 0xa0, size 0x8
  __declspec(property(get = __get_waitHandle, put = __set_waitHandle))::System::Threading::WaitHandle* waitHandle;

  /// @brief Field synchronizingObject, offset 0xa8, size 0x8
  __declspec(property(get = __get_synchronizingObject, put = __set_synchronizingObject))::System::ComponentModel::ISynchronizeInvoke* synchronizingObject;

  /// @brief Field standardOutput, offset 0xb0, size 0x8
  __declspec(property(get = __get_standardOutput, put = __set_standardOutput))::System::IO::StreamReader* standardOutput;

  /// @brief Field standardInput, offset 0xb8, size 0x8
  __declspec(property(get = __get_standardInput, put = __set_standardInput))::System::IO::StreamWriter* standardInput;

  /// @brief Field standardError, offset 0xc0, size 0x8
  __declspec(property(get = __get_standardError, put = __set_standardError))::System::IO::StreamReader* standardError;

  /// @brief Field disposed, offset 0xc8, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field outputStreamReadMode, offset 0xcc, size 0x4
  __declspec(property(get = __get_outputStreamReadMode, put = __set_outputStreamReadMode))::System::Diagnostics::__Process__StreamReadMode outputStreamReadMode;

  /// @brief Field errorStreamReadMode, offset 0xd0, size 0x4
  __declspec(property(get = __get_errorStreamReadMode, put = __set_errorStreamReadMode))::System::Diagnostics::__Process__StreamReadMode errorStreamReadMode;

  /// @brief Field inputStreamReadMode, offset 0xd4, size 0x4
  __declspec(property(get = __get_inputStreamReadMode, put = __set_inputStreamReadMode))::System::Diagnostics::__Process__StreamReadMode inputStreamReadMode;

  /// @brief Field output, offset 0xd8, size 0x8
  __declspec(property(get = __get_output, put = __set_output))::System::Diagnostics::AsyncStreamReader* output;

  /// @brief Field error, offset 0xe0, size 0x8
  __declspec(property(get = __get_error, put = __set_error))::System::Diagnostics::AsyncStreamReader* error;

  /// @brief Field process_name, offset 0xe8, size 0x8
  __declspec(property(get = __get_process_name, put = __set_process_name))::StringW process_name;

  __declspec(property(get = get_Associated)) bool Associated;

  __declspec(property(get = get_ExitCode)) int32_t ExitCode;

  __declspec(property(get = get_HasExited)) bool HasExited;

  __declspec(property(get = get_Handle)) void* Handle;

  __declspec(property(get = get_Id)) int32_t Id;

  __declspec(property(get = get_StartInfo, put = set_StartInfo))::System::Diagnostics::ProcessStartInfo* StartInfo;

  __declspec(property(get = get_SynchronizingObject))::System::ComponentModel::ISynchronizeInvoke* SynchronizingObject;

  __declspec(property(get = get_TotalProcessorTime))::System::TimeSpan TotalProcessorTime;

  __declspec(property(get = get_StandardOutput))::System::IO::StreamReader* StandardOutput;

  __declspec(property(get = get_StandardError))::System::IO::StreamReader* StandardError;

  __declspec(property(get = get_ProcessName))::StringW ProcessName;

  constexpr bool& __get_haveProcessId();

  constexpr bool const& __get_haveProcessId() const;

  constexpr void __set_haveProcessId(bool value);

  constexpr int32_t& __get_processId();

  constexpr int32_t const& __get_processId() const;

  constexpr void __set_processId(int32_t value);

  constexpr bool& __get_haveProcessHandle();

  constexpr bool const& __get_haveProcessHandle() const;

  constexpr void __set_haveProcessHandle(bool value);

  constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle*& __get_m_processHandle();

  constexpr ::cordl_internals::to_const_pointer<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> const& __get_m_processHandle() const;

  constexpr void __set_m_processHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value);

  constexpr bool& __get_isRemoteMachine();

  constexpr bool const& __get_isRemoteMachine() const;

  constexpr void __set_isRemoteMachine(bool value);

  constexpr ::StringW& __get_machineName();

  constexpr ::StringW const& __get_machineName() const;

  constexpr void __set_machineName(::StringW value);

  constexpr int32_t& __get_m_processAccess();

  constexpr int32_t const& __get_m_processAccess() const;

  constexpr void __set_m_processAccess(int32_t value);

  constexpr ::System::Diagnostics::ProcessThreadCollection*& __get_threads();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessThreadCollection*> const& __get_threads() const;

  constexpr void __set_threads(::System::Diagnostics::ProcessThreadCollection* value);

  constexpr ::System::Diagnostics::ProcessModuleCollection*& __get_modules();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessModuleCollection*> const& __get_modules() const;

  constexpr void __set_modules(::System::Diagnostics::ProcessModuleCollection* value);

  constexpr bool& __get_haveWorkingSetLimits();

  constexpr bool const& __get_haveWorkingSetLimits() const;

  constexpr void __set_haveWorkingSetLimits(bool value);

  constexpr bool& __get_havePriorityClass();

  constexpr bool const& __get_havePriorityClass() const;

  constexpr void __set_havePriorityClass(bool value);

  constexpr ::System::Diagnostics::ProcessStartInfo*& __get_startInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessStartInfo*> const& __get_startInfo() const;

  constexpr void __set_startInfo(::System::Diagnostics::ProcessStartInfo* value);

  constexpr bool& __get_watchForExit();

  constexpr bool const& __get_watchForExit() const;

  constexpr void __set_watchForExit(bool value);

  constexpr bool& __get_watchingForExit();

  constexpr bool const& __get_watchingForExit() const;

  constexpr void __set_watchingForExit(bool value);

  constexpr ::System::EventHandler*& __get_onExited();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> const& __get_onExited() const;

  constexpr void __set_onExited(::System::EventHandler* value);

  constexpr bool& __get_exited();

  constexpr bool const& __get_exited() const;

  constexpr void __set_exited(bool value);

  constexpr int32_t& __get_exitCode();

  constexpr int32_t const& __get_exitCode() const;

  constexpr void __set_exitCode(int32_t value);

  constexpr bool& __get_signaled();

  constexpr bool const& __get_signaled() const;

  constexpr void __set_signaled(bool value);

  constexpr bool& __get_haveExitTime();

  constexpr bool const& __get_haveExitTime() const;

  constexpr void __set_haveExitTime(bool value);

  constexpr bool& __get_raisedOnExited();

  constexpr bool const& __get_raisedOnExited() const;

  constexpr void __set_raisedOnExited(bool value);

  constexpr ::System::Threading::RegisteredWaitHandle*& __get_registeredWaitHandle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::RegisteredWaitHandle*> const& __get_registeredWaitHandle() const;

  constexpr void __set_registeredWaitHandle(::System::Threading::RegisteredWaitHandle* value);

  constexpr ::System::Threading::WaitHandle*& __get_waitHandle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& __get_waitHandle() const;

  constexpr void __set_waitHandle(::System::Threading::WaitHandle* value);

  constexpr ::System::ComponentModel::ISynchronizeInvoke*& __get_synchronizingObject();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ISynchronizeInvoke*> const& __get_synchronizingObject() const;

  constexpr void __set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value);

  constexpr ::System::IO::StreamReader*& __get_standardOutput();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& __get_standardOutput() const;

  constexpr void __set_standardOutput(::System::IO::StreamReader* value);

  constexpr ::System::IO::StreamWriter*& __get_standardInput();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamWriter*> const& __get_standardInput() const;

  constexpr void __set_standardInput(::System::IO::StreamWriter* value);

  constexpr ::System::IO::StreamReader*& __get_standardError();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& __get_standardError() const;

  constexpr void __set_standardError(::System::IO::StreamReader* value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::Diagnostics::__Process__StreamReadMode& __get_outputStreamReadMode();

  constexpr ::System::Diagnostics::__Process__StreamReadMode const& __get_outputStreamReadMode() const;

  constexpr void __set_outputStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value);

  constexpr ::System::Diagnostics::__Process__StreamReadMode& __get_errorStreamReadMode();

  constexpr ::System::Diagnostics::__Process__StreamReadMode const& __get_errorStreamReadMode() const;

  constexpr void __set_errorStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value);

  constexpr ::System::Diagnostics::__Process__StreamReadMode& __get_inputStreamReadMode();

  constexpr ::System::Diagnostics::__Process__StreamReadMode const& __get_inputStreamReadMode() const;

  constexpr void __set_inputStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value);

  constexpr ::System::Diagnostics::AsyncStreamReader*& __get_output();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::AsyncStreamReader*> const& __get_output() const;

  constexpr void __set_output(::System::Diagnostics::AsyncStreamReader* value);

  constexpr ::System::Diagnostics::AsyncStreamReader*& __get_error();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::AsyncStreamReader*> const& __get_error() const;

  constexpr void __set_error(::System::Diagnostics::AsyncStreamReader* value);

  constexpr ::StringW& __get_process_name();

  constexpr ::StringW const& __get_process_name() const;

  constexpr void __set_process_name(::StringW value);

  static inline ::System::Diagnostics::Process* New_ctor();

  /// @brief Method .ctor addr 0x296ec58 size 0x88 virtual false final false
  inline void _ctor();

  static inline ::System::Diagnostics::Process* New_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo);

  /// @brief Method .ctor addr 0x296ece0 size 0x9c virtual false final false
  inline void _ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo);

  /// @brief Method get_Associated addr 0x296ed7c size 0x20 virtual false final false
  inline bool get_Associated();

  /// @brief Method get_ExitCode addr 0x296ed9c size 0x12c virtual false final false
  inline int32_t get_ExitCode();

  /// @brief Method get_HasExited addr 0x296f000 size 0x370 virtual false final false
  inline bool get_HasExited();

  /// @brief Method GetProcessTimes addr 0x296fa68 size 0x2c8 virtual false final false
  inline ::System::Diagnostics::ProcessThreadTimes* GetProcessTimes();

  /// @brief Method get_Handle addr 0x296fd38 size 0x30 virtual false final false
  inline void* get_Handle();

  /// @brief Method get_Id addr 0x296cdcc size 0x1c virtual false final false
  inline int32_t get_Id();

  /// @brief Method get_StartInfo addr 0x296fe24 size 0x6c virtual false final false
  inline ::System::Diagnostics::ProcessStartInfo* get_StartInfo();

  /// @brief Method set_StartInfo addr 0x296ff14 size 0x60 virtual false final false
  inline void set_StartInfo(::System::Diagnostics::ProcessStartInfo* value);

  /// @brief Method get_SynchronizingObject addr 0x296ff74 size 0x1a0 virtual false final false
  inline ::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject();

  /// @brief Method get_TotalProcessorTime addr 0x2970114 size 0x20 virtual false final false
  inline ::System::TimeSpan get_TotalProcessorTime();

  /// @brief Method get_StandardOutput addr 0x2970140 size 0x9c virtual false final false
  inline ::System::IO::StreamReader* get_StandardOutput();

  /// @brief Method get_StandardError addr 0x29701dc size 0x9c virtual false final false
  inline ::System::IO::StreamReader* get_StandardError();

  /// @brief Method ReleaseProcessHandle addr 0x2970278 size 0x28 virtual false final false
  inline void ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);

  /// @brief Method CompletionCallback addr 0x29702a0 size 0x18 virtual false final false
  inline void CompletionCallback(::System::Object* context, bool wasSignaled);

  /// @brief Method Dispose addr 0x29703cc size 0x50 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Close addr 0x297041c size 0x158 virtual false final false
  inline void Close();

  /// @brief Method EnsureState addr 0x296eec8 size 0x138 virtual false final false
  inline void EnsureState(::System::Diagnostics::__Process__State state);

  /// @brief Method EnsureWatchingForExit addr 0x2970588 size 0x234 virtual false final false
  inline void EnsureWatchingForExit();

  /// @brief Method GetProcessById addr 0x29707bc size 0x48 virtual false final false
  static inline ::System::Diagnostics::Process* GetProcessById(int32_t processId);

  /// @brief Method GetCurrentProcess addr 0x296cd44 size 0x88 virtual false final false
  static inline ::System::Diagnostics::Process* GetCurrentProcess();

  /// @brief Method OnExited addr 0x29709dc size 0x240 virtual false final false
  inline void OnExited();

  /// @brief Method GetProcessHandle addr 0x296f370 size 0x4c4 virtual false final false
  inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int32_t access, bool throwIfExited);

  /// @brief Method GetProcessHandle addr 0x2970c1c size 0x8 virtual false final false
  inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int32_t access);

  /// @brief Method OpenProcessHandle addr 0x296fd68 size 0xbc virtual false final false
  inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* OpenProcessHandle(int32_t access);

  /// @brief Method Refresh addr 0x2970574 size 0x14 virtual false final false
  inline void Refresh();

  /// @brief Method SetProcessHandle addr 0x2970c24 size 0x1c virtual false final false
  inline void SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle);

  /// @brief Method SetProcessId addr 0x2970c40 size 0x10 virtual false final false
  inline void SetProcessId(int32_t processId);

  /// @brief Method Start addr 0x2970c50 size 0xfc virtual false final false
  inline bool Start();

  /// @brief Method StopWatchingForExit addr 0x29702b8 size 0x114 virtual false final false
  inline void StopWatchingForExit();

  /// @brief Method ToString addr 0x2972540 size 0x16c virtual true final false
  inline ::StringW ToString();

  static inline ::System::Diagnostics::Process* New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id);

  /// @brief Method .ctor addr 0x29726ac size 0x90 virtual false final false
  inline void _ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id);

  /// @brief Method ProcessName_icall addr 0x297273c size 0x4 virtual false final false
  static inline ::StringW ProcessName_icall(void* handle);

  /// @brief Method ProcessName_internal addr 0x2972740 size 0xe0 virtual false final false
  static inline ::StringW ProcessName_internal(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);

  /// @brief Method get_ProcessName addr 0x296cde8 size 0x230 virtual false final false
  inline ::StringW get_ProcessName();

  /// @brief Method GetProcess_internal addr 0x2972820 size 0x4 virtual false final false
  static inline void* GetProcess_internal(int32_t pid);

  /// @brief Method GetProcessById addr 0x2970804 size 0x1d8 virtual false final false
  static inline ::System::Diagnostics::Process* GetProcessById(int32_t processId, ::StringW machineName);

  /// @brief Method IsLocalMachine addr 0x2972824 size 0x90 virtual false final false
  static inline bool IsLocalMachine(::StringW machineName);

  /// @brief Method ShellExecuteEx_internal addr 0x29728b4 size 0x4 virtual false final false
  static inline bool ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo);

  /// @brief Method CreateProcess_internal addr 0x29728b8 size 0x4 virtual false final false
  static inline bool CreateProcess_internal(::System::Diagnostics::ProcessStartInfo* startInfo, void* stdin, void* stdout, void* stderr, ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo);

  /// @brief Method StartWithShellExecuteEx addr 0x2970da0 size 0x3c8 virtual false final false
  inline bool StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo* startInfo);

  /// @brief Method CreatePipe addr 0x2972a50 size 0x19c virtual false final false
  static inline void CreatePipe(ByRef<void*> read, ByRef<void*> write, bool writeDirection);

  /// @brief Method get_IsWindows addr 0x2972bec size 0x34 virtual false final false
  static inline bool get_IsWindows();

  /// @brief Method StartWithCreateProcess addr 0x2971168 size 0x13d8 virtual false final false
  inline bool StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo* startInfo);

  /// @brief Method FillUserInfo addr 0x2972910 size 0x140 virtual false final false
  static inline void FillUserInfo(::System::Diagnostics::ProcessStartInfo* startInfo, ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo);

  /// @brief Method RaiseOnExited addr 0x296f988 size 0xe0 virtual false final false
  inline void RaiseOnExited();

  // Ctor Parameters [CppParam { name: "", ty: "Process", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Process(Process&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Process", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Process(Process const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Process();

public:
  /// @brief Field haveProcessId, offset: 0x28, size: 0x1, def value: None
  bool ___haveProcessId;

  /// @brief Field processId, offset: 0x2c, size: 0x4, def value: None
  int32_t ___processId;

  /// @brief Field haveProcessHandle, offset: 0x30, size: 0x1, def value: None
  bool ___haveProcessHandle;

  /// @brief Field m_processHandle, offset: 0x38, size: 0x8, def value: None
  ::Microsoft::Win32::SafeHandles::SafeProcessHandle* ___m_processHandle;

  /// @brief Field isRemoteMachine, offset: 0x40, size: 0x1, def value: None
  bool ___isRemoteMachine;

  /// @brief Field machineName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___machineName;

  /// @brief Field m_processAccess, offset: 0x50, size: 0x4, def value: None
  int32_t ___m_processAccess;

  /// @brief Field threads, offset: 0x58, size: 0x8, def value: None
  ::System::Diagnostics::ProcessThreadCollection* ___threads;

  /// @brief Field modules, offset: 0x60, size: 0x8, def value: None
  ::System::Diagnostics::ProcessModuleCollection* ___modules;

  /// @brief Field haveWorkingSetLimits, offset: 0x68, size: 0x1, def value: None
  bool ___haveWorkingSetLimits;

  /// @brief Field havePriorityClass, offset: 0x69, size: 0x1, def value: None
  bool ___havePriorityClass;

  /// @brief Field startInfo, offset: 0x70, size: 0x8, def value: None
  ::System::Diagnostics::ProcessStartInfo* ___startInfo;

  /// @brief Field watchForExit, offset: 0x78, size: 0x1, def value: None
  bool ___watchForExit;

  /// @brief Field watchingForExit, offset: 0x79, size: 0x1, def value: None
  bool ___watchingForExit;

  /// @brief Field onExited, offset: 0x80, size: 0x8, def value: None
  ::System::EventHandler* ___onExited;

  /// @brief Field exited, offset: 0x88, size: 0x1, def value: None
  bool ___exited;

  /// @brief Field exitCode, offset: 0x8c, size: 0x4, def value: None
  int32_t ___exitCode;

  /// @brief Field signaled, offset: 0x90, size: 0x1, def value: None
  bool ___signaled;

  /// @brief Field haveExitTime, offset: 0x91, size: 0x1, def value: None
  bool ___haveExitTime;

  /// @brief Field raisedOnExited, offset: 0x92, size: 0x1, def value: None
  bool ___raisedOnExited;

  /// @brief Field registeredWaitHandle, offset: 0x98, size: 0x8, def value: None
  ::System::Threading::RegisteredWaitHandle* ___registeredWaitHandle;

  /// @brief Field waitHandle, offset: 0xa0, size: 0x8, def value: None
  ::System::Threading::WaitHandle* ___waitHandle;

  /// @brief Field synchronizingObject, offset: 0xa8, size: 0x8, def value: None
  ::System::ComponentModel::ISynchronizeInvoke* ___synchronizingObject;

  /// @brief Field standardOutput, offset: 0xb0, size: 0x8, def value: None
  ::System::IO::StreamReader* ___standardOutput;

  /// @brief Field standardInput, offset: 0xb8, size: 0x8, def value: None
  ::System::IO::StreamWriter* ___standardInput;

  /// @brief Field standardError, offset: 0xc0, size: 0x8, def value: None
  ::System::IO::StreamReader* ___standardError;

  /// @brief Field disposed, offset: 0xc8, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field outputStreamReadMode, offset: 0xcc, size: 0x4, def value: None
  ::System::Diagnostics::__Process__StreamReadMode ___outputStreamReadMode;

  /// @brief Field errorStreamReadMode, offset: 0xd0, size: 0x4, def value: None
  ::System::Diagnostics::__Process__StreamReadMode ___errorStreamReadMode;

  /// @brief Field inputStreamReadMode, offset: 0xd4, size: 0x4, def value: None
  ::System::Diagnostics::__Process__StreamReadMode ___inputStreamReadMode;

  /// @brief Field output, offset: 0xd8, size: 0x8, def value: None
  ::System::Diagnostics::AsyncStreamReader* ___output;

  /// @brief Field error, offset: 0xe0, size: 0x8, def value: None
  ::System::Diagnostics::AsyncStreamReader* ___error;

  /// @brief Field process_name, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___process_name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Process, 0xf0>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::__Process__State, "System.Diagnostics", "Process/State");
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::__Process__StreamReadMode, "System.Diagnostics", "Process/StreamReadMode");
NEED_NO_BOX(::System::Diagnostics::Process);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Process*, "System.Diagnostics", "Process");
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::__Process__ProcInfo, "System.Diagnostics", "Process/ProcInfo");