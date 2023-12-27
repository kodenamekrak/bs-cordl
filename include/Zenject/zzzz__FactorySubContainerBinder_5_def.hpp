#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderWithParams_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FactorySubContainerBinder_5)
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactorySubContainerBinder_5____c__DisplayClass3_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactorySubContainerBinder_5____c__DisplayClass4_0;
}
namespace Zenject {
class BindInfo;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactorySubContainerBinder_5____c__DisplayClass2_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactorySubContainerBinder_5____c__DisplayClass1_0;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactorySubContainerBinder_5____c__DisplayClass1_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactorySubContainerBinder_5____c__DisplayClass2_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactorySubContainerBinder_5____c__DisplayClass3_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class __FactorySubContainerBinder_5____c__DisplayClass4_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_5);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_5____c__DisplayClass1_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_5____c__DisplayClass2_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_5____c__DisplayClass3_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_5____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10808))
// CS Name: ::FactorySubContainerBinder`5::<>c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE __FactorySubContainerBinder_5____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* __4__this;

  /// @brief Field subcontainerBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_subcontainerBindInfo, put = __set_subcontainerBindInfo))::Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod;

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __get_subcontainerBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& __get_subcontainerBindInfo() const;

  constexpr void __set_subcontainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* value);

  static inline ::Zenject::__FactorySubContainerBinder_5____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ByMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::IProvider* _ByMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_5____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_5____c__DisplayClass1_0(__FactorySubContainerBinder_5____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_5____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_5____c__DisplayClass1_0(__FactorySubContainerBinder_5____c__DisplayClass1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_5____c__DisplayClass1_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* _____4__this;

  /// @brief Field subcontainerBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ___subcontainerBindInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10809))
// CS Name: ::FactorySubContainerBinder`5::<>c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE __FactorySubContainerBinder_5____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod;

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* value);

  static inline ::Zenject::__FactorySubContainerBinder_5____c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewGameObjectMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::IProvider* _ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_5____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_5____c__DisplayClass2_0(__FactorySubContainerBinder_5____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_5____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_5____c__DisplayClass2_0(__FactorySubContainerBinder_5____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_5____c__DisplayClass2_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10810))
// CS Name: ::FactorySubContainerBinder`5::<>c__DisplayClass3_0<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE __FactorySubContainerBinder_5____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* __4__this;

  /// @brief Field prefab, offset 0x18, size 0x8
  __declspec(property(get = __get_prefab, put = __set_prefab))::UnityEngine::Object* prefab;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod;

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  constexpr ::UnityEngine::Object*& __get_prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_prefab() const;

  constexpr void __set_prefab(::UnityEngine::Object* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* value);

  static inline ::Zenject::__FactorySubContainerBinder_5____c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::IProvider* _ByNewPrefabMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_5____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_5____c__DisplayClass3_0(__FactorySubContainerBinder_5____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_5____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_5____c__DisplayClass3_0(__FactorySubContainerBinder_5____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_5____c__DisplayClass3_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* _____4__this;

  /// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Object* ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10811))
// CS Name: ::FactorySubContainerBinder`5::<>c__DisplayClass4_0<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE __FactorySubContainerBinder_5____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* __4__this;

  /// @brief Field resourcePath, offset 0x18, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod;

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* value);

  static inline ::Zenject::__FactorySubContainerBinder_5____c__DisplayClass4_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabResourceMethod>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::IProvider* _ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_5____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_5____c__DisplayClass4_0(__FactorySubContainerBinder_5____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_5____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_5____c__DisplayClass4_0(__FactorySubContainerBinder_5____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_5____c__DisplayClass4_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* _____4__this;

  /// @brief Field resourcePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactorySubContainerBinder`5
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10830), inst: 1860 }), TypeDefinitionIndex(TypeDefinitionIndex(10830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10812))
// CS Name: ::Zenject::FactorySubContainerBinder`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE FactorySubContainerBinder_5 : public ::Zenject::FactorySubContainerBinderWithParams_1<TContract> {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::Zenject::__FactorySubContainerBinder_5____c__DisplayClass4_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  using __c__DisplayClass3_0 = ::Zenject::__FactorySubContainerBinder_5____c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  using __c__DisplayClass2_0 = ::Zenject::__FactorySubContainerBinder_5____c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  using __c__DisplayClass1_0 = ::Zenject::__FactorySubContainerBinder_5____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  static inline ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier);

  /// @brief Method ByMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod);

  /// @brief Method ByNewGameObjectMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod);

  /// @brief Method ByNewPrefabMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(::UnityEngine::Object* prefab,
                                                                                                 ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod);

  /// @brief Method ByNewPrefabResourceMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
  ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod);

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_5(FactorySubContainerBinder_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_5(FactorySubContainerBinder_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_5, "Zenject", "FactorySubContainerBinder`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_5____c__DisplayClass1_0, "Zenject", "FactorySubContainerBinder`5/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_5____c__DisplayClass2_0, "Zenject", "FactorySubContainerBinder`5/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_5____c__DisplayClass3_0, "Zenject", "FactorySubContainerBinder`5/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_5____c__DisplayClass4_0, "Zenject", "FactorySubContainerBinder`5/<>c__DisplayClass4_0");