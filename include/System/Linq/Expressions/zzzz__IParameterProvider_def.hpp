#pragma once
// IWYU pragma private; include "System/Linq/Expressions/IParameterProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IParameterProvider)
namespace System::Linq::Expressions {
class ParameterExpression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class IParameterProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::IParameterProvider);
// Dependencies
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.IParameterProvider
class CORDL_TYPE IParameterProvider {
public:
  // Declarations
  __declspec(property(get = get_ParameterCount)) int32_t ParameterCount;

  /// @brief Method GetParameter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::ParameterExpression* GetParameter(int32_t index);

  /// @brief Method get_ParameterCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_ParameterCount();

  // Ctor Parameters [CppParam { name: "", ty: "IParameterProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IParameterProvider(IParameterProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::IParameterProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::IParameterProvider*, "System.Linq.Expressions", "IParameterProvider");
