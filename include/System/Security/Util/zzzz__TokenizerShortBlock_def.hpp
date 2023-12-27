#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TokenizerShortBlock)
// Forward declare root types
namespace System::Security::Util {
class TokenizerShortBlock;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Util::TokenizerShortBlock);
// Type: System.Security.Util::TokenizerShortBlock
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2897))
// CS Name: ::System.Security.Util::TokenizerShortBlock*
class CORDL_TYPE TokenizerShortBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_block, offset 0x10, size 0x8
  __declspec(property(get = __get_m_block, put = __set_m_block))::ArrayW<int16_t, ::Array<int16_t>*> m_block;

  /// @brief Field m_next, offset 0x18, size 0x8
  __declspec(property(get = __get_m_next, put = __set_m_next))::System::Security::Util::TokenizerShortBlock* m_next;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_m_block();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_m_block() const;

  constexpr void __set_m_block(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::System::Security::Util::TokenizerShortBlock*& __get_m_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerShortBlock*> const& __get_m_next() const;

  constexpr void __set_m_next(::System::Security::Util::TokenizerShortBlock* value);

  static inline ::System::Security::Util::TokenizerShortBlock* New_ctor();

  /// @brief Method .ctor addr 0x24564fc size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TokenizerShortBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TokenizerShortBlock(TokenizerShortBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TokenizerShortBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TokenizerShortBlock(TokenizerShortBlock const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenizerShortBlock();

public:
  /// @brief Field m_block, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___m_block;

  /// @brief Field m_next, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Util::TokenizerShortBlock* ___m_next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Util::TokenizerShortBlock, 0x20>, "Size mismatch!");

} // namespace System::Security::Util
NEED_NO_BOX(::System::Security::Util::TokenizerShortBlock);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::TokenizerShortBlock*, "System.Security.Util", "TokenizerShortBlock");