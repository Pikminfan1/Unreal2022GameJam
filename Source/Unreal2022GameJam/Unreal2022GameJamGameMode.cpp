// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal2022GameJamGameMode.h"
#include "Unreal2022GameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal2022GameJamGameMode::AUnreal2022GameJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
