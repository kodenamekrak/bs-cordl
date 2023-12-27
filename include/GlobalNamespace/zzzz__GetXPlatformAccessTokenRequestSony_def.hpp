#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetXPlatformAccessTokenRequestSony)
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenRequestSony;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GetXPlatformAccessTokenRequestSony);
// Type: ::GetXPlatformAccessTokenRequestSony
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15997))
// CS Name: ::GetXPlatformAccessTokenRequestSony*
class CORDL_TYPE GetXPlatformAccessTokenRequestSony : public ::System::Object {
public:
  // Declarations
  /// @brief Field platformToken, offset 0x10, size 0x8
  __declspec(property(get = __get_platformToken, put = __set_platformToken))::StringW platformToken;

  /// @brief Field platformEnvironment, offset 0x18, size 0x1
  __declspec(property(get = __get_platformEnvironment, put = __set_platformEnvironment))::GlobalNamespace::PlatformEnvironment platformEnvironment;

  constexpr ::StringW& __get_platformToken();

  constexpr ::StringW const& __get_platformToken() const;

  constexpr void __set_platformToken(::StringW value);

  constexpr ::GlobalNamespace::PlatformEnvironment& __get_platformEnvironment();

  constexpr ::GlobalNamespace::PlatformEnvironment const& __get_platformEnvironment() const;

  constexpr void __set_platformEnvironment(::GlobalNamespace::PlatformEnvironment value);

  static inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSony* New_ctor(::StringW platformToken, ::GlobalNamespace::PlatformEnvironment platformEnvironment);

  /// @brief Method .ctor addr 0x2800154 size 0x30 virtual false final false
  inline void _ctor(::StringW platformToken, ::GlobalNamespace::PlatformEnvironment platformEnvironment);

  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSony", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetXPlatformAccessTokenRequestSony(GetXPlatformAccessTokenRequestSony&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSony", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetXPlatformAccessTokenRequestSony(GetXPlatformAccessTokenRequestSony const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetXPlatformAccessTokenRequestSony();

public:
  /// @brief Field platformToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ___platformToken;

  /// @brief Field platformEnvironment, offset: 0x18, size: 0x1, def value: None
  ::GlobalNamespace::PlatformEnvironment ___platformEnvironment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetXPlatformAccessTokenRequestSony, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GetXPlatformAccessTokenRequestSony);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetXPlatformAccessTokenRequestSony*, "", "GetXPlatformAccessTokenRequestSony");