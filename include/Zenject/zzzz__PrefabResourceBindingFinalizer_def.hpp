#pragma once
// IWYU pragma private; include "Zenject/PrefabResourceBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrefabResourceBindingFinalizer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class PrefabInstantiatorCached;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass6_1;
}
// Forward declare root types
namespace Zenject {
class PrefabResourceBindingFinalizer;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass5_0;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass5_1;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass6_0;
}
namespace Zenject {
class __PrefabResourceBindingFinalizer____c__DisplayClass6_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabResourceBindingFinalizer);
MARK_REF_PTR_T(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::PrefabResourceBindingFinalizer::<>c__DisplayClass5_0*
class CORDL_TYPE __PrefabResourceBindingFinalizer____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::PrefabResourceBindingFinalizer* __4__this;

  /// @brief Field concreteTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteTypes, put = __cordl_internal_set_concreteTypes)) ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0, addr 0x4ab4830, size 0x110, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::PrefabResourceBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabResourceBindingFinalizer*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get_concreteTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __cordl_internal_get_concreteTypes() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get_container() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::PrefabResourceBindingFinalizer* value);

  constexpr void __cordl_internal_set_concreteTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4ab4940, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ab4994, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ab4810, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabResourceBindingFinalizer____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabResourceBindingFinalizer____c__DisplayClass5_0(__PrefabResourceBindingFinalizer____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabResourceBindingFinalizer____c__DisplayClass5_0(__PrefabResourceBindingFinalizer____c__DisplayClass5_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabResourceBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief Field concreteTypes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ___concreteTypes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12264 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0, ___container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0, ___concreteTypes) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass5_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::PrefabResourceBindingFinalizer::<>c__DisplayClass5_1*
class CORDL_TYPE __PrefabResourceBindingFinalizer____c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0* CS$__8__locals1;

  /// @brief Field prefabCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefabCreator, put = __cordl_internal_set_prefabCreator)) ::Zenject::PrefabInstantiatorCached* prefabCreator;

  static inline ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__1, addr 0x4ab4b4c, size 0x44, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__1(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::PrefabInstantiatorCached*& __cordl_internal_get_prefabCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiatorCached*> const& __cordl_internal_get_prefabCreator() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0* value);

  constexpr void __cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached* value);

  /// @brief Method __zenCreate, addr 0x4ab4b90, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ab4be4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ab4818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabResourceBindingFinalizer____c__DisplayClass5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabResourceBindingFinalizer____c__DisplayClass5_1(__PrefabResourceBindingFinalizer____c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabResourceBindingFinalizer____c__DisplayClass5_1(__PrefabResourceBindingFinalizer____c__DisplayClass5_1 const&) = delete;

  /// @brief Field prefabCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabInstantiatorCached* ___prefabCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0* ___CS$__8__locals1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1, ___prefabCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::PrefabResourceBindingFinalizer::<>c__DisplayClass6_0*
class CORDL_TYPE __PrefabResourceBindingFinalizer____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::PrefabResourceBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__0, addr 0x4ab4d9c, size 0x114, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::PrefabResourceBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabResourceBindingFinalizer*> const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get_container() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::PrefabResourceBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4ab4eb0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ab4f04, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ab4820, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabResourceBindingFinalizer____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabResourceBindingFinalizer____c__DisplayClass6_0(__PrefabResourceBindingFinalizer____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabResourceBindingFinalizer____c__DisplayClass6_0(__PrefabResourceBindingFinalizer____c__DisplayClass6_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabResourceBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12266 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0, ___container) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass6_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::PrefabResourceBindingFinalizer::<>c__DisplayClass6_1*
class CORDL_TYPE __PrefabResourceBindingFinalizer____c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0* CS$__8__locals1;

  /// @brief Field prefabCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefabCreator, put = __cordl_internal_set_prefabCreator)) ::Zenject::PrefabInstantiatorCached* prefabCreator;

  static inline ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__1, addr 0x4ab50bc, size 0x44, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__1(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::PrefabInstantiatorCached*& __cordl_internal_get_prefabCreator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiatorCached*> const& __cordl_internal_get_prefabCreator() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0* value);

  constexpr void __cordl_internal_set_prefabCreator(::Zenject::PrefabInstantiatorCached* value);

  /// @brief Method __zenCreate, addr 0x4ab5100, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ab5154, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ab4828, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabResourceBindingFinalizer____c__DisplayClass6_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabResourceBindingFinalizer____c__DisplayClass6_1(__PrefabResourceBindingFinalizer____c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabResourceBindingFinalizer____c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabResourceBindingFinalizer____c__DisplayClass6_1(__PrefabResourceBindingFinalizer____c__DisplayClass6_1 const&) = delete;

  /// @brief Field prefabCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabInstantiatorCached* ___prefabCreator;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0* ___CS$__8__locals1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12267 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1, ___prefabCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::PrefabResourceBindingFinalizer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::PrefabResourceBindingFinalizer*
class CORDL_TYPE PrefabResourceBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0;

  using __c__DisplayClass5_1 = ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1;

  using __c__DisplayClass6_0 = ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0;

  using __c__DisplayClass6_1 = ::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1;

  /// @brief Field _gameObjectBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectBindInfo, put = __cordl_internal_set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Field _providerFactory, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__providerFactory,
                      put = __cordl_internal_set__providerFactory)) ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* _providerFactory;

  /// @brief Field _resourcePath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__resourcePath, put = __cordl_internal_set__resourcePath)) ::StringW _resourcePath;

  /// @brief Method FinalizeBindingConcrete, addr 0x4ab44f0, size 0x320, virtual false, abstract: false, final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf, addr 0x4ab41d4, size 0x31c, virtual false, abstract: false, final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  static inline ::Zenject::PrefabResourceBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::StringW resourcePath,
                                                                    ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method OnFinalizeBinding, addr 0x4ab4150, size 0x84, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get__gameObjectBindInfo() const;

  constexpr ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*& __cordl_internal_get__providerFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*> const& __cordl_internal_get__providerFactory() const;

  constexpr ::StringW const& __cordl_internal_get__resourcePath() const;

  constexpr ::StringW& __cordl_internal_get__resourcePath();

  constexpr void __cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set__providerFactory(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  constexpr void __cordl_internal_set__resourcePath(::StringW value);

  /// @brief Method .ctor, addr 0x4ab4110, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::StringW resourcePath,
                    ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabResourceBindingFinalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabResourceBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabResourceBindingFinalizer(PrefabResourceBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabResourceBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabResourceBindingFinalizer(PrefabResourceBindingFinalizer const&) = delete;

  /// @brief Field _gameObjectBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  /// @brief Field _resourcePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ____resourcePath;

  /// @brief Field _providerFactory, offset: 0x28, size: 0x8, def value: None
  ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* ____providerFactory;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12268 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabResourceBindingFinalizer, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::PrefabResourceBindingFinalizer, ____gameObjectBindInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabResourceBindingFinalizer, ____resourcePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabResourceBindingFinalizer, ____providerFactory) == 0x28, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabResourceBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabResourceBindingFinalizer*, "Zenject", "PrefabResourceBindingFinalizer");
NEED_NO_BOX(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_0*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass5_1*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_0*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabResourceBindingFinalizer____c__DisplayClass6_1*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass6_1");
