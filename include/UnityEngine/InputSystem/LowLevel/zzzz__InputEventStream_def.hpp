#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventStream)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventStream;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventStream);
// Type: UnityEngine.InputSystem.LowLevel::InputEventStream
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 129, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6532))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6537))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputEventStream
struct CORDL_TYPE InputEventStream {
public:
  // Declarations
  __declspec(property(get = get_isOpen)) bool isOpen;

  __declspec(property(get = get_remainingEventCount)) int32_t remainingEventCount;

  __declspec(property(get = get_numEventsRetainedInBuffer)) int32_t numEventsRetainedInBuffer;

  __declspec(property(get = get_currentEventPtr))::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> currentEventPtr;

  __declspec(property(get = get_numBytesRetainedInBuffer)) uint32_t numBytesRetainedInBuffer;

  /// @brief Method get_isOpen addr 0x2aebe8c size 0x8 virtual false final false
  inline bool get_isOpen();

  /// @brief Method get_remainingEventCount addr 0x2aebe94 size 0x10 virtual false final false
  inline int32_t get_remainingEventCount();

  /// @brief Method get_numEventsRetainedInBuffer addr 0x2aebea4 size 0x8 virtual false final false
  inline int32_t get_numEventsRetainedInBuffer();

  /// @brief Method get_currentEventPtr addr 0x2aebeac size 0x34 virtual false final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> get_currentEventPtr();

  /// @brief Method get_numBytesRetainedInBuffer addr 0x2aebee0 size 0x54 virtual false final false
  inline uint32_t get_numBytesRetainedInBuffer();

  /// @brief Method .ctor addr 0x2aebf34 size 0x8c virtual false final false
  inline void _ctor(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, int32_t maxAppendedEvents);

  /// @brief Method Close addr 0x2aebfc0 size 0x114 virtual false final false
  inline void Close(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer);

  /// @brief Method CleanUpAfterException addr 0x2aec0d4 size 0x90 virtual false final false
  inline void CleanUpAfterException();

  /// @brief Method Write addr 0x2aec164 size 0x1b0 virtual false final false
  inline void Write(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method Advance addr 0x2aec314 size 0xa4 virtual false final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> Advance(bool leaveEventInBuffer);

  /// @brief Method Peek addr 0x2aec3b8 size 0x64 virtual false final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> Peek();

  // Ctor Parameters [CppParam { name: "m_NativeBuffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CurrentNativeEventReadPtr",
  // ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentNativeEventWritePtr", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_RemainingNativeEventCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_MaxAppendedEvents", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AppendBuffer", ty:
  // "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CurrentAppendEventReadPtr", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentAppendEventWritePtr", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_RemainingAppendEventCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_NumEventsRetainedInBuffer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IsOpen", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_NativeBuffer,
                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentNativeEventReadPtr,
                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentNativeEventWritePtr, int32_t m_RemainingNativeEventCount, int32_t m_MaxAppendedEvents,
                             ::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_AppendBuffer,
                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentAppendEventReadPtr,
                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentAppendEventWritePtr, int32_t m_RemainingAppendEventCount,
                             int32_t m_NumEventsRetainedInBuffer, bool m_IsOpen) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventStream();

  /// @brief Field m_NativeBuffer, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_NativeBuffer;

  /// @brief Field m_CurrentNativeEventReadPtr, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentNativeEventReadPtr;

  /// @brief Field m_CurrentNativeEventWritePtr, offset: 0x28, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentNativeEventWritePtr;

  /// @brief Field m_RemainingNativeEventCount, offset: 0x30, size: 0x4, def value: None
  int32_t m_RemainingNativeEventCount;

  /// @brief Field m_MaxAppendedEvents, offset: 0x34, size: 0x4, def value: None
  int32_t m_MaxAppendedEvents;

  /// @brief Field m_AppendBuffer, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_AppendBuffer;

  /// @brief Field m_CurrentAppendEventReadPtr, offset: 0x58, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentAppendEventReadPtr;

  /// @brief Field m_CurrentAppendEventWritePtr, offset: 0x60, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentAppendEventWritePtr;

  /// @brief Field m_RemainingAppendEventCount, offset: 0x68, size: 0x4, def value: None
  int32_t m_RemainingAppendEventCount;

  /// @brief Field m_NumEventsRetainedInBuffer, offset: 0x6c, size: 0x4, def value: None
  int32_t m_NumEventsRetainedInBuffer;

  /// @brief Field m_IsOpen, offset: 0x70, size: 0x1, def value: None
  bool m_IsOpen;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventStream, 0x78>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventStream, "UnityEngine.InputSystem.LowLevel", "InputEventStream");