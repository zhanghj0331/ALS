// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ALSBaseCharacter.generated.h"

UCLASS()
class ALS_API AALSBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AALSBaseCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
