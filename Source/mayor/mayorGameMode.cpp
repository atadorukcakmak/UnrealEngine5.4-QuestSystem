// Copyright Epic Games, Inc. All Rights Reserved.

#include "mayorGameMode.h"
#include "mayorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmayorGameMode::AmayorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
