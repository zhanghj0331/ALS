// Copyright Epic Games, Inc. All Rights Reserved.

#include "ALSGameMode.h"
#include "ALSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AALSGameMode::AALSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
