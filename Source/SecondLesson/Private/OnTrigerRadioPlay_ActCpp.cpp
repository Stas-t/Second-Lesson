// Fill out your copyright notice in the Description page of Project Settings.


#include "OnTrigerRadioPlay_ActCpp.h"

void ARadioPlay_ActCpp::Paused_Implementation(AActor* overlappingActor, UAudioComponent* Pause)
{
	if (overlappingActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		Sound->SetPaused(true);
	}
}