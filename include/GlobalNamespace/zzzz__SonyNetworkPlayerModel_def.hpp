#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(SonyNetworkPlayerModel)
// Forward declare root types
namespace GlobalNamespace {
class SonyNetworkPlayerModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyNetworkPlayerModel);
// Type: ::SonyNetworkPlayerModel
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyNetworkPlayerModel*
class CORDL_TYPE SonyNetworkPlayerModel : public ::GlobalNamespace::PlatformNetworkPlayerModel {
public:
  // Declarations
  static inline ::GlobalNamespace::SonyNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor, addr 0x29efc7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyNetworkPlayerModel(SonyNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyNetworkPlayerModel(SonyNetworkPlayerModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyNetworkPlayerModel, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyNetworkPlayerModel*, "", "SonyNetworkPlayerModel");
