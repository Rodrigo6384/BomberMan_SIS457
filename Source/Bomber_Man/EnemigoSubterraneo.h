// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoSubterraneo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_MAN_API AEnemigoSubterraneo : public AEnemigo
{
	GENERATED_BODY()
public :
	AEnemigoSubterraneo();
public:
	virtual void BeginPlay() override; // Aseg�rate de que esta funci�n est� definida como virtual
public:
	virtual void Tick(float DeltaTime) override;
protected:
	// Funci�n que mueve al enemigo aleatoriamente por las posiciones v�lidas
	void MoverAleatoriamente();
	FTimerHandle MovimientoTimer;
	// M�todo para obtener posiciones v�lidas en la matriz
	TArray<FVector> ObtenerPosicionesValidas() const;
	// Funci�n que mueve al enemigo a una posici�n en el mapa
	void MoverA(const FVector& NuevaPosicion);
protected:
	// Velocidad de movimiento del enemigo
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float VelocidadMovimiento = 100.0f;
};
