#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsContext)
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsContext);
// Dependencies
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsContext
class CORDL_TYPE TlsContext {
public:
  // Declarations
  __declspec(property(get = get_ClientVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientVersion;

  __declspec(property(get = get_IsServer)) bool IsServer;

  __declspec(property(get = get_NonceRandomGenerator)) ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* NonceRandomGenerator;

  __declspec(property(get = get_ResumableSession)) ::Org::BouncyCastle::Crypto::Tls::TlsSession* ResumableSession;

  __declspec(property(get = get_SecureRandom)) ::Org::BouncyCastle::Security::SecureRandom* SecureRandom;

  __declspec(property(get = get_SecurityParameters)) ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* SecurityParameters;

  __declspec(property(get = get_ServerVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ServerVersion;

  __declspec(property(get = get_UserObject, put = set_UserObject)) ::System::Object* UserObject;

  /// @brief Method ExportKeyingMaterial, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportKeyingMaterial(::StringW asciiLabel, ::ArrayW<uint8_t, ::Array<uint8_t>*> context_value, int32_t length);

  /// @brief Method get_ClientVersion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion();

  /// @brief Method get_IsServer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsServer();

  /// @brief Method get_NonceRandomGenerator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* get_NonceRandomGenerator();

  /// @brief Method get_ResumableSession, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* get_ResumableSession();

  /// @brief Method get_SecureRandom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Security::SecureRandom* get_SecureRandom();

  /// @brief Method get_SecurityParameters, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* get_SecurityParameters();

  /// @brief Method get_ServerVersion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ServerVersion();

  /// @brief Method get_UserObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_UserObject();

  /// @brief Method set_UserObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_UserObject(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "TlsContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsContext(TlsContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1166 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsContext);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsContext*, "Org.BouncyCastle.Crypto.Tls", "TlsContext");
