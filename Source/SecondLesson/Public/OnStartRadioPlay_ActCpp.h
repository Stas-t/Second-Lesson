// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RadioPlay_ActCpp.h"
#include "OnStartRadioPlay_ActCpp.generated.h"

/**
 * 
 */
UCLASS()
class SECONDLESSON_API AOnStartRadioPlay_ActCpp : public ARadioPlay_ActCpp
{
	GENERATED_BODY()

protected:
		virtual void BeginPlay() override;
	
};
