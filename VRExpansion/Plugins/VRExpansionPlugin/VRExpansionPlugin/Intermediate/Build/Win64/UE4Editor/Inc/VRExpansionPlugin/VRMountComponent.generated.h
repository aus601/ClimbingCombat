// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class UGripMotionControllerComponent;
class USceneComponent;
struct FBPActorGripInformation;
class UVRGripScriptBase;
struct FTransform_NetQuantize;
struct FBPGripPair;
struct FVector;
struct FTransform;
struct FBPAdvGripSettings;
enum class EGripLateUpdateSettings : uint8;
enum class EGripMovementReplicationSettings : uint8;
enum class EGripCollisionType : uint8;
enum class ESecondaryGripType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
#ifdef VREXPANSIONPLUGIN_VRMountComponent_generated_h
#error "VRMountComponent.generated.h already included, missing '#pragma once' in VRMountComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRMountComponent_generated_h

#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_SPARSE_DATA
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_RPC_WRAPPERS \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent); \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference); \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* NewHoldingController, uint8 GripID, bool bNewIsHeld); \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& CurHoldingControllers, bool& bCurIsHeld); \
	virtual bool AllowsMultipleGrips_Implementation(); \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation(); \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInput) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInput_Implementation(Z_Param_Key,EInputEvent(Z_Param_KeyEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController); \
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_GripOwningController,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_GripOwningController,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_UBOOL(Z_Param_bWasSocketed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_UBOOL(Z_Param_bWasSocketed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripScripts) \
	{ \
		P_GET_TARRAY_REF(UVRGripScriptBase*,Z_Param_Out_ArrayReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGripScripts_Implementation(Z_Param_Out_ArrayReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestsSocketing) \
	{ \
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ParentToSocketTo); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_OptionalSocketName); \
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestsSocketing_Implementation(Z_Param_Out_ParentToSocketTo,Z_Param_Out_OptionalSocketName,Z_Param_Out_RelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeld) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_NewHoldingController); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_UBOOL(Z_Param_bNewIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHeld_Implementation(Z_Param_NewHoldingController,Z_Param_GripID,Z_Param_bNewIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeld) \
	{ \
		P_GET_TARRAY_REF(FBPGripPair,Z_Param_Out_CurHoldingControllers); \
		P_GET_UBOOL_REF(Z_Param_Out_bCurIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsHeld_Implementation(Z_Param_Out_CurHoldingControllers,Z_Param_Out_bCurIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowsMultipleGrips) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AllowsMultipleGrips_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestGripSlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL(Z_Param_bSecondarySlot); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClosestGripSlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_bSecondarySlot,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_CallingController,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdvancedGripSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPAdvGripSettings*)Z_Param__Result=P_THIS->AdvancedGripSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_GripStiffnessOut); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_GripDampingOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripStiffnessAndDamping_Implementation(Z_Param_Out_GripStiffnessOut,Z_Param_Out_GripDampingOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripLateUpdateSettings*)Z_Param__Result=P_THIS->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripMovementReplicationSettings*)Z_Param__Result=P_THIS->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryGripType) \
	{ \
		P_GET_UBOOL(Z_Param_bIsSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=P_THIS->GetPrimaryGripType_Implementation(Z_Param_bIsSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESecondaryGripType*)Z_Param__Result=P_THIS->SecondaryGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=P_THIS->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInitialMountLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetInitialMountLocation(); \
		P_NATIVE_END; \
	}


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent); \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference); \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* NewHoldingController, uint8 GripID, bool bNewIsHeld); \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& CurHoldingControllers, bool& bCurIsHeld); \
	virtual bool AllowsMultipleGrips_Implementation(); \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation(); \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInput) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_PROPERTY(UByteProperty,Z_Param_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInput_Implementation(Z_Param_Key,EInputEvent(Z_Param_KeyEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUsed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUsed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController); \
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_GripOwningController,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_GripOwningController,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_UBOOL(Z_Param_bWasSocketed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnChildGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGripRelease) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_UBOOL(Z_Param_bWasSocketed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickGrip) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripScripts) \
	{ \
		P_GET_TARRAY_REF(UVRGripScriptBase*,Z_Param_Out_ArrayReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGripScripts_Implementation(Z_Param_Out_ArrayReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestsSocketing) \
	{ \
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ParentToSocketTo); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_OptionalSocketName); \
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RequestsSocketing_Implementation(Z_Param_Out_ParentToSocketTo,Z_Param_Out_OptionalSocketName,Z_Param_Out_RelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeld) \
	{ \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_NewHoldingController); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripID); \
		P_GET_UBOOL(Z_Param_bNewIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHeld_Implementation(Z_Param_NewHoldingController,Z_Param_GripID,Z_Param_bNewIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeld) \
	{ \
		P_GET_TARRAY_REF(FBPGripPair,Z_Param_Out_CurHoldingControllers); \
		P_GET_UBOOL_REF(Z_Param_Out_bCurIsHeld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsHeld_Implementation(Z_Param_Out_CurHoldingControllers,Z_Param_Out_bCurIsHeld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllowsMultipleGrips) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AllowsMultipleGrips_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestGripSlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL(Z_Param_bSecondarySlot); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OverridePrefix); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClosestGripSlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_bSecondarySlot,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_CallingController,Z_Param_OverridePrefix); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdvancedGripSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPAdvGripSettings*)Z_Param__Result=P_THIS->AdvancedGripSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_GripStiffnessOut); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_GripDampingOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetGripStiffnessAndDamping_Implementation(Z_Param_Out_GripStiffnessOut,Z_Param_Out_GripDampingOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripLateUpdateSettings*)Z_Param__Result=P_THIS->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripMovementReplicationSettings*)Z_Param__Result=P_THIS->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryGripType) \
	{ \
		P_GET_UBOOL(Z_Param_bIsSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripCollisionType*)Z_Param__Result=P_THIS->GetPrimaryGripType_Implementation(Z_Param_bIsSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESecondaryGripType*)Z_Param__Result=P_THIS->SecondaryGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=P_THIS->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInitialMountLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetInitialMountLocation(); \
		P_NATIVE_END; \
	}


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_EVENT_PARMS \
	struct VRMountComponent_eventAdvancedGripSettings_Parms \
	{ \
		FBPAdvGripSettings ReturnValue; \
	}; \
	struct VRMountComponent_eventAllowsMultipleGrips_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventAllowsMultipleGrips_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventClosestGripSlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bSecondarySlot; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct VRMountComponent_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventGetGripScripts_Parms \
	{ \
		TArray<UVRGripScriptBase*> ArrayReference; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventGetGripScripts_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventGetGripStiffnessAndDamping_Parms \
	{ \
		float GripStiffnessOut; \
		float GripDampingOut; \
	}; \
	struct VRMountComponent_eventGetPrimaryGripType_Parms \
	{ \
		bool bIsSlot; \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventGetPrimaryGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventGripLateUpdateSetting_Parms \
	{ \
		EGripLateUpdateSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventGripLateUpdateSetting_Parms() \
			: ReturnValue((EGripLateUpdateSettings)0) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventGripMovementReplicationType_Parms \
	{ \
		EGripMovementReplicationSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventGripMovementReplicationType_Parms() \
			: ReturnValue((EGripMovementReplicationSettings)0) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventIsHeld_Parms \
	{ \
		TArray<FBPGripPair> CurHoldingControllers; \
		bool bCurIsHeld; \
	}; \
	struct VRMountComponent_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRMountComponent_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct VRMountComponent_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRMountComponent_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct VRMountComponent_eventOnInput_Parms \
	{ \
		FKey Key; \
		TEnumAsByte<EInputEvent> KeyEvent; \
	}; \
	struct VRMountComponent_eventOnSecondaryGrip_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRMountComponent_eventOnSecondaryGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRMountComponent_eventRequestsSocketing_Parms \
	{ \
		USceneComponent* ParentToSocketTo; \
		FName OptionalSocketName; \
		FTransform_NetQuantize RelativeTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventRequestsSocketing_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventSecondaryGripType_Parms \
	{ \
		ESecondaryGripType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventSecondaryGripType_Parms() \
			: ReturnValue((ESecondaryGripType)0) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventSetHeld_Parms \
	{ \
		UGripMotionControllerComponent* NewHoldingController; \
		uint8 GripID; \
		bool bNewIsHeld; \
	}; \
	struct VRMountComponent_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventTeleportBehavior_Parms \
	{ \
		EGripInterfaceTeleportBehavior ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRMountComponent_eventTeleportBehavior_Parms() \
			: ReturnValue((EGripInterfaceTeleportBehavior)0) \
		{ \
		} \
	}; \
	struct VRMountComponent_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		float DeltaTime; \
	};


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_CALLBACK_WRAPPERS
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRMountComponent(); \
	friend struct Z_Construct_UClass_UVRMountComponent_Statics; \
public: \
	DECLARE_CLASS(UVRMountComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRMountComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRMountComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUVRMountComponent(); \
	friend struct Z_Construct_UClass_UVRMountComponent_Statics; \
public: \
	DECLARE_CLASS(UVRMountComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRMountComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UVRMountComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRMountComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRMountComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRMountComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRMountComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRMountComponent(UVRMountComponent&&); \
	NO_API UVRMountComponent(const UVRMountComponent&); \
public:


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRMountComponent(UVRMountComponent&&); \
	NO_API UVRMountComponent(const UVRMountComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRMountComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRMountComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRMountComponent)


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_PRIVATE_PROPERTY_OFFSET
#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_32_PROLOG \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_EVENT_PARMS


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_SPARSE_DATA \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_RPC_WRAPPERS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_CALLBACK_WRAPPERS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_INCLASS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_SPARSE_DATA \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_CALLBACK_WRAPPERS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_INCLASS_NO_PURE_DECLS \
	VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRMountComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRExpansion_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRMountComponent_h


#define FOREACH_ENUM_EVRINTERACTIBLEMOUNTAXIS(op) \
	op(EVRInteractibleMountAxis::Axis_XZ) 

enum class EVRInteractibleMountAxis : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRInteractibleMountAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
