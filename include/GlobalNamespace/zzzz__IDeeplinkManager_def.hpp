#pragma once
// IWYU pragma private; include "GlobalNamespace/IDeeplinkManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDeeplinkManager)
namespace GlobalNamespace {
class Deeplink;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IDeeplinkManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IDeeplinkManager);
// Type: ::IDeeplinkManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IDeeplinkManager*
class CORDL_TYPE IDeeplinkManager {
public:
  // Declarations
  __declspec(property(get = get_currentDeeplink)) ::GlobalNamespace::Deeplink* currentDeeplink;

  /// @brief Method add_didReceiveDeeplinkEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value);

  /// @brief Method get_currentDeeplink, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::Deeplink* get_currentDeeplink();

  /// @brief Method remove_didReceiveDeeplinkEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IDeeplinkManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDeeplinkManager(IDeeplinkManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDeeplinkManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDeeplinkManager(IDeeplinkManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12776 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IDeeplinkManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDeeplinkManager*, "", "IDeeplinkManager");
