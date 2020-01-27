#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "VRGripScriptBase.h"
#include "GameFramework/WorldSettings.h"
#include "GripScripts/GS_Default.h"
#include "GS_Melee.generated.h"

#if WITH_PHYSX
#include "PhysXPublic.h"
#endif // WITH_PHYSX



// A Lodge component data struct
USTRUCT(BlueprintType, Category = "Lodging")
struct VREXPANSIONPLUGIN_API FBPLodgeComponentInfo
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LodgeComponentInfo")
		FName ComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LodgeComponentInfo")
		float PenetrationDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LodgeComponentInfo")
		bool bAllowPenetrationInReverseAsWell;

	// This is the velocity (along forward axis of component) required to throw an OnPenetrated event from a PenetrationNotifierComponent
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Settings")
		float PenetrationVelocity;

	// The acceptable range of the dot product of the forward vector and the impact normal to define a valid facing
	// Subtracted from the 1.0f forward facing value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Settings")
		float AcceptableForwardProductRange;

	FBPLodgeComponentInfo()
	{
		ComponentName = NAME_None;
		PenetrationDepth = 100.f;
		bAllowPenetrationInReverseAsWell = false;
		PenetrationVelocity = 200.f;
		AcceptableForwardProductRange = 0.1f;
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "LodgeComponentInfo")
	TWeakObjectPtr<UPrimitiveComponent> TargetComponent;

	FORCEINLINE bool operator==(const FName& Other) const
	{
		return (ComponentName == Other);
	}

};


// Event thrown when we the melee weapon becomes lodged
DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FVROnMeleeShouldLodgeSignature, FBPLodgeComponentInfo, LogComponent, AActor *, OtherActor, UPrimitiveComponent *, OtherComp, ECollisionChannel, OtherCompCollisionChannel, FVector, NormalImpulse, const FHitResult&, Hit);


/**
* A Melee grip script *CURRENTLY WIP, DO NOT USE!!!*
*/
UCLASS(NotBlueprintable, ClassGroup = (VRExpansionPlugin), hideCategories = TickSettings)
class VREXPANSIONPLUGIN_API UGS_Melee : public UGS_Default
{
	GENERATED_BODY()
public:

	UGS_Melee(const FObjectInitializer& ObjectInitializer);

	UFUNCTION()
	void OnLodgeHitCallback(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(BlueprintCallable, Category = "Weapon Settings")
		void SetIsLodged(bool IsLodged, UPrimitiveComponent * LodgeComponent)
	{
		bIsLodged = IsLodged;
		LodgedComponent = LodgeComponent;
	}

	bool bIsLodged;
	TWeakObjectPtr<UPrimitiveComponent> LodgedComponent;

	virtual void Tick(float DeltaTime) override;

	// Thrown if we should lodge into a hit object
	UPROPERTY(BlueprintAssignable, Category = "Melee|Lodging")
		FVROnMeleeShouldLodgeSignature OnShouldLodgeInObject;

	// Always tick for penetration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Melee|Lodging")
		bool bAlwaysTickPenetration;

	FVector RollingVelocityAverage;
	FVector RollingAngVelocityAverage;
	float NumberOfFramesToAverageVelocity;

	// The name of the component that is used to orient the weapon along its primary axis
	// If it does not exist then the weapon is assumed to be X+ facing.
	// Also used to perform some calculations, make sure it is parented to the gripped object (root component for actors).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Settings")
		FName WeaponRootOrientationComponent;
	FTransform OrientationComponentRelativeFacing;

	// This is a built list of components that act as penetration notifiers, they will have their OnHit bound too and we will handle penetration logic
	// off of it.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Settings")
		TArray<FBPLodgeComponentInfo> PenetrationNotifierComponents;

	FVector LastRelativePos;
	bool bTickedAlready;
	FVector RelativeBetweenGripsCenterPos;

	// When true, will auto set the primary and secondary hands by the WeaponRootOrientationComponents X Axis distance.
	// Smallest value along the X Axis will be considered the primary hand.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Settings")
		bool bAutoSetPrimaryAndSecondaryHands;

	UFUNCTION(BlueprintCallable, Category = "Weapon Settings")
		void SetPrimaryAndSecondaryHands(FBPGripPair & PrimaryGrip, FBPGripPair & SecondaryGrip);

	// If true then the primary hand is considered the rearmost one
	UPROPERTY(BlueprintReadOnly, Category = "Weapon Settings")
		bool bPrimaryHandInRear;

	UPROPERTY(BlueprintReadOnly, Category = "Weapon Settings")
	FBPGripPair PrimaryHand;

	UPROPERTY(BlueprintReadOnly, Category = "Weapon Settings")
	FBPGripPair SecondaryHand;

	FTransform ObjectRelativeGripCenter;

	// Grip settings to use on the primary hand when multiple grips are active
	// Falls back to the standard grip settings when only one grip is active
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Settings")
		FBPAdvancedPhysicsHandleSettings PrimaryHandPhysicsSettings;

	// Grip settings to use on the secondary hand when multiple grips are active
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Settings")
		FBPAdvancedPhysicsHandleSettings SecondaryHandPhysicsSettings;


	void UpdateDualHandInfo();


	UFUNCTION(BlueprintCallable, Category = "Weapon Settings")
		void SetCOMOffsetInLocalSpace(UGripMotionControllerComponent* GrippingController, UPARAM(ref) FBPActorGripInformation& Grip, FVector Offset, bool bOffsetIsInWorldSpace = true, bool bLimitToXOnly = true);

	virtual void HandlePostPhysicsHandle(UGripMotionControllerComponent* GrippingController, FBPActorPhysicsHandleInformation* HandleInfo) override;
	virtual void HandlePrePhysicsHandle(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation &GripInfo, FBPActorPhysicsHandleInformation* HandleInfo, FTransform& KinPose) override;
	virtual void OnBeginPlay_Implementation(UObject* CallingOwner) override;
	virtual void OnEndPlay_Implementation(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation) override;

	/*TArray<FBPMelee_SurfacePair> SurfaceTypesToPenetrate;
	bool bAllowPenetration;
	bool bUseDensityForPenetrationCalcs;
	bool bTraceComplex;
	bool bLodged;

	FVector StrikeVelocity;
	bool bSubstepTrace;
	float MaxSubsteps;

	float BaseDamage;
	float VelocityDamageScaler;
	float MaximumVelocityForDamage;

	TWeakObjectPtr<class UPrimitiveComponent> LodgeParent;

	// Amount of movement force to apply to the in/out action of penetration.
	float PenetrationFrictionCoefficient;
	*/

	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation) override;

	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed = false) override;

	//virtual void BeginPlay_Implementation() override;
	virtual bool GetWorldTransform_Implementation(UGripMotionControllerComponent * GrippingController, float DeltaTime, FTransform & WorldTransform, const FTransform &ParentTransform, FBPActorGripInformation &Grip, AActor * actor, UPrimitiveComponent * root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport) override;


};
