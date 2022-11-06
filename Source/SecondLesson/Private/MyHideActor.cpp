// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHideActor.h"

// Sets default values
AMyHideActor::AMyHideActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyHideActor::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(10);
	
}

// Called every frame
void AMyHideActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

