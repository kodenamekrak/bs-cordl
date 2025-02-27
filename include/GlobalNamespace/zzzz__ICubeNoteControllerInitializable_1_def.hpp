#pragma once
// IWYU pragma private; include "GlobalNamespace/ICubeNoteControllerInitializable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICubeNoteControllerInitializable_1)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ICubeNoteControllerInitializable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ICubeNoteControllerInitializable_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ICubeNoteControllerInitializable`1<T>
class CORDL_TYPE ICubeNoteControllerInitializable_1 {
public:
  // Declarations
  /// @brief Method add_cubeNoteControllerDidInitEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<T>* value);

  /// @brief Method remove_cubeNoteControllerDidInitEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<T>* value);

  // Ctor Parameters [CppParam { name: "", ty: "ICubeNoteControllerInitializable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICubeNoteControllerInitializable_1(ICubeNoteControllerInitializable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4101 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ICubeNoteControllerInitializable_1, "", "ICubeNoteControllerInitializable`1");
