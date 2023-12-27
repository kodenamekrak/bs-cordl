#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTlsProviderFactory)
namespace System {
class Object;
}
namespace System {
struct Guid;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoTlsProviderFactory;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MonoTlsProviderFactory);
// Type: Mono.Net.Security::MonoTlsProviderFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8842))
// CS Name: ::Mono.Net.Security::MonoTlsProviderFactory*
class CORDL_TYPE MonoTlsProviderFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field locker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_locker, put = setStaticF_locker))::System::Object* locker;

  /// @brief Field initialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_initialized, put = setStaticF_initialized)) bool initialized;

  /// @brief Field defaultProvider, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultProvider, put = setStaticF_defaultProvider))::Mono::Net::Security::MobileTlsProvider* defaultProvider;

  /// @brief Field providerRegistration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_providerRegistration,
                             put = setStaticF_providerRegistration))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* providerRegistration;

  /// @brief Field providerCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_providerCache,
                             put = setStaticF_providerCache))::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>* providerCache;

  /// @brief Field UnityTlsId, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_UnityTlsId, put = setStaticF_UnityTlsId))::System::Guid UnityTlsId;

  /// @brief Field AppleTlsId, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_AppleTlsId, put = setStaticF_AppleTlsId))::System::Guid AppleTlsId;

  /// @brief Field BtlsId, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_BtlsId, put = setStaticF_BtlsId))::System::Guid BtlsId;

  static inline void setStaticF_locker(::System::Object* value);

  static inline ::System::Object* getStaticF_locker();

  static inline void setStaticF_initialized(bool value);

  static inline bool getStaticF_initialized();

  static inline void setStaticF_defaultProvider(::Mono::Net::Security::MobileTlsProvider* value);

  static inline ::Mono::Net::Security::MobileTlsProvider* getStaticF_defaultProvider();

  static inline void setStaticF_providerRegistration(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* getStaticF_providerRegistration();

  static inline void setStaticF_providerCache(::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>* getStaticF_providerCache();

  static inline void setStaticF_UnityTlsId(::System::Guid value);

  static inline ::System::Guid getStaticF_UnityTlsId();

  static inline void setStaticF_AppleTlsId(::System::Guid value);

  static inline ::System::Guid getStaticF_AppleTlsId();

  static inline void setStaticF_BtlsId(::System::Guid value);

  static inline ::System::Guid getStaticF_BtlsId();

  /// @brief Method GetProviderInternal addr 0x2820300 size 0x11c virtual false final false
  static inline ::Mono::Net::Security::MobileTlsProvider* GetProviderInternal();

  /// @brief Method InitializeInternal addr 0x2824378 size 0x3ac virtual false final false
  static inline void InitializeInternal();

  /// @brief Method LookupProvider addr 0x2824ac4 size 0x594 virtual false final false
  static inline ::Mono::Net::Security::MobileTlsProvider* LookupProvider(::StringW name, bool throwOnError);

  /// @brief Method InitializeProviderRegistration addr 0x2824724 size 0x20c virtual false final false
  static inline void InitializeProviderRegistration();

  /// @brief Method PopulateUnityProviders addr 0x2825058 size 0x13c virtual false final false
  static inline void PopulateUnityProviders();

  /// @brief Method PopulateProviders addr 0x2825194 size 0x50 virtual false final false
  static inline void PopulateProviders();

  /// @brief Method CreateDefaultProviderImpl addr 0x2824930 size 0x194 virtual false final false
  static inline ::Mono::Net::Security::MobileTlsProvider* CreateDefaultProviderImpl();

  /// @brief Method GetProvider addr 0x28251e4 size 0x4c virtual false final false
  static inline ::Mono::Net::Security::MobileTlsProvider* GetProvider();

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsProviderFactory(MonoTlsProviderFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsProviderFactory(MonoTlsProviderFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsProviderFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoTlsProviderFactory, 0x10>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MonoTlsProviderFactory);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoTlsProviderFactory*, "Mono.Net.Security", "MonoTlsProviderFactory");