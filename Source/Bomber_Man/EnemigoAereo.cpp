// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemigoAereo.h"
#include "Bomber_ManGameMode.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"
#include "Engine/World.h"

AEnemigoAereo::AEnemigoAereo()
{
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> NuevaMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	if (NuevaMalla.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(NuevaMalla.Object);
	}

}

void AEnemigoAereo::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(MovimientoTimer, this, &AEnemigoAereo::MoverAleatoriamente, IntervaloMovimiento, true);
}

void AEnemigoAereo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bTieneDestino)
	{
		FVector PosicionActual = GetActorLocation();
		FVector NuevaPosicion = FMath::VInterpTo(PosicionActual, DestinoActual, DeltaTime, 2.0f); // velocidad 2.0

		SetActorLocation(NuevaPosicion);

		if (FVector::Dist(NuevaPosicion, DestinoActual) < 10.0f)
		{
			bTieneDestino = false; // llegó al destino
		}
	}
}

void AEnemigoAereo::MoverAleatoriamente()
{
	TArray<FVector> Posiciones = ObtenerPosicionesValidas();
	if (Posiciones.Num() > 0)
	{
		int32 Index = FMath::RandRange(0, Posiciones.Num() - 1);
		DestinoActual = Posiciones[Index];
		bTieneDestino = true;
	}
}

TArray<FVector> AEnemigoAereo::ObtenerPosicionesValidas() const
{
	TArray<FVector> PosicionesValidas;
	ABomber_ManGameMode* GameMode = Cast<ABomber_ManGameMode>(GetWorld()->GetAuthGameMode());

	if (GameMode)
	{
		for (int32 i = 0; i < GameMode->Laberinto1.Num(); i++)
		{
			for (int32 j = 0; j < GameMode->Laberinto1[i].Num(); j++)
			{
				if (GameMode->Laberinto1[i][j] == 0) // ? Solo si es 0
				{
					FVector Pos = FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 500.0f); // altura aérea
					PosicionesValidas.Add(Pos);
				}
			}
		}
	}
	return PosicionesValidas;
}
