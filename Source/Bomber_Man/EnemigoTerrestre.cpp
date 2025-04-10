// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"
#include "Bomber_ManGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "TimerManager.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
	PrimaryActorTick.bCanEverTick = true;

	GameMode = nullptr;
	
	ConstructorHelpers::FObjectFinder<UStaticMesh> NuevaMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (NuevaMalla.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(NuevaMalla.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaEnemigo->SetMaterial(0, ObjetoMaterial.Object);
	}
}

void AEnemigoTerrestre::BeginPlay()
{
	Super::BeginPlay();

	GameMode = Cast<ABomber_ManGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GameMode)
	{
		// Usar las posiciones válidas ya generadas
		PosicionesValidas = GameMode->PosicionesValidas;
	}
	GetWorld()->GetTimerManager().SetTimer(TimerMovimiento, this, &AEnemigoTerrestre::MoverAUnaNuevaPosicion, TiempoEntreMovimientos, true);
}

void AEnemigoTerrestre::MostrarMensaje() const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("¡NEMEIGO TERRESTRE FUE HAYADO !"));
}

void AEnemigoTerrestre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bTieneDestino)
	{
		FVector PosicionActual = GetActorLocation();
		FVector Direccion = (PosicionObjetivo - PosicionActual).GetSafeNormal();
		FVector NuevaPosicion = PosicionActual + Direccion * Velocidad * DeltaTime;

		// Si ya está cerca del objetivo, detener movimiento
		if (FVector::Dist(NuevaPosicion, PosicionObjetivo) < 10.0f)
		{
			NuevaPosicion = PosicionObjetivo;
			bTieneDestino = false;
		}

		SetActorLocation(NuevaPosicion);
	}
}

void AEnemigoTerrestre::MoverAUnaNuevaPosicion()
{
	if (!GameMode || GameMode->Laberinto1.Num() == 0) return;
	FVector PosicionActual = GetActorLocation();
	// Convertimos la posición del mundo a coordenadas de la matriz
	int32 i = FMath::RoundToInt((PosicionActual.X - 110.0f) / 100.0f) - 1;
	int32 j = FMath::RoundToInt((PosicionActual.Y + 1250.0f) / 100.0f) - 1;
	TArray<FIntPoint> DireccionesValidas;
	// Verificamos las 4 direcciones ortogonales
	TArray<FIntPoint> Direcciones = {
		FIntPoint(1, 0),   // Derecha
		FIntPoint(-1, 0),  // Izquierda
		FIntPoint(0, 1),   // Arriba
		FIntPoint(0, -1)   // Abajo
	};

	for (FIntPoint Dir : Direcciones)
	{
		int32 NuevaI = i + Dir.X;
		int32 NuevaJ = j + Dir.Y;

		if (GameMode->Laberinto1.IsValidIndex(NuevaI) && GameMode->Laberinto1[NuevaI].IsValidIndex(NuevaJ))
		{
			if (GameMode->Laberinto1[NuevaI][NuevaJ] == 0)
			{
				DireccionesValidas.Add(Dir);
			}
		}
	}
	// Elegir una dirección aleatoria válida
	if (DireccionesValidas.Num() > 0)
	{
		FIntPoint DireccionElegida = DireccionesValidas[FMath::RandRange(0, DireccionesValidas.Num() - 1)];
		int32 NuevaI = i + DireccionElegida.X;
		int32 NuevaJ = j + DireccionElegida.Y;

		PosicionObjetivo = FVector(
			110.0f + (NuevaI + 1) * 100.0f,
			-1250.0f + (NuevaJ + 1) * 100.0f,
			PosicionActual.Z
		);

		bTieneDestino = true;
	}
}
