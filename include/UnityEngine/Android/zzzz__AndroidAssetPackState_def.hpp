#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidAssetPackState)
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidAssetPackState);
// Type: UnityEngine.Android::AndroidAssetPackState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14921)), TypeDefinitionIndex(TypeDefinitionIndex(14920)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14923))
// CS Name: ::UnityEngine.Android::AndroidAssetPackState*
class CORDL_TYPE AndroidAssetPackState : public ::System::Object {
public:
  // Declarations
  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__name_k__BackingField, put = __set__name_k__BackingField))::StringW _name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__status_k__BackingField, put = __set__status_k__BackingField))::UnityEngine::Android::AndroidAssetPackStatus _status_k__BackingField;

  /// @brief Field <error>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__error_k__BackingField, put = __set__error_k__BackingField))::UnityEngine::Android::AndroidAssetPackError _error_k__BackingField;

  constexpr ::StringW& __get__name_k__BackingField();

  constexpr ::StringW const& __get__name_k__BackingField() const;

  constexpr void __set__name_k__BackingField(::StringW value);

  constexpr ::UnityEngine::Android::AndroidAssetPackStatus& __get__status_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidAssetPackStatus const& __get__status_k__BackingField() const;

  constexpr void __set__status_k__BackingField(::UnityEngine::Android::AndroidAssetPackStatus value);

  constexpr ::UnityEngine::Android::AndroidAssetPackError& __get__error_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidAssetPackError const& __get__error_k__BackingField() const;

  constexpr void __set__error_k__BackingField(::UnityEngine::Android::AndroidAssetPackError value);

  static inline ::UnityEngine::Android::AndroidAssetPackState* New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, ::UnityEngine::Android::AndroidAssetPackError error);

  /// @brief Method .ctor addr 0x2c8cbc8 size 0x3c virtual false final false
  inline void _ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, ::UnityEngine::Android::AndroidAssetPackError error);

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAssetPackState(AndroidAssetPackState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAssetPackState(AndroidAssetPackState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPackState();

public:
  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <status>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidAssetPackStatus ____status_k__BackingField;

  /// @brief Field <error>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidAssetPackError ____error_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPackState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackState*, "UnityEngine.Android", "AndroidAssetPackState");