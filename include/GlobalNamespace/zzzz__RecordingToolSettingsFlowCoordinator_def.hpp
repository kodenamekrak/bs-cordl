#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSettingsFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsFlowCoordinator)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class RecordingToolConfigViewController;
}
namespace GlobalNamespace {
class RecordingToolLoggingViewController;
}
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class __RecordingToolSettingsFlowCoordinator__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsFlowCoordinator;
}
namespace GlobalNamespace {
class __RecordingToolSettingsFlowCoordinator__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolSettingsFlowCoordinator::InitData*
class CORDL_TYPE __RecordingToolSettingsFlowCoordinator__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nextScenesTransitionSetupData, put = __cordl_internal_set_nextScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      nextScenesTransitionSetupData;

  static inline ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_nextScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_nextScenesTransitionSetupData();

  constexpr void __cordl_internal_set_nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3ba1f54, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolSettingsFlowCoordinator__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolSettingsFlowCoordinator__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolSettingsFlowCoordinator__InitData(__RecordingToolSettingsFlowCoordinator__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolSettingsFlowCoordinator__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolSettingsFlowCoordinator__InitData(__RecordingToolSettingsFlowCoordinator__InitData const&) = delete;

  /// @brief Field nextScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___nextScenesTransitionSetupData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4780 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData, ___nextScenesTransitionSetupData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingToolSettingsFlowCoordinator
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RecordingToolSettingsFlowCoordinator*
class CORDL_TYPE RecordingToolSettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData;

  /// @brief Field _gameScenesManager, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _initData, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* _initData;

  /// @brief Field _recordingToolConfigViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolConfigViewController,
                      put = __cordl_internal_set__recordingToolConfigViewController)) ::UnityW<::GlobalNamespace::RecordingToolConfigViewController>
      _recordingToolConfigViewController;

  /// @brief Field _recordingToolLoggingViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolLoggingViewController,
                      put = __cordl_internal_set__recordingToolLoggingViewController)) ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController>
      _recordingToolLoggingViewController;

  /// @brief Field _recordingToolSettingsViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolSettingsViewController,
                      put = __cordl_internal_set__recordingToolSettingsViewController)) ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController>
      _recordingToolSettingsViewController;

  /// @brief Method DidActivate, addr 0x3ba1d60, size 0xe4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3ba1e44, size 0x9c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method GoToNextScene, addr 0x3ba1f10, size 0x3c, virtual false, abstract: false, final false
  inline void GoToNextScene();

  /// @brief Method HandleRecordingToolSettingsViewControllerDidFinish, addr 0x3ba1f0c, size 0x4, virtual false, abstract: false, final false
  inline void HandleRecordingToolSettingsViewControllerDidFinish();

  static inline ::GlobalNamespace::RecordingToolSettingsFlowCoordinator* New_ctor();

  /// @brief Method Update, addr 0x3ba1ee0, size 0x2c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolConfigViewController> const& __cordl_internal_get__recordingToolConfigViewController() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolConfigViewController>& __cordl_internal_get__recordingToolConfigViewController();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController> const& __cordl_internal_get__recordingToolLoggingViewController() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController>& __cordl_internal_get__recordingToolLoggingViewController();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController> const& __cordl_internal_get__recordingToolSettingsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController>& __cordl_internal_get__recordingToolSettingsViewController();

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* value);

  constexpr void __cordl_internal_set__recordingToolConfigViewController(::UnityW<::GlobalNamespace::RecordingToolConfigViewController> value);

  constexpr void __cordl_internal_set__recordingToolLoggingViewController(::UnityW<::GlobalNamespace::RecordingToolLoggingViewController> value);

  constexpr void __cordl_internal_set__recordingToolSettingsViewController(::UnityW<::GlobalNamespace::RecordingToolSettingsViewController> value);

  /// @brief Method .ctor, addr 0x3ba1f4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator const&) = delete;

  /// @brief Field _recordingToolConfigViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolConfigViewController> ____recordingToolConfigViewController;

  /// @brief Field _recordingToolSettingsViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController> ____recordingToolSettingsViewController;

  /// @brief Field _recordingToolLoggingViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController> ____recordingToolLoggingViewController;

  /// @brief Field _gameScenesManager, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _initData, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* ____initData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4781 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsFlowCoordinator, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolConfigViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolSettingsViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolLoggingViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____gameScenesManager) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____initData) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsFlowCoordinator*, "", "RecordingToolSettingsFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*, "", "RecordingToolSettingsFlowCoordinator/InitData");
