#pragma once
// IWYU pragma private; include "UnityEngine/ConfigurableJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConfigurableJoint)
namespace UnityEngine {
struct ConfigurableJointMotion;
}
namespace UnityEngine {
struct JointDrive;
}
namespace UnityEngine {
struct JointProjectionMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RotationDriveMode;
}
namespace UnityEngine {
struct SoftJointLimitSpring;
}
namespace UnityEngine {
struct SoftJointLimit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ConfigurableJoint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ConfigurableJoint);
// Dependencies UnityEngine.Joint
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ConfigurableJoint
class CORDL_TYPE ConfigurableJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(get = get_angularXDrive, put = set_angularXDrive)) ::UnityEngine::JointDrive angularXDrive;

  __declspec(property(get = get_angularXLimitSpring, put = set_angularXLimitSpring)) ::UnityEngine::SoftJointLimitSpring angularXLimitSpring;

  __declspec(property(get = get_angularXMotion, put = set_angularXMotion)) ::UnityEngine::ConfigurableJointMotion angularXMotion;

  __declspec(property(get = get_angularYLimit, put = set_angularYLimit)) ::UnityEngine::SoftJointLimit angularYLimit;

  __declspec(property(get = get_angularYMotion, put = set_angularYMotion)) ::UnityEngine::ConfigurableJointMotion angularYMotion;

  __declspec(property(get = get_angularYZDrive, put = set_angularYZDrive)) ::UnityEngine::JointDrive angularYZDrive;

  __declspec(property(get = get_angularYZLimitSpring, put = set_angularYZLimitSpring)) ::UnityEngine::SoftJointLimitSpring angularYZLimitSpring;

  __declspec(property(get = get_angularZLimit, put = set_angularZLimit)) ::UnityEngine::SoftJointLimit angularZLimit;

  __declspec(property(get = get_angularZMotion, put = set_angularZMotion)) ::UnityEngine::ConfigurableJointMotion angularZMotion;

  __declspec(property(get = get_configuredInWorldSpace, put = set_configuredInWorldSpace)) bool configuredInWorldSpace;

  __declspec(property(get = get_highAngularXLimit, put = set_highAngularXLimit)) ::UnityEngine::SoftJointLimit highAngularXLimit;

  __declspec(property(get = get_linearLimit, put = set_linearLimit)) ::UnityEngine::SoftJointLimit linearLimit;

  __declspec(property(get = get_linearLimitSpring, put = set_linearLimitSpring)) ::UnityEngine::SoftJointLimitSpring linearLimitSpring;

  __declspec(property(get = get_lowAngularXLimit, put = set_lowAngularXLimit)) ::UnityEngine::SoftJointLimit lowAngularXLimit;

  __declspec(property(get = get_projectionAngle, put = set_projectionAngle)) float_t projectionAngle;

  __declspec(property(get = get_projectionDistance, put = set_projectionDistance)) float_t projectionDistance;

  __declspec(property(get = get_projectionMode, put = set_projectionMode)) ::UnityEngine::JointProjectionMode projectionMode;

  __declspec(property(get = get_rotationDriveMode, put = set_rotationDriveMode)) ::UnityEngine::RotationDriveMode rotationDriveMode;

  __declspec(property(get = get_secondaryAxis, put = set_secondaryAxis)) ::UnityEngine::Vector3 secondaryAxis;

  __declspec(property(get = get_slerpDrive, put = set_slerpDrive)) ::UnityEngine::JointDrive slerpDrive;

  __declspec(property(get = get_swapBodies, put = set_swapBodies)) bool swapBodies;

  __declspec(property(get = get_targetAngularVelocity, put = set_targetAngularVelocity)) ::UnityEngine::Vector3 targetAngularVelocity;

  __declspec(property(get = get_targetPosition, put = set_targetPosition)) ::UnityEngine::Vector3 targetPosition;

  __declspec(property(get = get_targetRotation, put = set_targetRotation)) ::UnityEngine::Quaternion targetRotation;

  __declspec(property(get = get_targetVelocity, put = set_targetVelocity)) ::UnityEngine::Vector3 targetVelocity;

  __declspec(property(get = get_xDrive, put = set_xDrive)) ::UnityEngine::JointDrive xDrive;

  __declspec(property(get = get_xMotion, put = set_xMotion)) ::UnityEngine::ConfigurableJointMotion xMotion;

  __declspec(property(get = get_yDrive, put = set_yDrive)) ::UnityEngine::JointDrive yDrive;

  __declspec(property(get = get_yMotion, put = set_yMotion)) ::UnityEngine::ConfigurableJointMotion yMotion;

  __declspec(property(get = get_zDrive, put = set_zDrive)) ::UnityEngine::JointDrive zDrive;

  __declspec(property(get = get_zMotion, put = set_zMotion)) ::UnityEngine::ConfigurableJointMotion zMotion;

  static inline ::UnityEngine::ConfigurableJoint* New_ctor();

  /// @brief Method .ctor, addr 0x491b328, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularXDrive, addr 0x491ad14, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularXDrive();

  /// @brief Method get_angularXDrive_Injected, addr 0x491ad68, size 0x44, virtual false, abstract: false, final false
  inline void get_angularXDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularXLimitSpring, addr 0x4919be4, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularXLimitSpring();

  /// @brief Method get_angularXLimitSpring_Injected, addr 0x4919c30, size 0x44, virtual false, abstract: false, final false
  inline void get_angularXLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularXMotion, addr 0x4919948, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularXMotion();

  /// @brief Method get_angularYLimit, addr 0x491a1c4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularYLimit();

  /// @brief Method get_angularYLimit_Injected, addr 0x491a220, size 0x44, virtual false, abstract: false, final false
  inline void get_angularYLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularYMotion, addr 0x49199c8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularYMotion();

  /// @brief Method get_angularYZDrive, addr 0x491ae40, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularYZDrive();

  /// @brief Method get_angularYZDrive_Injected, addr 0x491ae94, size 0x44, virtual false, abstract: false, final false
  inline void get_angularYZDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularYZLimitSpring, addr 0x4919d00, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularYZLimitSpring();

  /// @brief Method get_angularYZLimitSpring_Injected, addr 0x4919d4c, size 0x44, virtual false, abstract: false, final false
  inline void get_angularYZLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularZLimit, addr 0x491a2fc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularZLimit();

  /// @brief Method get_angularZLimit_Injected, addr 0x491a358, size 0x44, virtual false, abstract: false, final false
  inline void get_angularZLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularZMotion, addr 0x4919a48, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularZMotion();

  /// @brief Method get_configuredInWorldSpace, addr 0x491b228, size 0x3c, virtual false, abstract: false, final false
  inline bool get_configuredInWorldSpace();

  /// @brief Method get_highAngularXLimit, addr 0x491a08c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_highAngularXLimit();

  /// @brief Method get_highAngularXLimit_Injected, addr 0x491a0e8, size 0x44, virtual false, abstract: false, final false
  inline void get_highAngularXLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_linearLimit, addr 0x4919e1c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_linearLimit();

  /// @brief Method get_linearLimitSpring, addr 0x4919ac8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_linearLimitSpring();

  /// @brief Method get_linearLimitSpring_Injected, addr 0x4919b14, size 0x44, virtual false, abstract: false, final false
  inline void get_linearLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_linearLimit_Injected, addr 0x4919e78, size 0x44, virtual false, abstract: false, final false
  inline void get_linearLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_lowAngularXLimit, addr 0x4919f54, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_lowAngularXLimit();

  /// @brief Method get_lowAngularXLimit_Injected, addr 0x4919fb0, size 0x44, virtual false, abstract: false, final false
  inline void get_lowAngularXLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_projectionAngle, addr 0x491b1a0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_projectionAngle();

  /// @brief Method get_projectionDistance, addr 0x491b118, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_projectionDistance();

  /// @brief Method get_projectionMode, addr 0x491b098, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::JointProjectionMode get_projectionMode();

  /// @brief Method get_rotationDriveMode, addr 0x491ac94, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationDriveMode get_rotationDriveMode();

  /// @brief Method get_secondaryAxis, addr 0x4919690, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_secondaryAxis();

  /// @brief Method get_secondaryAxis_Injected, addr 0x49196ec, size 0x44, virtual false, abstract: false, final false
  inline void get_secondaryAxis_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_slerpDrive, addr 0x491af6c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_slerpDrive();

  /// @brief Method get_slerpDrive_Injected, addr 0x491afc0, size 0x44, virtual false, abstract: false, final false
  inline void get_slerpDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_swapBodies, addr 0x491b2a8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_swapBodies();

  /// @brief Method get_targetAngularVelocity, addr 0x491ab5c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetAngularVelocity();

  /// @brief Method get_targetAngularVelocity_Injected, addr 0x491abb8, size 0x44, virtual false, abstract: false, final false
  inline void get_targetAngularVelocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetPosition, addr 0x491a434, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x491a490, size 0x44, virtual false, abstract: false, final false
  inline void get_targetPosition_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x491aa28, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x491aa80, size 0x44, virtual false, abstract: false, final false
  inline void get_targetRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_targetVelocity, addr 0x491a56c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetVelocity();

  /// @brief Method get_targetVelocity_Injected, addr 0x491a5c8, size 0x44, virtual false, abstract: false, final false
  inline void get_targetVelocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_xDrive, addr 0x491a6a4, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x491a6f8, size 0x44, virtual false, abstract: false, final false
  inline void get_xDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_xMotion, addr 0x49197c8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_xMotion();

  /// @brief Method get_yDrive, addr 0x491a7d0, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x491a824, size 0x44, virtual false, abstract: false, final false
  inline void get_yDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_yMotion, addr 0x4919848, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_yMotion();

  /// @brief Method get_zDrive, addr 0x491a8fc, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x491a950, size 0x44, virtual false, abstract: false, final false
  inline void get_zDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_zMotion, addr 0x49198c8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_zMotion();

  /// @brief Method set_angularXDrive, addr 0x491adac, size 0x50, virtual false, abstract: false, final false
  inline void set_angularXDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularXDrive_Injected, addr 0x491adfc, size 0x44, virtual false, abstract: false, final false
  inline void set_angularXDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_angularXLimitSpring, addr 0x4919c74, size 0x48, virtual false, abstract: false, final false
  inline void set_angularXLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularXLimitSpring_Injected, addr 0x4919cbc, size 0x44, virtual false, abstract: false, final false
  inline void set_angularXLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_angularXMotion, addr 0x4919984, size 0x44, virtual false, abstract: false, final false
  inline void set_angularXMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYLimit, addr 0x491a264, size 0x54, virtual false, abstract: false, final false
  inline void set_angularYLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularYLimit_Injected, addr 0x491a2b8, size 0x44, virtual false, abstract: false, final false
  inline void set_angularYLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_angularYMotion, addr 0x4919a04, size 0x44, virtual false, abstract: false, final false
  inline void set_angularYMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYZDrive, addr 0x491aed8, size 0x50, virtual false, abstract: false, final false
  inline void set_angularYZDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularYZDrive_Injected, addr 0x491af28, size 0x44, virtual false, abstract: false, final false
  inline void set_angularYZDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_angularYZLimitSpring, addr 0x4919d90, size 0x48, virtual false, abstract: false, final false
  inline void set_angularYZLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularYZLimitSpring_Injected, addr 0x4919dd8, size 0x44, virtual false, abstract: false, final false
  inline void set_angularYZLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_angularZLimit, addr 0x491a39c, size 0x54, virtual false, abstract: false, final false
  inline void set_angularZLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularZLimit_Injected, addr 0x491a3f0, size 0x44, virtual false, abstract: false, final false
  inline void set_angularZLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_angularZMotion, addr 0x4919a84, size 0x44, virtual false, abstract: false, final false
  inline void set_angularZMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_configuredInWorldSpace, addr 0x491b264, size 0x44, virtual false, abstract: false, final false
  inline void set_configuredInWorldSpace(bool value);

  /// @brief Method set_highAngularXLimit, addr 0x491a12c, size 0x54, virtual false, abstract: false, final false
  inline void set_highAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_highAngularXLimit_Injected, addr 0x491a180, size 0x44, virtual false, abstract: false, final false
  inline void set_highAngularXLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_linearLimit, addr 0x4919ebc, size 0x54, virtual false, abstract: false, final false
  inline void set_linearLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_linearLimitSpring, addr 0x4919b58, size 0x48, virtual false, abstract: false, final false
  inline void set_linearLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_linearLimitSpring_Injected, addr 0x4919ba0, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_linearLimit_Injected, addr 0x4919f10, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_lowAngularXLimit, addr 0x4919ff4, size 0x54, virtual false, abstract: false, final false
  inline void set_lowAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_lowAngularXLimit_Injected, addr 0x491a048, size 0x44, virtual false, abstract: false, final false
  inline void set_lowAngularXLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_projectionAngle, addr 0x491b1dc, size 0x4c, virtual false, abstract: false, final false
  inline void set_projectionAngle(float_t value);

  /// @brief Method set_projectionDistance, addr 0x491b154, size 0x4c, virtual false, abstract: false, final false
  inline void set_projectionDistance(float_t value);

  /// @brief Method set_projectionMode, addr 0x491b0d4, size 0x44, virtual false, abstract: false, final false
  inline void set_projectionMode(::UnityEngine::JointProjectionMode value);

  /// @brief Method set_rotationDriveMode, addr 0x491acd0, size 0x44, virtual false, abstract: false, final false
  inline void set_rotationDriveMode(::UnityEngine::RotationDriveMode value);

  /// @brief Method set_secondaryAxis, addr 0x4919730, size 0x54, virtual false, abstract: false, final false
  inline void set_secondaryAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_secondaryAxis_Injected, addr 0x4919784, size 0x44, virtual false, abstract: false, final false
  inline void set_secondaryAxis_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_slerpDrive, addr 0x491b004, size 0x50, virtual false, abstract: false, final false
  inline void set_slerpDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_slerpDrive_Injected, addr 0x491b054, size 0x44, virtual false, abstract: false, final false
  inline void set_slerpDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_swapBodies, addr 0x491b2e4, size 0x44, virtual false, abstract: false, final false
  inline void set_swapBodies(bool value);

  /// @brief Method set_targetAngularVelocity, addr 0x491abfc, size 0x54, virtual false, abstract: false, final false
  inline void set_targetAngularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetAngularVelocity_Injected, addr 0x491ac50, size 0x44, virtual false, abstract: false, final false
  inline void set_targetAngularVelocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_targetPosition, addr 0x491a4d4, size 0x54, virtual false, abstract: false, final false
  inline void set_targetPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_targetPosition_Injected, addr 0x491a528, size 0x44, virtual false, abstract: false, final false
  inline void set_targetPosition_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_targetRotation, addr 0x491aac4, size 0x54, virtual false, abstract: false, final false
  inline void set_targetRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_targetRotation_Injected, addr 0x491ab18, size 0x44, virtual false, abstract: false, final false
  inline void set_targetRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_targetVelocity, addr 0x491a60c, size 0x54, virtual false, abstract: false, final false
  inline void set_targetVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetVelocity_Injected, addr 0x491a660, size 0x44, virtual false, abstract: false, final false
  inline void set_targetVelocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_xDrive, addr 0x491a73c, size 0x50, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x491a78c, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_xMotion, addr 0x4919804, size 0x44, virtual false, abstract: false, final false
  inline void set_xMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_yDrive, addr 0x491a868, size 0x50, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x491a8b8, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_yMotion, addr 0x4919884, size 0x44, virtual false, abstract: false, final false
  inline void set_yMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_zDrive, addr 0x491a994, size 0x50, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x491a9e4, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_zMotion, addr 0x4919904, size 0x44, virtual false, abstract: false, final false
  inline void set_zMotion(::UnityEngine::ConfigurableJointMotion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurableJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurableJoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurableJoint(ConfigurableJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurableJoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurableJoint(ConfigurableJoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15767 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ConfigurableJoint, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ConfigurableJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ConfigurableJoint*, "UnityEngine", "ConfigurableJoint");
