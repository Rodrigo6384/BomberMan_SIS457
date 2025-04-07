// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_MAN_API AEnemigoAereo : public AEnemigo
{
	GENERATED_BODY()
public:
	AEnemigoAereo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float VelocidadMovimiento = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
	float IntervaloMovimiento = 2.0f;

private:
	FTimerHandle MovimientoTimer;

	void MoverAleatoriamente();
	TArray<FVector> ObtenerPosicionesValidas() const;
	FVector DestinoActual;
	bool bTieneDestino = false;

};
