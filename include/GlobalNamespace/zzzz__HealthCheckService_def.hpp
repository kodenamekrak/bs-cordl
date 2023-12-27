#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HealthCheckService)
namespace System::Net {
class HttpListener;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
class Thread;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace GlobalNamespace {
class IHealthCheckService;
}
namespace GlobalNamespace {
class IPollable;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthCheckService;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthCheckService);
// Type: ::HealthCheckService
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12773))
// CS Name: ::HealthCheckService*
class CORDL_TYPE HealthCheckService : public ::System::Object {
public:
  // Declarations
  /// @brief Field _port, offset 0x10, size 0x4
  __declspec(property(get = __get__port, put = __set__port)) int32_t _port;

  /// @brief Field _runThread, offset 0x18, size 0x8
  __declspec(property(get = __get__runThread, put = __set__runThread))::System::Threading::Thread* _runThread;

  /// @brief Field _disposed, offset 0x20, size 0x1
  __declspec(property(get = __get__disposed, put = __set__disposed)) bool _disposed;

  /// @brief Field _manualResetEvent, offset 0x28, size 0x8
  __declspec(property(get = __get__manualResetEvent, put = __set__manualResetEvent))::System::Threading::ManualResetEvent* _manualResetEvent;

  /// @brief Field _listener, offset 0x30, size 0x8
  __declspec(property(get = __get__listener, put = __set__listener))::System::Net::HttpListener* _listener;

  /// @brief Convert operator to "::GlobalNamespace::IHealthCheckService"
  constexpr operator ::GlobalNamespace::IHealthCheckService*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get__port();

  constexpr int32_t const& __get__port() const;

  constexpr void __set__port(int32_t value);

  constexpr ::System::Threading::Thread*& __get__runThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& __get__runThread() const;

  constexpr void __set__runThread(::System::Threading::Thread* value);

  constexpr bool& __get__disposed();

  constexpr bool const& __get__disposed() const;

  constexpr void __set__disposed(bool value);

  constexpr ::System::Threading::ManualResetEvent*& __get__manualResetEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& __get__manualResetEvent() const;

  constexpr void __set__manualResetEvent(::System::Threading::ManualResetEvent* value);

  constexpr ::System::Net::HttpListener*& __get__listener();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> const& __get__listener() const;

  constexpr void __set__listener(::System::Net::HttpListener* value);

  static inline ::GlobalNamespace::HealthCheckService* New_ctor(int32_t port);

  /// @brief Method .ctor addr 0xe3c368 size 0x104 virtual false final false
  inline void _ctor(int32_t port);

  /// @brief Method Dispose addr 0xe3c46c size 0xa4 virtual true final true
  inline void Dispose();

  /// @brief Method PollUpdate addr 0xe3c510 size 0x94 virtual true final true
  inline void PollUpdate();

  /// @brief Method Run addr 0xe3c5a4 size 0x498 virtual false final false
  inline void Run();

  // Ctor Parameters [CppParam { name: "", ty: "HealthCheckService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthCheckService(HealthCheckService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthCheckService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthCheckService(HealthCheckService const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthCheckService();

public:
  /// @brief Field _port, offset: 0x10, size: 0x4, def value: None
  int32_t ____port;

  /// @brief Field _runThread, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Thread* ____runThread;

  /// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _manualResetEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ManualResetEvent* ____manualResetEvent;

  /// @brief Field _listener, offset: 0x30, size: 0x8, def value: None
  ::System::Net::HttpListener* ____listener;

  /// @brief Field kTimeoutLengthMs offset 0xffffffff size 0x4
  static constexpr int32_t kTimeoutLengthMs{ static_cast<int32_t>(0x3e8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthCheckService, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthCheckService);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthCheckService*, "", "HealthCheckService");