// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab5GameMode.h"
#include "Lab5Character.h"
#include "UObject/ConstructorHelpers.h"

ALab5GameMode::ALab5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
