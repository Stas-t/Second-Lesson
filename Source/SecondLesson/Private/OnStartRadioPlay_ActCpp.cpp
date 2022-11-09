// Fill out your copyright notice in the Description page of Project Settings.


#include "OnStartRadioPlay_ActCpp.h"


AOnStartRadioPlay_ActCpp::AOnStartRadioPlay_ActCpp()
{
	Sound = CreateDefaultSubobject<UAudioComponent>(TEXT("Sound"));
	Sound->SetPaused(false);
};