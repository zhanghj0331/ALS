// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ALSCameraInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UALSCameraInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ALS_API IALSCameraInterface
{
	GENERATED_BODY()

public:
	virtual void GetCameraParameters(float& FirstPersonFOV, float& ThirdPersonFOV, bool& bRightShoulder) = 0;

	virtual FVector GetFirstPersonCameraTarget() = 0;

	virtual FTransform GetThirdPersonPivotTarget() = 0;

	virtual void GetThirdPersonTraceParams(FVector& TraceOrigin, float& TraceRadius, ECollisionChannel& TraceChannel) = 0;
};
