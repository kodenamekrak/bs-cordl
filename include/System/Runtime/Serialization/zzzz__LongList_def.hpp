#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LongList)
// Forward declare root types
namespace System::Runtime::Serialization {
class LongList;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::LongList);
// Type: System.Runtime.Serialization::LongList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3221))
// CS Name: ::System.Runtime.Serialization::LongList*
class CORDL_TYPE LongList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_values, offset 0x10, size 0x8
  __declspec(property(get = __get_m_values, put = __set_m_values))::ArrayW<int64_t, ::Array<int64_t>*> m_values;

  /// @brief Field m_count, offset 0x18, size 0x4
  __declspec(property(get = __get_m_count, put = __set_m_count)) int32_t m_count;

  /// @brief Field m_totalItems, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_totalItems, put = __set_m_totalItems)) int32_t m_totalItems;

  /// @brief Field m_currentItem, offset 0x20, size 0x4
  __declspec(property(get = __get_m_currentItem, put = __set_m_currentItem)) int32_t m_currentItem;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Current)) int64_t Current;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get_m_values();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get_m_values() const;

  constexpr void __set_m_values(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr int32_t& __get_m_count();

  constexpr int32_t const& __get_m_count() const;

  constexpr void __set_m_count(int32_t value);

  constexpr int32_t& __get_m_totalItems();

  constexpr int32_t const& __get_m_totalItems() const;

  constexpr void __set_m_totalItems(int32_t value);

  constexpr int32_t& __get_m_currentItem();

  constexpr int32_t const& __get_m_currentItem() const;

  constexpr void __set_m_currentItem(int32_t value);

  static inline ::System::Runtime::Serialization::LongList* New_ctor();

  /// @brief Method .ctor addr 0x24bc7ec size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::LongList* New_ctor(int32_t startingSize);

  /// @brief Method .ctor addr 0x24bca74 size 0x6c virtual false final false
  inline void _ctor(int32_t startingSize);

  /// @brief Method Add addr 0x24bc7f4 size 0x80 virtual false final false
  inline void Add(int64_t value);

  /// @brief Method get_Count addr 0x24bcb68 size 0x8 virtual false final false
  inline int32_t get_Count();

  /// @brief Method StartEnumeration addr 0x24baa68 size 0xc virtual false final false
  inline void StartEnumeration();

  /// @brief Method MoveNext addr 0x24baab4 size 0x68 virtual false final false
  inline bool MoveNext();

  /// @brief Method get_Current addr 0x24baa74 size 0x34 virtual false final false
  inline int64_t get_Current();

  /// @brief Method RemoveElement addr 0x24bc73c size 0x90 virtual false final false
  inline bool RemoveElement(int64_t value);

  /// @brief Method EnlargeArray addr 0x24bcae0 size 0x88 virtual false final false
  inline void EnlargeArray();

  // Ctor Parameters [CppParam { name: "", ty: "LongList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongList(LongList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongList(LongList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongList();

public:
  /// @brief Field m_values, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___m_values;

  /// @brief Field m_count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_count;

  /// @brief Field m_totalItems, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_totalItems;

  /// @brief Field m_currentItem, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_currentItem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::LongList, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::LongList);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::LongList*, "System.Runtime.Serialization", "LongList");