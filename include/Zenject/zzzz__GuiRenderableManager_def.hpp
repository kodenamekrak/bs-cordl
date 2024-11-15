#pragma once
// IWYU pragma private; include "Zenject/GuiRenderableManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuiRenderableManager)
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class IGuiRenderable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class __GuiRenderableManager__RenderableInfo;
}
namespace Zenject {
class __GuiRenderableManager____c;
}
namespace Zenject {
class __GuiRenderableManager____c__DisplayClass1_0;
}
// Forward declare root types
namespace Zenject {
class GuiRenderableManager;
}
namespace Zenject {
class __GuiRenderableManager__RenderableInfo;
}
namespace Zenject {
class __GuiRenderableManager____c;
}
namespace Zenject {
class __GuiRenderableManager____c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GuiRenderableManager);
MARK_REF_PTR_T(::Zenject::__GuiRenderableManager__RenderableInfo);
MARK_REF_PTR_T(::Zenject::__GuiRenderableManager____c);
MARK_REF_PTR_T(::Zenject::__GuiRenderableManager____c__DisplayClass1_0);
// Type: ::RenderableInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::GuiRenderableManager::RenderableInfo*
class CORDL_TYPE __GuiRenderableManager__RenderableInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Priority, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Priority, put = __cordl_internal_set_Priority)) int32_t Priority;

  /// @brief Field Renderable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Renderable, put = __cordl_internal_set_Renderable)) ::Zenject::IGuiRenderable* Renderable;

  static inline ::Zenject::__GuiRenderableManager__RenderableInfo* New_ctor(::Zenject::IGuiRenderable* renderable, int32_t priority);

  constexpr int32_t const& __cordl_internal_get_Priority() const;

  constexpr int32_t& __cordl_internal_get_Priority();

  constexpr ::Zenject::IGuiRenderable*& __cordl_internal_get_Renderable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IGuiRenderable*> const& __cordl_internal_get_Renderable() const;

  constexpr void __cordl_internal_set_Priority(int32_t value);

  constexpr void __cordl_internal_set_Renderable(::Zenject::IGuiRenderable* value);

  /// @brief Method __zenCreate, addr 0x4ae13ec, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ae14f8, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ae0c9c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IGuiRenderable* renderable, int32_t priority);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GuiRenderableManager__RenderableInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager__RenderableInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GuiRenderableManager__RenderableInfo(__GuiRenderableManager__RenderableInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager__RenderableInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GuiRenderableManager__RenderableInfo(__GuiRenderableManager__RenderableInfo const&) = delete;

  /// @brief Field Renderable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IGuiRenderable* ___Renderable;

  /// @brief Field Priority, offset: 0x18, size: 0x4, def value: None
  int32_t ___Priority;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12616 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__GuiRenderableManager__RenderableInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__GuiRenderableManager__RenderableInfo, ___Renderable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__GuiRenderableManager__RenderableInfo, ___Priority) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::GuiRenderableManager::<>c*
class CORDL_TYPE __GuiRenderableManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__GuiRenderableManager____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*, int32_t>* __9__1_0;

  /// @brief Field <>9__1_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_2, put = setStaticF___9__1_2)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__1_2;

  static inline ::Zenject::__GuiRenderableManager____c* New_ctor();

  /// @brief Method <.ctor>b__1_0, addr 0x4ae186c, size 0x18, virtual false, abstract: false, final false
  inline int32_t __ctor_b__1_0(::Zenject::__GuiRenderableManager__RenderableInfo* x);

  /// @brief Method <.ctor>b__1_2, addr 0x4ae1854, size 0x18, virtual false, abstract: false, final false
  inline int32_t __ctor_b__1_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4ae1884, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ae18d8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ae184c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__GuiRenderableManager____c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*, int32_t>* getStaticF___9__1_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__1_2();

  static inline void setStaticF___9(::Zenject::__GuiRenderableManager____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::Zenject::__GuiRenderableManager__RenderableInfo*, int32_t>* value);

  static inline void setStaticF___9__1_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GuiRenderableManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GuiRenderableManager____c(__GuiRenderableManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GuiRenderableManager____c(__GuiRenderableManager____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12617 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__GuiRenderableManager____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::GuiRenderableManager::<>c__DisplayClass1_0*
class CORDL_TYPE __GuiRenderableManager____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field renderable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_renderable, put = __cordl_internal_set_renderable)) ::Zenject::IGuiRenderable* renderable;

  static inline ::Zenject::__GuiRenderableManager____c__DisplayClass1_0* New_ctor();

  constexpr ::Zenject::IGuiRenderable*& __cordl_internal_get_renderable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IGuiRenderable*> const& __cordl_internal_get_renderable() const;

  constexpr void __cordl_internal_set_renderable(::Zenject::IGuiRenderable* value);

  /// @brief Method <.ctor>b__1, addr 0x4ae1a90, size 0x80, virtual false, abstract: false, final false
  inline bool __ctor_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4ae1b10, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ae1b64, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ae0c94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GuiRenderableManager____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GuiRenderableManager____c__DisplayClass1_0(__GuiRenderableManager____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GuiRenderableManager____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GuiRenderableManager____c__DisplayClass1_0(__GuiRenderableManager____c__DisplayClass1_0 const&) = delete;

  /// @brief Field renderable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IGuiRenderable* ___renderable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__GuiRenderableManager____c__DisplayClass1_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__GuiRenderableManager____c__DisplayClass1_0, ___renderable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::GuiRenderableManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::GuiRenderableManager*
class CORDL_TYPE GuiRenderableManager : public ::System::Object {
public:
  // Declarations
  using RenderableInfo = ::Zenject::__GuiRenderableManager__RenderableInfo;

  using __c = ::Zenject::__GuiRenderableManager____c;

  using __c__DisplayClass1_0 = ::Zenject::__GuiRenderableManager____c__DisplayClass1_0;

  /// @brief Field _renderables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__renderables,
                      put = __cordl_internal_set__renderables)) ::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>* _renderables;

  static inline ::Zenject::GuiRenderableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>* renderables,
                                                          ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  /// @brief Method OnGui, addr 0x4ae0ccc, size 0x310, virtual false, abstract: false, final false
  inline void OnGui();

  constexpr ::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>*& __cordl_internal_get__renderables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>*> const& __cordl_internal_get__renderables() const;

  constexpr void __cordl_internal_set__renderables(::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>* value);

  /// @brief Method __zenCreate, addr 0x4ae0fdc, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ae10f4, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ae073c, size 0x558, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IGuiRenderable*>* renderables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuiRenderableManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuiRenderableManager(GuiRenderableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuiRenderableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuiRenderableManager(GuiRenderableManager const&) = delete;

  /// @brief Field _renderables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::__GuiRenderableManager__RenderableInfo*>* ____renderables;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GuiRenderableManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::GuiRenderableManager, ____renderables) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GuiRenderableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GuiRenderableManager*, "Zenject", "GuiRenderableManager");
NEED_NO_BOX(::Zenject::__GuiRenderableManager__RenderableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__GuiRenderableManager__RenderableInfo*, "Zenject", "GuiRenderableManager/RenderableInfo");
NEED_NO_BOX(::Zenject::__GuiRenderableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__GuiRenderableManager____c*, "Zenject", "GuiRenderableManager/<>c");
NEED_NO_BOX(::Zenject::__GuiRenderableManager____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__GuiRenderableManager____c__DisplayClass1_0*, "Zenject", "GuiRenderableManager/<>c__DisplayClass1_0");
