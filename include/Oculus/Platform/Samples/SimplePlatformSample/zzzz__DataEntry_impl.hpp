#pragma once
// IWYU pragma private; include "Oculus/Platform/Samples/SimplePlatformSample/DataEntry.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Platform/Samples/SimplePlatformSample/zzzz__DataEntry_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementDefinitionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)()>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3fa1a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)()>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::Update)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3fa1b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.SubmitCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::SubmitCommand)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x3fa1c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "SubmitCommand",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getLeaderboardEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getLeaderboardEntries)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3fa2a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getLeaderboardEntries",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.writeLeaderboardEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW, ::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::writeLeaderboardEntry)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3fa28f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "writeLeaderboardEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.addFieldsAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW, ::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::addFieldsAchievement)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3fa2828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "addFieldsAchievement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.addCountAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW, ::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::addCountAchievement)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3fa2738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "addCountAchievement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.unlockAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::unlockAchievement)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3fa2680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "unlockAchievement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getAchievementProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getAchievementProgress)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3fa2598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getAchievementProgress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getAchievementDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getAchievementDefinition)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3fa24b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getAchievementDefinition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.checkEntitlement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)()>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::checkEntitlement)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3fa1aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "checkEntitlement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getUserNonce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)()>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getUserNonce)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3fa23e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getUserNonce",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getLoggedInUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)()>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getLoggedInUser)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3fa212c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getLoggedInUser",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getUser)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3fa21fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getUser",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getLoggedInFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)()>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getLoggedInFriends)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3fa2310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getLoggedInFriends",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.printOutputLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::StringW)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::printOutputLine)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3fa2af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "printOutputLine",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.outputUserArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::Oculus::Platform::Models::UserList*)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::outputUserArray)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x3fa2ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "outputUserArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::UserList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.userProofCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*)>(&::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::userProofCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3fa2f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "userProofCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getEntitlementCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getEntitlementCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3fa3060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getEntitlementCallback",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.leaderboardGetCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*)>(&::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::leaderboardGetCallback)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x3fa30e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "leaderboardGetCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.leaderboardWriteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::leaderboardWriteCallback)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3fa35e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "leaderboardWriteCallback",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.achievementFieldsCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementFieldsCallback)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3fa3738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementFieldsCallback",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.achievementCountCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementCountCallback)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3fa37fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementCountCallback",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.achievementUnlockCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementUnlockCallback)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3fa38c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementUnlockCallback",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.achievementProgressCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*)>(&::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementProgressCallback)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x3fa3984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementProgressCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.achievementDefinitionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*>*)>(&::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementDefinitionCallback)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x3fa3dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementDefinitionCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getUserCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getUserCallback)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3fa42b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getUserCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry.getFriendsCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*)>(&::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getFriendsCallback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3fa4470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getFriendsCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::*)()>(
    &::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fa4558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Oculus::Platform::Samples::SimplePlatformSample::DataEntry::__cordl_internal_get_dataOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataOutput;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Oculus::Platform::Samples::SimplePlatformSample::DataEntry::__cordl_internal_get_dataOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataOutput;
}
constexpr void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::__cordl_internal_set_dataOutput(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dataOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::SubmitCommand(::StringW command) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "SubmitCommand",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, command);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getLeaderboardEntries(::StringW leaderboardName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getLeaderboardEntries",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardName);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::writeLeaderboardEntry(::StringW leaderboardName, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "writeLeaderboardEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardName, value);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::addFieldsAchievement(::StringW achievementName, ::StringW fields) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "addFieldsAchievement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, achievementName, fields);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::addCountAchievement(::StringW achievementName, ::StringW count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "addCountAchievement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, achievementName, count);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::unlockAchievement(::StringW achievementName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "unlockAchievement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, achievementName);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getAchievementProgress(::StringW achievementName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getAchievementProgress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, achievementName);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getAchievementDefinition(::StringW achievementName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getAchievementDefinition",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, achievementName);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::checkEntitlement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "checkEntitlement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getUserNonce() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getUserNonce",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getLoggedInUser() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getLoggedInUser",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getUser(::StringW userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getUser",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userID);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getLoggedInFriends() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getLoggedInFriends",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::printOutputLine(::StringW newLine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "printOutputLine",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newLine);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::outputUserArray(::Oculus::Platform::Models::UserList* users) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "outputUserArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::UserList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, users);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::userProofCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "userProofCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getEntitlementCallback(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getEntitlementCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::leaderboardGetCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "leaderboardGetCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::leaderboardWriteCallback(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "leaderboardWriteCallback",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementFieldsCallback(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementFieldsCallback",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementCountCallback(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementCountCallback",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementUnlockCallback(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementUnlockCallback",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementProgressCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementProgressCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::achievementDefinitionCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "achievementDefinitionCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementDefinitionList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getUserCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getUserCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::getFriendsCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), "getFriendsCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void Oculus::Platform::Samples::SimplePlatformSample::DataEntry::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry* Oculus::Platform::Samples::SimplePlatformSample::DataEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Samples::SimplePlatformSample::DataEntry*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Samples::SimplePlatformSample::DataEntry::DataEntry() {}
