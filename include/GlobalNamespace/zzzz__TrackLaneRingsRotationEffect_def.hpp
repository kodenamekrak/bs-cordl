#pragma once
// IWYU pragma private; include "GlobalNamespace/TrackLaneRingsRotationEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackLaneRingsRotationEffect)
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
namespace GlobalNamespace {
class __TrackLaneRingsRotationEffect__RingRotationEffect;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsRotationEffect;
}
namespace GlobalNamespace {
class __TrackLaneRingsRotationEffect__RingRotationEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrackLaneRingsRotationEffect);
MARK_REF_PTR_T(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect);
// Type: ::RingRotationEffect
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TrackLaneRingsRotationEffect::RingRotationEffect*
class CORDL_TYPE __TrackLaneRingsRotationEffect__RingRotationEffect : public ::System::Object {
public:
  // Declarations
  /// @brief Field progressPos, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_progressPos, put = __cordl_internal_set_progressPos)) int32_t progressPos;

  /// @brief Field rotationAngle, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationAngle, put = __cordl_internal_set_rotationAngle)) float_t rotationAngle;

  /// @brief Field rotationFlexySpeed, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationFlexySpeed, put = __cordl_internal_set_rotationFlexySpeed)) float_t rotationFlexySpeed;

  /// @brief Field rotationPropagationSpeed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationPropagationSpeed, put = __cordl_internal_set_rotationPropagationSpeed)) int32_t rotationPropagationSpeed;

  /// @brief Field rotationStep, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationStep, put = __cordl_internal_set_rotationStep)) float_t rotationStep;

  static inline ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* New_ctor();

  constexpr int32_t const& __cordl_internal_get_progressPos() const;

  constexpr int32_t& __cordl_internal_get_progressPos();

  constexpr float_t const& __cordl_internal_get_rotationAngle() const;

  constexpr float_t& __cordl_internal_get_rotationAngle();

  constexpr float_t const& __cordl_internal_get_rotationFlexySpeed() const;

  constexpr float_t& __cordl_internal_get_rotationFlexySpeed();

  constexpr int32_t const& __cordl_internal_get_rotationPropagationSpeed() const;

  constexpr int32_t& __cordl_internal_get_rotationPropagationSpeed();

  constexpr float_t const& __cordl_internal_get_rotationStep() const;

  constexpr float_t& __cordl_internal_get_rotationStep();

  constexpr void __cordl_internal_set_progressPos(int32_t value);

  constexpr void __cordl_internal_set_rotationAngle(float_t value);

  constexpr void __cordl_internal_set_rotationFlexySpeed(float_t value);

  constexpr void __cordl_internal_set_rotationPropagationSpeed(int32_t value);

  constexpr void __cordl_internal_set_rotationStep(float_t value);

  /// @brief Method .ctor, addr 0x3b3aef8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackLaneRingsRotationEffect__RingRotationEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrackLaneRingsRotationEffect__RingRotationEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackLaneRingsRotationEffect__RingRotationEffect(__TrackLaneRingsRotationEffect__RingRotationEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackLaneRingsRotationEffect__RingRotationEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackLaneRingsRotationEffect__RingRotationEffect(__TrackLaneRingsRotationEffect__RingRotationEffect const&) = delete;

  /// @brief Field rotationAngle, offset: 0x10, size: 0x4, def value: None
  float_t ___rotationAngle;

  /// @brief Field rotationStep, offset: 0x14, size: 0x4, def value: None
  float_t ___rotationStep;

  /// @brief Field rotationFlexySpeed, offset: 0x18, size: 0x4, def value: None
  float_t ___rotationFlexySpeed;

  /// @brief Field rotationPropagationSpeed, offset: 0x1c, size: 0x4, def value: None
  int32_t ___rotationPropagationSpeed;

  /// @brief Field progressPos, offset: 0x20, size: 0x4, def value: None
  int32_t ___progressPos;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4367 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___rotationAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___rotationStep) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___rotationFlexySpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___rotationPropagationSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect, ___progressPos) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackLaneRingsRotationEffect
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TrackLaneRingsRotationEffect*
class CORDL_TYPE TrackLaneRingsRotationEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RingRotationEffect = ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect;

  /// @brief Field _activeRingRotationEffects, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__activeRingRotationEffects,
      put =
          __cordl_internal_set__activeRingRotationEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* _activeRingRotationEffects;

  /// @brief Field _ringRotationEffectsPool, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__ringRotationEffectsPool,
      put = __cordl_internal_set__ringRotationEffectsPool)) ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* _ringRotationEffectsPool;

  /// @brief Field _startupRotationAngle, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__startupRotationAngle, put = __cordl_internal_set__startupRotationAngle)) float_t _startupRotationAngle;

  /// @brief Field _startupRotationFlexySpeed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__startupRotationFlexySpeed, put = __cordl_internal_set__startupRotationFlexySpeed)) float_t _startupRotationFlexySpeed;

  /// @brief Field _startupRotationPropagationSpeed, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__startupRotationPropagationSpeed, put = __cordl_internal_set__startupRotationPropagationSpeed)) int32_t _startupRotationPropagationSpeed;

  /// @brief Field _startupRotationStep, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startupRotationStep, put = __cordl_internal_set__startupRotationStep)) float_t _startupRotationStep;

  /// @brief Field _trackLaneRingsManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trackLaneRingsManager, put = __cordl_internal_set__trackLaneRingsManager)) ::UnityW<::GlobalNamespace::TrackLaneRingsManager> _trackLaneRingsManager;

  /// @brief Field ringRotationEffectsToDelete, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_ringRotationEffectsToDelete,
                      put = __cordl_internal_set_ringRotationEffectsToDelete)) ::System::Collections::Generic::List_1<int32_t>* ringRotationEffectsToDelete;

  /// @brief Method AddRingRotationEffect, addr 0x3b3af10, size 0xe0, virtual false, abstract: false, final false
  inline void AddRingRotationEffect(float_t angle, float_t step, int32_t propagationSpeed, float_t flexySpeed);

  /// @brief Method Awake, addr 0x3b3ad84, size 0x174, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x3b3aff0, size 0x160, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetFirstRingDestinationRotationAngle, addr 0x3b3b2fc, size 0x38, virtual false, abstract: false, final false
  inline float_t GetFirstRingDestinationRotationAngle();

  /// @brief Method GetFirstRingRotationAngle, addr 0x3b3b2c4, size 0x38, virtual false, abstract: false, final false
  inline float_t GetFirstRingRotationAngle();

  static inline ::GlobalNamespace::TrackLaneRingsRotationEffect* New_ctor();

  /// @brief Method RecycleRingRotationEffect, addr 0x3b3b150, size 0xa4, virtual false, abstract: false, final false
  inline void RecycleRingRotationEffect(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* ringRotationEffect);

  /// @brief Method SpawnRingRotationEffect, addr 0x3b3b1f4, size 0xd0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect* SpawnRingRotationEffect();

  /// @brief Method Start, addr 0x3b3af00, size 0x10, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*& __cordl_internal_get__activeRingRotationEffects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*> const&
  __cordl_internal_get__activeRingRotationEffects() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*& __cordl_internal_get__ringRotationEffectsPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>*> const&
  __cordl_internal_get__ringRotationEffectsPool() const;

  constexpr float_t const& __cordl_internal_get__startupRotationAngle() const;

  constexpr float_t& __cordl_internal_get__startupRotationAngle();

  constexpr float_t const& __cordl_internal_get__startupRotationFlexySpeed() const;

  constexpr float_t& __cordl_internal_get__startupRotationFlexySpeed();

  constexpr int32_t const& __cordl_internal_get__startupRotationPropagationSpeed() const;

  constexpr int32_t& __cordl_internal_get__startupRotationPropagationSpeed();

  constexpr float_t const& __cordl_internal_get__startupRotationStep() const;

  constexpr float_t& __cordl_internal_get__startupRotationStep();

  constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsManager> const& __cordl_internal_get__trackLaneRingsManager() const;

  constexpr ::UnityW<::GlobalNamespace::TrackLaneRingsManager>& __cordl_internal_get__trackLaneRingsManager();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_ringRotationEffectsToDelete();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_ringRotationEffectsToDelete() const;

  constexpr void __cordl_internal_set__activeRingRotationEffects(::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* value);

  constexpr void __cordl_internal_set__ringRotationEffectsPool(::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* value);

  constexpr void __cordl_internal_set__startupRotationAngle(float_t value);

  constexpr void __cordl_internal_set__startupRotationFlexySpeed(float_t value);

  constexpr void __cordl_internal_set__startupRotationPropagationSpeed(int32_t value);

  constexpr void __cordl_internal_set__startupRotationStep(float_t value);

  constexpr void __cordl_internal_set__trackLaneRingsManager(::UnityW<::GlobalNamespace::TrackLaneRingsManager> value);

  constexpr void __cordl_internal_set_ringRotationEffectsToDelete(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x3b3b334, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackLaneRingsRotationEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackLaneRingsRotationEffect(TrackLaneRingsRotationEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsRotationEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackLaneRingsRotationEffect(TrackLaneRingsRotationEffect const&) = delete;

  /// @brief Field _trackLaneRingsManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TrackLaneRingsManager> ____trackLaneRingsManager;

  /// @brief Field _startupRotationAngle, offset: 0x28, size: 0x4, def value: None
  float_t ____startupRotationAngle;

  /// @brief Field _startupRotationStep, offset: 0x2c, size: 0x4, def value: None
  float_t ____startupRotationStep;

  /// @brief Field _startupRotationPropagationSpeed, offset: 0x30, size: 0x4, def value: None
  int32_t ____startupRotationPropagationSpeed;

  /// @brief Field _startupRotationFlexySpeed, offset: 0x34, size: 0x4, def value: None
  float_t ____startupRotationFlexySpeed;

  /// @brief Field _activeRingRotationEffects, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* ____activeRingRotationEffects;

  /// @brief Field _ringRotationEffectsPool, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*>* ____ringRotationEffectsPool;

  /// @brief Field ringRotationEffectsToDelete, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___ringRotationEffectsToDelete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrackLaneRingsRotationEffect, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____trackLaneRingsManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____startupRotationAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____startupRotationStep) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____startupRotationPropagationSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____startupRotationFlexySpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____activeRingRotationEffects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ____ringRotationEffectsPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackLaneRingsRotationEffect, ___ringRotationEffectsToDelete) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsRotationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffect*, "", "TrackLaneRingsRotationEffect");
NEED_NO_BOX(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TrackLaneRingsRotationEffect__RingRotationEffect*, "", "TrackLaneRingsRotationEffect/RingRotationEffect");
