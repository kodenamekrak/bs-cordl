#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/SceneProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneProvider)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __SceneProvider__SceneOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __SceneProvider__UnloadSceneOp;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class SceneProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __SceneProvider__SceneOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __SceneProvider__UnloadSceneOp;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp);
// Type: ::SceneOp
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::SceneProvider::SceneOp*
class CORDL_TYPE __SceneProvider__SceneOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
public:
  // Declarations
  __declspec(property(get = get_DebugName)) ::StringW DebugName;

  __declspec(property(get = get_Progress)) float_t Progress;

  /// @brief Field m_ActivateOnLoad, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ActivateOnLoad, put = __cordl_internal_set_m_ActivateOnLoad)) bool m_ActivateOnLoad;

  /// @brief Field m_DepOp, offset 0xd0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_DepOp, put = __cordl_internal_set_m_DepOp)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      m_DepOp;

  /// @brief Field m_Inst, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Inst, put = __cordl_internal_set_m_Inst)) ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance m_Inst;

  /// @brief Field m_LoadSceneParameters, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoadSceneParameters, put = __cordl_internal_set_m_LoadSceneParameters)) ::UnityEngine::SceneManagement::LoadSceneParameters m_LoadSceneParameters;

  /// @brief Field m_Location, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Location, put = __cordl_internal_set_m_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* m_Location;

  /// @brief Field m_Priority, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Priority, put = __cordl_internal_set_m_Priority)) int32_t m_Priority;

  /// @brief Field m_ResourceManager, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceManager, put = __cordl_internal_set_m_ResourceManager)) ::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept;

  /// @brief Method Destroy, addr 0x473e438, size 0x90, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method Execute, addr 0x473dd14, size 0x540, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method GetDependencies, addr 0x473db2c, size 0x144, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);

  /// @brief Method GetDownloadStatus, addr 0x473d6ac, size 0xdc, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method Init, addr 0x473d788, size 0x70, virtual false, abstract: false, final false
  inline void
  Init(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, bool activateOnLoad, int32_t priority,
       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
           depOp);

  /// @brief Method Init, addr 0x473d2f4, size 0xc4, virtual false, abstract: false, final false
  inline void
  Init(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad,
       int32_t priority,
       ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
           depOp);

  /// @brief Method InternalLoad, addr 0x473e3d0, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* InternalLoad(::StringW path, bool loadingFromBundle, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters);

  /// @brief Method InternalLoadScene, addr 0x473e2fc, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance InternalLoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                               bool loadingFromBundle, ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters,
                                                                                               bool activateOnLoad, int32_t priority);

  /// @brief Method InvokeWaitForCompletion, addr 0x473d7f8, size 0x334, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp* New_ctor(::UnityEngine::ResourceManagement::ResourceManager* rm);

  /// @brief Method UnityEngine.ResourceManagement.IUpdateReceiver.Update, addr 0x473e588, size 0x128, virtual true, abstract: false, final true
  inline void UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime);

  constexpr bool const& __cordl_internal_get_m_ActivateOnLoad() const;

  constexpr bool& __cordl_internal_get_m_ActivateOnLoad();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get_m_DepOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<
      ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>&
  __cordl_internal_get_m_DepOp();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance const& __cordl_internal_get_m_Inst() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& __cordl_internal_get_m_Inst();

  constexpr ::UnityEngine::SceneManagement::LoadSceneParameters const& __cordl_internal_get_m_LoadSceneParameters() const;

  constexpr ::UnityEngine::SceneManagement::LoadSceneParameters& __cordl_internal_get_m_LoadSceneParameters();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get_m_Location();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get_m_Location() const;

  constexpr int32_t const& __cordl_internal_get_m_Priority() const;

  constexpr int32_t& __cordl_internal_get_m_Priority();

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __cordl_internal_get_m_ResourceManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const& __cordl_internal_get_m_ResourceManager() const;

  constexpr void __cordl_internal_set_m_ActivateOnLoad(bool value);

  constexpr void __cordl_internal_set_m_DepOp(
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
          value);

  constexpr void __cordl_internal_set_m_Inst(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value);

  constexpr void __cordl_internal_set_m_LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneParameters value);

  constexpr void __cordl_internal_set_m_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  constexpr void __cordl_internal_set_m_Priority(int32_t value);

  constexpr void __cordl_internal_set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value);

  /// @brief Method .ctor, addr 0x473d298, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceManager* rm);

  /// @brief Method get_DebugName, addr 0x473dc70, size 0xa4, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method get_Progress, addr 0x473e4c8, size 0xc0, virtual true, abstract: false, final false
  inline float_t get_Progress();

  /// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver* i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SceneProvider__SceneOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SceneProvider__SceneOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SceneProvider__SceneOp(__SceneProvider__SceneOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SceneProvider__SceneOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SceneProvider__SceneOp(__SceneProvider__SceneOp const&) = delete;

  /// @brief Field m_ActivateOnLoad, offset: 0xa0, size: 0x1, def value: None
  bool ___m_ActivateOnLoad;

  /// @brief Field m_Inst, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance ___m_Inst;

  /// @brief Field m_Location, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ___m_Location;

  /// @brief Field m_LoadSceneParameters, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::SceneManagement::LoadSceneParameters ___m_LoadSceneParameters;

  /// @brief Field m_Priority, offset: 0xc8, size: 0x4, def value: None
  int32_t ___m_Priority;

  /// @brief Field m_DepOp, offset: 0xd0, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>
      ___m_DepOp;

  /// @brief Field m_ResourceManager, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* ___m_ResourceManager;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp, 0xf8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp, ___m_ActivateOnLoad) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp, ___m_Inst) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp, ___m_Location) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp, ___m_LoadSceneParameters) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp, ___m_Priority) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp, ___m_DepOp) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp, ___m_ResourceManager) == 0xf0, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Type: ::UnloadSceneOp
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 212, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::SceneProvider::UnloadSceneOp*
class CORDL_TYPE __SceneProvider__UnloadSceneOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
public:
  // Declarations
  __declspec(property(get = get_Progress)) float_t Progress;

  /// @brief Field m_Instance, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Instance, put = __cordl_internal_set_m_Instance)) ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance m_Instance;

  /// @brief Field m_UnloadOptions, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UnloadOptions, put = __cordl_internal_set_m_UnloadOptions)) ::UnityEngine::SceneManagement::UnloadSceneOptions m_UnloadOptions;

  /// @brief Field m_sceneLoadHandle, offset 0xb0, size 0x20
  __declspec(property(
      get = __cordl_internal_get_m_sceneLoadHandle,
      put = __cordl_internal_set_m_sceneLoadHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
      m_sceneLoadHandle;

  /// @brief Method Execute, addr 0x473e6b0, size 0x12c, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x473d610, size 0x94, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
                   ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method InvokeWaitForCompletion, addr 0x473e914, size 0xb4, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp* New_ctor();

  /// @brief Method UnloadSceneCompleted, addr 0x473e84c, size 0xc8, virtual false, abstract: false, final false
  inline void UnloadSceneCompleted(::UnityEngine::AsyncOperation* obj);

  /// @brief Method UnloadSceneCompletedNoRelease, addr 0x473e7dc, size 0x70, virtual false, abstract: false, final false
  inline void UnloadSceneCompletedNoRelease(::UnityEngine::AsyncOperation* obj);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance const& __cordl_internal_get_m_Instance() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& __cordl_internal_get_m_Instance();

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions const& __cordl_internal_get_m_UnloadOptions() const;

  constexpr ::UnityEngine::SceneManagement::UnloadSceneOptions& __cordl_internal_get_m_UnloadOptions();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const&
  __cordl_internal_get_m_sceneLoadHandle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>& __cordl_internal_get_m_sceneLoadHandle();

  constexpr void __cordl_internal_set_m_Instance(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value);

  constexpr void __cordl_internal_set_m_UnloadOptions(::UnityEngine::SceneManagement::UnloadSceneOptions value);

  constexpr void
  __cordl_internal_set_m_sceneLoadHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value);

  /// @brief Method .ctor, addr 0x473d5c8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Progress, addr 0x473e9c8, size 0x48, virtual true, abstract: false, final false
  inline float_t get_Progress();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SceneProvider__UnloadSceneOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SceneProvider__UnloadSceneOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SceneProvider__UnloadSceneOp(__SceneProvider__UnloadSceneOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SceneProvider__UnloadSceneOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SceneProvider__UnloadSceneOp(__SceneProvider__UnloadSceneOp const&) = delete;

  /// @brief Field m_Instance, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance ___m_Instance;

  /// @brief Field m_sceneLoadHandle, offset: 0xb0, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ___m_sceneLoadHandle;

  /// @brief Field m_UnloadOptions, offset: 0xd0, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::UnloadSceneOptions ___m_UnloadOptions;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp, 0xd8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp, ___m_Instance) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp, ___m_sceneLoadHandle) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp, ___m_UnloadOptions) == 0xd0, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::SceneProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::SceneProvider*
class CORDL_TYPE SceneProvider : public ::System::Object {
public:
  // Declarations
  using SceneOp = ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp;

  using UnloadSceneOp = ::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2*() noexcept;

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider* New_ctor();

  /// @brief Method ProvideScene, addr 0x473cec0, size 0x74, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
               ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, bool activateOnLoad, int32_t priority);

  /// @brief Method ProvideScene, addr 0x473cf34, size 0x364, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
               ::UnityEngine::SceneManagement::LoadSceneParameters loadSceneParameters, bool activateOnLoad, int32_t priority);

  /// @brief Method ReleaseScene, addr 0x473d3b8, size 0xe8, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
               ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle);

  /// @brief Method UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene, addr 0x473d4a0, size 0x128, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene(
      ::UnityEngine::ResourceManagement::ResourceManager* resourceManager,
      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle,
      ::UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions);

  /// @brief Method .ctor, addr 0x473d6a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider"
  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* i___UnityEngine__ResourceManagement__ResourceProviders__ISceneProvider() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2"
  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2* i___UnityEngine__ResourceManagement__ResourceProviders__ISceneProvider2() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneProvider(SceneProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneProvider(SceneProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15642 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__SceneOp*, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider/SceneOp");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__SceneProvider__UnloadSceneOp*, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider/UnloadSceneOp");
