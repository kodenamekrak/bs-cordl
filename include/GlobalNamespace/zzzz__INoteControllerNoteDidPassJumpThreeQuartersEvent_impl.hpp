#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerNoteDidPassJumpThreeQuartersEvent.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidPassJumpThreeQuartersEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent.HandleNoteControllerNoteDidPassJumpThreeQuarters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::*)(
    ::GlobalNamespace::NoteControllerBase*)>(&::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::HandleNoteControllerNoteDidPassJumpThreeQuarters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
