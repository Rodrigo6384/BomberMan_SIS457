// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoSubterraneo.h"
#include "Bomber_ManGameMode.h"
#include "Kismet/KismetMathLibrary.h" 
#include "Engine/World.h"
#include "TimerManager.h"

AEnemigoSubterraneo::AEnemigoSubterraneo()
{
}

void AEnemigoSubterraneo::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(MovimientoTimer, this, &AEnemigoSubterraneo::MoverAleatoriamente, 10.0f, true);
}

void AEnemigoSubterraneo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoSubterraneo::MoverAleatoriamente()
{
	TArray<FVector> PosicionesValidas = ObtenerPosicionesValidas();
	if (PosicionesValidas.Num() > 0)
	{
		int32 Index = FMath::RandRange(0, PosicionesValidas.Num() - 1);
		SetActorLocation(PosicionesValidas[Index]);
	}
}

TArray<FVector> AEnemigoSubterraneo::ObtenerPosicionesValidas() const
{

	TArray<FVector> PosicionesValidas;

	// Obtener el GameMode para acceder a la matriz Laberinto1
	ABomber_ManGameMode* GameMode = Cast<ABomber_ManGameMode>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		// Recorremos la matriz Laberinto1 para encontrar las posiciones con 0
		for (int32 i = 0; i < GameMode->Laberinto1.Num(); i++)
		{
			for (int32 j = 0; j < GameMode->Laberinto1[i].Num(); j++)
			{
				if (GameMode->Laberinto1[i][j] == 0)
				{
					FVector Pos = FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f);
					PosicionesValidas.Add(Pos);
				}
			}
		}
	}

	return PosicionesValidas;
}

void AEnemigoSubterraneo::MoverA(const FVector& NuevaPosicion)
{	// Lógica de movimiento
	if (FVector::Dist(GetActorLocation(), NuevaPosicion) > 1.f)
	{
		// Mover hacia la nueva posición
		FVector Direccion = (NuevaPosicion - GetActorLocation()).GetSafeNormal();
		SetActorLocation(GetActorLocation() + Direccion * VelocidadMovimiento * GetWorld()->GetDeltaSeconds());
	}
}
