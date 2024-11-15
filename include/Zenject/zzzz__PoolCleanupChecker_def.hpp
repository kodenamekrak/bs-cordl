#pragma once
// IWYU pragma private; include "Zenject/PoolCleanupChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PoolCleanupChecker)
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
class ILateDisposable;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class __PoolCleanupChecker____c;
}
// Forward declare root types
namespace Zenject {
class PoolCleanupChecker;
}
namespace Zenject {
class __PoolCleanupChecker____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PoolCleanupChecker);
MARK_REF_PTR_T(::Zenject::__PoolCleanupChecker____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::PoolCleanupChecker::<>c*
class CORDL_TYPE __PoolCleanupChecker____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__PoolCleanupChecker____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<::System::Type*, bool>* __9__2_0;

  static inline ::Zenject::__PoolCleanupChecker____c* New_ctor();

  /// @brief Method <.ctor>b__2_0, addr 0x4ab97a8, size 0x6c, virtual false, abstract: false, final false
  inline bool __ctor_b__2_0(::System::Type* x);

  /// @brief Method __zenCreate, addr 0x4ab9814, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ab9868, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ab97a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__PoolCleanupChecker____c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__2_0();

  static inline void setStaticF___9(::Zenject::__PoolCleanupChecker____c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolCleanupChecker____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PoolCleanupChecker____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PoolCleanupChecker____c(__PoolCleanupChecker____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PoolCleanupChecker____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PoolCleanupChecker____c(__PoolCleanupChecker____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolCleanupChecker____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::PoolCleanupChecker
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::PoolCleanupChecker*
class CORDL_TYPE PoolCleanupChecker : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__PoolCleanupChecker____c;

  /// @brief Field _ignoredPools, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ignoredPools, put = __cordl_internal_set__ignoredPools)) ::System::Collections::Generic::List_1<::System::Type*>* _ignoredPools;

  /// @brief Field _poolFactories, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__poolFactories, put = __cordl_internal_set__poolFactories)) ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* _poolFactories;

  /// @brief Convert operator to "::Zenject::ILateDisposable"
  constexpr operator ::Zenject::ILateDisposable*() noexcept;

  /// @brief Method LateDispose, addr 0x4ab8f64, size 0x3d0, virtual true, abstract: false, final true
  inline void LateDispose();

  static inline ::Zenject::PoolCleanupChecker* New_ctor(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* poolFactories,
                                                        ::System::Collections::Generic::List_1<::System::Type*>* ignoredPools);

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get__ignoredPools();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __cordl_internal_get__ignoredPools() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*& __cordl_internal_get__poolFactories();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*> const& __cordl_internal_get__poolFactories() const;

  constexpr void __cordl_internal_set__ignoredPools(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr void __cordl_internal_set__poolFactories(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* value);

  /// @brief Method __zenCreate, addr 0x4ab9334, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ab944c, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ab8e50, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* poolFactories, ::System::Collections::Generic::List_1<::System::Type*>* ignoredPools);

  /// @brief Convert to "::Zenject::ILateDisposable"
  constexpr ::Zenject::ILateDisposable* i___Zenject__ILateDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolCleanupChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolCleanupChecker(PoolCleanupChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolCleanupChecker(PoolCleanupChecker const&) = delete;

  /// @brief Field _poolFactories, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* ____poolFactories;

  /// @brief Field _ignoredPools, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ____ignoredPools;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12403 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PoolCleanupChecker, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::PoolCleanupChecker, ____poolFactories) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PoolCleanupChecker, ____ignoredPools) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PoolCleanupChecker);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolCleanupChecker*, "Zenject", "PoolCleanupChecker");
NEED_NO_BOX(::Zenject::__PoolCleanupChecker____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolCleanupChecker____c*, "Zenject", "PoolCleanupChecker/<>c");
