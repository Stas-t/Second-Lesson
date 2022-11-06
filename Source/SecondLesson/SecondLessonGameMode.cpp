// Copyright Epic Games, Inc. All Rights Reserved.

#include "SecondLessonGameMode.h"
#include "SecondLessonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASecondLessonGameMode::ASecondLessonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
