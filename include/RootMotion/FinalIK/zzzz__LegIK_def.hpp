#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
CORDL_MODULE_EXPORT(LegIK)
namespace RootMotion::FinalIK {
class IKSolverLeg;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LegIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::LegIK);
// Type: RootMotion.FinalIK::LegIK
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12538))
// CS Name: ::RootMotion.FinalIK::LegIK*
class CORDL_TYPE LegIK : public ::RootMotion::FinalIK::IK {
public:
  // Declarations
  /// @brief Field solver, offset 0x38, size 0x8
  __declspec(property(get = __get_solver, put = __set_solver))::RootMotion::FinalIK::IKSolverLeg* solver;

  constexpr ::RootMotion::FinalIK::IKSolverLeg*& __get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLeg*> const& __get_solver() const;

  constexpr void __set_solver(::RootMotion::FinalIK::IKSolverLeg* value);

  /// @brief Method OpenUserManual addr 0x124f494 size 0x44 virtual true final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference addr 0x124f4d8 size 0x44 virtual true final false
  inline void OpenScriptReference();

  /// @brief Method SupportGroup addr 0x124f51c size 0x44 virtual false final false
  inline void SupportGroup();

  /// @brief Method ASThread addr 0x124f560 size 0x44 virtual false final false
  inline void ASThread();

  /// @brief Method GetIKSolver addr 0x124f5a4 size 0x8 virtual true final false
  inline ::RootMotion::FinalIK::IKSolver* GetIKSolver();

  static inline ::RootMotion::FinalIK::LegIK* New_ctor();

  /// @brief Method .ctor addr 0x124f5ac size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LegIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LegIK(LegIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LegIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LegIK(LegIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LegIK();

public:
  /// @brief Field solver, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKSolverLeg* ___solver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::LegIK, 0x40>, "Size mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::LegIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::LegIK*, "RootMotion.FinalIK", "LegIK");