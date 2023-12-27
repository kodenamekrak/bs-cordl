#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourceManagerDiagnostics)
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventContext;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::AddressableAssets::Utility {
class DiagnosticInfo;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class ResourceManagerDiagnostics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics);
// Type: UnityEngine.AddressableAssets.Utility::ResourceManagerDiagnostics
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14101))
// CS Name: ::UnityEngine.AddressableAssets.Utility::ResourceManagerDiagnostics*
class CORDL_TYPE ResourceManagerDiagnostics : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ResourceManager, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ResourceManager, put = __set_m_ResourceManager))::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;

  /// @brief Field m_cachedDiagnosticInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_m_cachedDiagnosticInfo,
                      put = __set_m_cachedDiagnosticInfo))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* m_cachedDiagnosticInfo;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::ResourceManagement::ResourceManager*& __get_m_ResourceManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> const& __get_m_ResourceManager() const;

  constexpr void __set_m_ResourceManager(::UnityEngine::ResourceManagement::ResourceManager* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>*& __get_m_cachedDiagnosticInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>*> const&
  __get_m_cachedDiagnosticInfo() const;

  constexpr void __set_m_cachedDiagnosticInfo(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* value);

  static inline ::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* New_ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManager);

  /// @brief Method .ctor addr 0x2a287bc size 0xec virtual false final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceManager* resourceManager);

  /// @brief Method SumDependencyNameHashCodes addr 0x2a288a8 size 0x218 virtual false final false
  inline int32_t SumDependencyNameHashCodes(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method CalculateHashCode addr 0x2a28ac0 size 0x144 virtual false final false
  inline int32_t CalculateHashCode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method CalculateCompletedOperationHashcode addr 0x2a28c04 size 0x8c virtual false final false
  inline int32_t CalculateCompletedOperationHashcode(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method GenerateCompletedOperationDisplayName addr 0x2a28c90 size 0x430 virtual false final false
  inline ::StringW GenerateCompletedOperationDisplayName(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);

  /// @brief Method OnResourceManagerDiagnosticEvent addr 0x2a290c0 size 0x3c8 virtual false final false
  inline void OnResourceManagerDiagnosticEvent(::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventContext eventContext);

  /// @brief Method Dispose addr 0x2a29488 size 0xd4 virtual true final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerDiagnostics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManagerDiagnostics(ResourceManagerDiagnostics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerDiagnostics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManagerDiagnostics(ResourceManagerDiagnostics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManagerDiagnostics();

public:
  /// @brief Field m_ResourceManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceManager* ___m_ResourceManager;

  /// @brief Field m_cachedDiagnosticInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* ___m_cachedDiagnosticInfo;

  /// @brief Field k_NumberOfCompletedOpResultEntriesToShow offset 0xffffffff size 0x4
  static constexpr int32_t k_NumberOfCompletedOpResultEntriesToShow{ static_cast<int32_t>(0x4) };

  /// @brief Field k_MaximumCompletedOpResultEntryLength offset 0xffffffff size 0x4
  static constexpr int32_t k_MaximumCompletedOpResultEntryLength{ static_cast<int32_t>(0x1e) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics, 0x20>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*, "UnityEngine.AddressableAssets.Utility", "ResourceManagerDiagnostics");