#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LeaderboardPlayerInfo)
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardPlayerInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardPlayerInfo);
// Type: ::LeaderboardPlayerInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4203))
// CS Name: ::LeaderboardPlayerInfo*
class CORDL_TYPE LeaderboardPlayerInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field serverKey, offset 0x10, size 0x8
  __declspec(property(get = __get_serverKey, put = __set_serverKey))::StringW serverKey;

  /// @brief Field <playerId>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__playerId_k__BackingField, put = __set__playerId_k__BackingField))::StringW _playerId_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__playerName_k__BackingField, put = __set__playerName_k__BackingField))::StringW _playerName_k__BackingField;

  /// @brief Field <playerKey>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__playerKey_k__BackingField, put = __set__playerKey_k__BackingField))::StringW _playerKey_k__BackingField;

  /// @brief Field <authType>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__authType_k__BackingField, put = __set__authType_k__BackingField))::StringW _authType_k__BackingField;

  /// @brief Field <playerFriends>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__playerFriends_k__BackingField, put = __set__playerFriends_k__BackingField))::StringW _playerFriends_k__BackingField;

  /// @brief Field <succeeded>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __get__succeeded_k__BackingField, put = __set__succeeded_k__BackingField)) bool _succeeded_k__BackingField;

  __declspec(property(get = get_playerId, put = set_playerId))::StringW playerId;

  __declspec(property(get = get_playerName, put = set_playerName))::StringW playerName;

  __declspec(property(get = get_playerKey, put = set_playerKey))::StringW playerKey;

  __declspec(property(get = get_authType, put = set_authType))::StringW authType;

  __declspec(property(get = get_playerFriends, put = set_playerFriends))::StringW playerFriends;

  __declspec(property(get = get_succeeded, put = set_succeeded)) bool succeeded;

  constexpr ::StringW& __get_serverKey();

  constexpr ::StringW const& __get_serverKey() const;

  constexpr void __set_serverKey(::StringW value);

  constexpr ::StringW& __get__playerId_k__BackingField();

  constexpr ::StringW const& __get__playerId_k__BackingField() const;

  constexpr void __set__playerId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__playerName_k__BackingField();

  constexpr ::StringW const& __get__playerName_k__BackingField() const;

  constexpr void __set__playerName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__playerKey_k__BackingField();

  constexpr ::StringW const& __get__playerKey_k__BackingField() const;

  constexpr void __set__playerKey_k__BackingField(::StringW value);

  constexpr ::StringW& __get__authType_k__BackingField();

  constexpr ::StringW const& __get__authType_k__BackingField() const;

  constexpr void __set__authType_k__BackingField(::StringW value);

  constexpr ::StringW& __get__playerFriends_k__BackingField();

  constexpr ::StringW const& __get__playerFriends_k__BackingField() const;

  constexpr void __set__playerFriends_k__BackingField(::StringW value);

  constexpr bool& __get__succeeded_k__BackingField();

  constexpr bool const& __get__succeeded_k__BackingField() const;

  constexpr void __set__succeeded_k__BackingField(bool value);

  /// @brief Method get_playerId addr 0x2327408 size 0x8 virtual false final false
  inline ::StringW get_playerId();

  /// @brief Method set_playerId addr 0x2327410 size 0x8 virtual false final false
  inline void set_playerId(::StringW value);

  /// @brief Method get_playerName addr 0x2327418 size 0x8 virtual false final false
  inline ::StringW get_playerName();

  /// @brief Method set_playerName addr 0x2327420 size 0x8 virtual false final false
  inline void set_playerName(::StringW value);

  /// @brief Method get_playerKey addr 0x2327428 size 0x8 virtual false final false
  inline ::StringW get_playerKey();

  /// @brief Method set_playerKey addr 0x2327430 size 0x8 virtual false final false
  inline void set_playerKey(::StringW value);

  /// @brief Method get_authType addr 0x2327438 size 0x8 virtual false final false
  inline ::StringW get_authType();

  /// @brief Method set_authType addr 0x2327440 size 0x8 virtual false final false
  inline void set_authType(::StringW value);

  /// @brief Method get_playerFriends addr 0x2327448 size 0x8 virtual false final false
  inline ::StringW get_playerFriends();

  /// @brief Method set_playerFriends addr 0x2327450 size 0x8 virtual false final false
  inline void set_playerFriends(::StringW value);

  /// @brief Method get_succeeded addr 0x2327458 size 0x8 virtual false final false
  inline bool get_succeeded();

  /// @brief Method set_succeeded addr 0x2327460 size 0xc virtual false final false
  inline void set_succeeded(bool value);

  static inline ::GlobalNamespace::LeaderboardPlayerInfo* New_ctor(bool succeeded, ::StringW playerId, ::StringW playerName, ::StringW playerKey, ::StringW authType, ::StringW playerFriends);

  /// @brief Method .ctor addr 0x232746c size 0x5c virtual false final false
  inline void _ctor(bool succeeded, ::StringW playerId, ::StringW playerName, ::StringW playerKey, ::StringW authType, ::StringW playerFriends);

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardPlayerInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardPlayerInfo(LeaderboardPlayerInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardPlayerInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardPlayerInfo(LeaderboardPlayerInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardPlayerInfo();

public:
  /// @brief Field serverKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serverKey;

  /// @brief Field <playerId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____playerId_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____playerName_k__BackingField;

  /// @brief Field <playerKey>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____playerKey_k__BackingField;

  /// @brief Field <authType>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____authType_k__BackingField;

  /// @brief Field <playerFriends>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____playerFriends_k__BackingField;

  /// @brief Field <succeeded>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____succeeded_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardPlayerInfo, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardPlayerInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardPlayerInfo*, "", "LeaderboardPlayerInfo");