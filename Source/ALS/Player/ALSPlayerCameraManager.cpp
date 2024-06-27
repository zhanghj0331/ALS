// Fill out your copyright notice in the Description page of Project Settings.


#include "ALSPlayerCameraManager.h"

AALSPlayerCameraManager::AALSPlayerCameraManager()
{
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CameraBehavior"));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("USkeletalMesh'/Game/AdvancedLocomotionV4/Blueprints/CameraSystem/Camera.Camera'"));
	if (MeshAsset.Succeeded())
	{
		SkeletalMeshComponent->SetSkeletalMesh(MeshAsset.Object);
	}
}
