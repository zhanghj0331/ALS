// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "ALSPlayerCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class ALS_API AALSPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
public:
	AALSPlayerCameraManager();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USkeletalMeshComponent* SkeletalMeshComponent;
};
