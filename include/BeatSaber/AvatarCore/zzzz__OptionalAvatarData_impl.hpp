#pragma once
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::AvatarCore::OptionalAvatarData::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(
    &::BeatSaber::AvatarCore::OptionalAvatarData::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe10c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarData>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
constexpr BeatSaber::AvatarCore::OptionalAvatarData::operator ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*() {
  return static_cast<::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline bool BeatSaber::AvatarCore::OptionalAvatarData::Equals(::BeatSaber::AvatarCore::OptionalAvatarData other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::OptionalAvatarData>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "dataType", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData::OptionalAvatarData(uint32_t dataType, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept {
  this->dataType = dataType;
  this->length = length;
  this->data = data;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::OptionalAvatarData::OptionalAvatarData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif