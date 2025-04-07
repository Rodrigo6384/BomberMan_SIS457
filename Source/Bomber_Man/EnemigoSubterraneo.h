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
	virtual void BeginPlay() override; // Asegúrate de que esta función esté definida como virtual
public:
	virtual void Tick(float DeltaTime) override;
protected:
	// Función que mueve al enemigo aleatoriamente por las posiciones válidas
	void MoverAleatoriamente();
	FTimerHandle MovimientoTimer;
	// Método para obtener posiciones válidas en la matriz
	TArray<FVector> ObtenerPosicionesValidas() const;
	// Función que mueve al enemigo a una posición en el mapa
	void MoverA(const FVector& NuevaPosicion);
protected:
	// Velocidad de movimiento del enemigo
	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float VelocidadMovimiento = 100.0f;
};
