// Copyright Epic Games, Inc. All Rights Reserved.

#include "DnDCombatGameMode.h"
#include "DnDCombatCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADnDCombatGameMode::ADnDCombatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
