#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SavePersistentViewData)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SavePersistentViewData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::SavePersistentViewData);
// Type: UnityEngine.UIElements::SavePersistentViewData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6874))
// CS Name: ::UnityEngine.UIElements::SavePersistentViewData*
class CORDL_TYPE SavePersistentViewData : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::SavePersistentViewData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2dc9ad4 size 0xbc virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2dc9b90 size 0x14 virtual true final false
  inline void Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "SavePersistentViewData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SavePersistentViewData(SavePersistentViewData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SavePersistentViewData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SavePersistentViewData(SavePersistentViewData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SavePersistentViewData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SavePersistentViewData, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::SavePersistentViewData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SavePersistentViewData*, "UnityEngine.UIElements", "SavePersistentViewData");