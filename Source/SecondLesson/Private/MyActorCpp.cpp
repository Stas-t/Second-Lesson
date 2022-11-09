// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorCpp.h"

// Sets default values
AMyActorCpp::AMyActorCpp()
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
void AMyActorCpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorCpp::ChangeMesh(AActor* overlappingActor, UStaticMesh* newMesh)
{
	if (overlappingActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		Mesh->SetStaticMesh(newMesh);
	}
}

void AMyActorCpp::ChangeAudio(AActor* overlappingActor, USoundBase* NewSound)
{
	if (overlappingActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		Sound->SetSound(NewSound);
		Sound->SetPaused(false);
	}
}
void AMyActorCpp::Paused(AActor* overlappingActor, UAudioComponent* Pause)
{
	if (overlappingActor == GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		Sound->SetPaused(true);
	}
}