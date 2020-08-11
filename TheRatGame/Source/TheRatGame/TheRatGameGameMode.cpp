// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheRatGameGameMode.h"
#include "TheRatGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheRatGameGameMode::ATheRatGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
