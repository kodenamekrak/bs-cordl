#pragma once
// IWYU pragma private; include "System/Data/DataViewManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataViewManager)
namespace System::Data {
class DataViewSettingCollection;
}
namespace System {
class NotSupportedException;
}
// Forward declare root types
namespace System::Data {
class DataViewManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataViewManager);
// Type: System.Data::DataViewManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataViewManager*
class CORDL_TYPE DataViewManager : public ::System::ComponentModel::MarshalByValueComponent {
public:
  // Declarations
  __declspec(property(get = get_DataViewSettings)) ::System::Data::DataViewSettingCollection* DataViewSettings;

  /// @brief Field _dataViewSettingsCollection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataViewSettingsCollection,
                      put = __cordl_internal_set__dataViewSettingsCollection)) ::System::Data::DataViewSettingCollection* _dataViewSettingsCollection;

  /// @brief Field _nViews, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__nViews, put = __cordl_internal_set__nViews)) int32_t _nViews;

  /// @brief Field s_notSupported, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_notSupported, put = setStaticF_s_notSupported)) ::System::NotSupportedException* s_notSupported;

  constexpr ::System::Data::DataViewSettingCollection*& __cordl_internal_get__dataViewSettingsCollection();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataViewSettingCollection*> const& __cordl_internal_get__dataViewSettingsCollection() const;

  constexpr int32_t const& __cordl_internal_get__nViews() const;

  constexpr int32_t& __cordl_internal_get__nViews();

  constexpr void __cordl_internal_set__dataViewSettingsCollection(::System::Data::DataViewSettingCollection* value);

  constexpr void __cordl_internal_set__nViews(int32_t value);

  static inline ::System::NotSupportedException* getStaticF_s_notSupported();

  /// @brief Method get_DataViewSettings, addr 0x410bc80, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataViewSettingCollection* get_DataViewSettings();

  static inline void setStaticF_s_notSupported(::System::NotSupportedException* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataViewManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataViewManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataViewManager(DataViewManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataViewManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataViewManager(DataViewManager const&) = delete;

  /// @brief Field _dataViewSettingsCollection, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataViewSettingCollection* ____dataViewSettingsCollection;

  /// @brief Field _nViews, offset: 0x28, size: 0x4, def value: None
  int32_t ____nViews;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataViewManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____dataViewSettingsCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewManager, ____nViews) == 0x28, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataViewManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewManager*, "System.Data", "DataViewManager");
