// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RTS_BaseBuilderGameMode.h"
#include "RTS_BaseBuilderPlayerController.h"
#include "RTS_BaseBuilderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARTS_BaseBuilderGameMode::ARTS_BaseBuilderGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARTS_BaseBuilderPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}