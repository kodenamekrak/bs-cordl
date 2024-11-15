#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Initialization/CacheInitialization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CacheInitialization)
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __CacheInitialization__CacheInitOp;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __CacheInitialization____c__DisplayClass1_0;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::Util {
class IInitializableObject;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class CacheInitialization;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __CacheInitialization__CacheInitOp;
}
namespace UnityEngine::AddressableAssets::Initialization {
class __CacheInitialization____c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::CacheInitialization);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0);
// Type: ::CacheInitOp
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 161, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: ::CacheInitialization::CacheInitOp*
class CORDL_TYPE __CacheInitialization__CacheInitOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
  // Declarations
  /// @brief Field m_Callback, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback, put = __cordl_internal_set_m_Callback)) ::System::Func_1<bool>* m_Callback;

  /// @brief Field m_UpdateRequired, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateRequired, put = __cordl_internal_set_m_UpdateRequired)) bool m_UpdateRequired;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr operator ::UnityEngine::ResourceManagement::IUpdateReceiver*() noexcept;

  /// @brief Method Execute, addr 0x449d468, size 0x98, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x449d310, size 0x8, virtual false, abstract: false, final false
  inline void Init(::System::Func_1<bool>* callback);

  /// @brief Method InvokeWaitForCompletion, addr 0x449d318, size 0x94, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp* New_ctor();

  /// @brief Method Update, addr 0x449d3ac, size 0xbc, virtual true, abstract: false, final true
  inline void Update(float_t unscaledDeltaTime);

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_m_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __cordl_internal_get_m_Callback() const;

  constexpr bool const& __cordl_internal_get_m_UpdateRequired() const;

  constexpr bool& __cordl_internal_get_m_UpdateRequired();

  constexpr void __cordl_internal_set_m_Callback(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_m_UpdateRequired(bool value);

  /// @brief Method .ctor, addr 0x449d240, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ResourceManagement::IUpdateReceiver"
  constexpr ::UnityEngine::ResourceManagement::IUpdateReceiver* i___UnityEngine__ResourceManagement__IUpdateReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CacheInitialization__CacheInitOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CacheInitialization__CacheInitOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CacheInitialization__CacheInitOp(__CacheInitialization__CacheInitOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CacheInitialization__CacheInitOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CacheInitialization__CacheInitOp(__CacheInitialization__CacheInitOp const&) = delete;

  /// @brief Field m_Callback, offset: 0x98, size: 0x8, def value: None
  ::System::Func_1<bool>* ___m_Callback;

  /// @brief Field m_UpdateRequired, offset: 0xa0, size: 0x1, def value: None
  bool ___m_UpdateRequired;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp, ___m_Callback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp, ___m_UpdateRequired) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: ::CacheInitialization::<>c__DisplayClass1_0*
class CORDL_TYPE __CacheInitialization____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::AddressableAssets::Initialization::CacheInitialization* __4__this;

  /// @brief Field data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::StringW data;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  static inline ::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0* New_ctor();

  /// @brief Method <InitializeAsync>b__0, addr 0x449d500, size 0x24, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__0();

  constexpr ::UnityEngine::AddressableAssets::Initialization::CacheInitialization*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::Initialization::CacheInitialization*> const& __cordl_internal_get___4__this() const;

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::AddressableAssets::Initialization::CacheInitialization* value);

  constexpr void __cordl_internal_set_data(::StringW value);

  constexpr void __cordl_internal_set_id(::StringW value);

  /// @brief Method .ctor, addr 0x449d238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CacheInitialization____c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CacheInitialization____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CacheInitialization____c__DisplayClass1_0(__CacheInitialization____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CacheInitialization____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CacheInitialization____c__DisplayClass1_0(__CacheInitialization____c__DisplayClass1_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::Initialization::CacheInitialization* _____4__this;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  ::StringW ___data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0, ___data) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
// Type: UnityEngine.AddressableAssets.Initialization::CacheInitialization
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets.Initialization::CacheInitialization*
class CORDL_TYPE CacheInitialization : public ::System::Object {
public:
  // Declarations
  using CacheInitOp = ::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp;

  using __c__DisplayClass1_0 = ::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IInitializableObject*() noexcept;

  /// @brief Method Initialize, addr 0x449cfa0, size 0x148, virtual true, abstract: false, final true
  inline bool Initialize(::StringW id, ::StringW dataStr);

  /// @brief Method InitializeAsync, addr 0x449d0e8, size 0x150, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data);

  static inline ::UnityEngine::AddressableAssets::Initialization::CacheInitialization* New_ctor();

  /// @brief Method .ctor, addr 0x449d308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RootPath, addr 0x449d290, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RootPath();

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
  constexpr ::UnityEngine::ResourceManagement::Util::IInitializableObject* i___UnityEngine__ResourceManagement__Util__IInitializableObject() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CacheInitialization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CacheInitialization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CacheInitialization(CacheInitialization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CacheInitialization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CacheInitialization(CacheInitialization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16178 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Initialization::CacheInitialization, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::CacheInitialization);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::CacheInitialization*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization__CacheInitOp*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization/CacheInitOp");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::__CacheInitialization____c__DisplayClass1_0*, "UnityEngine.AddressableAssets.Initialization",
                       "CacheInitialization/<>c__DisplayClass1_0");
