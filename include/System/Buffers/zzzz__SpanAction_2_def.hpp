#pragma once
// IWYU pragma private; include "System/Buffers/SpanAction_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SpanAction_2)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Buffers {
template <typename T, typename TArg> class SpanAction_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::SpanAction_2);
// Dependencies System.MulticastDelegate
namespace System::Buffers {
// cpp template
template <typename T, typename TArg>
// Is value type: false
// CS Name: System.Buffers.SpanAction`2<T,TArg>
class CORDL_TYPE SpanAction_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::System::Span_1<T> span, TArg arg);

  static inline ::System::Buffers::SpanAction_2<T, TArg>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpanAction_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpanAction_2(SpanAction_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpanAction_2(SpanAction_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3894 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::SpanAction_2, "System.Buffers", "SpanAction`2");
