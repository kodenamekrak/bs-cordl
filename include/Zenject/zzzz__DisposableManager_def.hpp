#pragma once
// IWYU pragma private; include "Zenject/DisposableManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisposableManager)
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
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class ILateDisposable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct __DisposableManager__DisposableInfo;
}
namespace Zenject {
class __DisposableManager__LateDisposableInfo;
}
namespace Zenject {
class __DisposableManager____c;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass4_0;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass4_1;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass9_0;
}
// Forward declare root types
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class __DisposableManager__LateDisposableInfo;
}
namespace Zenject {
class __DisposableManager____c;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass4_0;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass4_1;
}
namespace Zenject {
class __DisposableManager____c__DisplayClass9_0;
}
namespace Zenject {
struct __DisposableManager__DisposableInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DisposableManager);
MARK_REF_PTR_T(::Zenject::__DisposableManager__LateDisposableInfo);
MARK_REF_PTR_T(::Zenject::__DisposableManager____c);
MARK_REF_PTR_T(::Zenject::__DisposableManager____c__DisplayClass4_0);
MARK_REF_PTR_T(::Zenject::__DisposableManager____c__DisplayClass4_1);
MARK_REF_PTR_T(::Zenject::__DisposableManager____c__DisplayClass9_0);
MARK_VAL_T(::Zenject::__DisposableManager__DisposableInfo);
// Type: ::DisposableInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// CS Name: ::DisposableManager::DisposableInfo
struct CORDL_TYPE __DisposableManager__DisposableInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4ade750, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IDisposable* disposable, int32_t priority);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DisposableManager__DisposableInfo();

  // Ctor Parameters [CppParam { name: "Disposable", ty: "::System::IDisposable*", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DisposableManager__DisposableInfo(::System::IDisposable* Disposable, int32_t Priority) noexcept;

  /// @brief Field Disposable, offset: 0x0, size: 0x8, def value: None
  ::System::IDisposable* Disposable;

  /// @brief Field Priority, offset: 0x8, size: 0x4, def value: None
  int32_t Priority;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12609 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager__DisposableInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DisposableManager__DisposableInfo, Disposable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DisposableManager__DisposableInfo, Priority) == 0x8, "Offset mismatch!");

} // namespace Zenject
// Type: ::LateDisposableInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DisposableManager::LateDisposableInfo*
class CORDL_TYPE __DisposableManager__LateDisposableInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field LateDisposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_LateDisposable, put = __cordl_internal_set_LateDisposable)) ::Zenject::ILateDisposable* LateDisposable;

  /// @brief Field Priority, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Priority, put = __cordl_internal_set_Priority)) int32_t Priority;

  static inline ::Zenject::__DisposableManager__LateDisposableInfo* New_ctor(::Zenject::ILateDisposable* lateDisposable, int32_t priority);

  constexpr ::Zenject::ILateDisposable*& __cordl_internal_get_LateDisposable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ILateDisposable*> const& __cordl_internal_get_LateDisposable() const;

  constexpr int32_t const& __cordl_internal_get_Priority() const;

  constexpr int32_t& __cordl_internal_get_Priority();

  constexpr void __cordl_internal_set_LateDisposable(::Zenject::ILateDisposable* value);

  constexpr void __cordl_internal_set_Priority(int32_t value);

  /// @brief Method __zenCreate, addr 0x4adf8b4, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4adf9c0, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ade764, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ILateDisposable* lateDisposable, int32_t priority);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DisposableManager__LateDisposableInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager__LateDisposableInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DisposableManager__LateDisposableInfo(__DisposableManager__LateDisposableInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager__LateDisposableInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DisposableManager__LateDisposableInfo(__DisposableManager__LateDisposableInfo const&) = delete;

  /// @brief Field LateDisposable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ILateDisposable* ___LateDisposable;

  /// @brief Field Priority, offset: 0x18, size: 0x4, def value: None
  int32_t ___Priority;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12610 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager__LateDisposableInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DisposableManager__LateDisposableInfo, ___LateDisposable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DisposableManager__LateDisposableInfo, ___Priority) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DisposableManager::<>c*
class CORDL_TYPE __DisposableManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__DisposableManager____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*, int32_t>* __9__10_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo, int32_t>* __9__11_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* __9__4_1;

  /// @brief Field <>9__4_3, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF___9__4_3, put = setStaticF___9__4_3)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* __9__4_3;

  static inline ::Zenject::__DisposableManager____c* New_ctor();

  /// @brief Method <Dispose>b__11_0, addr 0x4adfdf4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _Dispose_b__11_0(::Zenject::__DisposableManager__DisposableInfo x);

  /// @brief Method <LateDispose>b__10_0, addr 0x4adfddc, size 0x18, virtual false, abstract: false, final false
  inline int32_t _LateDispose_b__10_0(::Zenject::__DisposableManager__LateDisposableInfo* x);

  /// @brief Method <.ctor>b__4_1, addr 0x4adfd1c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> __ctor_b__4_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <.ctor>b__4_3, addr 0x4adfd7c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> __ctor_b__4_3(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4adfdfc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4adfe50, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4adfd14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__DisposableManager____c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*, int32_t>* getStaticF___9__10_0();

  static inline ::System::Func_2<::Zenject::__DisposableManager__DisposableInfo, int32_t>* getStaticF___9__11_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* getStaticF___9__4_1();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* getStaticF___9__4_3();

  static inline void setStaticF___9(::Zenject::__DisposableManager____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::Zenject::__DisposableManager__LateDisposableInfo*, int32_t>* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::Zenject::__DisposableManager__DisposableInfo, int32_t>* value);

  static inline void setStaticF___9__4_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value);

  static inline void setStaticF___9__4_3(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DisposableManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DisposableManager____c(__DisposableManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DisposableManager____c(__DisposableManager____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12611 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DisposableManager::<>c__DisplayClass4_0*
class CORDL_TYPE __DisposableManager____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_disposable, put = __cordl_internal_set_disposable)) ::System::IDisposable* disposable;

  static inline ::Zenject::__DisposableManager____c__DisplayClass4_0* New_ctor();

  constexpr ::System::IDisposable*& __cordl_internal_get_disposable();

  constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> const& __cordl_internal_get_disposable() const;

  constexpr void __cordl_internal_set_disposable(::System::IDisposable* value);

  /// @brief Method <.ctor>b__0, addr 0x4ae0008, size 0x80, virtual false, abstract: false, final false
  inline bool __ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4ae0088, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ae00dc, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ade748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DisposableManager____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DisposableManager____c__DisplayClass4_0(__DisposableManager____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DisposableManager____c__DisplayClass4_0(__DisposableManager____c__DisplayClass4_0 const&) = delete;

  /// @brief Field disposable, offset: 0x10, size: 0x8, def value: None
  ::System::IDisposable* ___disposable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DisposableManager____c__DisplayClass4_0, ___disposable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass4_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DisposableManager::<>c__DisplayClass4_1*
class CORDL_TYPE __DisposableManager____c__DisplayClass4_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lateDisposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lateDisposable, put = __cordl_internal_set_lateDisposable)) ::Zenject::ILateDisposable* lateDisposable;

  static inline ::Zenject::__DisposableManager____c__DisplayClass4_1* New_ctor();

  constexpr ::Zenject::ILateDisposable*& __cordl_internal_get_lateDisposable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ILateDisposable*> const& __cordl_internal_get_lateDisposable() const;

  constexpr void __cordl_internal_set_lateDisposable(::Zenject::ILateDisposable* value);

  /// @brief Method <.ctor>b__2, addr 0x4ae0294, size 0x80, virtual false, abstract: false, final false
  inline bool __ctor_b__2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4ae0314, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ae0368, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ade75c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DisposableManager____c__DisplayClass4_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass4_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DisposableManager____c__DisplayClass4_1(__DisposableManager____c__DisplayClass4_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass4_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DisposableManager____c__DisplayClass4_1(__DisposableManager____c__DisplayClass4_1 const&) = delete;

  /// @brief Field lateDisposable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ILateDisposable* ___lateDisposable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager____c__DisplayClass4_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DisposableManager____c__DisplayClass4_1, ___lateDisposable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DisposableManager::<>c__DisplayClass9_0*
class CORDL_TYPE __DisposableManager____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_disposable, put = __cordl_internal_set_disposable)) ::System::IDisposable* disposable;

  static inline ::Zenject::__DisposableManager____c__DisplayClass9_0* New_ctor();

  /// @brief Method <Remove>b__0, addr 0x4ae0520, size 0x10, virtual false, abstract: false, final false
  inline bool _Remove_b__0(::Zenject::__DisposableManager__DisposableInfo x);

  constexpr ::System::IDisposable*& __cordl_internal_get_disposable();

  constexpr ::cordl_internals::to_const_pointer<::System::IDisposable*> const& __cordl_internal_get_disposable() const;

  constexpr void __cordl_internal_set_disposable(::System::IDisposable* value);

  /// @brief Method __zenCreate, addr 0x4ae0530, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ae0584, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4adea6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DisposableManager____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DisposableManager____c__DisplayClass9_0(__DisposableManager____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DisposableManager____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DisposableManager____c__DisplayClass9_0(__DisposableManager____c__DisplayClass9_0 const&) = delete;

  /// @brief Field disposable, offset: 0x10, size: 0x8, def value: None
  ::System::IDisposable* ___disposable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12614 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DisposableManager____c__DisplayClass9_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DisposableManager____c__DisplayClass9_0, ___disposable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::DisposableManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::DisposableManager*
class CORDL_TYPE DisposableManager : public ::System::Object {
public:
  // Declarations
  using DisposableInfo = ::Zenject::__DisposableManager__DisposableInfo;

  using LateDisposableInfo = ::Zenject::__DisposableManager__LateDisposableInfo;

  using __c = ::Zenject::__DisposableManager____c;

  using __c__DisplayClass4_0 = ::Zenject::__DisposableManager____c__DisplayClass4_0;

  using __c__DisplayClass4_1 = ::Zenject::__DisposableManager____c__DisplayClass4_1;

  using __c__DisplayClass9_0 = ::Zenject::__DisposableManager____c__DisplayClass9_0;

  /// @brief Field _disposables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__disposables,
                      put = __cordl_internal_set__disposables)) ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>* _disposables;

  /// @brief Field _disposed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _lateDisposables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lateDisposables,
                      put = __cordl_internal_set__lateDisposables)) ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>* _lateDisposables;

  /// @brief Field _lateDisposed, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__lateDisposed, put = __cordl_internal_set__lateDisposed)) bool _lateDisposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x4ade794, size 0x8, virtual false, abstract: false, final false
  inline void Add(::System::IDisposable* disposable);

  /// @brief Method Add, addr 0x4ade79c, size 0xb8, virtual false, abstract: false, final false
  inline void Add(::System::IDisposable* disposable, int32_t priority);

  /// @brief Method AddLate, addr 0x4ade854, size 0x8, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateDisposable* disposable);

  /// @brief Method AddLate, addr 0x4ade85c, size 0xe8, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateDisposable* disposable, int32_t priority);

  /// @brief Method Dispose, addr 0x4adeeb8, size 0x424, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method LateDispose, addr 0x4adea74, size 0x444, virtual false, abstract: false, final false
  inline void LateDispose();

  static inline ::Zenject::DisposableManager* New_ctor(::System::Collections::Generic::List_1<::System::IDisposable*>* disposables,
                                                       ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities,
                                                       ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>* lateDisposables,
                                                       ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* latePriorities);

  /// @brief Method Remove, addr 0x4ade944, size 0x128, virtual false, abstract: false, final false
  inline void Remove(::System::IDisposable* disposable);

  constexpr ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>*& __cordl_internal_get__disposables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>*> const& __cordl_internal_get__disposables() const;

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>*& __cordl_internal_get__lateDisposables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>*> const& __cordl_internal_get__lateDisposables() const;

  constexpr bool const& __cordl_internal_get__lateDisposed() const;

  constexpr bool& __cordl_internal_get__lateDisposed();

  constexpr void __cordl_internal_set__disposables(::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>* value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__lateDisposables(::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>* value);

  constexpr void __cordl_internal_set__lateDisposed(bool value);

  /// @brief Method __zenCreate, addr 0x4adf2dc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4adf49c, size 0x418, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4addf78, size 0x7d0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::IDisposable*>* disposables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities,
                    ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>* lateDisposables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* latePriorities);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableManager(DisposableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableManager(DisposableManager const&) = delete;

  /// @brief Field _disposables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__DisposableInfo>* ____disposables;

  /// @brief Field _lateDisposables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::__DisposableManager__LateDisposableInfo*>* ____lateDisposables;

  /// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _lateDisposed, offset: 0x21, size: 0x1, def value: None
  bool ____lateDisposed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12615 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::DisposableManager, ____disposables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposableManager, ____lateDisposables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposableManager, ____disposed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposableManager, ____lateDisposed) == 0x21, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DisposableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager*, "Zenject", "DisposableManager");
NEED_NO_BOX(::Zenject::__DisposableManager__LateDisposableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager__LateDisposableInfo*, "Zenject", "DisposableManager/LateDisposableInfo");
NEED_NO_BOX(::Zenject::__DisposableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager____c*, "Zenject", "DisposableManager/<>c");
NEED_NO_BOX(::Zenject::__DisposableManager____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager____c__DisplayClass4_0*, "Zenject", "DisposableManager/<>c__DisplayClass4_0");
NEED_NO_BOX(::Zenject::__DisposableManager____c__DisplayClass4_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager____c__DisplayClass4_1*, "Zenject", "DisposableManager/<>c__DisplayClass4_1");
NEED_NO_BOX(::Zenject::__DisposableManager____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager____c__DisplayClass9_0*, "Zenject", "DisposableManager/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DisposableManager__DisposableInfo, "Zenject", "DisposableManager/DisposableInfo");
