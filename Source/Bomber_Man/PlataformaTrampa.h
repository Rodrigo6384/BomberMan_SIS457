// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "PlataformaTrampa.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_MAN_API APlataformaTrampa : public APlataforma
{
	GENERATED_BODY()
protected:
	APlataformaTrampa();
	virtual void BeginPlay() override;
protected:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)

	float RangoMovimientoMinimo = 330.0f;

	UPROPERTY(EditAnywhere)
	float RangoMovimientoMaximo = 1000.0f;

	float VelocidadMovimiento = 50.0f;

	int32 DireccionMovimiento = 1;
};
