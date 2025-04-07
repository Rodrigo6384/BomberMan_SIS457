// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.generated.h"

UCLASS()
class BOMBER_MAN_API APlataforma : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Sets default values for this actor's properties
	APlataforma();
	UStaticMeshComponent* MallaPlataforma;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
