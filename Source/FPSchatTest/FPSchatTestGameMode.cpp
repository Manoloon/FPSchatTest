// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSchatTestGameMode.h"
#include "FPSchatTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSchatTestGameMode::AFPSchatTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
