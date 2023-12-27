#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlueNoiseDithering)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BlueNoiseDithering;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlueNoiseDithering);
// Type: ::BlueNoiseDithering
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14493))
// CS Name: ::BlueNoiseDithering*
class CORDL_TYPE BlueNoiseDithering : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _noiseTexture, offset 0x18, size 0x8
  __declspec(property(get = __get__noiseTexture, put = __set__noiseTexture))::UnityEngine::Texture2D* _noiseTexture;

  /// @brief Field _noiseParamsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__noiseParamsID, put = setStaticF__noiseParamsID)) int32_t _noiseParamsID;

  /// @brief Field _globalNoiseTextureID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__globalNoiseTextureID, put = setStaticF__globalNoiseTextureID)) int32_t _globalNoiseTextureID;

  constexpr ::UnityEngine::Texture2D*& __get__noiseTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__noiseTexture() const;

  constexpr void __set__noiseTexture(::UnityEngine::Texture2D* value);

  static inline void setStaticF__noiseParamsID(int32_t value);

  static inline int32_t getStaticF__noiseParamsID();

  static inline void setStaticF__globalNoiseTextureID(int32_t value);

  static inline int32_t getStaticF__globalNoiseTextureID();

  /// @brief Method SetBlueNoiseShaderParams addr 0x210ad48 size 0xec virtual false final false
  inline void SetBlueNoiseShaderParams(int32_t cameraPixelWidth, int32_t cameraPixelHeight);

  static inline ::GlobalNamespace::BlueNoiseDithering* New_ctor();

  /// @brief Method .ctor addr 0x210ae34 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDithering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlueNoiseDithering(BlueNoiseDithering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDithering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlueNoiseDithering(BlueNoiseDithering const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlueNoiseDithering();

public:
  /// @brief Field _noiseTexture, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ____noiseTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlueNoiseDithering, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlueNoiseDithering);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlueNoiseDithering*, "", "BlueNoiseDithering");