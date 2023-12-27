#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__TouchPhase_def.hpp"
#include "UnityEngine/zzzz__TouchType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct TouchPhase;
}
namespace UnityEngine {
struct TouchType;
}
// Forward declare root types
namespace UnityEngine {
struct Touch;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Touch);
// Type: UnityEngine::Touch
// SizeInfo { instance_size: 68, native_size: 68, calculated_instance_size: 68, calculated_native_size: 84, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(15952)), TypeDefinitionIndex(TypeDefinitionIndex(15950))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15953))
// CS Name: ::UnityEngine::Touch
struct CORDL_TYPE Touch {
public:
  // Declarations
  __declspec(property(get = get_fingerId)) int32_t fingerId;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector2 position;

  __declspec(property(get = get_rawPosition, put = set_rawPosition))::UnityEngine::Vector2 rawPosition;

  __declspec(property(get = get_deltaPosition, put = set_deltaPosition))::UnityEngine::Vector2 deltaPosition;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_tapCount)) int32_t tapCount;

  __declspec(property(get = get_phase))::UnityEngine::TouchPhase phase;

  __declspec(property(get = get_pressure)) float_t pressure;

  __declspec(property(get = get_maximumPossiblePressure)) float_t maximumPossiblePressure;

  __declspec(property(get = get_type))::UnityEngine::TouchType type;

  __declspec(property(get = get_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_radius)) float_t radius;

  __declspec(property(get = get_radiusVariance)) float_t radiusVariance;

  /// @brief Method get_fingerId addr 0x2d0e1d0 size 0x8 virtual false final false
  inline int32_t get_fingerId();

  /// @brief Method get_position addr 0x2d0e1d8 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method set_position addr 0x2d0e1e0 size 0x8 virtual false final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method get_rawPosition addr 0x2d0e1e8 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_rawPosition();

  /// @brief Method set_rawPosition addr 0x2d0e1f0 size 0x8 virtual false final false
  inline void set_rawPosition(::UnityEngine::Vector2 value);

  /// @brief Method get_deltaPosition addr 0x2d0e1f8 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_deltaPosition();

  /// @brief Method set_deltaPosition addr 0x2d0e200 size 0x8 virtual false final false
  inline void set_deltaPosition(::UnityEngine::Vector2 value);

  /// @brief Method get_deltaTime addr 0x2d0e208 size 0x8 virtual false final false
  inline float_t get_deltaTime();

  /// @brief Method get_tapCount addr 0x2d0e210 size 0x8 virtual false final false
  inline int32_t get_tapCount();

  /// @brief Method get_phase addr 0x2d0e218 size 0x8 virtual false final false
  inline ::UnityEngine::TouchPhase get_phase();

  /// @brief Method get_pressure addr 0x2d0e220 size 0x8 virtual false final false
  inline float_t get_pressure();

  /// @brief Method get_maximumPossiblePressure addr 0x2d0e228 size 0x8 virtual false final false
  inline float_t get_maximumPossiblePressure();

  /// @brief Method get_type addr 0x2d0e230 size 0x8 virtual false final false
  inline ::UnityEngine::TouchType get_type();

  /// @brief Method get_altitudeAngle addr 0x2d0e238 size 0x8 virtual false final false
  inline float_t get_altitudeAngle();

  /// @brief Method get_azimuthAngle addr 0x2d0e240 size 0x8 virtual false final false
  inline float_t get_azimuthAngle();

  /// @brief Method get_radius addr 0x2d0e248 size 0x8 virtual false final false
  inline float_t get_radius();

  /// @brief Method get_radiusVariance addr 0x2d0e250 size 0x8 virtual false final false
  inline float_t get_radiusVariance();

  // Ctor Parameters [CppParam { name: "m_FingerId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "m_RawPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_PositionDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None
  // }, CppParam { name: "m_TimeDelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty:
  // "::UnityEngine::TouchPhase", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::UnityEngine::TouchType", modifiers: "", def_value: None }, CppParam { name: "m_Pressure", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m_maximumPossiblePressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_RadiusVariance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Touch(int32_t m_FingerId, ::UnityEngine::Vector2 m_Position, ::UnityEngine::Vector2 m_RawPosition, ::UnityEngine::Vector2 m_PositionDelta, float_t m_TimeDelta, int32_t m_TapCount,
                  ::UnityEngine::TouchPhase m_Phase, ::UnityEngine::TouchType m_Type, float_t m_Pressure, float_t m_maximumPossiblePressure, float_t m_Radius, float_t m_RadiusVariance,
                  float_t m_AltitudeAngle, float_t m_AzimuthAngle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Touch();

  /// @brief Field m_FingerId, offset: 0x0, size: 0x4, def value: None
  int32_t m_FingerId;

  /// @brief Field m_Position, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Position;

  /// @brief Field m_RawPosition, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_RawPosition;

  /// @brief Field m_PositionDelta, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_PositionDelta;

  /// @brief Field m_TimeDelta, offset: 0x1c, size: 0x4, def value: None
  float_t m_TimeDelta;

  /// @brief Field m_TapCount, offset: 0x20, size: 0x4, def value: None
  int32_t m_TapCount;

  /// @brief Field m_Phase, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::TouchPhase m_Phase;

  /// @brief Field m_Type, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::TouchType m_Type;

  /// @brief Field m_Pressure, offset: 0x2c, size: 0x4, def value: None
  float_t m_Pressure;

  /// @brief Field m_maximumPossiblePressure, offset: 0x30, size: 0x4, def value: None
  float_t m_maximumPossiblePressure;

  /// @brief Field m_Radius, offset: 0x34, size: 0x4, def value: None
  float_t m_Radius;

  /// @brief Field m_RadiusVariance, offset: 0x38, size: 0x4, def value: None
  float_t m_RadiusVariance;

  /// @brief Field m_AltitudeAngle, offset: 0x3c, size: 0x4, def value: None
  float_t m_AltitudeAngle;

  /// @brief Field m_AzimuthAngle, offset: 0x40, size: 0x4, def value: None
  float_t m_AzimuthAngle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x44 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Touch, 0x44>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Touch, "UnityEngine", "Touch");