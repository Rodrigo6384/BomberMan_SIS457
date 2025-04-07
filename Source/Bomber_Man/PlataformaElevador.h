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
public:
	virtual void Tick(float DeltaTime) override;
	// Altura m�xima y m�nima en el eje Z
	UPROPERTY(EditAnywhere)
	float AlturaMaxima = 1500.0f;

	UPROPERTY(EditAnywhere)
	float AlturaMinima = 190.0f;

	// Velocidad de movimiento
	UPROPERTY(EditAnywhere)
	float VelocidadMovimiento = 40.0f;

	// Direcci�n del movimiento (1 significa movi�ndose hacia arriba, -1 hacia abajo)
	int32 DireccionMovimiento = 1;

	
};
