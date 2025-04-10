// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre.generated.h"
/**
 * 
 */
UCLASS()
class BOMBER_MAN_API AEnemigoTerrestre : public AEnemigo
{
	GENERATED_BODY()
protected:
	AEnemigoTerrestre();
	void BeginPlay() override;

	virtual void MostrarMensaje() const override;
public:
	void Tick(float DeltaTime) override;

	void MoverAUnaNuevaPosicion();

	UPROPERTY(EditAnywhere)
	float TiempoEntreMovimientos = 2.0f;

private:
	FTimerHandle TimerMovimiento;
	TArray<FVector> PosicionesValidas;
	class ABomber_ManGameMode* GameMode;
	FVector PosicionObjetivo;
	bool bTieneDestino = false;
	float Velocidad = 500.0f;
};
