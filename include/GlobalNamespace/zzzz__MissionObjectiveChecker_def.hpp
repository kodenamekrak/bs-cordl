#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjectiveChecker)
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
struct __MissionObjectiveChecker__Status;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MissionObjectiveChecker__Status;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MissionObjectiveChecker__Status);
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveChecker);
// Type: ::Status
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MissionObjectiveChecker::Status
struct CORDL_TYPE __MissionObjectiveChecker__Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MissionObjectiveChecker__Status_Unwrapped
  enum struct ____MissionObjectiveChecker__Status_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NotClearedYet = static_cast<int32_t>(0x1),
    __E_NotFailedYet = static_cast<int32_t>(0x2),
    __E_Cleared = static_cast<int32_t>(0x3),
    __E_Failed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MissionObjectiveChecker__Status_Unwrapped() const noexcept {
    return static_cast<____MissionObjectiveChecker__Status_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionObjectiveChecker__Status();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MissionObjectiveChecker__Status(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Cleared value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const Cleared;

  /// @brief Field Failed value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const Failed;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const None;

  /// @brief Field NotClearedYet value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const NotClearedYet;

  /// @brief Field NotFailedYet value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MissionObjectiveChecker__Status const NotFailedYet;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4453 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionObjectiveChecker__Status, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionObjectiveChecker__Status, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionObjectiveChecker
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionObjectiveChecker*
class CORDL_TYPE MissionObjectiveChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Status = ::GlobalNamespace::__MissionObjectiveChecker__Status;

  /// @brief Field _checkedValue, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__checkedValue, put = __cordl_internal_set__checkedValue)) int32_t _checkedValue;

  /// @brief Field _disableChecking, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__disableChecking, put = __cordl_internal_set__disableChecking)) bool _disableChecking;

  /// @brief Field _missionObjective, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjective, put = __cordl_internal_set__missionObjective)) ::GlobalNamespace::MissionObjective* _missionObjective;

  /// @brief Field _missionObjectiveType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveType, put = __cordl_internal_set__missionObjectiveType)) ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> _missionObjectiveType;

  /// @brief Field _status, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status)) ::GlobalNamespace::__MissionObjectiveChecker__Status _status;

  __declspec(property(get = get_checkedValue, put = set_checkedValue)) int32_t checkedValue;

  /// @brief Field checkedValueDidChangeEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_checkedValueDidChangeEvent,
                      put = __cordl_internal_set_checkedValueDidChangeEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* checkedValueDidChangeEvent;

  __declspec(property(get = get_disableChecking, put = set_disableChecking)) bool disableChecking;

  __declspec(property(get = get_missionObjective)) ::GlobalNamespace::MissionObjective* missionObjective;

  __declspec(property(get = get_missionObjectiveType)) ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> missionObjectiveType;

  __declspec(property(get = get_status, put = set_status)) ::GlobalNamespace::__MissionObjectiveChecker__Status status;

  /// @brief Field statusDidChangeEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_statusDidChangeEvent,
                      put = __cordl_internal_set_statusDidChangeEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* statusDidChangeEvent;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init();

  static inline ::GlobalNamespace::MissionObjectiveChecker* New_ctor();

  /// @brief Method SetCheckedMissionObjective, addr 0x3b4e3bc, size 0x10, virtual false, abstract: false, final false
  inline void SetCheckedMissionObjective(::GlobalNamespace::MissionObjective* missionObjective);

  constexpr int32_t const& __cordl_internal_get__checkedValue() const;

  constexpr int32_t& __cordl_internal_get__checkedValue();

  constexpr bool const& __cordl_internal_get__disableChecking() const;

  constexpr bool& __cordl_internal_get__disableChecking();

  constexpr ::GlobalNamespace::MissionObjective*& __cordl_internal_get__missionObjective();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjective*> const& __cordl_internal_get__missionObjective() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> const& __cordl_internal_get__missionObjectiveType() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>& __cordl_internal_get__missionObjectiveType();

  constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status const& __cordl_internal_get__status() const;

  constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status& __cordl_internal_get__status();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*& __cordl_internal_get_checkedValueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> const& __cordl_internal_get_checkedValueDidChangeEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*& __cordl_internal_get_statusDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>*> const& __cordl_internal_get_statusDidChangeEvent() const;

  constexpr void __cordl_internal_set__checkedValue(int32_t value);

  constexpr void __cordl_internal_set__disableChecking(bool value);

  constexpr void __cordl_internal_set__missionObjective(::GlobalNamespace::MissionObjective* value);

  constexpr void __cordl_internal_set__missionObjectiveType(::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> value);

  constexpr void __cordl_internal_set__status(::GlobalNamespace::__MissionObjectiveChecker__Status value);

  constexpr void __cordl_internal_set_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  constexpr void __cordl_internal_set_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method .ctor, addr 0x3b4db60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_checkedValueDidChangeEvent, addr 0x3b42620, size 0xb0, virtual false, abstract: false, final false
  inline void add_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method add_statusDidChangeEvent, addr 0x3b42570, size 0xb0, virtual false, abstract: false, final false
  inline void add_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method get_checkedValue, addr 0x3b4e3b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_checkedValue();

  /// @brief Method get_disableChecking, addr 0x3b4e398, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableChecking();

  /// @brief Method get_missionObjective, addr 0x3b4e390, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionObjective* get_missionObjective();

  /// @brief Method get_missionObjectiveType, addr 0x3b4e388, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> get_missionObjectiveType();

  /// @brief Method get_status, addr 0x3b4e3ac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MissionObjectiveChecker__Status get_status();

  /// @brief Method remove_checkedValueDidChangeEvent, addr 0x3b4e2d8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_checkedValueDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method remove_statusDidChangeEvent, addr 0x3b4e228, size 0xb0, virtual false, abstract: false, final false
  inline void remove_statusDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* value);

  /// @brief Method set_checkedValue, addr 0x3b4d470, size 0x3c, virtual false, abstract: false, final false
  inline void set_checkedValue(int32_t value);

  /// @brief Method set_disableChecking, addr 0x3b4e3a0, size 0xc, virtual false, abstract: false, final false
  inline void set_disableChecking(bool value);

  /// @brief Method set_status, addr 0x3b4d318, size 0x3c, virtual false, abstract: false, final false
  inline void set_status(::GlobalNamespace::__MissionObjectiveChecker__Status value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveChecker(MissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveChecker(MissionObjectiveChecker const&) = delete;

  /// @brief Field _missionObjectiveType, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveTypeSO> ____missionObjectiveType;

  /// @brief Field statusDidChangeEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* ___statusDidChangeEvent;

  /// @brief Field checkedValueDidChangeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionObjectiveChecker>>* ___checkedValueDidChangeEvent;

  /// @brief Field _status, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__MissionObjectiveChecker__Status ____status;

  /// @brief Field _checkedValue, offset: 0x3c, size: 0x4, def value: None
  int32_t ____checkedValue;

  /// @brief Field _missionObjective, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjective* ____missionObjective;

  /// @brief Field _disableChecking, offset: 0x48, size: 0x1, def value: None
  bool ____disableChecking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4454 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveChecker, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____missionObjectiveType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ___statusDidChangeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ___checkedValueDidChangeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____status) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____checkedValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____missionObjective) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectiveChecker, ____disableChecking) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionObjectiveChecker__Status, "", "MissionObjectiveChecker/Status");
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveChecker*, "", "MissionObjectiveChecker");
