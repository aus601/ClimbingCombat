// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
struct FTransform;
#ifdef VREXPANSIONPLUGIN_VREPhysicsConstraintComponent_generated_h
#error "VREPhysicsConstraintComponent.generated.h already included, missing '#pragma once' in VREPhysicsConstraintComponent.h"
#endif
#define VREXPANSIONPLUGIN_VREPhysicsConstraintComponent_generated_h

#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_SPARSE_DATA
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAngularOffset) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewAngularOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularOffset(Z_Param_NewAngularOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngularOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAngularOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLinearDistance) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FrameOfReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentLinearDistance(EConstraintFrame::Type(Z_Param_FrameOfReference)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalPose) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintFrame); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GlobalPose); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGlobalPose(EConstraintFrame::Type(Z_Param_ConstraintFrame),Z_Param_Out_GlobalPose); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalPose) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalPose(EConstraintFrame::Type(Z_Param_ConstraintFrame)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConstraintReferenceFrame) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Frame); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RefFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetConstraintReferenceFrame(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintToForceBased) \
	{ \
		P_GET_UBOOL(Z_Param_bUseForceConstraint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintToForceBased(Z_Param_bUseForceConstraint); \
		P_NATIVE_END; \
	}


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAngularOffset) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewAngularOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAngularOffset(Z_Param_NewAngularOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAngularOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetAngularOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLinearDistance) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FrameOfReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentLinearDistance(EConstraintFrame::Type(Z_Param_FrameOfReference)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalPose) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintFrame); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GlobalPose); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGlobalPose(EConstraintFrame::Type(Z_Param_ConstraintFrame),Z_Param_Out_GlobalPose); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalPose) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ConstraintFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalPose(EConstraintFrame::Type(Z_Param_ConstraintFrame)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConstraintReferenceFrame) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Frame); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RefFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetConstraintReferenceFrame(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConstraintToForceBased) \
	{ \
		P_GET_UBOOL(Z_Param_bUseForceConstraint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConstraintToForceBased(Z_Param_bUseForceConstraint); \
		P_NATIVE_END; \
	}


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREPhysicsConstraintComponent(); \
	friend struct Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UVREPhysicsConstraintComponent, UPhysicsConstraintComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVREPhysicsConstraintComponent)


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUVREPhysicsConstraintComponent(); \
	friend struct Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UVREPhysicsConstraintComponent, UPhysicsConstraintComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVREPhysicsConstraintComponent)


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREPhysicsConstraintComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREPhysicsConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREPhysicsConstraintComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREPhysicsConstraintComponent(UVREPhysicsConstraintComponent&&); \
	NO_API UVREPhysicsConstraintComponent(const UVREPhysicsConstraintComponent&); \
public:


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREPhysicsConstraintComponent(UVREPhysicsConstraintComponent&&); \
	NO_API UVREPhysicsConstraintComponent(const UVREPhysicsConstraintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREPhysicsConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREPhysicsConstraintComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREPhysicsConstraintComponent)


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_17_PROLOG
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_SPARSE_DATA \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_RPC_WRAPPERS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_INCLASS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_SPARSE_DATA \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_INCLASS_NO_PURE_DECLS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVREPhysicsConstraintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
