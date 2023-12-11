// Copyright Epic Games, Inc. All Rights Reserved.

#include "UI_Design_2023_NLGameMode.h"
#include "UI_Design_2023_NLCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUI_Design_2023_NLGameMode::AUI_Design_2023_NLGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
