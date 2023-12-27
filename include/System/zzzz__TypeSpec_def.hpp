#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeSpec)
namespace System {
struct __TypeSpec__DisplayNameFormat;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class ModifierSpec;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class TypeIdentifier;
}
namespace System {
class Type;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Reflection {
class AssemblyName;
}
// Forward declare root types
namespace System {
struct __TypeSpec__DisplayNameFormat;
}
namespace System {
class TypeSpec;
}
// Write type traits
MARK_VAL_T(::System::__TypeSpec__DisplayNameFormat);
MARK_REF_PTR_T(::System::TypeSpec);
// Type: ::DisplayNameFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2636))
// CS Name: ::TypeSpec::DisplayNameFormat
struct CORDL_TYPE __TypeSpec__DisplayNameFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TypeSpec__DisplayNameFormat_Unwrapped
  enum struct ____TypeSpec__DisplayNameFormat_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_WANT_ASSEMBLY = static_cast<int32_t>(0x1),
    __E_NO_MODIFIERS = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TypeSpec__DisplayNameFormat_Unwrapped() const noexcept {
    return static_cast<____TypeSpec__DisplayNameFormat_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TypeSpec__DisplayNameFormat(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeSpec__DisplayNameFormat();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::System::__TypeSpec__DisplayNameFormat const Default;

  /// @brief Field WANT_ASSEMBLY value: static_cast<int32_t>(0x1)
  static ::System::__TypeSpec__DisplayNameFormat const WANT_ASSEMBLY;

  /// @brief Field NO_MODIFIERS value: static_cast<int32_t>(0x2)
  static ::System::__TypeSpec__DisplayNameFormat const NO_MODIFIERS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TypeSpec__DisplayNameFormat, 0x4>, "Size mismatch!");

} // namespace System
// Type: System::TypeSpec
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2637))
// CS Name: ::System::TypeSpec*
class CORDL_TYPE TypeSpec : public ::System::Object {
public:
  // Declarations
  using DisplayNameFormat = ::System::__TypeSpec__DisplayNameFormat;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::System::TypeIdentifier* name;

  /// @brief Field assembly_name, offset 0x18, size 0x8
  __declspec(property(get = __get_assembly_name, put = __set_assembly_name))::StringW assembly_name;

  /// @brief Field nested, offset 0x20, size 0x8
  __declspec(property(get = __get_nested, put = __set_nested))::System::Collections::Generic::List_1<::System::TypeIdentifier*>* nested;

  /// @brief Field generic_params, offset 0x28, size 0x8
  __declspec(property(get = __get_generic_params, put = __set_generic_params))::System::Collections::Generic::List_1<::System::TypeSpec*>* generic_params;

  /// @brief Field modifier_spec, offset 0x30, size 0x8
  __declspec(property(get = __get_modifier_spec, put = __set_modifier_spec))::System::Collections::Generic::List_1<::System::ModifierSpec*>* modifier_spec;

  /// @brief Field is_byref, offset 0x38, size 0x1
  __declspec(property(get = __get_is_byref, put = __set_is_byref)) bool is_byref;

  /// @brief Field display_fullname, offset 0x40, size 0x8
  __declspec(property(get = __get_display_fullname, put = __set_display_fullname))::StringW display_fullname;

  __declspec(property(get = get_HasModifiers)) bool HasModifiers;

  __declspec(property(get = get_DisplayFullName))::StringW DisplayFullName;

  constexpr ::System::TypeIdentifier*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::TypeIdentifier*> const& __get_name() const;

  constexpr void __set_name(::System::TypeIdentifier* value);

  constexpr ::StringW& __get_assembly_name();

  constexpr ::StringW const& __get_assembly_name() const;

  constexpr void __set_assembly_name(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::System::TypeIdentifier*>*& __get_nested();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::TypeIdentifier*>*> const& __get_nested() const;

  constexpr void __set_nested(::System::Collections::Generic::List_1<::System::TypeIdentifier*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::TypeSpec*>*& __get_generic_params();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::TypeSpec*>*> const& __get_generic_params() const;

  constexpr void __set_generic_params(::System::Collections::Generic::List_1<::System::TypeSpec*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::ModifierSpec*>*& __get_modifier_spec();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ModifierSpec*>*> const& __get_modifier_spec() const;

  constexpr void __set_modifier_spec(::System::Collections::Generic::List_1<::System::ModifierSpec*>* value);

  constexpr bool& __get_is_byref();

  constexpr bool const& __get_is_byref() const;

  constexpr void __set_is_byref(bool value);

  constexpr ::StringW& __get_display_fullname();

  constexpr ::StringW const& __get_display_fullname() const;

  constexpr void __set_display_fullname(::StringW value);

  /// @brief Method get_HasModifiers addr 0x2606b9c size 0x10 virtual false final false
  inline bool get_HasModifiers();

  /// @brief Method GetDisplayFullName addr 0x2606bac size 0x454 virtual false final false
  inline ::StringW GetDisplayFullName(::System::__TypeSpec__DisplayNameFormat flags);

  /// @brief Method GetModifierString addr 0x2607028 size 0x1f4 virtual false final false
  inline ::System::Text::StringBuilder* GetModifierString(::System::Text::StringBuilder* sb);

  /// @brief Method get_DisplayFullName addr 0x2607000 size 0x28 virtual false final false
  inline ::StringW get_DisplayFullName();

  /// @brief Method Parse addr 0x260721c size 0xd8 virtual false final false
  static inline ::System::TypeSpec* Parse(::StringW typeName);

  /// @brief Method UnescapeInternalName addr 0x2607e78 size 0xe8 virtual false final false
  static inline ::StringW UnescapeInternalName(::StringW displayName);

  /// @brief Method Resolve addr 0x2607f60 size 0x90c virtual false final false
  inline ::System::Type* Resolve(::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                 ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError, bool ignoreCase,
                                 ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method AddName addr 0x260886c size 0x118 virtual false final false
  inline void AddName(::StringW type_name);

  /// @brief Method AddModifier addr 0x260898c size 0xf0 virtual false final false
  inline void AddModifier(::System::ModifierSpec* md);

  /// @brief Method SkipSpace addr 0x2608a7c size 0xb0 virtual false final false
  static inline void SkipSpace(::StringW name, ByRef<int32_t> pos);

  /// @brief Method BoundCheck addr 0x2608b2c size 0x88 virtual false final false
  static inline void BoundCheck(int32_t idx, ::StringW s);

  /// @brief Method ParsedTypeIdentifier addr 0x2608984 size 0x8 virtual false final false
  static inline ::System::TypeIdentifier* ParsedTypeIdentifier(::StringW displayName);

  /// @brief Method Parse addr 0x26072f4 size 0xb84 virtual false final false
  static inline ::System::TypeSpec* Parse(::StringW name, ByRef<int32_t> p, bool is_recurse, bool allow_aqn);

  static inline ::System::TypeSpec* New_ctor();

  /// @brief Method .ctor addr 0x2608bb4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TypeSpec", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeSpec(TypeSpec&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeSpec", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeSpec(TypeSpec const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeSpec();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::TypeIdentifier* ___name;

  /// @brief Field assembly_name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assembly_name;

  /// @brief Field nested, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::TypeIdentifier*>* ___nested;

  /// @brief Field generic_params, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::TypeSpec*>* ___generic_params;

  /// @brief Field modifier_spec, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ModifierSpec*>* ___modifier_spec;

  /// @brief Field is_byref, offset: 0x38, size: 0x1, def value: None
  bool ___is_byref;

  /// @brief Field display_fullname, offset: 0x40, size: 0x8, def value: None
  ::StringW ___display_fullname;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeSpec, 0x48>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__TypeSpec__DisplayNameFormat, "System", "TypeSpec/DisplayNameFormat");
NEED_NO_BOX(::System::TypeSpec);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeSpec*, "System", "TypeSpec");