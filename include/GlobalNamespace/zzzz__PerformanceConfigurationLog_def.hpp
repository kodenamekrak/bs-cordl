#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceConfigurationLog.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PerformanceConfigurationLog)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
class PerformanceConfigurationStats;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceConfigurationLog;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceConfigurationLog);
// Type: ::PerformanceConfigurationLog
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceConfigurationLog*
class CORDL_TYPE PerformanceConfigurationLog : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x26a531c, size 0x1fc, virtual false, abstract: false, final false
  static inline ::StringW Create(::BeatSaber::GameSettings::MainSettingsHandler* mainSettings, ::BeatSaber::GameSettings::GraphicSettingsHandler* graphicSettings,
                                 ::GlobalNamespace::PlayerSpecificSettings* playerSettings, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::PerformanceConfigurationStats* stats,
                                 ::StringW header);

  /// @brief Method LogApplicationInfo, addr 0x26a59a8, size 0x4b4, virtual false, abstract: false, final false
  static inline void LogApplicationInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogApplicationState, addr 0x26a5e5c, size 0x1e4, virtual false, abstract: false, final false
  static inline void LogApplicationState(::System::Text::StringBuilder* sb);

  /// @brief Method LogDynamicStates, addr 0x26a7ef0, size 0x1fc, virtual false, abstract: false, final false
  static inline void LogDynamicStates(::System::Text::StringBuilder* sb, ::GlobalNamespace::PerformanceConfigurationStats* stats);

  /// @brief Method LogEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void LogEntry(::System::Text::StringBuilder* sb, ::StringW category, ::StringW name, T value);

  /// @brief Method LogGameSettings, addr 0x26a6e90, size 0xb94, virtual false, abstract: false, final false
  static inline void LogGameSettings(::System::Text::StringBuilder* sb, ::BeatSaber::GameSettings::MainSettingsHandler* mainSettingsHandler,
                                     ::BeatSaber::GameSettings::GraphicSettingsHandler* graphicSettingsHandler);

  /// @brief Method LogLevelSettings, addr 0x26a7e60, size 0x90, virtual false, abstract: false, final false
  static inline void LogLevelSettings(::System::Text::StringBuilder* sb, ::GlobalNamespace::GameplayModifierMask modifiers);

  /// @brief Method LogOculusXrInfo, addr 0x26a6d50, size 0x13c, virtual false, abstract: false, final false
  static inline void LogOculusXrInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogOpenXrInfo, addr 0x26a6e8c, size 0x4, virtual false, abstract: false, final false
  static inline void LogOpenXrInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogOvrInfo, addr 0x26a6344, size 0xa0c, virtual false, abstract: false, final false
  static inline void LogOvrInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogPlayerSettings, addr 0x26a7a24, size 0x43c, virtual false, abstract: false, final false
  static inline void LogPlayerSettings(::System::Text::StringBuilder* sb, ::GlobalNamespace::PlayerSpecificSettings* playerSettings);

  /// @brief Method LogSystemInfo, addr 0x26a5518, size 0x490, virtual false, abstract: false, final false
  static inline void LogSystemInfo(::System::Text::StringBuilder* sb);

  /// @brief Method LogXrInfo, addr 0x26a6040, size 0x304, virtual false, abstract: false, final false
  static inline void LogXrInfo(::System::Text::StringBuilder* sb);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceConfigurationLog();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationLog", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceConfigurationLog(PerformanceConfigurationLog&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceConfigurationLog", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceConfigurationLog(PerformanceConfigurationLog const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceConfigurationLog, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceConfigurationLog);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceConfigurationLog*, "", "PerformanceConfigurationLog");
