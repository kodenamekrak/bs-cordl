#pragma once
// IWYU pragma private; include "UnityEngine/TerrainCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainCallbacks)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class __TerrainCallbacks__HeightmapChangedCallback;
}
namespace UnityEngine {
class __TerrainCallbacks__TextureChangedCallback;
}
// Forward declare root types
namespace UnityEngine {
class TerrainCallbacks;
}
namespace UnityEngine {
class __TerrainCallbacks__HeightmapChangedCallback;
}
namespace UnityEngine {
class __TerrainCallbacks__TextureChangedCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainCallbacks);
MARK_REF_PTR_T(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback);
MARK_REF_PTR_T(::UnityEngine::__TerrainCallbacks__TextureChangedCallback);
// Type: ::HeightmapChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::TerrainCallbacks::HeightmapChangedCallback*
class CORDL_TYPE __TerrainCallbacks__HeightmapChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48b57a4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, bool synched);

  static inline ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48b5704, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TerrainCallbacks__HeightmapChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TerrainCallbacks__HeightmapChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TerrainCallbacks__HeightmapChangedCallback(__TerrainCallbacks__HeightmapChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TerrainCallbacks__HeightmapChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TerrainCallbacks__HeightmapChangedCallback(__TerrainCallbacks__HeightmapChangedCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18038 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::TextureChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::TerrainCallbacks::TextureChangedCallback*
class CORDL_TYPE __TerrainCallbacks__TextureChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48b585c, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Terrain* terrain, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched);

  static inline ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48b57bc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TerrainCallbacks__TextureChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TerrainCallbacks__TextureChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TerrainCallbacks__TextureChangedCallback(__TerrainCallbacks__TextureChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TerrainCallbacks__TextureChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TerrainCallbacks__TextureChangedCallback(__TerrainCallbacks__TextureChangedCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TerrainCallbacks__TextureChangedCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::TerrainCallbacks
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::TerrainCallbacks*
class CORDL_TYPE TerrainCallbacks : public ::System::Object {
public:
  // Declarations
  using HeightmapChangedCallback = ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback;

  using TextureChangedCallback = ::UnityEngine::__TerrainCallbacks__TextureChangedCallback;

  /// @brief Field heightmapChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_heightmapChanged, put = setStaticF_heightmapChanged)) ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* heightmapChanged;

  /// @brief Field textureChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textureChanged, put = setStaticF_textureChanged)) ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* textureChanged;

  /// @brief Method InvokeHeightmapChangedCallback, addr 0x48b54a0, size 0x10c, virtual false, abstract: false, final false
  static inline void InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* terrainData, ::UnityEngine::RectInt heightRegion, bool synched);

  /// @brief Method InvokeTextureChangedCallback, addr 0x48b55e8, size 0x11c, virtual false, abstract: false, final false
  static inline void InvokeTextureChangedCallback(::UnityEngine::TerrainData* terrainData, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched);

  static inline ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* getStaticF_heightmapChanged();

  static inline ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* getStaticF_textureChanged();

  static inline void setStaticF_heightmapChanged(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* value);

  static inline void setStaticF_textureChanged(::UnityEngine::__TerrainCallbacks__TextureChangedCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainCallbacks(TerrainCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainCallbacks(TerrainCallbacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18040 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainCallbacks, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TerrainCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainCallbacks*, "UnityEngine", "TerrainCallbacks");
NEED_NO_BOX(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*, "UnityEngine", "TerrainCallbacks/HeightmapChangedCallback");
NEED_NO_BOX(::UnityEngine::__TerrainCallbacks__TextureChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TerrainCallbacks__TextureChangedCallback*, "UnityEngine", "TerrainCallbacks/TextureChangedCallback");
