#pragma once
// IWYU pragma private; include "System/Collections/IDictionaryEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerator_def.hpp"
CORDL_MODULE_EXPORT(IDictionaryEnumerator)
namespace System::Collections {
struct DictionaryEntry;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IDictionaryEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IDictionaryEnumerator);
// Dependencies System.Collections.IEnumerator
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.IDictionaryEnumerator
class CORDL_TYPE IDictionaryEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method get_Entry, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryEnumerator(IDictionaryEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3765 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IDictionaryEnumerator*, "System.Collections", "IDictionaryEnumerator");
