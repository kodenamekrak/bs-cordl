#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InfCodes)
namespace Org::BouncyCastle::Utilities::Zlib {
class InfBlocks;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class InfCodes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::InfCodes);
// Type: Org.BouncyCastle.Utilities.Zlib::InfCodes
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1821))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::InfCodes*
class CORDL_TYPE InfCodes : public ::System::Object {
public:
  // Declarations
  /// @brief Field mode, offset 0x10, size 0x4
  __declspec(property(get = __get_mode, put = __set_mode)) int32_t mode;

  /// @brief Field len, offset 0x14, size 0x4
  __declspec(property(get = __get_len, put = __set_len)) int32_t len;

  /// @brief Field tree, offset 0x18, size 0x8
  __declspec(property(get = __get_tree, put = __set_tree))::ArrayW<int32_t, ::Array<int32_t>*> tree;

  /// @brief Field tree_index, offset 0x20, size 0x4
  __declspec(property(get = __get_tree_index, put = __set_tree_index)) int32_t tree_index;

  /// @brief Field need, offset 0x24, size 0x4
  __declspec(property(get = __get_need, put = __set_need)) int32_t need;

  /// @brief Field lit, offset 0x28, size 0x4
  __declspec(property(get = __get_lit, put = __set_lit)) int32_t lit;

  /// @brief Field get, offset 0x2c, size 0x4
  __declspec(property(get = __get_get, put = __set_get)) int32_t get;

  /// @brief Field dist, offset 0x30, size 0x4
  __declspec(property(get = __get_dist, put = __set_dist)) int32_t dist;

  /// @brief Field lbits, offset 0x34, size 0x1
  __declspec(property(get = __get_lbits, put = __set_lbits)) uint8_t lbits;

  /// @brief Field dbits, offset 0x35, size 0x1
  __declspec(property(get = __get_dbits, put = __set_dbits)) uint8_t dbits;

  /// @brief Field ltree, offset 0x38, size 0x8
  __declspec(property(get = __get_ltree, put = __set_ltree))::ArrayW<int32_t, ::Array<int32_t>*> ltree;

  /// @brief Field ltree_index, offset 0x40, size 0x4
  __declspec(property(get = __get_ltree_index, put = __set_ltree_index)) int32_t ltree_index;

  /// @brief Field dtree, offset 0x48, size 0x8
  __declspec(property(get = __get_dtree, put = __set_dtree))::ArrayW<int32_t, ::Array<int32_t>*> dtree;

  /// @brief Field dtree_index, offset 0x50, size 0x4
  __declspec(property(get = __get_dtree_index, put = __set_dtree_index)) int32_t dtree_index;

  /// @brief Field inflate_mask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inflate_mask, put = setStaticF_inflate_mask))::ArrayW<int32_t, ::Array<int32_t>*> inflate_mask;

  constexpr int32_t& __get_mode();

  constexpr int32_t const& __get_mode() const;

  constexpr void __set_mode(int32_t value);

  constexpr int32_t& __get_len();

  constexpr int32_t const& __get_len() const;

  constexpr void __set_len(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_tree();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_tree() const;

  constexpr void __set_tree(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_tree_index();

  constexpr int32_t const& __get_tree_index() const;

  constexpr void __set_tree_index(int32_t value);

  constexpr int32_t& __get_need();

  constexpr int32_t const& __get_need() const;

  constexpr void __set_need(int32_t value);

  constexpr int32_t& __get_lit();

  constexpr int32_t const& __get_lit() const;

  constexpr void __set_lit(int32_t value);

  constexpr int32_t& __get_get();

  constexpr int32_t const& __get_get() const;

  constexpr void __set_get(int32_t value);

  constexpr int32_t& __get_dist();

  constexpr int32_t const& __get_dist() const;

  constexpr void __set_dist(int32_t value);

  constexpr uint8_t& __get_lbits();

  constexpr uint8_t const& __get_lbits() const;

  constexpr void __set_lbits(uint8_t value);

  constexpr uint8_t& __get_dbits();

  constexpr uint8_t const& __get_dbits() const;

  constexpr void __set_dbits(uint8_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_ltree();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_ltree() const;

  constexpr void __set_ltree(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_ltree_index();

  constexpr int32_t const& __get_ltree_index() const;

  constexpr void __set_ltree_index(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_dtree();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_dtree() const;

  constexpr void __set_dtree(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_dtree_index();

  constexpr int32_t const& __get_dtree_index() const;

  constexpr void __set_dtree_index(int32_t value);

  static inline void setStaticF_inflate_mask(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_inflate_mask();

  static inline ::Org::BouncyCastle::Utilities::Zlib::InfCodes* New_ctor();

  /// @brief Method .ctor addr 0x116469c size 0xc virtual false final false
  inline void _ctor();

  /// @brief Method init addr 0x1165a8c size 0x24 virtual false final false
  inline void init(int32_t bl, int32_t bd, ::ArrayW<int32_t, ::Array<int32_t>*> tl, int32_t tl_index, ::ArrayW<int32_t, ::Array<int32_t>*> td, int32_t td_index,
                   ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method proc addr 0x1165e10 size 0x9cc virtual false final false
  inline int32_t proc(::Org::BouncyCastle::Utilities::Zlib::InfBlocks* s, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t r);

  /// @brief Method free addr 0x116474c size 0x4 virtual false final false
  inline void free(::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method inflate_fast addr 0x1166918 size 0x860 virtual false final false
  inline int32_t inflate_fast(int32_t bl, int32_t bd, ::ArrayW<int32_t, ::Array<int32_t>*> tl, int32_t tl_index, ::ArrayW<int32_t, ::Array<int32_t>*> td, int32_t td_index,
                              ::Org::BouncyCastle::Utilities::Zlib::InfBlocks* s, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  // Ctor Parameters [CppParam { name: "", ty: "InfCodes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfCodes(InfCodes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfCodes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfCodes(InfCodes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfCodes();

public:
  /// @brief Field mode, offset: 0x10, size: 0x4, def value: None
  int32_t ___mode;

  /// @brief Field len, offset: 0x14, size: 0x4, def value: None
  int32_t ___len;

  /// @brief Field tree, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___tree;

  /// @brief Field tree_index, offset: 0x20, size: 0x4, def value: None
  int32_t ___tree_index;

  /// @brief Field need, offset: 0x24, size: 0x4, def value: None
  int32_t ___need;

  /// @brief Field lit, offset: 0x28, size: 0x4, def value: None
  int32_t ___lit;

  /// @brief Field get, offset: 0x2c, size: 0x4, def value: None
  int32_t ___get;

  /// @brief Field dist, offset: 0x30, size: 0x4, def value: None
  int32_t ___dist;

  /// @brief Field lbits, offset: 0x34, size: 0x1, def value: None
  uint8_t ___lbits;

  /// @brief Field dbits, offset: 0x35, size: 0x1, def value: None
  uint8_t ___dbits;

  /// @brief Field ltree, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___ltree;

  /// @brief Field ltree_index, offset: 0x40, size: 0x4, def value: None
  int32_t ___ltree_index;

  /// @brief Field dtree, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___dtree;

  /// @brief Field dtree_index, offset: 0x50, size: 0x4, def value: None
  int32_t ___dtree_index;

  /// @brief Field Z_OK offset 0xffffffff size 0x4
  static constexpr int32_t Z_OK{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_STREAM_END offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_END{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_NEED_DICT offset 0xffffffff size 0x4
  static constexpr int32_t Z_NEED_DICT{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_ERRNO offset 0xffffffff size 0x4
  static constexpr int32_t Z_ERRNO{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field Z_STREAM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_ERROR{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field Z_DATA_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_DATA_ERROR{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field Z_MEM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_MEM_ERROR{ static_cast<int32_t>(0xfffffffc) };

  /// @brief Field Z_BUF_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_BUF_ERROR{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field Z_VERSION_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_VERSION_ERROR{ static_cast<int32_t>(0xfffffffa) };

  /// @brief Field START offset 0xffffffff size 0x4
  static constexpr int32_t START{ static_cast<int32_t>(0x0) };

  /// @brief Field LEN offset 0xffffffff size 0x4
  static constexpr int32_t LEN{ static_cast<int32_t>(0x1) };

  /// @brief Field LENEXT offset 0xffffffff size 0x4
  static constexpr int32_t LENEXT{ static_cast<int32_t>(0x2) };

  /// @brief Field DIST offset 0xffffffff size 0x4
  static constexpr int32_t DIST{ static_cast<int32_t>(0x3) };

  /// @brief Field DISTEXT offset 0xffffffff size 0x4
  static constexpr int32_t DISTEXT{ static_cast<int32_t>(0x4) };

  /// @brief Field COPY offset 0xffffffff size 0x4
  static constexpr int32_t COPY{ static_cast<int32_t>(0x5) };

  /// @brief Field LIT offset 0xffffffff size 0x4
  static constexpr int32_t LIT{ static_cast<int32_t>(0x6) };

  /// @brief Field WASH offset 0xffffffff size 0x4
  static constexpr int32_t WASH{ static_cast<int32_t>(0x7) };

  /// @brief Field END offset 0xffffffff size 0x4
  static constexpr int32_t END{ static_cast<int32_t>(0x8) };

  /// @brief Field BADCODE offset 0xffffffff size 0x4
  static constexpr int32_t BADCODE{ static_cast<int32_t>(0x9) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::InfCodes, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::InfCodes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::InfCodes*, "Org.BouncyCastle.Utilities.Zlib", "InfCodes");