#pragma once
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatmapLevelPackCollection.get_beatmapLevelPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> (
    ::GlobalNamespace::IBeatmapLevelPackCollection::*)()>(&::GlobalNamespace::IBeatmapLevelPackCollection::get_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLevelPackCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLevelPackCollection*>::get(), 0));
    return ___internal_method;
  }
};
inline ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> GlobalNamespace::IBeatmapLevelPackCollection::get_beatmapLevelPacks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLevelPackCollection*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif