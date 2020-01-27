// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPLodgeComponentInfo;
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
class UGripMotionControllerComponent;
struct FBPActorGripInformation;
struct FBPGripPair;
#ifdef VREXPANSIONPLUGIN_GS_Melee_generated_h
#error "GS_Melee.generated.h already included, missing '#pragma once' in GS_Melee.h"
#endif
#define VREXPANSIONPLUGIN_GS_Melee_generated_h

#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBPLodgeComponentInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FBPLodgeComponentInfo>();

#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_62_DELEGATE \
struct _Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms \
{ \
	FBPLodgeComponentInfo LogComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	TEnumAsByte<ECollisionChannel> OtherCompCollisionChannel; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FVROnMeleeShouldLodgeSignature_DelegateWrapper(const FMulticastScriptDelegate& VROnMeleeShouldLodgeSignature, FBPLodgeComponentInfo LogComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, ECollisionChannel OtherCompCollisionChannel, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_VRExpansionPlugin_eventVROnMeleeShouldLodgeSignature_Parms Parms; \
	Parms.LogComponent=LogComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherCompCollisionChannel=OtherCompCollisionChannel; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	VROnMeleeShouldLodgeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_SPARSE_DATA
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCOMOffsetInLocalSpace) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_bOffsetIsInWorldSpace); \
		P_GET_UBOOL(Z_Param_bLimitToXOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCOMOffsetInLocalSpace(Z_Param_GrippingController,Z_Param_Out_Grip,Z_Param_Offset,Z_Param_bOffsetIsInWorldSpace,Z_Param_bLimitToXOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrimaryAndSecondaryHands) \
	{ \
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_PrimaryGrip); \
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_SecondaryGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrimaryAndSecondaryHands(Z_Param_Out_PrimaryGrip,Z_Param_Out_SecondaryGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsLodged) \
	{ \
		P_GET_UBOOL(Z_Param_IsLodged); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_LodgeComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsLodged(Z_Param_IsLodged,Z_Param_LodgeComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLodgeHitCallback) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLodgeHitCallback(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCOMOffsetInLocalSpace) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_bOffsetIsInWorldSpace); \
		P_GET_UBOOL(Z_Param_bLimitToXOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCOMOffsetInLocalSpace(Z_Param_GrippingController,Z_Param_Out_Grip,Z_Param_Offset,Z_Param_bOffsetIsInWorldSpace,Z_Param_bLimitToXOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrimaryAndSecondaryHands) \
	{ \
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_PrimaryGrip); \
		P_GET_STRUCT_REF(FBPGripPair,Z_Param_Out_SecondaryGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrimaryAndSecondaryHands(Z_Param_Out_PrimaryGrip,Z_Param_Out_SecondaryGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsLodged) \
	{ \
		P_GET_UBOOL(Z_Param_IsLodged); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_LodgeComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsLodged(Z_Param_IsLodged,Z_Param_LodgeComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLodgeHitCallback) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLodgeHitCallback(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGS_Melee(); \
	friend struct Z_Construct_UClass_UGS_Melee_Statics; \
public: \
	DECLARE_CLASS(UGS_Melee, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_Melee)


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUGS_Melee(); \
	friend struct Z_Construct_UClass_UGS_Melee_Statics; \
public: \
	DECLARE_CLASS(UGS_Melee, UGS_Default, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGS_Melee)


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGS_Melee(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_Melee) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_Melee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_Melee); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_Melee(UGS_Melee&&); \
	NO_API UGS_Melee(const UGS_Melee&); \
public:


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGS_Melee(UGS_Melee&&); \
	NO_API UGS_Melee(const UGS_Melee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGS_Melee); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGS_Melee); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGS_Melee)


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_PRIVATE_PROPERTY_OFFSET
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_68_PROLOG
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_PRIVATE_PROPERTY_OFFSET \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_SPARSE_DATA \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_RPC_WRAPPERS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_INCLASS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_PRIVATE_PROPERTY_OFFSET \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_SPARSE_DATA \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_INCLASS_NO_PURE_DECLS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGS_Melee>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Melee_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
