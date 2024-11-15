#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentLightGroups.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentLightGroups)
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
namespace GlobalNamespace {
class ILightGroup;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
class __EnvironmentLightGroups____c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace GlobalNamespace {
class __EnvironmentLightGroups____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentLightGroups);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentLightGroups____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentLightGroups::<>c*
class CORDL_TYPE __EnvironmentLightGroups____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__EnvironmentLightGroups____c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>* __9__9_0;

  static inline ::GlobalNamespace::__EnvironmentLightGroups____c* New_ctor();

  /// @brief Method <Sort>b__9_0, addr 0x2679190, size 0x18, virtual false, abstract: false, final false
  inline int32_t _Sort_b__9_0(::GlobalNamespace::LightGroupSO* s);

  /// @brief Method .ctor, addr 0x2679188, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__EnvironmentLightGroups____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>* getStaticF___9__9_0();

  static inline void setStaticF___9(::GlobalNamespace::__EnvironmentLightGroups____c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentLightGroups____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentLightGroups____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentLightGroups____c(__EnvironmentLightGroups____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentLightGroups____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentLightGroups____c(__EnvironmentLightGroups____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12798 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentLightGroups____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentLightGroups
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentLightGroups*
class CORDL_TYPE EnvironmentLightGroups : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__EnvironmentLightGroups____c;

  /// @brief Field _lightGroupSODict, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupSODict,
                      put = __cordl_internal_set__lightGroupSODict)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* _lightGroupSODict;

  /// @brief Field _lightGroupSOList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupSOList,
                      put = __cordl_internal_set__lightGroupSOList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* _lightGroupSOList;

  /// @brief Field _lightGroupSOListForLightGroupDataDict, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__lightGroupSOListForLightGroupDataDict,
      put = __cordl_internal_set__lightGroupSOListForLightGroupDataDict)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* _lightGroupSOListForLightGroupDataDict;

  __declspec(property(get = get_lightGroupSOList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroupSOList;

  __declspec(property(get = get_lightGroups)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* lightGroups;

  /// @brief Convert operator to "::GlobalNamespace::IEnvironmentLightGroups"
  constexpr operator ::GlobalNamespace::IEnvironmentLightGroups*() noexcept;

  /// @brief Method GetDataForGroup, addr 0x2678dd4, size 0x238, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ILightGroup* GetDataForGroup(int32_t groupId);

  static inline ::GlobalNamespace::EnvironmentLightGroups* New_ctor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroups);

  /// @brief Method Sort, addr 0x267900c, size 0x120, virtual false, abstract: false, final false
  inline void Sort();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>*& __cordl_internal_get__lightGroupSODict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>*> const&
  __cordl_internal_get__lightGroupSODict() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*& __cordl_internal_get__lightGroupSOList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*> const& __cordl_internal_get__lightGroupSOList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*& __cordl_internal_get__lightGroupSOListForLightGroupDataDict();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*> const&
  __cordl_internal_get__lightGroupSOListForLightGroupDataDict() const;

  constexpr void __cordl_internal_set__lightGroupSODict(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* value);

  constexpr void __cordl_internal_set__lightGroupSOList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* value);

  constexpr void __cordl_internal_set__lightGroupSOListForLightGroupDataDict(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* value);

  /// @brief Method .ctor, addr 0x2678dac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroups);

  /// @brief Method get_lightGroupSOList, addr 0x2678da4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* get_lightGroupSOList();

  /// @brief Method get_lightGroups, addr 0x2678d9c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* get_lightGroups();

  /// @brief Convert to "::GlobalNamespace::IEnvironmentLightGroups"
  constexpr ::GlobalNamespace::IEnvironmentLightGroups* i___GlobalNamespace__IEnvironmentLightGroups() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentLightGroups();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentLightGroups(EnvironmentLightGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentLightGroups(EnvironmentLightGroups const&) = delete;

  /// @brief Field _lightGroupSOList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* ____lightGroupSOList;

  /// @brief Field _lightGroupSODict, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* ____lightGroupSODict;

  /// @brief Field _lightGroupSOListForLightGroupDataDict, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* ____lightGroupSOListForLightGroupDataDict;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12799 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentLightGroups, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightGroups, ____lightGroupSOList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightGroups, ____lightGroupSODict) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentLightGroups, ____lightGroupSOListForLightGroupDataDict) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightGroups);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightGroups*, "", "EnvironmentLightGroups");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentLightGroups____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentLightGroups____c*, "", "EnvironmentLightGroups/<>c");
