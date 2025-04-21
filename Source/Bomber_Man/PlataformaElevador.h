// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "PlataformaElevador.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_MAN_API APlataformaElevador : public APlataforma
{
	GENERATED_BODY()
protected:
	APlataformaElevador();
	virtual void BeginPlay() override;
protected:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float AlturaMaxima = 1500.0f;

	UPROPERTY(EditAnywhere)
	float AlturaMinima = 190.0f;

	UPROPERTY(EditAnywhere)
	float VelocidadMovimiento = 200.0f;

	int DireccionMovimiento = 1;

	
};
