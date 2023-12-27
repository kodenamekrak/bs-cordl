#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OptionalAvatarDataSender)
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace System {
class IDisposable;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSyncHandler;
}
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::OptionalAvatarDataSender);
// Type: BeatSaber.AvatarCore::OptionalAvatarDataSender
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15169))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15207))
// CS Name: ::BeatSaber.AvatarCore::OptionalAvatarDataSender*
class CORDL_TYPE OptionalAvatarDataSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _avatarSystemCollection, offset 0x10, size 0x8
  __declspec(property(get = __get__avatarSystemCollection, put = __set__avatarSystemCollection))::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _optionalAvatarDataSyncHandler, offset 0x18, size 0x8
  __declspec(property(get = __get__optionalAvatarDataSyncHandler, put = __set__optionalAvatarDataSyncHandler))::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* _optionalAvatarDataSyncHandler;

  /// @brief Field _optionalAvatarDataProvider, offset 0x20, size 0x8
  __declspec(property(get = __get__optionalAvatarDataProvider, put = __set__optionalAvatarDataProvider))::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* _optionalAvatarDataProvider;

  /// @brief Field _currentAvatarDisplayContext, offset 0x28, size 0x4
  __declspec(property(get = __get__currentAvatarDisplayContext, put = __set__currentAvatarDisplayContext))::BeatSaber::AvatarCore::AvatarDisplayContext _currentAvatarDisplayContext;

  /// @brief Field _selectedAvatarTypeId, offset 0x30, size 0x8
  __declspec(property(get = __get__selectedAvatarTypeId, put = __set__selectedAvatarTypeId))::StringW _selectedAvatarTypeId;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __get__avatarSystemCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& __get__avatarSystemCollection() const;

  constexpr void __set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*& __get__optionalAvatarDataSyncHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*> const& __get__optionalAvatarDataSyncHandler() const;

  constexpr void __set__optionalAvatarDataSyncHandler(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* value);

  constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& __get__optionalAvatarDataProvider();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*> const& __get__optionalAvatarDataProvider() const;

  constexpr void __set__optionalAvatarDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value);

  constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext& __get__currentAvatarDisplayContext();

  constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext const& __get__currentAvatarDisplayContext() const;

  constexpr void __set__currentAvatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext value);

  constexpr ::StringW& __get__selectedAvatarTypeId();

  constexpr ::StringW const& __get__selectedAvatarTypeId() const;

  constexpr void __set__selectedAvatarTypeId(::StringW value);

  static inline ::BeatSaber::AvatarCore::OptionalAvatarDataSender* New_ctor(::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection,
                                                                            ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler);

  /// @brief Method .ctor addr 0xe10ec4 size 0x2c virtual false final false
  inline void _ctor(::BeatSaber::AvatarCore::AvatarSystemCollection* avatarSystemCollection, ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler);

  /// @brief Method SetSelectedAvatarTypeId addr 0xe10ef0 size 0x410 virtual false final false
  inline void SetSelectedAvatarTypeId(::StringW selectedAvatarTypeId);

  /// @brief Method SetCurrentLocalAvatarDisplayContext addr 0xe11318 size 0xc4 virtual false final false
  inline void SetCurrentLocalAvatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext);

  /// @brief Method Dispose addr 0xe113dc size 0x108 virtual true final true
  inline void Dispose();

  /// @brief Method HandleOptionalAvatarDataProviderDataDidChange addr 0xe11300 size 0x18 virtual false final false
  inline void HandleOptionalAvatarDataProviderDataDidChange(::BeatSaber::AvatarCore::OptionalAvatarData data);

  // Ctor Parameters [CppParam { name: "", ty: "OptionalAvatarDataSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalAvatarDataSender(OptionalAvatarDataSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalAvatarDataSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalAvatarDataSender(OptionalAvatarDataSender const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalAvatarDataSender();

public:
  /// @brief Field _avatarSystemCollection, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _optionalAvatarDataSyncHandler, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* ____optionalAvatarDataSyncHandler;

  /// @brief Field _optionalAvatarDataProvider, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* ____optionalAvatarDataProvider;

  /// @brief Field _currentAvatarDisplayContext, offset: 0x28, size: 0x4, def value: None
  ::BeatSaber::AvatarCore::AvatarDisplayContext ____currentAvatarDisplayContext;

  /// @brief Field _selectedAvatarTypeId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____selectedAvatarTypeId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::OptionalAvatarDataSender, 0x38>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::OptionalAvatarDataSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::OptionalAvatarDataSender*, "BeatSaber.AvatarCore", "OptionalAvatarDataSender");