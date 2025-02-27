#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataCallbackWrapper_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataCallbackWrapper_1)
namespace GlobalNamespace {
template <typename T> class BeatmapDataCallback_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class BeatmapDataCallbackWrapper_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapDataCallbackWrapper_1);
// Dependencies BeatmapDataCallbackWrapper
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BeatmapDataCallbackWrapper`1<T>
class CORDL_TYPE BeatmapDataCallbackWrapper_1 : public ::GlobalNamespace::BeatmapDataCallbackWrapper {
public:
  // Declarations
  /// @brief Field _callback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__callback, put = __cordl_internal_set__callback)) ::GlobalNamespace::BeatmapDataCallback_1<T>* _callback;

  /// @brief Method CallCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData);

  static inline ::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>* New_ctor(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, float_t aheadTime,
                                                                             ::ArrayW<int32_t, ::Array<int32_t>*> beatmapEventSubtypeIdentifiers);

  constexpr ::GlobalNamespace::BeatmapDataCallback_1<T>* const& __cordl_internal_get__callback() const;

  constexpr ::GlobalNamespace::BeatmapDataCallback_1<T>*& __cordl_internal_get__callback();

  constexpr void __cordl_internal_set__callback(::GlobalNamespace::BeatmapDataCallback_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, float_t aheadTime, ::ArrayW<int32_t, ::Array<int32_t>*> beatmapEventSubtypeIdentifiers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDataCallbackWrapper_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDataCallbackWrapper_1(BeatmapDataCallbackWrapper_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDataCallbackWrapper_1(BeatmapDataCallbackWrapper_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4065 };

  /// @brief Field _callback, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallback_1<T>* ____callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapDataCallbackWrapper_1, "", "BeatmapDataCallbackWrapper`1");
