#pragma once
// IWYU pragma private; include "Unity/Burst/DiagnosticId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticId)
// Forward declare root types
namespace Unity::Burst {
struct DiagnosticId;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::DiagnosticId);
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.DiagnosticId
struct CORDL_TYPE DiagnosticId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DiagnosticId_Unwrapped
  enum struct __DiagnosticId_Unwrapped : int32_t {
    __E_ERR_InternalCompilerErrorInBackend = static_cast<int32_t>(0x64),
    __E_ERR_InternalCompilerErrorInFunction = static_cast<int32_t>(0x65),
    __E_ERR_InternalCompilerErrorInInstruction = static_cast<int32_t>(0x66),
    __E_ERR_OnlyStaticMethodsAllowed = static_cast<int32_t>(0x3e8),
    __E_ERR_UnableToAccessManagedMethod = static_cast<int32_t>(0x3e9),
    __E_ERR_UnableToFindInterfaceMethod = static_cast<int32_t>(0x3ea),
    __E_ERR_UnexpectedEmptyMethodBody = static_cast<int32_t>(0x3eb),
    __E_ERR_ManagedArgumentsNotSupported = static_cast<int32_t>(0x3ec),
    __E_ERR_CatchConstructionNotSupported = static_cast<int32_t>(0x3ee),
    __E_ERR_CatchAndFilterConstructionNotSupported = static_cast<int32_t>(0x3ef),
    __E_ERR_LdfldaWithFixedArrayExpected = static_cast<int32_t>(0x3f0),
    __E_ERR_PointerExpected = static_cast<int32_t>(0x3f1),
    __E_ERR_LoadingFieldFromManagedObjectNotSupported = static_cast<int32_t>(0x3f2),
    __E_ERR_LoadingFieldWithManagedTypeNotSupported = static_cast<int32_t>(0x3f3),
    __E_ERR_LoadingArgumentWithManagedTypeNotSupported = static_cast<int32_t>(0x3f4),
    __E_ERR_CallingBurstDiscardMethodWithReturnValueNotSupported = static_cast<int32_t>(0x3f7),
    __E_ERR_CallingManagedMethodNotSupported = static_cast<int32_t>(0x3f8),
    __E_ERR_InstructionUnboxNotSupported = static_cast<int32_t>(0x3fb),
    __E_ERR_InstructionBoxNotSupported = static_cast<int32_t>(0x3fc),
    __E_ERR_InstructionNewobjWithManagedTypeNotSupported = static_cast<int32_t>(0x3fd),
    __E_ERR_AccessingManagedArrayNotSupported = static_cast<int32_t>(0x3fe),
    __E_ERR_InstructionLdtokenFieldNotSupported = static_cast<int32_t>(0x3ff),
    __E_ERR_InstructionLdtokenMethodNotSupported = static_cast<int32_t>(0x400),
    __E_ERR_InstructionLdtokenTypeNotSupported = static_cast<int32_t>(0x401),
    __E_ERR_InstructionLdtokenNotSupported = static_cast<int32_t>(0x402),
    __E_ERR_InstructionLdvirtftnNotSupported = static_cast<int32_t>(0x403),
    __E_ERR_InstructionNewarrNotSupported = static_cast<int32_t>(0x404),
    __E_ERR_InstructionRethrowNotSupported = static_cast<int32_t>(0x405),
    __E_ERR_InstructionCastclassNotSupported = static_cast<int32_t>(0x406),
    __E_ERR_InstructionLdftnNotSupported = static_cast<int32_t>(0x408),
    __E_ERR_InstructionLdstrNotSupported = static_cast<int32_t>(0x409),
    __E_ERR_InstructionStsfldNotSupported = static_cast<int32_t>(0x40a),
    __E_ERR_InstructionEndfilterNotSupported = static_cast<int32_t>(0x40b),
    __E_ERR_InstructionEndfinallyNotSupported = static_cast<int32_t>(0x40c),
    __E_ERR_InstructionLeaveNotSupported = static_cast<int32_t>(0x40d),
    __E_ERR_InstructionNotSupported = static_cast<int32_t>(0x40e),
    __E_ERR_LoadingFromStaticFieldNotSupported = static_cast<int32_t>(0x40f),
    __E_ERR_LoadingFromNonReadonlyStaticFieldNotSupported = static_cast<int32_t>(0x410),
    __E_ERR_LoadingFromManagedStaticFieldNotSupported = static_cast<int32_t>(0x411),
    __E_ERR_LoadingFromManagedNonReadonlyStaticFieldNotSupported = static_cast<int32_t>(0x412),
    __E_ERR_InstructionStfldToManagedObjectNotSupported = static_cast<int32_t>(0x413),
    __E_ERR_InstructionLdlenNonConstantLengthNotSupported = static_cast<int32_t>(0x414),
    __E_ERR_StructWithAutoLayoutNotSupported = static_cast<int32_t>(0x415),
    __E_ERR_StructWithGenericParametersAndExplicitLayoutNotSupported = static_cast<int32_t>(0x417),
    __E_ERR_StructSizeNotSupported = static_cast<int32_t>(0x418),
    __E_ERR_StructZeroSizeNotSupported = static_cast<int32_t>(0x419),
    __E_ERR_MarshalAsOnFieldNotSupported = static_cast<int32_t>(0x41a),
    __E_ERR_TypeNotSupported = static_cast<int32_t>(0x41b),
    __E_ERR_RequiredTypeModifierNotSupported = static_cast<int32_t>(0x41c),
    __E_ERR_ErrorWhileProcessingVariable = static_cast<int32_t>(0x41d),
    __E_ERR_UnableToResolveType = static_cast<int32_t>(0x41e),
    __E_ERR_UnableToResolveMethod = static_cast<int32_t>(0x41f),
    __E_ERR_ConstructorNotSupported = static_cast<int32_t>(0x420),
    __E_ERR_FunctionPointerMethodMissingBurstCompileAttribute = static_cast<int32_t>(0x421),
    __E_ERR_FunctionPointerTypeMissingBurstCompileAttribute = static_cast<int32_t>(0x422),
    __E_ERR_FunctionPointerMethodAndTypeMissingBurstCompileAttribute = static_cast<int32_t>(0x423),
    __E_INF_FunctionPointerMethodAndTypeMissingMonoPInvokeCallbackAttribute = static_cast<int32_t>(0x295e),
    __E_ERR_MarshalAsOnParameterNotSupported = static_cast<int32_t>(0x425),
    __E_ERR_MarshalAsOnReturnTypeNotSupported = static_cast<int32_t>(0x426),
    __E_ERR_TypeNotBlittableForFunctionPointer = static_cast<int32_t>(0x427),
    __E_ERR_StructByValueNotSupported = static_cast<int32_t>(0x428),
    __E_ERR_StructsWithNonUnicodeCharsNotSupported = static_cast<int32_t>(0x42a),
    __E_ERR_VectorsByValueNotSupported = static_cast<int32_t>(0x42b),
    __E_ERR_MissingExternBindings = static_cast<int32_t>(0x42c),
    __E_ERR_MarshalAsNativeTypeOnReturnTypeNotSupported = static_cast<int32_t>(0x42d),
    __E_ERR_AssertTypeNotSupported = static_cast<int32_t>(0x42f),
    __E_ERR_StoringToReadOnlyFieldNotAllowed = static_cast<int32_t>(0x430),
    __E_ERR_StoringToFieldInReadOnlyParameterNotAllowed = static_cast<int32_t>(0x431),
    __E_ERR_StoringToReadOnlyParameterNotAllowed = static_cast<int32_t>(0x432),
    __E_ERR_TypeManagerStaticFieldNotCompatible = static_cast<int32_t>(0x433),
    __E_ERR_UnableToFindTypeIndexForTypeManagerType = static_cast<int32_t>(0x434),
    __E_ERR_UnableToFindFieldForTypeManager = static_cast<int32_t>(0x435),
    __E_ERR_CircularStaticConstructorUsage = static_cast<int32_t>(0x442),
    __E_ERR_ExternalInternalCallsInStaticConstructorsNotSupported = static_cast<int32_t>(0x443),
    __E_ERR_PlatformNotSupported = static_cast<int32_t>(0x444),
    __E_ERR_InitModuleVerificationError = static_cast<int32_t>(0x445),
    __E_ERR_ModuleVerificationError = static_cast<int32_t>(0x446),
    __E_ERR_UnableToFindTypeRequiredForTypeManager = static_cast<int32_t>(0x447),
    __E_ERR_UnexpectedIntegerTypesForBinaryOperation = static_cast<int32_t>(0x448),
    __E_ERR_BinaryOperationNotSupported = static_cast<int32_t>(0x449),
    __E_ERR_CalliWithThisNotSupported = static_cast<int32_t>(0x44a),
    __E_ERR_CalliNonCCallingConventionNotSupported = static_cast<int32_t>(0x44b),
    __E_ERR_StringLiteralTooBig = static_cast<int32_t>(0x44c),
    __E_ERR_LdftnNonCCallingConventionNotSupported = static_cast<int32_t>(0x44d),
    __E_ERR_UnableToCallMethodOnInterfaceObject = static_cast<int32_t>(0x44e),
    __E_ERR_UnsupportedCpuDependentBranch = static_cast<int32_t>(0x4af),
    __E_ERR_InstructionTargetCpuFeatureNotAllowedInThisBlock = static_cast<int32_t>(0x4b0),
    __E_ERR_AssumeRangeTypeMustBeInteger = static_cast<int32_t>(0x4b1),
    __E_ERR_AssumeRangeTypeMustBeSameSign = static_cast<int32_t>(0x4b2),
    __E_ERR_UnsupportedSpillTransform = static_cast<int32_t>(0x514),
    __E_ERR_UnsupportedSpillTransformTooManyUsers = static_cast<int32_t>(0x515),
    __E_ERR_MethodNotSupported = static_cast<int32_t>(0x516),
    __E_ERR_VectorsLoadFieldIsAddress = static_cast<int32_t>(0x517),
    __E_ERR_ConstantExpressionRequired = static_cast<int32_t>(0x518),
    __E_ERR_PointerArgumentsUnexpectedAliasing = static_cast<int32_t>(0x51e),
    __E_ERR_LoopIntrinsicMustBeCalledInsideLoop = static_cast<int32_t>(0x528),
    __E_ERR_LoopUnexpectedAutoVectorization = static_cast<int32_t>(0x529),
    __E_WRN_LoopIntrinsicCalledButLoopOptimizedAway = static_cast<int32_t>(0x52a),
    __E_ERR_AssertArgTypesDiffer = static_cast<int32_t>(0x532),
    __E_ERR_StringInternalCompilerFixedStringTooManyUsers = static_cast<int32_t>(0x53c),
    __E_ERR_StringInvalidFormatMissingClosingBrace = static_cast<int32_t>(0x53d),
    __E_ERR_StringInvalidIntegerForArgumentIndex = static_cast<int32_t>(0x53e),
    __E_ERR_StringInvalidFormatForArgument = static_cast<int32_t>(0x53f),
    __E_ERR_StringArgumentIndexOutOfRange = static_cast<int32_t>(0x540),
    __E_ERR_StringInvalidArgumentType = static_cast<int32_t>(0x541),
    __E_ERR_DebugLogNotSupported = static_cast<int32_t>(0x542),
    __E_ERR_StringInvalidNonLiteralFormat = static_cast<int32_t>(0x543),
    __E_ERR_StringInvalidStringFormatMethod = static_cast<int32_t>(0x544),
    __E_ERR_StringInvalidArgument = static_cast<int32_t>(0x545),
    __E_ERR_StringArrayInvalidArrayCreation = static_cast<int32_t>(0x546),
    __E_ERR_StringArrayInvalidArraySize = static_cast<int32_t>(0x547),
    __E_ERR_StringArrayInvalidControlFlow = static_cast<int32_t>(0x548),
    __E_ERR_StringArrayInvalidArrayIndex = static_cast<int32_t>(0x549),
    __E_ERR_StringArrayInvalidArrayIndexOutOfRange = static_cast<int32_t>(0x54a),
    __E_ERR_UnmanagedStringMethodMissing = static_cast<int32_t>(0x54b),
    __E_ERR_UnmanagedStringMethodInvalid = static_cast<int32_t>(0x54c),
    __E_ERR_ManagedStaticConstructor = static_cast<int32_t>(0x550),
    __E_ERR_StaticConstantArrayInStaticConstructor = static_cast<int32_t>(0x551),
    __E_WRN_ExceptionThrownInNonSafetyCheckGuardedFunction = static_cast<int32_t>(0x55a),
    __E_WRN_ACallToMethodHasBeenDiscarded = static_cast<int32_t>(0x55b),
    __E_ERR_AccessingNestedManagedArrayNotSupported = static_cast<int32_t>(0x564),
    __E_ERR_LdobjFromANonPointerNonReference = static_cast<int32_t>(0x565),
    __E_ERR_StringLiteralRequired = static_cast<int32_t>(0x566),
    __E_ERR_MultiDimensionalArrayUnsupported = static_cast<int32_t>(0x567),
    __E_ERR_NonBlittableAndNonManagedSequentialStructNotSupported = static_cast<int32_t>(0x568),
    __E_ERR_VarArgFunctionNotSupported = static_cast<int32_t>(0x569),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DiagnosticId_Unwrapped() const noexcept {
    return static_cast<__DiagnosticId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DiagnosticId(int32_t value__) noexcept;

  /// @brief Field ERR_AccessingManagedArrayNotSupported value: I32(1022)
  static ::Unity::Burst::DiagnosticId const ERR_AccessingManagedArrayNotSupported;

  /// @brief Field ERR_AccessingNestedManagedArrayNotSupported value: I32(1380)
  static ::Unity::Burst::DiagnosticId const ERR_AccessingNestedManagedArrayNotSupported;

  /// @brief Field ERR_AssertArgTypesDiffer value: I32(1330)
  static ::Unity::Burst::DiagnosticId const ERR_AssertArgTypesDiffer;

  /// @brief Field ERR_AssertTypeNotSupported value: I32(1071)
  static ::Unity::Burst::DiagnosticId const ERR_AssertTypeNotSupported;

  /// @brief Field ERR_AssumeRangeTypeMustBeInteger value: I32(1201)
  static ::Unity::Burst::DiagnosticId const ERR_AssumeRangeTypeMustBeInteger;

  /// @brief Field ERR_AssumeRangeTypeMustBeSameSign value: I32(1202)
  static ::Unity::Burst::DiagnosticId const ERR_AssumeRangeTypeMustBeSameSign;

  /// @brief Field ERR_BinaryOperationNotSupported value: I32(1097)
  static ::Unity::Burst::DiagnosticId const ERR_BinaryOperationNotSupported;

  /// @brief Field ERR_CalliNonCCallingConventionNotSupported value: I32(1099)
  static ::Unity::Burst::DiagnosticId const ERR_CalliNonCCallingConventionNotSupported;

  /// @brief Field ERR_CalliWithThisNotSupported value: I32(1098)
  static ::Unity::Burst::DiagnosticId const ERR_CalliWithThisNotSupported;

  /// @brief Field ERR_CallingBurstDiscardMethodWithReturnValueNotSupported value: I32(1015)
  static ::Unity::Burst::DiagnosticId const ERR_CallingBurstDiscardMethodWithReturnValueNotSupported;

  /// @brief Field ERR_CallingManagedMethodNotSupported value: I32(1016)
  static ::Unity::Burst::DiagnosticId const ERR_CallingManagedMethodNotSupported;

  /// @brief Field ERR_CatchAndFilterConstructionNotSupported value: I32(1007)
  static ::Unity::Burst::DiagnosticId const ERR_CatchAndFilterConstructionNotSupported;

  /// @brief Field ERR_CatchConstructionNotSupported value: I32(1006)
  static ::Unity::Burst::DiagnosticId const ERR_CatchConstructionNotSupported;

  /// @brief Field ERR_CircularStaticConstructorUsage value: I32(1090)
  static ::Unity::Burst::DiagnosticId const ERR_CircularStaticConstructorUsage;

  /// @brief Field ERR_ConstantExpressionRequired value: I32(1304)
  static ::Unity::Burst::DiagnosticId const ERR_ConstantExpressionRequired;

  /// @brief Field ERR_ConstructorNotSupported value: I32(1056)
  static ::Unity::Burst::DiagnosticId const ERR_ConstructorNotSupported;

  /// @brief Field ERR_DebugLogNotSupported value: I32(1346)
  static ::Unity::Burst::DiagnosticId const ERR_DebugLogNotSupported;

  /// @brief Field ERR_ErrorWhileProcessingVariable value: I32(1053)
  static ::Unity::Burst::DiagnosticId const ERR_ErrorWhileProcessingVariable;

  /// @brief Field ERR_ExternalInternalCallsInStaticConstructorsNotSupported value: I32(1091)
  static ::Unity::Burst::DiagnosticId const ERR_ExternalInternalCallsInStaticConstructorsNotSupported;

  /// @brief Field ERR_FunctionPointerMethodAndTypeMissingBurstCompileAttribute value: I32(1059)
  static ::Unity::Burst::DiagnosticId const ERR_FunctionPointerMethodAndTypeMissingBurstCompileAttribute;

  /// @brief Field ERR_FunctionPointerMethodMissingBurstCompileAttribute value: I32(1057)
  static ::Unity::Burst::DiagnosticId const ERR_FunctionPointerMethodMissingBurstCompileAttribute;

  /// @brief Field ERR_FunctionPointerTypeMissingBurstCompileAttribute value: I32(1058)
  static ::Unity::Burst::DiagnosticId const ERR_FunctionPointerTypeMissingBurstCompileAttribute;

  /// @brief Field ERR_InitModuleVerificationError value: I32(1093)
  static ::Unity::Burst::DiagnosticId const ERR_InitModuleVerificationError;

  /// @brief Field ERR_InstructionBoxNotSupported value: I32(1020)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionBoxNotSupported;

  /// @brief Field ERR_InstructionCastclassNotSupported value: I32(1030)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionCastclassNotSupported;

  /// @brief Field ERR_InstructionEndfilterNotSupported value: I32(1035)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionEndfilterNotSupported;

  /// @brief Field ERR_InstructionEndfinallyNotSupported value: I32(1036)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionEndfinallyNotSupported;

  /// @brief Field ERR_InstructionLdftnNotSupported value: I32(1032)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLdftnNotSupported;

  /// @brief Field ERR_InstructionLdlenNonConstantLengthNotSupported value: I32(1044)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLdlenNonConstantLengthNotSupported;

  /// @brief Field ERR_InstructionLdstrNotSupported value: I32(1033)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLdstrNotSupported;

  /// @brief Field ERR_InstructionLdtokenFieldNotSupported value: I32(1023)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLdtokenFieldNotSupported;

  /// @brief Field ERR_InstructionLdtokenMethodNotSupported value: I32(1024)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLdtokenMethodNotSupported;

  /// @brief Field ERR_InstructionLdtokenNotSupported value: I32(1026)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLdtokenNotSupported;

  /// @brief Field ERR_InstructionLdtokenTypeNotSupported value: I32(1025)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLdtokenTypeNotSupported;

  /// @brief Field ERR_InstructionLdvirtftnNotSupported value: I32(1027)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLdvirtftnNotSupported;

  /// @brief Field ERR_InstructionLeaveNotSupported value: I32(1037)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionLeaveNotSupported;

  /// @brief Field ERR_InstructionNewarrNotSupported value: I32(1028)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionNewarrNotSupported;

  /// @brief Field ERR_InstructionNewobjWithManagedTypeNotSupported value: I32(1021)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionNewobjWithManagedTypeNotSupported;

  /// @brief Field ERR_InstructionNotSupported value: I32(1038)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionNotSupported;

  /// @brief Field ERR_InstructionRethrowNotSupported value: I32(1029)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionRethrowNotSupported;

  /// @brief Field ERR_InstructionStfldToManagedObjectNotSupported value: I32(1043)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionStfldToManagedObjectNotSupported;

  /// @brief Field ERR_InstructionStsfldNotSupported value: I32(1034)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionStsfldNotSupported;

  /// @brief Field ERR_InstructionTargetCpuFeatureNotAllowedInThisBlock value: I32(1200)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionTargetCpuFeatureNotAllowedInThisBlock;

  /// @brief Field ERR_InstructionUnboxNotSupported value: I32(1019)
  static ::Unity::Burst::DiagnosticId const ERR_InstructionUnboxNotSupported;

  /// @brief Field ERR_InternalCompilerErrorInBackend value: I32(100)
  static ::Unity::Burst::DiagnosticId const ERR_InternalCompilerErrorInBackend;

  /// @brief Field ERR_InternalCompilerErrorInFunction value: I32(101)
  static ::Unity::Burst::DiagnosticId const ERR_InternalCompilerErrorInFunction;

  /// @brief Field ERR_InternalCompilerErrorInInstruction value: I32(102)
  static ::Unity::Burst::DiagnosticId const ERR_InternalCompilerErrorInInstruction;

  /// @brief Field ERR_LdfldaWithFixedArrayExpected value: I32(1008)
  static ::Unity::Burst::DiagnosticId const ERR_LdfldaWithFixedArrayExpected;

  /// @brief Field ERR_LdftnNonCCallingConventionNotSupported value: I32(1101)
  static ::Unity::Burst::DiagnosticId const ERR_LdftnNonCCallingConventionNotSupported;

  /// @brief Field ERR_LdobjFromANonPointerNonReference value: I32(1381)
  static ::Unity::Burst::DiagnosticId const ERR_LdobjFromANonPointerNonReference;

  /// @brief Field ERR_LoadingArgumentWithManagedTypeNotSupported value: I32(1012)
  static ::Unity::Burst::DiagnosticId const ERR_LoadingArgumentWithManagedTypeNotSupported;

  /// @brief Field ERR_LoadingFieldFromManagedObjectNotSupported value: I32(1010)
  static ::Unity::Burst::DiagnosticId const ERR_LoadingFieldFromManagedObjectNotSupported;

  /// @brief Field ERR_LoadingFieldWithManagedTypeNotSupported value: I32(1011)
  static ::Unity::Burst::DiagnosticId const ERR_LoadingFieldWithManagedTypeNotSupported;

  /// @brief Field ERR_LoadingFromManagedNonReadonlyStaticFieldNotSupported value: I32(1042)
  static ::Unity::Burst::DiagnosticId const ERR_LoadingFromManagedNonReadonlyStaticFieldNotSupported;

  /// @brief Field ERR_LoadingFromManagedStaticFieldNotSupported value: I32(1041)
  static ::Unity::Burst::DiagnosticId const ERR_LoadingFromManagedStaticFieldNotSupported;

  /// @brief Field ERR_LoadingFromNonReadonlyStaticFieldNotSupported value: I32(1040)
  static ::Unity::Burst::DiagnosticId const ERR_LoadingFromNonReadonlyStaticFieldNotSupported;

  /// @brief Field ERR_LoadingFromStaticFieldNotSupported value: I32(1039)
  static ::Unity::Burst::DiagnosticId const ERR_LoadingFromStaticFieldNotSupported;

  /// @brief Field ERR_LoopIntrinsicMustBeCalledInsideLoop value: I32(1320)
  static ::Unity::Burst::DiagnosticId const ERR_LoopIntrinsicMustBeCalledInsideLoop;

  /// @brief Field ERR_LoopUnexpectedAutoVectorization value: I32(1321)
  static ::Unity::Burst::DiagnosticId const ERR_LoopUnexpectedAutoVectorization;

  /// @brief Field ERR_ManagedArgumentsNotSupported value: I32(1004)
  static ::Unity::Burst::DiagnosticId const ERR_ManagedArgumentsNotSupported;

  /// @brief Field ERR_ManagedStaticConstructor value: I32(1360)
  static ::Unity::Burst::DiagnosticId const ERR_ManagedStaticConstructor;

  /// @brief Field ERR_MarshalAsNativeTypeOnReturnTypeNotSupported value: I32(1069)
  static ::Unity::Burst::DiagnosticId const ERR_MarshalAsNativeTypeOnReturnTypeNotSupported;

  /// @brief Field ERR_MarshalAsOnFieldNotSupported value: I32(1050)
  static ::Unity::Burst::DiagnosticId const ERR_MarshalAsOnFieldNotSupported;

  /// @brief Field ERR_MarshalAsOnParameterNotSupported value: I32(1061)
  static ::Unity::Burst::DiagnosticId const ERR_MarshalAsOnParameterNotSupported;

  /// @brief Field ERR_MarshalAsOnReturnTypeNotSupported value: I32(1062)
  static ::Unity::Burst::DiagnosticId const ERR_MarshalAsOnReturnTypeNotSupported;

  /// @brief Field ERR_MethodNotSupported value: I32(1302)
  static ::Unity::Burst::DiagnosticId const ERR_MethodNotSupported;

  /// @brief Field ERR_MissingExternBindings value: I32(1068)
  static ::Unity::Burst::DiagnosticId const ERR_MissingExternBindings;

  /// @brief Field ERR_ModuleVerificationError value: I32(1094)
  static ::Unity::Burst::DiagnosticId const ERR_ModuleVerificationError;

  /// @brief Field ERR_MultiDimensionalArrayUnsupported value: I32(1383)
  static ::Unity::Burst::DiagnosticId const ERR_MultiDimensionalArrayUnsupported;

  /// @brief Field ERR_NonBlittableAndNonManagedSequentialStructNotSupported value: I32(1384)
  static ::Unity::Burst::DiagnosticId const ERR_NonBlittableAndNonManagedSequentialStructNotSupported;

  /// @brief Field ERR_OnlyStaticMethodsAllowed value: I32(1000)
  static ::Unity::Burst::DiagnosticId const ERR_OnlyStaticMethodsAllowed;

  /// @brief Field ERR_PlatformNotSupported value: I32(1092)
  static ::Unity::Burst::DiagnosticId const ERR_PlatformNotSupported;

  /// @brief Field ERR_PointerArgumentsUnexpectedAliasing value: I32(1310)
  static ::Unity::Burst::DiagnosticId const ERR_PointerArgumentsUnexpectedAliasing;

  /// @brief Field ERR_PointerExpected value: I32(1009)
  static ::Unity::Burst::DiagnosticId const ERR_PointerExpected;

  /// @brief Field ERR_RequiredTypeModifierNotSupported value: I32(1052)
  static ::Unity::Burst::DiagnosticId const ERR_RequiredTypeModifierNotSupported;

  /// @brief Field ERR_StaticConstantArrayInStaticConstructor value: I32(1361)
  static ::Unity::Burst::DiagnosticId const ERR_StaticConstantArrayInStaticConstructor;

  /// @brief Field ERR_StoringToFieldInReadOnlyParameterNotAllowed value: I32(1073)
  static ::Unity::Burst::DiagnosticId const ERR_StoringToFieldInReadOnlyParameterNotAllowed;

  /// @brief Field ERR_StoringToReadOnlyFieldNotAllowed value: I32(1072)
  static ::Unity::Burst::DiagnosticId const ERR_StoringToReadOnlyFieldNotAllowed;

  /// @brief Field ERR_StoringToReadOnlyParameterNotAllowed value: I32(1074)
  static ::Unity::Burst::DiagnosticId const ERR_StoringToReadOnlyParameterNotAllowed;

  /// @brief Field ERR_StringArgumentIndexOutOfRange value: I32(1344)
  static ::Unity::Burst::DiagnosticId const ERR_StringArgumentIndexOutOfRange;

  /// @brief Field ERR_StringArrayInvalidArrayCreation value: I32(1350)
  static ::Unity::Burst::DiagnosticId const ERR_StringArrayInvalidArrayCreation;

  /// @brief Field ERR_StringArrayInvalidArrayIndex value: I32(1353)
  static ::Unity::Burst::DiagnosticId const ERR_StringArrayInvalidArrayIndex;

  /// @brief Field ERR_StringArrayInvalidArrayIndexOutOfRange value: I32(1354)
  static ::Unity::Burst::DiagnosticId const ERR_StringArrayInvalidArrayIndexOutOfRange;

  /// @brief Field ERR_StringArrayInvalidArraySize value: I32(1351)
  static ::Unity::Burst::DiagnosticId const ERR_StringArrayInvalidArraySize;

  /// @brief Field ERR_StringArrayInvalidControlFlow value: I32(1352)
  static ::Unity::Burst::DiagnosticId const ERR_StringArrayInvalidControlFlow;

  /// @brief Field ERR_StringInternalCompilerFixedStringTooManyUsers value: I32(1340)
  static ::Unity::Burst::DiagnosticId const ERR_StringInternalCompilerFixedStringTooManyUsers;

  /// @brief Field ERR_StringInvalidArgument value: I32(1349)
  static ::Unity::Burst::DiagnosticId const ERR_StringInvalidArgument;

  /// @brief Field ERR_StringInvalidArgumentType value: I32(1345)
  static ::Unity::Burst::DiagnosticId const ERR_StringInvalidArgumentType;

  /// @brief Field ERR_StringInvalidFormatForArgument value: I32(1343)
  static ::Unity::Burst::DiagnosticId const ERR_StringInvalidFormatForArgument;

  /// @brief Field ERR_StringInvalidFormatMissingClosingBrace value: I32(1341)
  static ::Unity::Burst::DiagnosticId const ERR_StringInvalidFormatMissingClosingBrace;

  /// @brief Field ERR_StringInvalidIntegerForArgumentIndex value: I32(1342)
  static ::Unity::Burst::DiagnosticId const ERR_StringInvalidIntegerForArgumentIndex;

  /// @brief Field ERR_StringInvalidNonLiteralFormat value: I32(1347)
  static ::Unity::Burst::DiagnosticId const ERR_StringInvalidNonLiteralFormat;

  /// @brief Field ERR_StringInvalidStringFormatMethod value: I32(1348)
  static ::Unity::Burst::DiagnosticId const ERR_StringInvalidStringFormatMethod;

  /// @brief Field ERR_StringLiteralRequired value: I32(1382)
  static ::Unity::Burst::DiagnosticId const ERR_StringLiteralRequired;

  /// @brief Field ERR_StringLiteralTooBig value: I32(1100)
  static ::Unity::Burst::DiagnosticId const ERR_StringLiteralTooBig;

  /// @brief Field ERR_StructByValueNotSupported value: I32(1064)
  static ::Unity::Burst::DiagnosticId const ERR_StructByValueNotSupported;

  /// @brief Field ERR_StructSizeNotSupported value: I32(1048)
  static ::Unity::Burst::DiagnosticId const ERR_StructSizeNotSupported;

  /// @brief Field ERR_StructWithAutoLayoutNotSupported value: I32(1045)
  static ::Unity::Burst::DiagnosticId const ERR_StructWithAutoLayoutNotSupported;

  /// @brief Field ERR_StructWithGenericParametersAndExplicitLayoutNotSupported value: I32(1047)
  static ::Unity::Burst::DiagnosticId const ERR_StructWithGenericParametersAndExplicitLayoutNotSupported;

  /// @brief Field ERR_StructZeroSizeNotSupported value: I32(1049)
  static ::Unity::Burst::DiagnosticId const ERR_StructZeroSizeNotSupported;

  /// @brief Field ERR_StructsWithNonUnicodeCharsNotSupported value: I32(1066)
  static ::Unity::Burst::DiagnosticId const ERR_StructsWithNonUnicodeCharsNotSupported;

  /// @brief Field ERR_TypeManagerStaticFieldNotCompatible value: I32(1075)
  static ::Unity::Burst::DiagnosticId const ERR_TypeManagerStaticFieldNotCompatible;

  /// @brief Field ERR_TypeNotBlittableForFunctionPointer value: I32(1063)
  static ::Unity::Burst::DiagnosticId const ERR_TypeNotBlittableForFunctionPointer;

  /// @brief Field ERR_TypeNotSupported value: I32(1051)
  static ::Unity::Burst::DiagnosticId const ERR_TypeNotSupported;

  /// @brief Field ERR_UnableToAccessManagedMethod value: I32(1001)
  static ::Unity::Burst::DiagnosticId const ERR_UnableToAccessManagedMethod;

  /// @brief Field ERR_UnableToCallMethodOnInterfaceObject value: I32(1102)
  static ::Unity::Burst::DiagnosticId const ERR_UnableToCallMethodOnInterfaceObject;

  /// @brief Field ERR_UnableToFindFieldForTypeManager value: I32(1077)
  static ::Unity::Burst::DiagnosticId const ERR_UnableToFindFieldForTypeManager;

  /// @brief Field ERR_UnableToFindInterfaceMethod value: I32(1002)
  static ::Unity::Burst::DiagnosticId const ERR_UnableToFindInterfaceMethod;

  /// @brief Field ERR_UnableToFindTypeIndexForTypeManagerType value: I32(1076)
  static ::Unity::Burst::DiagnosticId const ERR_UnableToFindTypeIndexForTypeManagerType;

  /// @brief Field ERR_UnableToFindTypeRequiredForTypeManager value: I32(1095)
  static ::Unity::Burst::DiagnosticId const ERR_UnableToFindTypeRequiredForTypeManager;

  /// @brief Field ERR_UnableToResolveMethod value: I32(1055)
  static ::Unity::Burst::DiagnosticId const ERR_UnableToResolveMethod;

  /// @brief Field ERR_UnableToResolveType value: I32(1054)
  static ::Unity::Burst::DiagnosticId const ERR_UnableToResolveType;

  /// @brief Field ERR_UnexpectedEmptyMethodBody value: I32(1003)
  static ::Unity::Burst::DiagnosticId const ERR_UnexpectedEmptyMethodBody;

  /// @brief Field ERR_UnexpectedIntegerTypesForBinaryOperation value: I32(1096)
  static ::Unity::Burst::DiagnosticId const ERR_UnexpectedIntegerTypesForBinaryOperation;

  /// @brief Field ERR_UnmanagedStringMethodInvalid value: I32(1356)
  static ::Unity::Burst::DiagnosticId const ERR_UnmanagedStringMethodInvalid;

  /// @brief Field ERR_UnmanagedStringMethodMissing value: I32(1355)
  static ::Unity::Burst::DiagnosticId const ERR_UnmanagedStringMethodMissing;

  /// @brief Field ERR_UnsupportedCpuDependentBranch value: I32(1199)
  static ::Unity::Burst::DiagnosticId const ERR_UnsupportedCpuDependentBranch;

  /// @brief Field ERR_UnsupportedSpillTransform value: I32(1300)
  static ::Unity::Burst::DiagnosticId const ERR_UnsupportedSpillTransform;

  /// @brief Field ERR_UnsupportedSpillTransformTooManyUsers value: I32(1301)
  static ::Unity::Burst::DiagnosticId const ERR_UnsupportedSpillTransformTooManyUsers;

  /// @brief Field ERR_VarArgFunctionNotSupported value: I32(1385)
  static ::Unity::Burst::DiagnosticId const ERR_VarArgFunctionNotSupported;

  /// @brief Field ERR_VectorsByValueNotSupported value: I32(1067)
  static ::Unity::Burst::DiagnosticId const ERR_VectorsByValueNotSupported;

  /// @brief Field ERR_VectorsLoadFieldIsAddress value: I32(1303)
  static ::Unity::Burst::DiagnosticId const ERR_VectorsLoadFieldIsAddress;

  /// @brief Field INF_FunctionPointerMethodAndTypeMissingMonoPInvokeCallbackAttribute value: I32(10590)
  static ::Unity::Burst::DiagnosticId const INF_FunctionPointerMethodAndTypeMissingMonoPInvokeCallbackAttribute;

  /// @brief Field WRN_ACallToMethodHasBeenDiscarded value: I32(1371)
  static ::Unity::Burst::DiagnosticId const WRN_ACallToMethodHasBeenDiscarded;

  /// @brief Field WRN_ExceptionThrownInNonSafetyCheckGuardedFunction value: I32(1370)
  static ::Unity::Burst::DiagnosticId const WRN_ExceptionThrownInNonSafetyCheckGuardedFunction;

  /// @brief Field WRN_LoopIntrinsicCalledButLoopOptimizedAway value: I32(1322)
  static ::Unity::Burst::DiagnosticId const WRN_LoopIntrinsicCalledButLoopOptimizedAway;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14629 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::DiagnosticId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::DiagnosticId, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::DiagnosticId, "Unity.Burst", "DiagnosticId");
