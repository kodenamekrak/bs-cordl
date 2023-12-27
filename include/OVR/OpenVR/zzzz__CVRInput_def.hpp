#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRInput_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRInput)
namespace OVR::OpenVR {
struct InputAnalogActionData_t;
}
namespace OVR::OpenVR {
struct InputDigitalActionData_t;
}
namespace OVR::OpenVR {
struct InputPoseActionData_t;
}
namespace OVR::OpenVR {
struct EVRSkeletalTransformSpace;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EVRInputError;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
namespace OVR::OpenVR {
struct EVRSkeletalMotionRange;
}
namespace OVR::OpenVR {
struct VRActiveActionSet_t;
}
namespace OVR::OpenVR {
struct InputOriginInfo_t;
}
namespace OVR::OpenVR {
struct InputSkeletalActionData_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRInput;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRInput);
// Type: OVR.OpenVR::CVRInput
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8540))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8576))
// CS Name: ::OVR.OpenVR::CVRInput*
class CORDL_TYPE CVRInput : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x90
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRInput FnTable;

  constexpr ::OVR::OpenVR::IVRInput& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRInput const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRInput value);

  static inline ::OVR::OpenVR::CVRInput* New_ctor(void* pInterface);

  /// @brief Method .ctor addr 0x27f5a70 size 0x114 virtual false final false
  inline void _ctor(void* pInterface);

  /// @brief Method SetActionManifestPath addr 0x27f5b84 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError SetActionManifestPath(::StringW pchActionManifestPath);

  /// @brief Method GetActionSetHandle addr 0x27f5ba8 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetActionSetHandle(::StringW pchActionSetName, ByRef<uint64_t> pHandle);

  /// @brief Method GetActionHandle addr 0x27f5bd0 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetActionHandle(::StringW pchActionName, ByRef<uint64_t> pHandle);

  /// @brief Method GetInputSourceHandle addr 0x27f5bf8 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetInputSourceHandle(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle);

  /// @brief Method UpdateActionState addr 0x27f5c20 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVRInputError UpdateActionState(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*> pSets, uint32_t unSizeOfVRSelectedActionSet_t);

  /// @brief Method GetDigitalActionData addr 0x27f5c4c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetDigitalActionData(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method GetAnalogActionData addr 0x27f5c70 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetAnalogActionData(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method GetPoseActionData addr 0x27f5c94 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetPoseActionData(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow,
                                                        ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method GetSkeletalActionData addr 0x27f5cb8 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetSkeletalActionData(uint64_t action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

  /// @brief Method GetSkeletalBoneData addr 0x27f5cdc size 0x30 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetSkeletalBoneData(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                          ::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*> pTransformArray, uint64_t ulRestrictToDevice);

  /// @brief Method GetSkeletalBoneDataCompressed addr 0x27f5d0c size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetSkeletalBoneDataCompressed(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange,
                                                                    void* pvCompressedData, uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice);

  /// @brief Method DecompressSkeletalBoneData addr 0x27f5d38 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVRInputError DecompressSkeletalBoneData(void* pvCompressedBuffer, uint32_t unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace,
                                                                 ::ArrayW<::OVR::OpenVR::VRBoneTransform_t, ::Array<::OVR::OpenVR::VRBoneTransform_t>*> pTransformArray);

  /// @brief Method TriggerHapticVibrationAction addr 0x27f5d64 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError TriggerHapticVibrationAction(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude,
                                                                   uint64_t ulRestrictToDevice);

  /// @brief Method GetActionOrigins addr 0x27f5d88 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetActionOrigins(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ArrayW<uint64_t, ::Array<uint64_t>*> originsOut);

  /// @brief Method GetOriginLocalizedName addr 0x27f5db4 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetOriginLocalizedName(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint32_t unNameArraySize);

  /// @brief Method GetOriginTrackedDeviceInfo addr 0x27f5dd8 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError GetOriginTrackedDeviceInfo(uint64_t origin, ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize);

  /// @brief Method ShowActionOrigins addr 0x27f5dfc size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRInputError ShowActionOrigins(uint64_t actionSetHandle, uint64_t ulActionHandle);

  /// @brief Method ShowBindingsForActionSet addr 0x27f5e20 size 0x30 virtual false final false
  inline ::OVR::OpenVR::EVRInputError ShowBindingsForActionSet(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t, ::Array<::OVR::OpenVR::VRActiveActionSet_t>*> pSets, uint32_t unSizeOfVRSelectedActionSet_t,
                                                               uint64_t originToHighlight);

  // Ctor Parameters [CppParam { name: "", ty: "CVRInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRInput(CVRInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRInput(CVRInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRInput();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x90, def value: None
  ::OVR::OpenVR::IVRInput ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRInput, 0xa0>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRInput);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRInput*, "OVR.OpenVR", "CVRInput");