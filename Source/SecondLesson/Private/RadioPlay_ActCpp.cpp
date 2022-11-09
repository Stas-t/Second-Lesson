// Fill out your copyright notice in the Description page of Project Settings.


#include "RadioPlay_ActCpp.h"

// Sets default values
ARadioPlay_ActCpp::ARadioPlay_ActCpp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	Scene->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Scene);

	Sound = CreateDefaultSubobject<UAudioComponent>(TEXT("Sound"));
	Sound->SetupAttachment(Scene);


	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBoxCollision"));
	BoxCollision->InitBoxExtent(FVector(100, 100, 100));
	BoxCollision->SetupAttachment(Scene);


}

// Called when the game starts or when spawned
void ARadioPlay_ActCpp::BeginPlay()
{
	Super::BeginPlay();
	Sound->SetPaused(false);
}

// Called every frame
void ARadioPlay_ActCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

