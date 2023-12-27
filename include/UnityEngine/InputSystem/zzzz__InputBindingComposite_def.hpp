#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingComposite)
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
class __InputBindingComposite___GetPartNames_d__12;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputBindingComposite;
}
namespace UnityEngine::InputSystem {
class __InputBindingComposite___GetPartNames_d__12;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputBindingComposite);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputBindingComposite___GetPartNames_d__12);
// Type: ::<GetPartNames>d__12
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6188))
// CS Name: ::InputBindingComposite::<GetPartNames>d__12*
class CORDL_TYPE __InputBindingComposite___GetPartNames_d__12 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::StringW __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field composite, offset 0x28, size 0x8
  __declspec(property(get = __get_composite, put = __set_composite))::StringW composite;

  /// @brief Field <>3__composite, offset 0x30, size 0x8
  __declspec(property(get = __get___3__composite, put = __set___3__composite))::StringW __3__composite;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x40, size 0x4
  __declspec(property(get = __get___7__wrap2, put = __set___7__wrap2)) int32_t __7__wrap2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current))::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::StringW& __get___2__current();

  constexpr ::StringW const& __get___2__current() const;

  constexpr void __set___2__current(::StringW value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::StringW& __get_composite();

  constexpr ::StringW const& __get_composite() const;

  constexpr void __set_composite(::StringW value);

  constexpr ::StringW& __get___3__composite();

  constexpr ::StringW const& __get___3__composite() const;

  constexpr void __set___3__composite(::StringW value);

  constexpr ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*>& __get___7__wrap1();

  constexpr ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> value);

  constexpr int32_t& __get___7__wrap2();

  constexpr int32_t const& __get___7__wrap2() const;

  constexpr void __set___7__wrap2(int32_t value);

  static inline ::UnityEngine::InputSystem::__InputBindingComposite___GetPartNames_d__12* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2a56114 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2a56270 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2a56274 size 0x1d0 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current addr 0x2a56444 size 0x8 virtual true final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2a5644c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2a5648c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator addr 0x2a56494 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2a56538 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__InputBindingComposite___GetPartNames_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputBindingComposite___GetPartNames_d__12(__InputBindingComposite___GetPartNames_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputBindingComposite___GetPartNames_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputBindingComposite___GetPartNames_d__12(__InputBindingComposite___GetPartNames_d__12 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBindingComposite___GetPartNames_d__12();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field composite, offset: 0x28, size: 0x8, def value: None
  ::StringW ___composite;

  /// @brief Field <>3__composite, offset: 0x30, size: 0x8, def value: None
  ::StringW _____3__composite;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBindingComposite___GetPartNames_d__12, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingComposite
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6712)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6189))
// CS Name: ::UnityEngine.InputSystem::InputBindingComposite*
class CORDL_TYPE InputBindingComposite : public ::System::Object {
public:
  // Declarations
  using _GetPartNames_d__12 = ::UnityEngine::InputSystem::__InputBindingComposite___GetPartNames_d__12;

  /// @brief Field s_Composites, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Composites, put = setStaticF_s_Composites))::UnityEngine::InputSystem::Utilities::TypeTable s_Composites;

  __declspec(property(get = get_valueType))::System::Type* valueType;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  static inline void setStaticF_s_Composites(::UnityEngine::InputSystem::Utilities::TypeTable value);

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Composites();

  /// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_valueType();

  /// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method EvaluateMagnitude addr 0x2a55db0 size 0x8 virtual true final false
  inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup addr 0x2a55db8 size 0x4 virtual true final false
  inline void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method CallFinishSetup addr 0x2a4e40c size 0xc virtual false final false
  inline void CallFinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method GetValueType addr 0x2a55dbc size 0x144 virtual false final false
  static inline ::System::Type* GetValueType(::StringW composite);

  /// @brief Method GetExpectedControlLayoutName addr 0x2a55f00 size 0x19c virtual false final false
  static inline ::StringW GetExpectedControlLayoutName(::StringW composite, ::StringW part);

  /// @brief Method GetPartNames addr 0x2a5609c size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetPartNames(::StringW composite);

  /// @brief Method GetDisplayFormatString addr 0x2a56148 size 0x120 virtual false final false
  static inline ::StringW GetDisplayFormatString(::StringW composite);

  static inline ::UnityEngine::InputSystem::InputBindingComposite* New_ctor();

  /// @brief Method .ctor addr 0x2a56268 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputBindingComposite(InputBindingComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputBindingComposite(InputBindingComposite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingComposite();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingComposite, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputBindingComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingComposite*, "UnityEngine.InputSystem", "InputBindingComposite");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputBindingComposite___GetPartNames_d__12);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBindingComposite___GetPartNames_d__12*, "UnityEngine.InputSystem", "InputBindingComposite/<GetPartNames>d__12");