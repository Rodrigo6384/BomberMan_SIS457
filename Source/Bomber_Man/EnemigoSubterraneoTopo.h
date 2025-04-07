// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoSubterraneo.h"
#include "EnemigoSubterraneoTopo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_MAN_API AEnemigoSubterraneoTopo : public AEnemigoSubterraneo
{
	GENERATED_BODY()
	
public:
	AEnemigoSubterraneoTopo();
protected:
	virtual void MostrarMensaje() const override;
public:
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
};
