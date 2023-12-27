#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpTransferUpdate)
// Forward declare root types
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::HttpTransferUpdate);
// Type: Oculus.Platform.Models::HttpTransferUpdate
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13436))
// CS Name: ::Oculus.Platform.Models::HttpTransferUpdate*
class CORDL_TYPE HttpTransferUpdate : public ::System::Object {
public:
  // Declarations
  /// @brief Field ID, offset 0x10, size 0x8
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field Payload, offset 0x18, size 0x8
  __declspec(property(get = __get_Payload, put = __set_Payload))::ArrayW<uint8_t, ::Array<uint8_t>*> Payload;

  /// @brief Field IsCompleted, offset 0x20, size 0x1
  __declspec(property(get = __get_IsCompleted, put = __set_IsCompleted)) bool IsCompleted;

  constexpr uint64_t& __get__cordl_ID();

  constexpr uint64_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(uint64_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Payload();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Payload() const;

  constexpr void __set_Payload(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_IsCompleted();

  constexpr bool const& __get_IsCompleted() const;

  constexpr void __set_IsCompleted(bool value);

  static inline ::Oculus::Platform::Models::HttpTransferUpdate* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2705f3c size 0x158 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "HttpTransferUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpTransferUpdate(HttpTransferUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpTransferUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpTransferUpdate(HttpTransferUpdate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpTransferUpdate();

public:
  /// @brief Field ID, offset: 0x10, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field Payload, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Payload;

  /// @brief Field IsCompleted, offset: 0x20, size: 0x1, def value: None
  bool ___IsCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::HttpTransferUpdate, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::HttpTransferUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::HttpTransferUpdate*, "Oculus.Platform.Models", "HttpTransferUpdate");