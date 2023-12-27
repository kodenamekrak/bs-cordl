#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AssetBundleRequest)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleRequest);
// Type: UnityEngine::AssetBundleRequest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16104))
// CS Name: ::UnityEngine::AssetBundleRequest*
class CORDL_TYPE AssetBundleRequest : public ::UnityEngine::ResourceRequest {
public:
  // Declarations
  __declspec(property(get = get_asset))::UnityEngine::Object* asset;

  __declspec(property(get = get_allAssets))::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> allAssets;

  /// @brief Method GetResult addr 0x2c99e94 size 0x3c virtual true final false
  inline ::UnityEngine::Object* GetResult();

  /// @brief Method get_asset addr 0x2c99ed0 size 0xc virtual false final false
  inline ::UnityEngine::Object* get_asset();

  /// @brief Method get_allAssets addr 0x2c99edc size 0x3c virtual false final false
  inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> get_allAssets();

  static inline ::UnityEngine::AssetBundleRequest* New_ctor();

  /// @brief Method .ctor addr 0x2c99f18 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleRequest(AssetBundleRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleRequest(AssetBundleRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleRequest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleRequest, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleRequest*, "UnityEngine", "AssetBundleRequest");