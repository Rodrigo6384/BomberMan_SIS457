// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.generated.h"

UCLASS()
class BOMBER_MAN_API AMuro : public AActor
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	AMuro();
	virtual void BeginPlay() override;
	UStaticMeshComponent* MallaMuro;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
