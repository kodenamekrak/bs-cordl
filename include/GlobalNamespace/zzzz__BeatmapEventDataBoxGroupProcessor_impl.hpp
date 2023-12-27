#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor.get_dirtyBoxGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* (
    ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::get_dirtyBoxGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233a468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(),
                                                                               "get_dirtyBoxGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ProcessInsertedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessInsertedData)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x233a470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(), "ProcessInsertedData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ProcessBeforeDeleteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)(
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*)>(&::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessBeforeDeleteData)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x233aa6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(), "ProcessBeforeDeleteData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ClearDirtyData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ClearDirtyData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2339c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(),
                                                                               "ClearDirtyData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(
    &::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23397f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
constexpr GlobalNamespace::BeatmapEventDataBoxGroupProcessor::operator ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*() noexcept {
  return static_cast<::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*& GlobalNamespace::BeatmapEventDataBoxGroupProcessor::__get__dirtyBoxGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dirtyBoxGroups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*> const&
GlobalNamespace::BeatmapEventDataBoxGroupProcessor::__get__dirtyBoxGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dirtyBoxGroups;
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::__set__dirtyBoxGroups(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dirtyBoxGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* GlobalNamespace::BeatmapEventDataBoxGroupProcessor::get_dirtyBoxGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(),
                                                                             "get_dirtyBoxGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* insertedNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(), "ProcessInsertedData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, insertedNode);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(), "ProcessBeforeDeleteData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeToDelete);
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ClearDirtyData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(),
                                                                             "ClearDirtyData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* GlobalNamespace::BeatmapEventDataBoxGroupProcessor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>());
}
inline void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor::BeatmapEventDataBoxGroupProcessor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif