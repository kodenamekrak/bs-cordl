#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithProductList)
namespace Oculus::Platform::Models {
class ProductList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithProductList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithProductList);
// Type: Oculus.Platform::MessageWithProductList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13474)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4606 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13262))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13317)) CS Name: ::Oculus.Platform::MessageWithProductList*
class CORDL_TYPE MessageWithProductList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ProductList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithProductList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26ef660 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetProductList addr 0x26f3528 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::ProductList* GetProductList();

  /// @brief Method GetDataFromMessage addr 0x26f3564 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::ProductList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithProductList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithProductList(MessageWithProductList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithProductList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithProductList(MessageWithProductList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithProductList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithProductList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithProductList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithProductList*, "Oculus.Platform", "MessageWithProductList");