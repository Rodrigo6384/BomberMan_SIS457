// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomber_ManGameMode.h"
#include "Bomber_ManCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "MuroMadera.h"
#include "MuroAcero.h"
#include "MuroBurbuja.h"
#include "MuroLadrillo.h"
#include "MuroElectrico.h"
#include "MuroHielo.h"
#include "MuroHongo.h"
#include "MuroArena.h"
#include "MuroConcreto.h"
#include "MuroLava.h"
#include "Muro.h"
#include "Enemigo.h"
#include "EnemigoSubterraneo.h"
#include "EnemigoSubterraneoTopo.h"
#include "EnemigoSubterraneoGusano.h"
#include "EnemigoAereo.h"
#include "Plataforma.h"
#include "PlataformaElevador.h"


ABomber_ManGameMode::ABomber_ManGameMode()
{

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomber_ManGameMode::BeginPlay()
{
	Super::BeginPlay();
	SpawnLaberinto();
	SpawnPersonaje();
	APlataforma* Plataforma = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), FVector(2710.0f , 1350.0f, 90.0f), FRotator::ZeroRotator);
	APlataformaElevador* PlataformaElevador = GetWorld()->SpawnActor<APlataformaElevador>(APlataformaElevador::StaticClass(), FVector(10.0f, -1050.0f, 200.0f), FRotator::ZeroRotator);
};

void ABomber_ManGameMode::SpawnLaberinto()
{
	PosicionesValidas.Empty();
	// Spawnear bloques según el valor de Laberinto1
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			FVector Posicion = FVector(110.0f + (i + 1) * 100.0f, -1250.0f + (j + 1) * 100.0f, 190.0f);

			switch (Laberinto1[i][j]) {
			case 1:
				GetWorld()->SpawnActor<AMuroAcero>(AMuroAcero::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 2:
				GetWorld()->SpawnActor<AMuroLadrillo>(AMuroLadrillo::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 3:
				GetWorld()->SpawnActor<AMuroMadera>(AMuroMadera::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 4:
				GetWorld()->SpawnActor<AMuroBurbuja>(AMuroBurbuja::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 5:
				GetWorld()->SpawnActor<AMuroElectrico>(AMuroElectrico::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 6:
				GetWorld()->SpawnActor<AMuroHongo>(AMuroHongo::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 7:
				GetWorld()->SpawnActor<AMuroLava>(AMuroLava::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 8:
				GetWorld()->SpawnActor<AMuroConcreto>(AMuroConcreto::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 9:
				GetWorld()->SpawnActor<AMuroArena>(AMuroArena::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			case 10:
				GetWorld()->SpawnActor<AMuroHielo>(AMuroHielo::StaticClass(), Posicion, FRotator::ZeroRotator);
				break;
			default:
				break;
			};
		};
	};

	// Crear lista de posiciones válidas (donde Laberinto1[i][j] == 0)
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			if (Laberinto1[i][j] == 0) {
				FVector Pos = FVector(110.0f + (i + 1) * 100.0f, -1250.0f + (j + 1) * 100.0f, 190.0f);
				PosicionesValidas.Add(Pos);
			};
		};
	};
	// Mezclar posiciones aleatoriamente
	for (int32 i = 0; i < PosicionesValidas.Num(); i++) {
		int32 SwapIndex = FMath::RandRange(0, PosicionesValidas.Num() - 1);
		PosicionesValidas.Swap(i, SwapIndex);
	};
	for (int32 i = 0; i < 5 && i < PosicionesValidas.Num(); i++) {
		FVector Pos = PosicionesValidas[i];
		AEnemigoSubterraneoGusano* EnemigoGusano = GetWorld()->SpawnActor<AEnemigoSubterraneoGusano>(AEnemigoSubterraneoGusano::StaticClass(), Pos, FRotator::ZeroRotator);
		if (EnemigoGusano) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Gusano Spawned!"));
		};
	};
	for (int32 i = 5; i < 10 && i < PosicionesValidas.Num(); i++) {
		FVector Pos = PosicionesValidas[i];
		AEnemigoSubterraneoTopo* EnemigoTopo = GetWorld()->SpawnActor<AEnemigoSubterraneoTopo>(AEnemigoSubterraneoTopo::StaticClass(), Pos, FRotator::ZeroRotator);
		if (EnemigoTopo) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Topo Spawned!"));
		};
	};
	for (int32 i = 10; i < 15 && i < PosicionesValidas.Num(); i++) {
		FVector Pos = PosicionesValidas[i];
		Pos.Z = 500.0f;
		AEnemigoAereo* EnemigoAereo = GetWorld()->SpawnActor<AEnemigoAereo>(AEnemigoAereo::StaticClass(), Pos, FRotator::ZeroRotator);
		if (EnemigoAereo) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Enemigo Aereo Spawned!"));
		};
	};
}
void ABomber_ManGameMode::SpawnPersonaje()
{
	PosicionesValidasPersonaje.Empty();
	for (int i = 1; i <= 50; i++) {
		for (int j = 1; j <= 50; j++) {
			if (Laberinto1[i - 1][j - 1] == 0) {
				FVector Pos = FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f);
				PosicionesValidasPersonaje.Add(Pos);
			};
		};
	};

	// Elegir una posición aleatoria
	if (PosicionesValidasPersonaje.Num() > 0)
	{
		int32 Index = FMath::RandRange(0, PosicionesValidasPersonaje.Num() - 1);
		FVector SpawnLocation = PosicionesValidasPersonaje[Index];
		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC)
		{
			APawn* Personaje = PC->GetPawn();
			if (Personaje)
			{
				Personaje->SetActorLocation(SpawnLocation);
			}
			else
			{
				ABomber_ManCharacter* NuevoPersonaje = GetWorld()->SpawnActor<ABomber_ManCharacter>(ABomber_ManCharacter::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
				if (NuevoPersonaje)
				{
					PC->Possess(NuevoPersonaje);
				};
			};
		};

	};
};