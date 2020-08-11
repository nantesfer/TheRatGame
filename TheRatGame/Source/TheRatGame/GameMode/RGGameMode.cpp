// Fill out your copyright notice in the Description page of Project Settings.


#include "RGGameMode.h"
#include "UObject/ConstructorHelpers.h"

ARGGameMode::ARGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TheRatGame/Blueprints/Character/RGCharacterBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}