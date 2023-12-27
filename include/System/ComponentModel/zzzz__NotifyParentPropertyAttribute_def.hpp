#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyParentPropertyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class NotifyParentPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::NotifyParentPropertyAttribute);
// Type: System.ComponentModel::NotifyParentPropertyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9493))
// CS Name: ::System.ComponentModel::NotifyParentPropertyAttribute*
class CORDL_TYPE NotifyParentPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field notifyParent, offset 0x10, size 0x1
  __declspec(property(get = __get_notifyParent, put = __set_notifyParent)) bool notifyParent;

  /// @brief Field Yes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Yes, put = setStaticF_Yes))::System::ComponentModel::NotifyParentPropertyAttribute* Yes;

  /// @brief Field No, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_No, put = setStaticF_No))::System::ComponentModel::NotifyParentPropertyAttribute* No;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::NotifyParentPropertyAttribute* Default;

  __declspec(property(get = get_NotifyParent)) bool NotifyParent;

  constexpr bool& __get_notifyParent();

  constexpr bool const& __get_notifyParent() const;

  constexpr void __set_notifyParent(bool value);

  static inline void setStaticF_Yes(::System::ComponentModel::NotifyParentPropertyAttribute* value);

  static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_Yes();

  static inline void setStaticF_No(::System::ComponentModel::NotifyParentPropertyAttribute* value);

  static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_No();

  static inline void setStaticF_Default(::System::ComponentModel::NotifyParentPropertyAttribute* value);

  static inline ::System::ComponentModel::NotifyParentPropertyAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::NotifyParentPropertyAttribute* New_ctor(bool notifyParent);

  /// @brief Method .ctor addr 0x293a6c8 size 0x28 virtual false final false
  inline void _ctor(bool notifyParent);

  /// @brief Method get_NotifyParent addr 0x293a6f0 size 0x8 virtual false final false
  inline bool get_NotifyParent();

  /// @brief Method Equals addr 0x293a6f8 size 0x80 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x293a778 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method IsDefaultAttribute addr 0x293a780 size 0x68 virtual true final false
  inline bool IsDefaultAttribute();

  // Ctor Parameters [CppParam { name: "", ty: "NotifyParentPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotifyParentPropertyAttribute(NotifyParentPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotifyParentPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotifyParentPropertyAttribute(NotifyParentPropertyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotifyParentPropertyAttribute();

public:
  /// @brief Field notifyParent, offset: 0x10, size: 0x1, def value: None
  bool ___notifyParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NotifyParentPropertyAttribute, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NotifyParentPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyParentPropertyAttribute*, "System.ComponentModel", "NotifyParentPropertyAttribute");