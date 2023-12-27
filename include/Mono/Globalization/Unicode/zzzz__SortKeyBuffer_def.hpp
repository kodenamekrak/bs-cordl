#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortKeyBuffer)
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class SortKey;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class SortKeyBuffer;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::SortKeyBuffer);
// Type: Mono.Globalization.Unicode::SortKeyBuffer
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 131, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3659))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2272))
// CS Name: ::Mono.Globalization.Unicode::SortKeyBuffer*
class CORDL_TYPE SortKeyBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field l1b, offset 0x10, size 0x8
  __declspec(property(get = __get_l1b, put = __set_l1b))::ArrayW<uint8_t, ::Array<uint8_t>*> l1b;

  /// @brief Field l2b, offset 0x18, size 0x8
  __declspec(property(get = __get_l2b, put = __set_l2b))::ArrayW<uint8_t, ::Array<uint8_t>*> l2b;

  /// @brief Field l3b, offset 0x20, size 0x8
  __declspec(property(get = __get_l3b, put = __set_l3b))::ArrayW<uint8_t, ::Array<uint8_t>*> l3b;

  /// @brief Field l4sb, offset 0x28, size 0x8
  __declspec(property(get = __get_l4sb, put = __set_l4sb))::ArrayW<uint8_t, ::Array<uint8_t>*> l4sb;

  /// @brief Field l4tb, offset 0x30, size 0x8
  __declspec(property(get = __get_l4tb, put = __set_l4tb))::ArrayW<uint8_t, ::Array<uint8_t>*> l4tb;

  /// @brief Field l4kb, offset 0x38, size 0x8
  __declspec(property(get = __get_l4kb, put = __set_l4kb))::ArrayW<uint8_t, ::Array<uint8_t>*> l4kb;

  /// @brief Field l4wb, offset 0x40, size 0x8
  __declspec(property(get = __get_l4wb, put = __set_l4wb))::ArrayW<uint8_t, ::Array<uint8_t>*> l4wb;

  /// @brief Field l5b, offset 0x48, size 0x8
  __declspec(property(get = __get_l5b, put = __set_l5b))::ArrayW<uint8_t, ::Array<uint8_t>*> l5b;

  /// @brief Field source, offset 0x50, size 0x8
  __declspec(property(get = __get_source, put = __set_source))::StringW source;

  /// @brief Field l1, offset 0x58, size 0x4
  __declspec(property(get = __get_l1, put = __set_l1)) int32_t l1;

  /// @brief Field l2, offset 0x5c, size 0x4
  __declspec(property(get = __get_l2, put = __set_l2)) int32_t l2;

  /// @brief Field l3, offset 0x60, size 0x4
  __declspec(property(get = __get_l3, put = __set_l3)) int32_t l3;

  /// @brief Field l4s, offset 0x64, size 0x4
  __declspec(property(get = __get_l4s, put = __set_l4s)) int32_t l4s;

  /// @brief Field l4t, offset 0x68, size 0x4
  __declspec(property(get = __get_l4t, put = __set_l4t)) int32_t l4t;

  /// @brief Field l4k, offset 0x6c, size 0x4
  __declspec(property(get = __get_l4k, put = __set_l4k)) int32_t l4k;

  /// @brief Field l4w, offset 0x70, size 0x4
  __declspec(property(get = __get_l4w, put = __set_l4w)) int32_t l4w;

  /// @brief Field l5, offset 0x74, size 0x4
  __declspec(property(get = __get_l5, put = __set_l5)) int32_t l5;

  /// @brief Field lcid, offset 0x78, size 0x4
  __declspec(property(get = __get_lcid, put = __set_lcid)) int32_t lcid;

  /// @brief Field options, offset 0x7c, size 0x4
  __declspec(property(get = __get_options, put = __set_options))::System::Globalization::CompareOptions options;

  /// @brief Field processLevel2, offset 0x80, size 0x1
  __declspec(property(get = __get_processLevel2, put = __set_processLevel2)) bool processLevel2;

  /// @brief Field frenchSort, offset 0x81, size 0x1
  __declspec(property(get = __get_frenchSort, put = __set_frenchSort)) bool frenchSort;

  /// @brief Field frenchSorted, offset 0x82, size 0x1
  __declspec(property(get = __get_frenchSorted, put = __set_frenchSorted)) bool frenchSorted;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_l1b();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_l1b() const;

  constexpr void __set_l1b(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_l2b();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_l2b() const;

  constexpr void __set_l2b(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_l3b();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_l3b() const;

  constexpr void __set_l3b(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_l4sb();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_l4sb() const;

  constexpr void __set_l4sb(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_l4tb();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_l4tb() const;

  constexpr void __set_l4tb(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_l4kb();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_l4kb() const;

  constexpr void __set_l4kb(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_l4wb();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_l4wb() const;

  constexpr void __set_l4wb(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_l5b();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_l5b() const;

  constexpr void __set_l5b(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get_source();

  constexpr ::StringW const& __get_source() const;

  constexpr void __set_source(::StringW value);

  constexpr int32_t& __get_l1();

  constexpr int32_t const& __get_l1() const;

  constexpr void __set_l1(int32_t value);

  constexpr int32_t& __get_l2();

  constexpr int32_t const& __get_l2() const;

  constexpr void __set_l2(int32_t value);

  constexpr int32_t& __get_l3();

  constexpr int32_t const& __get_l3() const;

  constexpr void __set_l3(int32_t value);

  constexpr int32_t& __get_l4s();

  constexpr int32_t const& __get_l4s() const;

  constexpr void __set_l4s(int32_t value);

  constexpr int32_t& __get_l4t();

  constexpr int32_t const& __get_l4t() const;

  constexpr void __set_l4t(int32_t value);

  constexpr int32_t& __get_l4k();

  constexpr int32_t const& __get_l4k() const;

  constexpr void __set_l4k(int32_t value);

  constexpr int32_t& __get_l4w();

  constexpr int32_t const& __get_l4w() const;

  constexpr void __set_l4w(int32_t value);

  constexpr int32_t& __get_l5();

  constexpr int32_t const& __get_l5() const;

  constexpr void __set_l5(int32_t value);

  constexpr int32_t& __get_lcid();

  constexpr int32_t const& __get_lcid() const;

  constexpr void __set_lcid(int32_t value);

  constexpr ::System::Globalization::CompareOptions& __get_options();

  constexpr ::System::Globalization::CompareOptions const& __get_options() const;

  constexpr void __set_options(::System::Globalization::CompareOptions value);

  constexpr bool& __get_processLevel2();

  constexpr bool const& __get_processLevel2() const;

  constexpr void __set_processLevel2(bool value);

  constexpr bool& __get_frenchSort();

  constexpr bool const& __get_frenchSort() const;

  constexpr void __set_frenchSort(bool value);

  constexpr bool& __get_frenchSorted();

  constexpr bool const& __get_frenchSorted() const;

  constexpr void __set_frenchSorted(bool value);

  static inline ::Mono::Globalization::Unicode::SortKeyBuffer* New_ctor(int32_t lcid);

  /// @brief Method .ctor addr 0x2418fb0 size 0x8 virtual false final false
  inline void _ctor(int32_t lcid);

  /// @brief Method Reset addr 0x241d30c size 0x14 virtual false final false
  inline void Reset();

  /// @brief Method Initialize addr 0x2418fb8 size 0x178 virtual false final false
  inline void Initialize(::System::Globalization::CompareOptions options, int32_t lcid, ::StringW s, bool frenchSort);

  /// @brief Method AppendCJKExtension addr 0x24199ec size 0x94 virtual false final false
  inline void AppendCJKExtension(uint8_t lv1msb, uint8_t lv1lsb);

  /// @brief Method AppendKana addr 0x2419b34 size 0x94 virtual false final false
  inline void AppendKana(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth);

  /// @brief Method AppendNormal addr 0x24198a8 size 0x144 virtual false final false
  inline void AppendNormal(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3);

  /// @brief Method AppendLevel5 addr 0x241d3e8 size 0x98 virtual false final false
  inline void AppendLevel5(uint8_t category, uint8_t lv1);

  /// @brief Method AppendBufferPrimitive addr 0x241d320 size 0xc8 virtual false final false
  inline void AppendBufferPrimitive(uint8_t value, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buf, ByRef<int32_t> bidx);

  /// @brief Method GetResultAndReset addr 0x24194ac size 0x24 virtual false final false
  inline ::System::Globalization::SortKey* GetResultAndReset();

  /// @brief Method GetOptimizedLength addr 0x241d95c size 0x60 virtual false final false
  inline int32_t GetOptimizedLength(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, uint8_t defaultValue);

  /// @brief Method GetResult addr 0x241d480 size 0x4dc virtual false final false
  inline ::System::Globalization::SortKey* GetResult();

  // Ctor Parameters [CppParam { name: "", ty: "SortKeyBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortKeyBuffer(SortKeyBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortKeyBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortKeyBuffer(SortKeyBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortKeyBuffer();

public:
  /// @brief Field l1b, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l1b;

  /// @brief Field l2b, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l2b;

  /// @brief Field l3b, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l3b;

  /// @brief Field l4sb, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l4sb;

  /// @brief Field l4tb, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l4tb;

  /// @brief Field l4kb, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l4kb;

  /// @brief Field l4wb, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l4wb;

  /// @brief Field l5b, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l5b;

  /// @brief Field source, offset: 0x50, size: 0x8, def value: None
  ::StringW ___source;

  /// @brief Field l1, offset: 0x58, size: 0x4, def value: None
  int32_t ___l1;

  /// @brief Field l2, offset: 0x5c, size: 0x4, def value: None
  int32_t ___l2;

  /// @brief Field l3, offset: 0x60, size: 0x4, def value: None
  int32_t ___l3;

  /// @brief Field l4s, offset: 0x64, size: 0x4, def value: None
  int32_t ___l4s;

  /// @brief Field l4t, offset: 0x68, size: 0x4, def value: None
  int32_t ___l4t;

  /// @brief Field l4k, offset: 0x6c, size: 0x4, def value: None
  int32_t ___l4k;

  /// @brief Field l4w, offset: 0x70, size: 0x4, def value: None
  int32_t ___l4w;

  /// @brief Field l5, offset: 0x74, size: 0x4, def value: None
  int32_t ___l5;

  /// @brief Field lcid, offset: 0x78, size: 0x4, def value: None
  int32_t ___lcid;

  /// @brief Field options, offset: 0x7c, size: 0x4, def value: None
  ::System::Globalization::CompareOptions ___options;

  /// @brief Field processLevel2, offset: 0x80, size: 0x1, def value: None
  bool ___processLevel2;

  /// @brief Field frenchSort, offset: 0x81, size: 0x1, def value: None
  bool ___frenchSort;

  /// @brief Field frenchSorted, offset: 0x82, size: 0x1, def value: None
  bool ___frenchSorted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::SortKeyBuffer, 0x88>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::SortKeyBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SortKeyBuffer*, "Mono.Globalization.Unicode", "SortKeyBuffer");