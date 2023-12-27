#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDSupport)
namespace UnityEngine::InputSystem::HID {
struct __HIDSupport__HIDPageUsage;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__UsagePage;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__GenericDesktop;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
class HIDSupport;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDSupport__HIDPageUsage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HIDSupport);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage);
// Type: ::HIDPageUsage
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6411))
// CS Name: ::HIDSupport::HIDPageUsage
struct CORDL_TYPE __HIDSupport__HIDPageUsage {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2adb08c size 0x8 virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::HID::__HID__UsagePage page, int32_t usage);

  /// @brief Method .ctor addr 0x2ae0178 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::HID::__HID__GenericDesktop usage);

  // Ctor Parameters [CppParam { name: "page", ty: "::UnityEngine::InputSystem::HID::__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr __HIDSupport__HIDPageUsage(::UnityEngine::InputSystem::HID::__HID__UsagePage page, int32_t usage) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HIDSupport__HIDPageUsage();

  /// @brief Field page, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__UsagePage page;

  /// @brief Field usage, offset: 0x4, size: 0x4, def value: None
  int32_t usage;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: UnityEngine.InputSystem.HID::HIDSupport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6412))
// CS Name: ::UnityEngine.InputSystem.HID::HIDSupport*
class CORDL_TYPE HIDSupport : public ::System::Object {
public:
  // Declarations
  using HIDPageUsage = ::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage;

  /// @brief Field s_SupportedHIDUsages, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SupportedHIDUsages,
                             put = setStaticF_s_SupportedHIDUsages))::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage,
                                                                             ::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*> s_SupportedHIDUsages;

  static inline void
  setStaticF_s_SupportedHIDUsages(::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*> value);

  static inline ::ArrayW<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage, ::Array<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage>*> getStaticF_s_SupportedHIDUsages();

  /// @brief Method get_supportedHIDUsages addr 0x2adb02c size 0x60 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage> get_supportedHIDUsages();

  /// @brief Method set_supportedHIDUsages addr 0x2adfe08 size 0x224 virtual false final false
  static inline void set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage> value);

  /// @brief Method Initialize addr 0x2ae002c size 0x14c virtual false final false
  static inline void Initialize();

  // Ctor Parameters [CppParam { name: "", ty: "HIDSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HIDSupport(HIDSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HIDSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HIDSupport(HIDSupport const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDSupport();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDSupport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HIDSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDSupport*, "UnityEngine.InputSystem.HID", "HIDSupport");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HIDSupport__HIDPageUsage, "UnityEngine.InputSystem.HID", "HIDSupport/HIDPageUsage");