#pragma once
// IWYU pragma private; include "UnityEngine/Cubemap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cubemap)
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Cubemap;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Cubemap);
// Type: UnityEngine::Cubemap
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Cubemap*
class CORDL_TYPE Cubemap : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_desiredMipmapLevel)) int32_t desiredMipmapLevel;

  __declspec(property(get = get_format)) ::UnityEngine::TextureFormat format;

  __declspec(property(get = get_isPreProcessed)) bool isPreProcessed;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_loadAllMips, put = set_loadAllMips)) bool loadAllMips;

  __declspec(property(get = get_loadedMipmapLevel)) int32_t loadedMipmapLevel;

  __declspec(property(get = get_loadingMipmapLevel)) int32_t loadingMipmapLevel;

  __declspec(property(get = get_requestedMipmapLevel, put = set_requestedMipmapLevel)) int32_t requestedMipmapLevel;

  __declspec(property(get = get_streamingMipmaps)) bool streamingMipmaps;

  __declspec(property(get = get_streamingMipmapsPriority)) int32_t streamingMipmapsPriority;

  /// @brief Method Apply, addr 0x4832224, size 0xc, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method Apply, addr 0x4832218, size 0xc, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps);

  /// @brief Method Apply, addr 0x483218c, size 0x8c, virtual false, abstract: false, final false
  inline void Apply(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ApplyImpl, addr 0x4830fa4, size 0x54, virtual false, abstract: false, final false
  inline void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);

  /// @brief Method ClearRequestedMipmapLevel, addr 0x48317f4, size 0x3c, virtual false, abstract: false, final false
  inline void ClearRequestedMipmapLevel();

  /// @brief Method CreateExternalTexture, addr 0x4831f40, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> CreateExternalTexture(int32_t width, ::UnityEngine::TextureFormat format, bool mipmap, ::System::IntPtr nativeTex);

  /// @brief Method GetPixel, addr 0x4832108, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y);

  /// @brief Method GetPixel, addr 0x4832110, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, int32_t mip);

  /// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t mipLevel, ::UnityEngine::CubemapFace face);

  /// @brief Method GetPixelImpl, addr 0x4831170, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y);

  /// @brief Method GetPixelImpl_Injected, addr 0x48311f8, size 0x74, virtual false, abstract: false, final false
  inline void GetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ByRef<::UnityEngine::Color> ret);

  /// @brief Method GetPixels, addr 0x4831344, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace face);

  /// @brief Method GetPixels, addr 0x48312f0, size 0x54, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> GetPixels(::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method GetWritableImageData, addr 0x4831548, size 0x44, virtual false, abstract: false, final false
  inline ::System::IntPtr GetWritableImageData(int32_t frame);

  /// @brief Method Internal_Create, addr 0x4830ed0, size 0xd4, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// @brief Method Internal_CreateImpl, addr 0x4830e4c, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex);

  /// @brief Method IsRequestedMipmapLevelLoaded, addr 0x4831830, size 0x3c, virtual false, abstract: false, final false
  inline bool IsRequestedMipmapLevelLoaded();

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                                 int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                                 int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount, bool createUninitialized);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized);

  static inline ::UnityEngine::Cubemap* New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized);

  /// @brief Method SetPixel, addr 0x4832054, size 0x8, virtual false, abstract: false, final false
  inline void SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method SetPixel, addr 0x483205c, size 0xac, virtual false, abstract: false, final false
  inline void SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color, int32_t mip);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::ArrayW<T, ::Array<T>*> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImpl, addr 0x483146c, size 0x84, virtual false, abstract: false, final false
  inline bool SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelDataImplArray, addr 0x48313e8, size 0x84, virtual false, abstract: false, final false
  inline bool SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex);

  /// @brief Method SetPixelImpl, addr 0x4831078, size 0x84, virtual false, abstract: false, final false
  inline void SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, ::UnityEngine::Color color);

  /// @brief Method SetPixelImpl_Injected, addr 0x48310fc, size 0x74, virtual false, abstract: false, final false
  inline void SetPixelImpl_Injected(int32_t image, int32_t mip, int32_t x, int32_t y, ByRef<::UnityEngine::Color> color);

  /// @brief Method SetPixels, addr 0x48314f0, size 0x58, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face);

  /// @brief Method SetPixels, addr 0x483138c, size 0x5c, virtual false, abstract: false, final false
  inline void SetPixels(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::UnityEngine::CubemapFace face, int32_t miplevel);

  /// @brief Method SmoothEdges, addr 0x48312b0, size 0x40, virtual false, abstract: false, final false
  inline void SmoothEdges();

  /// @brief Method SmoothEdges, addr 0x483126c, size 0x44, virtual false, abstract: false, final false
  inline void SmoothEdges(int32_t smoothRegionWidthInPixels);

  /// @brief Method UpdateExternalTexture, addr 0x4830ff8, size 0x44, virtual false, abstract: false, final false
  inline void UpdateExternalTexture(::System::IntPtr nativeTexture);

  /// @brief Method ValidateFormat, addr 0x4831938, size 0x120, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width);

  /// @brief Method ValidateFormat, addr 0x483186c, size 0xcc, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format, int32_t width);

  /// @brief Method ValidateIsNotCrunched, addr 0x4831c44, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x4831a58, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x4831b1c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief Method .ctor, addr 0x4831a94, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor, addr 0x4831b68, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief Method .ctor, addr 0x4831f28, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount);

  /// @brief Method .ctor, addr 0x4831f34, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount, bool createUninitialized);

  /// @brief Method .ctor, addr 0x4831df4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x4831e88, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized);

  /// @brief Method .ctor, addr 0x4831c98, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized);

  /// @brief Method get_desiredMipmapLevel, addr 0x4831740, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_desiredMipmapLevel();

  /// @brief Method get_format, addr 0x4830e10, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextureFormat get_format();

  /// @brief Method get_isPreProcessed, addr 0x483158c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPreProcessed();

  /// @brief Method get_isReadable, addr 0x483103c, size 0x3c, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_loadAllMips, addr 0x48316c0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loadAllMips();

  /// @brief Method get_loadedMipmapLevel, addr 0x48317b8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_loadedMipmapLevel();

  /// @brief Method get_loadingMipmapLevel, addr 0x483177c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_loadingMipmapLevel();

  /// @brief Method get_requestedMipmapLevel, addr 0x4831640, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_requestedMipmapLevel();

  /// @brief Method get_streamingMipmaps, addr 0x48315c8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_streamingMipmaps();

  /// @brief Method get_streamingMipmapsPriority, addr 0x4831604, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_streamingMipmapsPriority();

  /// @brief Method set_loadAllMips, addr 0x48316fc, size 0x44, virtual false, abstract: false, final false
  inline void set_loadAllMips(bool value);

  /// @brief Method set_requestedMipmapLevel, addr 0x483167c, size 0x44, virtual false, abstract: false, final false
  inline void set_requestedMipmapLevel(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cubemap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cubemap(Cubemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cubemap(Cubemap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Cubemap, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Cubemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cubemap*, "UnityEngine", "Cubemap");
