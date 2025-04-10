#pragma once
// IWYU pragma private; include "Mono/Security/Interface/TlsProtocols.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TlsProtocols)
// Forward declare root types
namespace Mono::Security::Interface {
struct TlsProtocols;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::TlsProtocols);
// Dependencies
namespace Mono::Security::Interface {
// Is value type: true
// CS Name: Mono.Security.Interface.TlsProtocols
struct CORDL_TYPE TlsProtocols {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TlsProtocols_Unwrapped
  enum struct __TlsProtocols_Unwrapped : int32_t {
    __E_Zero = static_cast<int32_t>(0x0),
    __E_Tls10Client = static_cast<int32_t>(0x80),
    __E_Tls10Server = static_cast<int32_t>(0x40),
    __E_Tls10 = static_cast<int32_t>(0xc0),
    __E_Tls11Client = static_cast<int32_t>(0x200),
    __E_Tls11Server = static_cast<int32_t>(0x100),
    __E_Tls11 = static_cast<int32_t>(0x300),
    __E_Tls12Client = static_cast<int32_t>(0x800),
    __E_Tls12Server = static_cast<int32_t>(0x400),
    __E_Tls12 = static_cast<int32_t>(0xc00),
    __E_ClientMask = static_cast<int32_t>(0xa80),
    __E_ServerMask = static_cast<int32_t>(0x540),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TlsProtocols_Unwrapped() const noexcept {
    return static_cast<__TlsProtocols_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsProtocols();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TlsProtocols(int32_t value__) noexcept;

  /// @brief Field ClientMask value: I32(2688)
  static ::Mono::Security::Interface::TlsProtocols const ClientMask;

  /// @brief Field ServerMask value: I32(1344)
  static ::Mono::Security::Interface::TlsProtocols const ServerMask;

  /// @brief Field Tls10 value: I32(192)
  static ::Mono::Security::Interface::TlsProtocols const Tls10;

  /// @brief Field Tls10Client value: I32(128)
  static ::Mono::Security::Interface::TlsProtocols const Tls10Client;

  /// @brief Field Tls10Server value: I32(64)
  static ::Mono::Security::Interface::TlsProtocols const Tls10Server;

  /// @brief Field Tls11 value: I32(768)
  static ::Mono::Security::Interface::TlsProtocols const Tls11;

  /// @brief Field Tls11Client value: I32(512)
  static ::Mono::Security::Interface::TlsProtocols const Tls11Client;

  /// @brief Field Tls11Server value: I32(256)
  static ::Mono::Security::Interface::TlsProtocols const Tls11Server;

  /// @brief Field Tls12 value: I32(3072)
  static ::Mono::Security::Interface::TlsProtocols const Tls12;

  /// @brief Field Tls12Client value: I32(2048)
  static ::Mono::Security::Interface::TlsProtocols const Tls12Client;

  /// @brief Field Tls12Server value: I32(1024)
  static ::Mono::Security::Interface::TlsProtocols const Tls12Server;

  /// @brief Field Zero value: I32(0)
  static ::Mono::Security::Interface::TlsProtocols const Zero;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15964 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::TlsProtocols, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::TlsProtocols, 0x4>, "Size mismatch!");

} // namespace Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::TlsProtocols, "Mono.Security.Interface", "TlsProtocols");
