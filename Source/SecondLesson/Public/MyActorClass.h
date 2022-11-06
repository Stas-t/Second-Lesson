// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorClass.generated.h"

UCLASS()
class SECONDLESSON_API AMyActorClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	class USphereComponent* MyCollisionSphere;
	class UStaticMeshComponent* MyMesh;
	float SphereRadius;
	float TimeToLife;

	UFUNCTION()
	void DestroyActorFunction();

};
