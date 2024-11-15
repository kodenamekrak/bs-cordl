#pragma once
// IWYU pragma private; include "GlobalNamespace/SafeAreaRectChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SafeAreaRectChecker)
namespace GlobalNamespace {
class MainCamera;
}
namespace GlobalNamespace {
class __SafeAreaRectChecker__InitData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SafeAreaRectChecker;
}
namespace GlobalNamespace {
class __SafeAreaRectChecker__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SafeAreaRectChecker);
MARK_REF_PTR_T(::GlobalNamespace::__SafeAreaRectChecker__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SafeAreaRectChecker::InitData*
class CORDL_TYPE __SafeAreaRectChecker__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field checkingEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_checkingEnabled, put = __cordl_internal_set_checkingEnabled)) bool checkingEnabled;

  static inline ::GlobalNamespace::__SafeAreaRectChecker__InitData* New_ctor(bool checkingEnabled);

  constexpr bool const& __cordl_internal_get_checkingEnabled() const;

  constexpr bool& __cordl_internal_get_checkingEnabled();

  constexpr void __cordl_internal_set_checkingEnabled(bool value);

  /// @brief Method .ctor, addr 0x3b99dc4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool checkingEnabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SafeAreaRectChecker__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SafeAreaRectChecker__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SafeAreaRectChecker__InitData(__SafeAreaRectChecker__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SafeAreaRectChecker__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SafeAreaRectChecker__InitData(__SafeAreaRectChecker__InitData const&) = delete;

  /// @brief Field checkingEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___checkingEnabled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SafeAreaRectChecker__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SafeAreaRectChecker__InitData, ___checkingEnabled) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SafeAreaRectChecker
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SafeAreaRectChecker*
class CORDL_TYPE SafeAreaRectChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__SafeAreaRectChecker__InitData;

  /// @brief Field _activeObjectWhenInsideSafeArea, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__activeObjectWhenInsideSafeArea, put = __cordl_internal_set__activeObjectWhenInsideSafeArea)) ::UnityW<::UnityEngine::GameObject>
      _activeObjectWhenInsideSafeArea;

  /// @brief Field _activeObjectWhenNotInsideSafeArea, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__activeObjectWhenNotInsideSafeArea, put = __cordl_internal_set__activeObjectWhenNotInsideSafeArea)) ::UnityW<::UnityEngine::GameObject>
      _activeObjectWhenNotInsideSafeArea;

  /// @brief Field _corners, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__corners, put = __cordl_internal_set__corners)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _corners;

  /// @brief Field _initData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__SafeAreaRectChecker__InitData* _initData;

  /// @brief Field _mainCamera, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mainCamera, put = __cordl_internal_set__mainCamera)) ::UnityW<::GlobalNamespace::MainCamera> _mainCamera;

  /// @brief Field _maxAngleX, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAngleX, put = __cordl_internal_set__maxAngleX)) float_t _maxAngleX;

  /// @brief Field _maxAngleY, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAngleY, put = __cordl_internal_set__maxAngleY)) float_t _maxAngleY;

  /// @brief Field _minAngleX, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__minAngleX, put = __cordl_internal_set__minAngleX)) float_t _minAngleX;

  /// @brief Field _minAngleY, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__minAngleY, put = __cordl_internal_set__minAngleY)) float_t _minAngleY;

  /// @brief Field _rectTransformToCheck, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransformToCheck, put = __cordl_internal_set__rectTransformToCheck)) ::UnityW<::UnityEngine::RectTransform> _rectTransformToCheck;

  static inline ::GlobalNamespace::SafeAreaRectChecker* New_ctor();

  /// @brief Method Start, addr 0x3b99b18, size 0x64, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b99b7c, size 0x1e4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__activeObjectWhenInsideSafeArea() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__activeObjectWhenInsideSafeArea();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__activeObjectWhenNotInsideSafeArea() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__activeObjectWhenNotInsideSafeArea();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__corners() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__corners();

  constexpr ::GlobalNamespace::__SafeAreaRectChecker__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SafeAreaRectChecker__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::MainCamera> const& __cordl_internal_get__mainCamera() const;

  constexpr ::UnityW<::GlobalNamespace::MainCamera>& __cordl_internal_get__mainCamera();

  constexpr float_t const& __cordl_internal_get__maxAngleX() const;

  constexpr float_t& __cordl_internal_get__maxAngleX();

  constexpr float_t const& __cordl_internal_get__maxAngleY() const;

  constexpr float_t& __cordl_internal_get__maxAngleY();

  constexpr float_t const& __cordl_internal_get__minAngleX() const;

  constexpr float_t& __cordl_internal_get__minAngleX();

  constexpr float_t const& __cordl_internal_get__minAngleY() const;

  constexpr float_t& __cordl_internal_get__minAngleY();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransformToCheck() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransformToCheck();

  constexpr void __cordl_internal_set__activeObjectWhenInsideSafeArea(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__activeObjectWhenNotInsideSafeArea(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__SafeAreaRectChecker__InitData* value);

  constexpr void __cordl_internal_set__mainCamera(::UnityW<::GlobalNamespace::MainCamera> value);

  constexpr void __cordl_internal_set__maxAngleX(float_t value);

  constexpr void __cordl_internal_set__maxAngleY(float_t value);

  constexpr void __cordl_internal_set__minAngleX(float_t value);

  constexpr void __cordl_internal_set__minAngleY(float_t value);

  constexpr void __cordl_internal_set__rectTransformToCheck(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x3b99d60, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeAreaRectChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeAreaRectChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeAreaRectChecker(SafeAreaRectChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeAreaRectChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeAreaRectChecker(SafeAreaRectChecker const&) = delete;

  /// @brief Field _minAngleX, offset: 0x20, size: 0x4, def value: None
  float_t ____minAngleX;

  /// @brief Field _maxAngleX, offset: 0x24, size: 0x4, def value: None
  float_t ____maxAngleX;

  /// @brief Field _minAngleY, offset: 0x28, size: 0x4, def value: None
  float_t ____minAngleY;

  /// @brief Field _maxAngleY, offset: 0x2c, size: 0x4, def value: None
  float_t ____maxAngleY;

  /// @brief Field _activeObjectWhenInsideSafeArea, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____activeObjectWhenInsideSafeArea;

  /// @brief Field _activeObjectWhenNotInsideSafeArea, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____activeObjectWhenNotInsideSafeArea;

  /// @brief Field _rectTransformToCheck, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransformToCheck;

  /// @brief Field _corners, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____corners;

  /// @brief Field _mainCamera, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainCamera> ____mainCamera;

  /// @brief Field _initData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__SafeAreaRectChecker__InitData* ____initData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SafeAreaRectChecker, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____minAngleX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____maxAngleX) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____minAngleY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____maxAngleY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____activeObjectWhenInsideSafeArea) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____activeObjectWhenNotInsideSafeArea) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____rectTransformToCheck) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____corners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____mainCamera) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SafeAreaRectChecker, ____initData) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SafeAreaRectChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SafeAreaRectChecker*, "", "SafeAreaRectChecker");
NEED_NO_BOX(::GlobalNamespace::__SafeAreaRectChecker__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SafeAreaRectChecker__InitData*, "", "SafeAreaRectChecker/InitData");
