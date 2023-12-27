#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimelinePauseReceiver)
namespace UnityEngine::Playables {
struct Playable;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class TimelinePauseReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimelinePauseReceiver);
// Type: ::TimelinePauseReceiver
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14407))
// CS Name: ::TimelinePauseReceiver*
class CORDL_TYPE TimelinePauseReceiver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field timelinePauseEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_timelinePauseEvent, put = __set_timelinePauseEvent))::System::Action* timelinePauseEvent;

  /// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
  constexpr operator ::UnityEngine::Playables::INotificationReceiver*() noexcept;

  constexpr ::System::Action*& __get_timelinePauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_timelinePauseEvent() const;

  constexpr void __set_timelinePauseEvent(::System::Action* value);

  /// @brief Method add_timelinePauseEvent addr 0x20f5d2c size 0x9c virtual false final false
  inline void add_timelinePauseEvent(::System::Action* value);

  /// @brief Method remove_timelinePauseEvent addr 0x20f5dc8 size 0x9c virtual false final false
  inline void remove_timelinePauseEvent(::System::Action* value);

  /// @brief Method OnNotify addr 0x20f5e64 size 0x94 virtual true final true
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  static inline ::GlobalNamespace::TimelinePauseReceiver* New_ctor();

  /// @brief Method .ctor addr 0x20f5ef8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TimelinePauseReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelinePauseReceiver(TimelinePauseReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelinePauseReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelinePauseReceiver(TimelinePauseReceiver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelinePauseReceiver();

public:
  /// @brief Field timelinePauseEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___timelinePauseEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelinePauseReceiver, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimelinePauseReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelinePauseReceiver*, "", "TimelinePauseReceiver");