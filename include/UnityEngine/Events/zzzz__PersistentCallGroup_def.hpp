#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PersistentCallGroup)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
class UnityEventBase;
}
namespace UnityEngine::Events {
class PersistentCall;
}
namespace UnityEngine::Events {
class InvokableCallList;
}
// Forward declare root types
namespace UnityEngine::Events {
class PersistentCallGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::PersistentCallGroup);
// Type: UnityEngine.Events::PersistentCallGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10459))
// CS Name: ::UnityEngine.Events::PersistentCallGroup*
class CORDL_TYPE PersistentCallGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Calls, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Calls, put = __set_m_Calls))::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* m_Calls;

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>*& __get_m_Calls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>*> const& __get_m_Calls() const;

  constexpr void __set_m_Calls(::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* value);

  static inline ::UnityEngine::Events::PersistentCallGroup* New_ctor();

  /// @brief Method .ctor addr 0x2cf935c size 0x80 virtual false final false
  inline void _ctor();

  /// @brief Method get_Count addr 0x2cf93dc size 0x48 virtual false final false
  inline int32_t get_Count();

  /// @brief Method Initialize addr 0x2cf9424 size 0x190 virtual false final false
  inline void Initialize(::UnityEngine::Events::InvokableCallList* invokableList, ::UnityEngine::Events::UnityEventBase* unityEventBase);

  // Ctor Parameters [CppParam { name: "", ty: "PersistentCallGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentCallGroup(PersistentCallGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentCallGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentCallGroup(PersistentCallGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentCallGroup();

public:
  /// @brief Field m_Calls, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* ___m_Calls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::PersistentCallGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::PersistentCallGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentCallGroup*, "UnityEngine.Events", "PersistentCallGroup");