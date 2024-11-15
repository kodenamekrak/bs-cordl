#pragma once
// IWYU pragma private; include "GlobalNamespace/IPosesSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPosesSerializer)
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class IPosesSerializer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPosesSerializer);
// Type: ::IPosesSerializer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IPosesSerializer*
class CORDL_TYPE IPosesSerializer {
public:
  // Declarations
  /// @brief Method LoadRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::PosesRecordingData* LoadRecording(::StringW path);

  /// @brief Method RecordingCanBeCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool RecordingCanBeCreated(::StringW path);

  /// @brief Method RecordingExists, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool RecordingExists(::StringW path);

  /// @brief Method SaveRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SaveRecording(::StringW path, ::GlobalNamespace::PosesRecordingData* data, bool saveToOldFormat);

  /// @brief Method SaveToOldFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SaveToOldFormat(::StringW path, ::GlobalNamespace::PosesRecordingData* data);

  // Ctor Parameters [CppParam { name: "", ty: "IPosesSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPosesSerializer(IPosesSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPosesSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPosesSerializer(IPosesSerializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5061 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPosesSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPosesSerializer*, "", "IPosesSerializer");
