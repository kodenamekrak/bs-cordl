#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyMessageHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyMessageHandler)
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template <typename TType, typename TData> class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
struct __PartyMessageHandler__MessageType;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ServerStatusUpdatedDelegate;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PartyMessageHandler__MessageType;
}
namespace GlobalNamespace {
class PartyMessageHandler;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ServerStatusUpdatedDelegate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PartyMessageHandler__MessageType);
MARK_REF_PTR_T(::GlobalNamespace::PartyMessageHandler);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate);
// Type: ::MessageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PartyMessageHandler::MessageType
struct CORDL_TYPE __PartyMessageHandler__MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PartyMessageHandler__MessageType_Unwrapped
  enum struct ____PartyMessageHandler__MessageType_Unwrapped : int32_t {
    __E_ConnectToMasterServer = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PartyMessageHandler__MessageType_Unwrapped() const noexcept {
    return static_cast<____PartyMessageHandler__MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyMessageHandler__MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PartyMessageHandler__MessageType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ConnectToMasterServer value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PartyMessageHandler__MessageType const ConnectToMasterServer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14887 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__MessageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyMessageHandler__MessageType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ServerStatusUpdatedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyMessageHandler::ServerStatusUpdatedDelegate*
class CORDL_TYPE __PartyMessageHandler__ServerStatusUpdatedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x22abff8, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x22ac0b8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x22abfa8, size 0x50, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  static inline ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x22abf1c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyMessageHandler__ServerStatusUpdatedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ServerStatusUpdatedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyMessageHandler__ServerStatusUpdatedDelegate(__PartyMessageHandler__ServerStatusUpdatedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ServerStatusUpdatedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyMessageHandler__ServerStatusUpdatedDelegate(__PartyMessageHandler__ServerStatusUpdatedDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14888 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToMasterServerDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyMessageHandler::ConnectToMasterServerDelegate*
class CORDL_TYPE __PartyMessageHandler__ConnectToMasterServerDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x22ac174, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW secret, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x22ac194, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x22ac160, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW secret);

  static inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x22ac0c4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyMessageHandler__ConnectToMasterServerDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyMessageHandler__ConnectToMasterServerDelegate(__PartyMessageHandler__ConnectToMasterServerDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyMessageHandler__ConnectToMasterServerDelegate(__PartyMessageHandler__ConnectToMasterServerDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14889 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConnectToMasterServerMessage
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyMessageHandler::ConnectToMasterServerMessage*
class CORDL_TYPE __PartyMessageHandler__ConnectToMasterServerMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field secret, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret)) ::StringW secret;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22ac1c4, size 0x28, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x22abe80, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* Init(::StringW secret);

  static inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* New_ctor();

  /// @brief Method Release, addr 0x22abec8, size 0x54, virtual true, abstract: false, final true
  inline void Release();

  /// @brief Method Serialize, addr 0x22ac1a0, size 0x24, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::StringW const& __cordl_internal_get_secret() const;

  constexpr ::StringW& __cordl_internal_get_secret();

  constexpr void __cordl_internal_set_secret(::StringW value);

  /// @brief Method .ctor, addr 0x22ac1ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pool, addr 0x22abc58, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>* get_pool();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyMessageHandler__ConnectToMasterServerMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyMessageHandler__ConnectToMasterServerMessage(__PartyMessageHandler__ConnectToMasterServerMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyMessageHandler__ConnectToMasterServerMessage(__PartyMessageHandler__ConnectToMasterServerMessage const&) = delete;

  /// @brief Field secret, offset: 0x10, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage, ___secret) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PartyMessageHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyMessageHandler*
class CORDL_TYPE PartyMessageHandler : public ::System::Object {
public:
  // Declarations
  using ConnectToMasterServerDelegate = ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate;

  using ConnectToMasterServerMessage = ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage;

  using MessageType = ::GlobalNamespace::__PartyMessageHandler__MessageType;

  using ServerStatusUpdatedDelegate = ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate;

  /// @brief Field _connectedPlayerManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerManager, put = __cordl_internal_set__connectedPlayerManager)) ::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  /// @brief Field _serializer, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__serializer,
      put = __cordl_internal_set__serializer)) ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>* _serializer;

  /// @brief Field connectToMasterServerEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_connectToMasterServerEvent,
                      put = __cordl_internal_set_connectToMasterServerEvent)) ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* connectToMasterServerEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ConnectToMasterServer, addr 0x22abdf8, size 0x88, virtual false, abstract: false, final false
  inline void ConnectToMasterServer(::StringW secret);

  /// @brief Method Dispose, addr 0x22abc98, size 0x28, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleConnectToMasterServer, addr 0x22abe88, size 0x40, virtual false, abstract: false, final false
  inline void HandleConnectToMasterServer(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* packet);

  static inline ::GlobalNamespace::PartyMessageHandler* New_ctor(::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __cordl_internal_get__connectedPlayerManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& __cordl_internal_get__connectedPlayerManager() const;

  constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__serializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>*> const&
  __cordl_internal_get__serializer() const;

  constexpr ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*& __cordl_internal_get_connectToMasterServerEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*> const& __cordl_internal_get_connectToMasterServerEvent() const;

  constexpr void __cordl_internal_set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr void __cordl_internal_set__serializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* value);

  /// @brief Method .ctor, addr 0x22abaec, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);

  /// @brief Method add_connectToMasterServerEvent, addr 0x22abcc0, size 0x9c, virtual false, abstract: false, final false
  inline void add_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_connectToMasterServerEvent, addr 0x22abd5c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyMessageHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyMessageHandler(PartyMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyMessageHandler(PartyMessageHandler const&) = delete;

  /// @brief Field _serializer, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType, ::GlobalNamespace::IConnectedPlayer*>* ____serializer;

  /// @brief Field _connectedPlayerManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  /// @brief Field connectToMasterServerEvent, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* ___connectToMasterServerEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14891 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyMessageHandler, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ____serializer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ____connectedPlayerManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyMessageHandler, ___connectToMasterServerEvent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__MessageType, "", "PartyMessageHandler/MessageType");
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler*, "", "PartyMessageHandler");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*, "", "PartyMessageHandler/ConnectToMasterServerDelegate");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*, "", "PartyMessageHandler/ConnectToMasterServerMessage");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*, "", "PartyMessageHandler/ServerStatusUpdatedDelegate");
