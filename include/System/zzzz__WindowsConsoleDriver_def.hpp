#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsConsoleDriver)
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
struct ConsoleScreenBufferInfo;
}
namespace System {
struct Handles;
}
namespace System {
struct InputRecord;
}
namespace System {
class IConsoleDriver;
}
// Forward declare root types
namespace System {
class WindowsConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::WindowsConsoleDriver);
// Type: System::WindowsConsoleDriver
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2649))
// CS Name: ::System::WindowsConsoleDriver*
class CORDL_TYPE WindowsConsoleDriver : public ::System::Object {
public:
  // Declarations
  /// @brief Field inputHandle, offset 0x10, size 0x8
  __declspec(property(get = __get_inputHandle, put = __set_inputHandle)) void* inputHandle;

  /// @brief Field outputHandle, offset 0x18, size 0x8
  __declspec(property(get = __get_outputHandle, put = __set_outputHandle)) void* outputHandle;

  /// @brief Field defaultAttribute, offset 0x20, size 0x2
  __declspec(property(get = __get_defaultAttribute, put = __set_defaultAttribute)) int16_t defaultAttribute;

  /// @brief Convert operator to "::System::IConsoleDriver"
  constexpr operator ::System::IConsoleDriver*() noexcept;

  constexpr void*& __get_inputHandle();

  constexpr void* const& __get_inputHandle() const;

  constexpr void __set_inputHandle(void* value);

  constexpr void*& __get_outputHandle();

  constexpr void* const& __get_outputHandle() const;

  constexpr void __set_outputHandle(void* value);

  constexpr int16_t& __get_defaultAttribute();

  constexpr int16_t const& __get_defaultAttribute() const;

  constexpr void __set_defaultAttribute(int16_t value);

  static inline ::System::WindowsConsoleDriver* New_ctor();

  /// @brief Method .ctor addr 0x2609554 size 0x54 virtual false final false
  inline void _ctor();

  /// @brief Method ReadKey addr 0x26096c0 size 0x140 virtual true final true
  inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  /// @brief Method IsModifierKey addr 0x2609908 size 0x34 virtual false final false
  static inline bool IsModifierKey(int16_t virtualKeyCode);

  /// @brief Method GetStdHandle addr 0x26095a8 size 0x84 virtual false final false
  static inline void* GetStdHandle(::System::Handles handle);

  /// @brief Method GetConsoleScreenBufferInfo addr 0x260962c size 0x94 virtual false final false
  static inline bool GetConsoleScreenBufferInfo(void* handle, ByRef<::System::ConsoleScreenBufferInfo> info);

  /// @brief Method ReadConsoleInput addr 0x2609800 size 0x108 virtual false final false
  static inline bool ReadConsoleInput(void* handle, ByRef<::System::InputRecord> record, int32_t length, ByRef<int32_t> nread);

  // Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WindowsConsoleDriver(WindowsConsoleDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WindowsConsoleDriver(WindowsConsoleDriver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowsConsoleDriver();

public:
  /// @brief Field inputHandle, offset: 0x10, size: 0x8, def value: None
  void* ___inputHandle;

  /// @brief Field outputHandle, offset: 0x18, size: 0x8, def value: None
  void* ___outputHandle;

  /// @brief Field defaultAttribute, offset: 0x20, size: 0x2, def value: None
  int16_t ___defaultAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::WindowsConsoleDriver, 0x28>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::WindowsConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::WindowsConsoleDriver*, "System", "WindowsConsoleDriver");