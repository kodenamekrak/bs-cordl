#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_SessionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SessionManager)
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
namespace HoudiniEngineUnity {
struct HAPI_License;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace HoudiniEngineUnity {
class HEU_SessionManager_CreateSessionFromTypeDelegate;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionManager;
}
namespace HoudiniEngineUnity {
class HEU_SessionManager_CreateSessionFromTypeDelegate;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionManager);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate);
// Dependencies System.MulticastDelegate
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_SessionManager/CreateSessionFromTypeDelegate
class CORDL_TYPE HEU_SessionManager_CreateSessionFromTypeDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a56b28, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Type* type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a56b48, size 0xc, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a56b14, size 0x14, virtual true, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* Invoke(::System::Type* type);

  static inline ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a56a14, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionManager_CreateSessionFromTypeDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager_CreateSessionFromTypeDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionManager_CreateSessionFromTypeDelegate(HEU_SessionManager_CreateSessionFromTypeDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager_CreateSessionFromTypeDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionManager_CreateSessionFromTypeDelegate(HEU_SessionManager_CreateSessionFromTypeDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_SessionManager
class CORDL_TYPE HEU_SessionManager : public ::System::Object {
public:
  // Declarations
  using CreateSessionFromTypeDelegate = ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate;

  /// @brief Field _createSessionFromTypeDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__createSessionFromTypeDelegate,
                      put = setStaticF__createSessionFromTypeDelegate)) ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate* _createSessionFromTypeDelegate;

  /// @brief Field _defaultSession, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaultSession, put = setStaticF__defaultSession)) ::HoudiniEngineUnity::HEU_SessionBase* _defaultSession;

  /// @brief Field _sessionMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__sessionMap, put = setStaticF__sessionMap)) ::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* _sessionMap;

  /// @brief Method CheckAndCloseExistingSession, addr 0x3a54dec, size 0xb0, virtual false, abstract: false, final false
  static inline void CheckAndCloseExistingSession();

  /// @brief Method CheckVersionMatch, addr 0x3a55a38, size 0x70, virtual false, abstract: false, final false
  static inline bool CheckVersionMatch();

  /// @brief Method ClearConnectionError, addr 0x3a55aa8, size 0x8, virtual false, abstract: false, final false
  static inline bool ClearConnectionError();

  /// @brief Method CloseAllSessions, addr 0x3a554c8, size 0x2e0, virtual false, abstract: false, final false
  static inline void CloseAllSessions();

  /// @brief Method CloseDefaultSession, addr 0x3a5540c, size 0xbc, virtual false, abstract: false, final false
  static inline bool CloseDefaultSession();

  /// @brief Method ConnectSessionSyncUsingThriftPipe, addr 0x3a55298, size 0xd4, virtual false, abstract: false, final false
  static inline bool ConnectSessionSyncUsingThriftPipe(::StringW pipeName, bool autoClose, float_t timeout, bool logError);

  /// @brief Method ConnectSessionSyncUsingThriftSocket, addr 0x3a551b4, size 0xe4, virtual false, abstract: false, final false
  static inline bool ConnectSessionSyncUsingThriftSocket(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError);

  /// @brief Method ConnectThriftPipeSession, addr 0x3a550a0, size 0xb4, virtual false, abstract: false, final false
  static inline bool ConnectThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout);

  /// @brief Method ConnectThriftSocketSession, addr 0x3a54fe4, size 0xbc, virtual false, abstract: false, final false
  static inline bool ConnectThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout);

  /// @brief Method CreateCustomSession, addr 0x3a54f60, size 0x84, virtual false, abstract: false, final false
  static inline bool CreateCustomSession();

  /// @brief Method CreateInProcessSession, addr 0x3a54d68, size 0x84, virtual false, abstract: false, final false
  static inline bool CreateInProcessSession();

  /// @brief Method CreateSessionFromType, addr 0x3a54304, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionFromType(::System::Type* type);

  /// @brief Method CreateSessionObject, addr 0x3a542a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* CreateSessionObject();

  /// @brief Method CreateThriftPipeSession, addr 0x3a54c40, size 0xb4, virtual false, abstract: false, final false
  static inline bool CreateThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout, bool logError);

  /// @brief Method CreateThriftSocketSession, addr 0x3a54e9c, size 0xc4, virtual false, abstract: false, final false
  static inline bool CreateThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError);

  /// @brief Method GetComposedChildNodeList, addr 0x3a4be88, size 0xf8, virtual false, abstract: false, final false
  static inline bool GetComposedChildNodeList(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive,
                                              ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> childNodeIDs);

  /// @brief Method GetComposedObjectListMemorySafe, addr 0x3a56810, size 0xb4, virtual false, abstract: false, final false
  static inline bool GetComposedObjectListMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID,
                                                     ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo, ::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>> objectInfos, int32_t start,
                                                     int32_t length);

  /// @brief Method GetComposedObjectTransformsMemorySafe, addr 0x3a568c4, size 0xc4, virtual false, abstract: false, final false
  static inline bool GetComposedObjectTransformsMemorySafe(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder,
                                                           ::ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>> transforms, int32_t start,
                                                           int32_t length);

  /// @brief Method GetConnectionError, addr 0x3a535c0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetConnectionError(bool clear);

  /// @brief Method GetCurrentLicense, addr 0x3a560e0, size 0x9c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HAPI_License GetCurrentLicense(bool bLogError);

  /// @brief Method GetDefaultSession, addr 0x3a4ecb8, size 0x88, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetDefaultSession();

  /// @brief Method GetGroupMembership, addr 0x3a56508, size 0x13c, virtual false, abstract: false, final false
  static inline bool GetGroupMembership(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName,
                                        ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> membership, bool isInstanced);

  /// @brief Method GetGroupNames, addr 0x3a562f0, size 0x218, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetGroupNames(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t nodeID, int32_t partID, ::HoudiniEngineUnity::HAPI_GroupType groupType,
                                                                       bool isInstanced);

  /// @brief Method GetHoudiniPathOnMacOS, addr 0x3a55d04, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetHoudiniPathOnMacOS(::StringW houdiniPath);

  /// @brief Method GetLastSessionError, addr 0x3a54cf4, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetLastSessionError();

  /// @brief Method GetNodeInputName, addr 0x3a5672c, size 0xe4, virtual false, abstract: false, final false
  static inline bool GetNodeInputName(int32_t nodeID, int32_t inputIndex, ::ByRef<::StringW> inputName);

  /// @brief Method GetNodeName, addr 0x3a56644, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetNodeName(int32_t nodeID, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetOrCreateDefaultSession, addr 0x3a4ea20, size 0x298, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetOrCreateDefaultSession(bool bNotifyUserError);

  /// @brief Method GetSessionData, addr 0x3a557a8, size 0x58, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionData* GetSessionData();

  /// @brief Method GetSessionInfo, addr 0x3a55800, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW GetSessionInfo();

  /// @brief Method GetSessionWithID, addr 0x3a545e8, size 0x98, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_SessionBase* GetSessionWithID(int64_t sessionID);

  /// @brief Method GetString, addr 0x3a4bda0, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetString(int32_t stringHandle, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetStringValuesFromStringIndices, addr 0x3a5617c, size 0x174, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetStringValuesFromStringIndices(::ArrayW<int32_t, ::Array<int32_t>*> strIndices);

  /// @brief Method GetUniqueMaterialShopName, addr 0x3a52d88, size 0x208, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueMaterialShopName(int32_t assetID, int32_t materialID);

  /// @brief Method InitializeDefaultSession, addr 0x3a5536c, size 0xa0, virtual false, abstract: false, final false
  static inline bool InitializeDefaultSession();

  /// @brief Method InternalValidateSceneAssets, addr 0x3a54aec, size 0x154, virtual false, abstract: false, final false
  static inline void InternalValidateSceneAssets();

  /// @brief Method IsHARSProcessRunning, addr 0x3a55ab0, size 0x94, virtual false, abstract: false, final false
  static inline bool IsHARSProcessRunning(int32_t processID);

  /// @brief Method LoadAllSessionData, addr 0x3a54680, size 0x46c, virtual false, abstract: false, final false
  static inline void LoadAllSessionData();

  /// @brief Method LoadSessionFromHIP, addr 0x3a55b44, size 0xe0, virtual false, abstract: false, final false
  static inline bool LoadSessionFromHIP(bool bCookNodes, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method LoadStoredDefaultSession, addr 0x3a54360, size 0xa4, virtual false, abstract: false, final false
  static inline bool LoadStoredDefaultSession();

  /// @brief Method OpenHoudini, addr 0x3a55d08, size 0x9c, virtual false, abstract: false, final false
  static inline bool OpenHoudini(::StringW args);

  /// @brief Method OpenSessionInHoudini, addr 0x3a55da4, size 0x33c, virtual false, abstract: false, final false
  static inline bool OpenSessionInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method RecreateDefaultSessionData, addr 0x3a55154, size 0x60, virtual false, abstract: false, final false
  static inline void RecreateDefaultSessionData();

  /// @brief Method RegisterSession, addr 0x3a54404, size 0x94, virtual false, abstract: false, final false
  static inline void RegisterSession(int64_t sessionID, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method RestartSession, addr 0x3a55884, size 0x134, virtual false, abstract: false, final false
  static inline bool RestartSession();

  /// @brief Method SaveAllSessionData, addr 0x3a54498, size 0xcc, virtual false, abstract: false, final false
  static inline void SaveAllSessionData();

  /// @brief Method SaveSessionToHIP, addr 0x3a55c24, size 0xe0, virtual false, abstract: false, final false
  static inline bool SaveSessionToHIP(bool bLockNodes, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UnregisterSession, addr 0x3a54564, size 0x84, virtual false, abstract: false, final false
  static inline void UnregisterSession(int64_t sessionID);

  /// @brief Method ValidatePluginSession, addr 0x3a559b8, size 0x80, virtual false, abstract: false, final false
  static inline bool ValidatePluginSession(::HoudiniEngineUnity::HEU_SessionBase* session);

  static inline ::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate* getStaticF__createSessionFromTypeDelegate();

  static inline ::HoudiniEngineUnity::HEU_SessionBase* getStaticF__defaultSession();

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* getStaticF__sessionMap();

  static inline void setStaticF__createSessionFromTypeDelegate(::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate* value);

  static inline void setStaticF__defaultSession(::HoudiniEngineUnity::HEU_SessionBase* value);

  static inline void setStaticF__sessionMap(::System::Collections::Generic::Dictionary_2<int64_t, ::HoudiniEngineUnity::HEU_SessionBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SessionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SessionManager(HEU_SessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SessionManager(HEU_SessionManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11774 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionManager, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionManager*, "HoudiniEngineUnity", "HEU_SessionManager");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionManager_CreateSessionFromTypeDelegate*, "HoudiniEngineUnity", "HEU_SessionManager/CreateSessionFromTypeDelegate");
