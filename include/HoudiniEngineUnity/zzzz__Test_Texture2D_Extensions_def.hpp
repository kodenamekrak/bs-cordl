#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_Texture2D_Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Test_Texture2D_Extensions)
namespace HoudiniEngineUnity {
class Test_Texture2D;
}
namespace HoudiniEngineUnity {
class __Test_Texture2D_Extensions____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Texture2D_Extensions;
}
namespace HoudiniEngineUnity {
class __Test_Texture2D_Extensions____c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Texture2D_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::__Test_Texture2D_Extensions____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::Test_Texture2D_Extensions::<>c*
class CORDL_TYPE __Test_Texture2D_Extensions____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HoudiniEngineUnity::__Test_Texture2D_Extensions____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Converter_2<::UnityW<::UnityEngine::Texture2D>, ::HoudiniEngineUnity::Test_Texture2D*>* __9__1_0;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Converter_2<::UnityW<::UnityEngine::Texture2D>, ::HoudiniEngineUnity::Test_Texture2D*>* __9__2_0;

  static inline ::HoudiniEngineUnity::__Test_Texture2D_Extensions____c* New_ctor();

  /// @brief Method <ToTestObject>b__1_0, addr 0x3a45758, size 0x5c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_Texture2D* _ToTestObject_b__1_0(::UnityEngine::Texture2D* lod);

  /// @brief Method <ToTestObject>b__2_0, addr 0x3a457b4, size 0x5c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_Texture2D* _ToTestObject_b__2_0(::UnityEngine::Texture2D* lod);

  /// @brief Method .ctor, addr 0x3a45750, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::__Test_Texture2D_Extensions____c* getStaticF___9();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::Texture2D>, ::HoudiniEngineUnity::Test_Texture2D*>* getStaticF___9__1_0();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::Texture2D>, ::HoudiniEngineUnity::Test_Texture2D*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::HoudiniEngineUnity::__Test_Texture2D_Extensions____c* value);

  static inline void setStaticF___9__1_0(::System::Converter_2<::UnityW<::UnityEngine::Texture2D>, ::HoudiniEngineUnity::Test_Texture2D*>* value);

  static inline void setStaticF___9__2_0(::System::Converter_2<::UnityW<::UnityEngine::Texture2D>, ::HoudiniEngineUnity::Test_Texture2D*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Test_Texture2D_Extensions____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Test_Texture2D_Extensions____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Test_Texture2D_Extensions____c(__Test_Texture2D_Extensions____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Test_Texture2D_Extensions____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Test_Texture2D_Extensions____c(__Test_Texture2D_Extensions____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__Test_Texture2D_Extensions____c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_Texture2D_Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_Texture2D_Extensions*
class CORDL_TYPE Test_Texture2D_Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::__Test_Texture2D_Extensions____c;

  /// @brief Method ToTestObject, addr 0x3a4550c, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::Test_Texture2D*, ::Array<::HoudiniEngineUnity::Test_Texture2D*>*>
  ToTestObject(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> self);

  /// @brief Method ToTestObject, addr 0x3a44fc0, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_Texture2D* ToTestObject(::UnityEngine::Texture2D* self);

  /// @brief Method ToTestObject, addr 0x3a455fc, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Texture2D*>* ToTestObject(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Texture2D_Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Texture2D_Extensions(Test_Texture2D_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Texture2D_Extensions(Test_Texture2D_Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11887 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Texture2D_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Texture2D_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Texture2D_Extensions*, "HoudiniEngineUnity", "Test_Texture2D_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::__Test_Texture2D_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__Test_Texture2D_Extensions____c*, "HoudiniEngineUnity", "Test_Texture2D_Extensions/<>c");
