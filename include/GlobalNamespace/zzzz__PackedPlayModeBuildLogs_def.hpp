#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PackedPlayModeBuildLogs)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct __PackedPlayModeBuildLogs__RuntimeBuildLog;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class PackedPlayModeBuildLogs;
}
namespace GlobalNamespace {
struct __PackedPlayModeBuildLogs__RuntimeBuildLog;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackedPlayModeBuildLogs);
MARK_VAL_T(::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog);
// Type: ::RuntimeBuildLog
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14043))
// CS Name: ::PackedPlayModeBuildLogs::RuntimeBuildLog
struct CORDL_TYPE __PackedPlayModeBuildLogs__RuntimeBuildLog {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2a0eff8 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::LogType type, ::StringW message);

  // Ctor Parameters [CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __PackedPlayModeBuildLogs__RuntimeBuildLog(::UnityEngine::LogType Type, ::StringW Message) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PackedPlayModeBuildLogs__RuntimeBuildLog();

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::LogType Type;

  /// @brief Field Message, offset: 0x8, size: 0x8, def value: None
  ::StringW Message;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PackedPlayModeBuildLogs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14044))
// CS Name: ::PackedPlayModeBuildLogs*
class CORDL_TYPE PackedPlayModeBuildLogs : public ::System::Object {
public:
  // Declarations
  using RuntimeBuildLog = ::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog;

  /// @brief Field m_RuntimeBuildLogs, offset 0x10, size 0x8
  __declspec(property(get = __get_m_RuntimeBuildLogs,
                      put = __set_m_RuntimeBuildLogs))::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* m_RuntimeBuildLogs;

  __declspec(property(get = get_RuntimeBuildLogs, put = set_RuntimeBuildLogs))::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* RuntimeBuildLogs;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*& __get_m_RuntimeBuildLogs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>*> const& __get_m_RuntimeBuildLogs() const;

  constexpr void __set_m_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* value);

  /// @brief Method get_RuntimeBuildLogs addr 0x2a0ef6c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* get_RuntimeBuildLogs();

  /// @brief Method set_RuntimeBuildLogs addr 0x2a0ef74 size 0x8 virtual false final false
  inline void set_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* value);

  static inline ::GlobalNamespace::PackedPlayModeBuildLogs* New_ctor();

  /// @brief Method .ctor addr 0x2a0ef7c size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PackedPlayModeBuildLogs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackedPlayModeBuildLogs(PackedPlayModeBuildLogs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackedPlayModeBuildLogs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackedPlayModeBuildLogs(PackedPlayModeBuildLogs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackedPlayModeBuildLogs();

public:
  /// @brief Field m_RuntimeBuildLogs, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog>* ___m_RuntimeBuildLogs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackedPlayModeBuildLogs, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackedPlayModeBuildLogs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackedPlayModeBuildLogs*, "", "PackedPlayModeBuildLogs");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PackedPlayModeBuildLogs__RuntimeBuildLog, "", "PackedPlayModeBuildLogs/RuntimeBuildLog");