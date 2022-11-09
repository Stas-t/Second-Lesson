// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "MyActorCpp.generated.h"

UCLASS()
class SECONDLESSON_API AMyActorCpp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorCpp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		void ChangeMesh(AActor* overlappingActor, UStaticMesh* newMesh);

	UFUNCTION(BlueprintCallable)
		void ChangeAudio(AActor* overlappingActor, USoundBase* NewSound);

	UFUNCTION(BlueprintCallable)
		void Paused(AActor* overlappingActor, UAudioComponent* Pause);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		USceneComponent* Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UAudioComponent* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UAudioComponent* Audio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UBoxComponent* BoxCollision;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
