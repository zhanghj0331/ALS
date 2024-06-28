// Fill out your copyright notice in the Description page of Project Settings.


#include "ALSBaseCharacter.h"

#include "Components/CapsuleComponent.h"

AALSBaseCharacter::AALSBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Tags.Add(FName("ALS_Character"));

	if (UCapsuleComponent* CapsuleComp = GetCapsuleComponent())
	{
		CapsuleComp->SetCapsuleHalfHeight(90.f);
		CapsuleComp->SetCapsuleRadius(30.f);
		
		CapsuleComp->SetCollisionProfileName(TEXT("ALS_Character"));
	}

	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		MeshComp->SetCollisionObjectType(ECC_Pawn);
		MeshComp->SetCollisionResponseToAllChannels(ECR_Block);
		MeshComp->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
		MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
		MeshComp->SetCollisionResponseToChannel(ECC_Vehicle, ECR_Ignore);

		static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("SkeletalMesh'/Game/AdvancedLocomotionV4"
			"/CharacterAssets/MannequinSkeleton/Meshes/Proxy.Proxy'"));
		if (MeshAsset.Succeeded())
		{
			MeshComp->SetSkeletalMesh(MeshAsset.Object);
		}
		MeshComp->SetRelativeLocation(FVector(0.f, 0.f, -92.f));
		MeshComp->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	}

	bUseControllerRotationYaw = false;

	
}

void AALSBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AALSBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AALSBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AALSBaseCharacter::GetCameraParameters(float& FirstPersonFOV, float& ThirdPersonFOV, bool& bRightShoulder)
{
}

FVector AALSBaseCharacter::GetFirstPersonCameraTarget()
{
	return FVector(0, 0, 0);
}

FTransform AALSBaseCharacter::GetThirdPersonPivotTarget()
{
	return FTransform();
}

void AALSBaseCharacter::GetThirdPersonTraceParams(FVector& TraceOrigin, float& TraceRadius,
	ECollisionChannel& TraceChannel)
{
}

