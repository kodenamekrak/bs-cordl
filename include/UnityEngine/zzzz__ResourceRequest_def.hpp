#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceRequest)
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class ResourceRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceRequest);
// Type: UnityEngine::ResourceRequest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10262))
// CS Name: ::UnityEngine::ResourceRequest*
class CORDL_TYPE ResourceRequest : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
  /// @brief Field m_Path, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Path, put = __set_m_Path))::StringW m_Path;

  /// @brief Field m_Type, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Type, put = __set_m_Type))::System::Type* m_Type;

  __declspec(property(get = get_asset))::UnityEngine::Object* asset;

  constexpr ::StringW& __get_m_Path();

  constexpr ::StringW const& __get_m_Path() const;

  constexpr void __set_m_Path(::StringW value);

  constexpr ::System::Type*& __get_m_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_m_Type() const;

  constexpr void __set_m_Type(::System::Type* value);

  /// @brief Method GetResult addr 0x2cddfec size 0xc virtual true final false
  inline ::UnityEngine::Object* GetResult();

  /// @brief Method get_asset addr 0x2cde070 size 0xc virtual false final false
  inline ::UnityEngine::Object* get_asset();

  static inline ::UnityEngine::ResourceRequest* New_ctor();

  /// @brief Method .ctor addr 0x2cde07c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResourceRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceRequest(ResourceRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceRequest(ResourceRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceRequest();

public:
  /// @brief Field m_Path, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_Path;

  /// @brief Field m_Type, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___m_Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceRequest, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceRequest*, "UnityEngine", "ResourceRequest");