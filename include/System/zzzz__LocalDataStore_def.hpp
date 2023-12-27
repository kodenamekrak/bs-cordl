#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalDataStore)
namespace System {
class LocalDataStoreSlot;
}
namespace System {
class Object;
}
namespace System {
class LocalDataStoreMgr;
}
namespace System {
class LocalDataStoreElement;
}
// Forward declare root types
namespace System {
class LocalDataStore;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalDataStore);
// Type: System::LocalDataStore
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2543))
// CS Name: ::System::LocalDataStore*
class CORDL_TYPE LocalDataStore : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_DataTable, offset 0x10, size 0x8
  __declspec(property(get = __get_m_DataTable, put = __set_m_DataTable))::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> m_DataTable;

  /// @brief Field m_Manager, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Manager, put = __set_m_Manager))::System::LocalDataStoreMgr* m_Manager;

  constexpr ::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*>& __get_m_DataTable();

  constexpr ::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> const& __get_m_DataTable() const;

  constexpr void __set_m_DataTable(::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> value);

  constexpr ::System::LocalDataStoreMgr*& __get_m_Manager();

  constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStoreMgr*> const& __get_m_Manager() const;

  constexpr void __set_m_Manager(::System::LocalDataStoreMgr* value);

  static inline ::System::LocalDataStore* New_ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity);

  /// @brief Method .ctor addr 0x25d7c44 size 0x70 virtual false final false
  inline void _ctor(::System::LocalDataStoreMgr* mgr, int32_t InitialCapacity);

  /// @brief Method Dispose addr 0x25d7be0 size 0x1c virtual false final false
  inline void Dispose();

  /// @brief Method GetData addr 0x25d7db8 size 0xd8 virtual false final false
  inline ::System::Object* GetData(::System::LocalDataStoreSlot* slot);

  /// @brief Method SetData addr 0x25d7f0c size 0xe4 virtual false final false
  inline void SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data);

  /// @brief Method FreeData addr 0x25d829c size 0x48 virtual false final false
  inline void FreeData(int32_t slot, int64_t cookie);

  /// @brief Method PopulateElement addr 0x25d7ff0 size 0x2ac virtual false final false
  inline ::System::LocalDataStoreElement* PopulateElement(::System::LocalDataStoreSlot* slot);

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalDataStore(LocalDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalDataStore(LocalDataStore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalDataStore();

public:
  /// @brief Field m_DataTable, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::LocalDataStoreElement*, ::Array<::System::LocalDataStoreElement*>*> ___m_DataTable;

  /// @brief Field m_Manager, offset: 0x18, size: 0x8, def value: None
  ::System::LocalDataStoreMgr* ___m_Manager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalDataStore, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::LocalDataStore);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStore*, "System", "LocalDataStore");