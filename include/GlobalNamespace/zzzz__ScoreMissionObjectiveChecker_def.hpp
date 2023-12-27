#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreMissionObjectiveChecker)
namespace GlobalNamespace {
class IScoreController;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreMissionObjectiveChecker);
// Type: ::ScoreMissionObjectiveChecker
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5097))
// CS Name: ::ScoreMissionObjectiveChecker*
class CORDL_TYPE ScoreMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _scoreController, offset 0x48, size 0x8
  __declspec(property(get = __get__scoreController, put = __set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  constexpr ::GlobalNamespace::IScoreController*& __get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __get__scoreController() const;

  constexpr void __set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method OnDestroy addr 0x23cd3f0 size 0x108 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleScoreDidChange addr 0x23cd4f8 size 0x48 virtual false final false
  inline void HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore);

  /// @brief Method Init addr 0x23cd540 size 0x208 virtual true final false
  inline void Init();

  static inline ::GlobalNamespace::ScoreMissionObjectiveChecker* New_ctor();

  /// @brief Method .ctor addr 0x23cd748 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScoreMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreMissionObjectiveChecker(ScoreMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreMissionObjectiveChecker(ScoreMissionObjectiveChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreMissionObjectiveChecker();

public:
  /// @brief Field _scoreController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreMissionObjectiveChecker, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMissionObjectiveChecker*, "", "ScoreMissionObjectiveChecker");