#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItemExecutionOrderConstants_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItemExecutionOrderConstants._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataItemExecutionOrderConstants::*)()>(
    &::GlobalNamespace::BeatmapDataItemExecutionOrderConstants::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdfe048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapDataItemExecutionOrderConstants* GlobalNamespace::BeatmapDataItemExecutionOrderConstants::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*>());
}
inline void GlobalNamespace::BeatmapDataItemExecutionOrderConstants::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItemExecutionOrderConstants*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataItemExecutionOrderConstants::BeatmapDataItemExecutionOrderConstants() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif