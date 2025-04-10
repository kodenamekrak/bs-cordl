#pragma once
// IWYU pragma private; include "GlobalNamespace/ISyncStateDeltaSerializable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISyncStateDeltaSerializable_1)
namespace GlobalNamespace {
struct SyncStateId;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ISyncStateDeltaSerializable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ISyncStateDeltaSerializable_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ISyncStateDeltaSerializable`1<T>
class CORDL_TYPE ISyncStateDeltaSerializable_1 {
public:
  // Declarations
  __declspec(property(get = get_baseId, put = set_baseId)) ::GlobalNamespace::SyncStateId baseId;

  __declspec(property(get = get_delta, put = set_delta)) T delta;

  __declspec(property(get = get_timeOffsetMs, put = set_timeOffsetMs)) int32_t timeOffsetMs;

  /// @brief Method get_baseId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SyncStateId get_baseId();

  /// @brief Method get_delta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_delta();

  /// @brief Method get_timeOffsetMs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_timeOffsetMs();

  /// @brief Method set_baseId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_baseId(::GlobalNamespace::SyncStateId value);

  /// @brief Method set_delta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_delta(T value);

  /// @brief Method set_timeOffsetMs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_timeOffsetMs(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "ISyncStateDeltaSerializable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISyncStateDeltaSerializable_1(ISyncStateDeltaSerializable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14979 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ISyncStateDeltaSerializable_1, "", "ISyncStateDeltaSerializable`1");
