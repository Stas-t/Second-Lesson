// Fill out your copyright notice in the Description page of Project Settings.


#include "OnStartRadioPlay_ActCpp.h"


void AOnStartRadioPlay_ActCpp::BeginPlay() {

	Super::BeginPlay();
	Sound->SetPaused(true);

}