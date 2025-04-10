#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsClient)
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsClient);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsPeer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsClient
class CORDL_TYPE TlsClient {
public:
  // Declarations
  __declspec(property(get = get_ClientHelloRecordLayerVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientHelloRecordLayerVersion;

  __declspec(property(get = get_ClientVersion)) ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* ClientVersion;

  __declspec(property(get = get_IsFallback)) bool IsFallback;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer*() noexcept;

  /// @brief Method GetAuthentication, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication();

  /// @brief Method GetCipherSuites, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCipherSuites();

  /// @brief Method GetClientExtensions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetClientExtensions();

  /// @brief Method GetClientSupplementalData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetClientSupplementalData();

  /// @brief Method GetCompressionMethods, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCompressionMethods();

  /// @brief Method GetKeyExchange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* GetKeyExchange();

  /// @brief Method GetSessionToResume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsSession* GetSessionToResume();

  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Tls::TlsClientContext* context);

  /// @brief Method NotifyNewSessionTicket, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NotifyNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket);

  /// @brief Method NotifySelectedCipherSuite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NotifySelectedCipherSuite(int32_t selectedCipherSuite);

  /// @brief Method NotifySelectedCompressionMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NotifySelectedCompressionMethod(uint8_t selectedCompressionMethod);

  /// @brief Method NotifyServerVersion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NotifyServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* selectedVersion);

  /// @brief Method NotifySessionID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NotifySessionID(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionID);

  /// @brief Method ProcessServerExtensions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessServerExtensions(::System::Collections::IDictionary* serverExtensions);

  /// @brief Method ProcessServerSupplementalData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessServerSupplementalData(::System::Collections::IList* serverSupplementalData);

  /// @brief Method get_ClientHelloRecordLayerVersion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientHelloRecordLayerVersion();

  /// @brief Method get_ClientVersion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* get_ClientVersion();

  /// @brief Method get_IsFallback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsFallback();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer* i___Org__BouncyCastle__Crypto__Tls__TlsPeer() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "TlsClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsClient(TlsClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1164 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsClient*, "Org.BouncyCastle.Crypto.Tls", "TlsClient");
