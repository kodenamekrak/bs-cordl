#pragma once
// IWYU pragma private; include "ModestTree/Util/ValuePair_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValuePair_4)
namespace System {
class Object;
}
// Forward declare root types
namespace ModestTree::Util {
template <typename T1, typename T2, typename T3, typename T4> class ValuePair_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ModestTree::Util::ValuePair_4);
// Dependencies System.Object
namespace ModestTree::Util {
// cpp template
template <typename T1, typename T2, typename T3, typename T4>
// Is value type: false
// CS Name: ModestTree.Util.ValuePair`4<T1,T2,T3,T4>
class CORDL_TYPE ValuePair_4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field First, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_First, put = __cordl_internal_set_First)) T1 First;

  /// @brief Field Fourth, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Fourth, put = __cordl_internal_set_Fourth)) T4 Fourth;

  /// @brief Field Second, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Second, put = __cordl_internal_set_Second)) T2 Second;

  /// @brief Field Third, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Third, put = __cordl_internal_set_Third)) T3 Third;

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Equals(::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* that);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* New_ctor();

  static inline ::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* New_ctor(T1 first, T2 second, T3 third, T4 fourth);

  constexpr T1 const& __cordl_internal_get_First() const;

  constexpr T1& __cordl_internal_get_First();

  constexpr T4 const& __cordl_internal_get_Fourth() const;

  constexpr T4& __cordl_internal_get_Fourth();

  constexpr T2 const& __cordl_internal_get_Second() const;

  constexpr T2& __cordl_internal_get_Second();

  constexpr T3 const& __cordl_internal_get_Third() const;

  constexpr T3& __cordl_internal_get_Third();

  constexpr void __cordl_internal_set_First(T1 value);

  constexpr void __cordl_internal_set_Fourth(T4 value);

  constexpr void __cordl_internal_set_Second(T2 value);

  constexpr void __cordl_internal_set_Third(T3 value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T1 first, T2 second, T3 third, T4 fourth);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValuePair_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValuePair_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValuePair_4(ValuePair_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValuePair_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValuePair_4(ValuePair_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11970 };

  /// @brief Field First, offset: 0x10, size: 0x8, def value: None
  T1 ___First;

  /// @brief Field Second, offset: 0x18, size: 0x8, def value: None
  T2 ___Second;

  /// @brief Field Third, offset: 0x20, size: 0x8, def value: None
  T3 ___Third;

  /// @brief Field Fourth, offset: 0x28, size: 0x8, def value: None
  T4 ___Fourth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ModestTree::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::Util::ValuePair_4, "ModestTree.Util", "ValuePair`4");
