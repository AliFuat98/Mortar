// Copyright Epic Games, Inc. All Rights Reserved.

#include "MortarGameMode.h"
#include "MortarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMortarGameMode::AMortarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
