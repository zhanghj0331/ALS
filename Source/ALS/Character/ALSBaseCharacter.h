// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ALS/Camera/ALSCameraInterface.h"
#include "GameFramework/Character.h"
#include "ALSBaseCharacter.generated.h"

UCLASS()
class ALS_API AALSBaseCharacter : public ACharacter, public IALSCameraInterface
{
	GENERATED_BODY()

public:
	AALSBaseCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ALS Camera Interface
	virtual void GetCameraParameters(float& FirstPersonFOV, float& ThirdPersonFOV, bool& bRightShoulder) override;

	virtual FVector GetFirstPersonCameraTarget() override;

	virtual FTransform GetThirdPersonPivotTarget() override;

	virtual void GetThirdPersonTraceParams(FVector& TraceOrigin, float& TraceRadius, ECollisionChannel& TraceChannel) override;
};
