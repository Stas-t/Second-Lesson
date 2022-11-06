// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorClass.h"
#include "Components/SphereComponent.h"

// Sets default values
AMyActorClass::AMyActorClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UPROPERTY(VisibleAnywhere)
	TimeToLife = 7.0f;
	SphereRadius = 100.0f;

	MyCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("MySphere"));
	MyCollisionSphere->InitSphereRadius(SphereRadius);
	MyCollisionSphere->SetCollisionProfileName("Triger");
	RootComponent = MyCollisionSphere;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	MyMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMyActorClass::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AMyActorClass::DestroyActorFunction, TimeToLife);
	
}

// Called every frame
void AMyActorClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorClass::DestroyActorFunction()
{
	if (MyCollisionSphere != nullptr)
	{
		Destroy();
	}
}