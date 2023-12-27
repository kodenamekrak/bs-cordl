#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaitOrTimerCallback)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class WaitOrTimerCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::WaitOrTimerCallback);
// Type: System.Threading::WaitOrTimerCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2729))
// CS Name: ::System.Threading::WaitOrTimerCallback*
class CORDL_TYPE WaitOrTimerCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Threading::WaitOrTimerCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x261a4c0 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x261a5f0 size 0x18 virtual true final false
  inline void Invoke(::System::Object* state, bool timedOut);

  // Ctor Parameters [CppParam { name: "", ty: "WaitOrTimerCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitOrTimerCallback(WaitOrTimerCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitOrTimerCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitOrTimerCallback(WaitOrTimerCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitOrTimerCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::WaitOrTimerCallback, 0x80>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::WaitOrTimerCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::WaitOrTimerCallback*, "System.Threading", "WaitOrTimerCallback");