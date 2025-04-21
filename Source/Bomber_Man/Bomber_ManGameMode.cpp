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
#include "PlataformaTrampa.h"
#include "EnemigoTerrestre.h"


ABomber_ManGameMode::ABomber_ManGameMode()
{

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//--------------examen
	MurosColocados = 0;
	PorcentajeBloques = 40;///porcetje de bloques que se van a colocar en el laberinto
	ZonaX = 25;
	ZonaY = 40;
	TotalMuros = (ZonaX * ZonaY * PorcentajeBloques) / 100;
}

void ABomber_ManGameMode::BeginPlay()
{
	Super::BeginPlay();
	SpawnLaberinto();
	SpawnPersonaje();
	APlataforma* Plataforma = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), FVector(2710.0f , 1350.0f, 90.0f), FRotator::ZeroRotator);
	APlataformaElevador* PlataformaElevador = GetWorld()->SpawnActor<APlataformaElevador>(APlataformaElevador::StaticClass(), FVector(10.0f, -1050.0f, 200.0f), FRotator::ZeroRotator);
	APlataformaTrampa* PlataformaTrampa = GetWorld()->SpawnActor<APlataformaTrampa>(APlataformaTrampa::StaticClass(), FVector(400.0f, -1060.0f, 1470.0f), FRotator::ZeroRotator);
	APlataformaTrampa* PlataformaTrampa2 = GetWorld()->SpawnActor<APlataformaTrampa>(APlataformaTrampa::StaticClass(), FVector(1200.0f, -1060.0f, 1470.0f), FRotator::ZeroRotator);
	APlataformaTrampa* PlataformaTrampa3 = GetWorld()->SpawnActor<APlataformaTrampa>(APlataformaTrampa::StaticClass(), FVector(2000.0f, -1060.0f, 1470.0f), FRotator::ZeroRotator);
	APlataformaTrampa* PlataformaTrampa4 = GetWorld()->SpawnActor<APlataformaTrampa>(APlataformaTrampa::StaticClass(), FVector(2800.0f, -1060.0f, 1470.0f), FRotator::ZeroRotator);
};

void ABomber_ManGameMode::SpawnLaberinto()
{
	/*PosicionesValidas.Empty();
	Laberinto1.SetNum(50);
	for (int i = 0; i < 50; i++) {
		Laberinto1[i].SetNum(50);
		for (int j = 0; j < 50; j++) {
			Laberinto1[i][j] = 0;
		}
	}
	while (MurosColocados < TotalMuros)
	{
		int32 tipo = FMath::RandRange(1, 10);
		int32 x = FMath::RandRange(1, ZonaX - 2);
		int32 y = FMath::RandRange(1, ZonaY - 2);

		if (Laberinto1[x][y] != 0)
			continue;

		bool puedecolocarse = true;
		for (int dx = -1; dx <= 1; dx++) {
			for (int dy = -1; dy <= 1; dy++) {
				if (dx == 0 && dy == 0) continue;

				int32 nx = x + dx;
				int32 ny = y + dy;

				if (Laberinto1[nx][ny] != 0 && Laberinto1[nx][ny] != tipo) {
					puedecolocarse = false;
					break;
				}
			}
			if (!puedecolocarse)
				break;
		}

		if (puedecolocarse)
		{
			Laberinto1[x][y] = tipo;
			MurosColocados++;
		}
	}*/

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

	//for (int i = 0; i < 50; i++) {
	//	for (int j = 0; j < 50; j++) {
	//		if (Laberinto1[i][j] == 0) {
	//			FVector Pos = FVector(110.0f + (i + 1) * 100.0f, -1250.0f + (j + 1) * 100.0f, 190.0f);
	//			PosicionesValidas.Add(Pos);
	//		};
	//	};
	//};

	//for (int32 i = 0; i < PosicionesValidas.Num(); i++) {
	//	int32 SwapIndex = FMath::RandRange(0, PosicionesValidas.Num() - 1);
	//	PosicionesValidas.Swap(i, SwapIndex);
	//};
	//for (int32 i = 0; i < 5 && i < PosicionesValidas.Num(); i++) {
	//	FVector Pos = PosicionesValidas[i];
	//	AEnemigoSubterraneoGusano* EnemigoGusano = GetWorld()->SpawnActor<AEnemigoSubterraneoGusano>(AEnemigoSubterraneoGusano::StaticClass(), Pos, FRotator::ZeroRotator);
	//	if (EnemigoGusano) {
	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Gusano Spawned!"));
	//	};
	//};
	//for (int32 i = 5; i < 10 && i < PosicionesValidas.Num(); i++) {
	//	FVector Pos = PosicionesValidas[i];
	//	AEnemigoSubterraneoTopo* EnemigoTopo = GetWorld()->SpawnActor<AEnemigoSubterraneoTopo>(AEnemigoSubterraneoTopo::StaticClass(), Pos, FRotator::ZeroRotator);
	//	if (EnemigoTopo) {
	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Topo Spawned!"));
	//	};
	//};
	//for (int32 i = 10; i < 15 && i < PosicionesValidas.Num(); i++) {
	//	FVector Pos = PosicionesValidas[i];
	//	Pos.Z = 500.0f;
	//	AEnemigoAereo* EnemigoAereo = GetWorld()->SpawnActor<AEnemigoAereo>(AEnemigoAereo::StaticClass(), Pos, FRotator::ZeroRotator);
	//	if (EnemigoAereo) {
	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Enemigo Aereo Spawned!"));
	//	};
	//};
	//for (int32 i = 15; i < 20 && i < PosicionesValidas.Num(); i++) {
	//	FVector Pos = PosicionesValidas[i];
	//	AEnemigoTerrestre* EnemigoTerrestre = GetWorld()->SpawnActor<AEnemigoTerrestre>(AEnemigoTerrestre::StaticClass(), Pos, FRotator::ZeroRotator);
	//	if (EnemigoTerrestre)
	//	{
	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Enemigo Terrestre Spawned!"));
	//	}
	//}

}
void ABomber_ManGameMode::SpawnPersonaje()
{
	int MinDistanciaAlBorde = 9999;

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			if (Laberinto1[i][j] == 3)
			{
				int DistanciaAlBorde = FMath::Min3(i, j, FMath::Min(49 - i, 49 - j));

				if (DistanciaAlBorde < MinDistanciaAlBorde)
				{
					MinDistanciaAlBorde = DistanciaAlBorde;
					PosicionesMaderaCercanasAlBorde.Empty();
					FVector Pos = FVector(110.0f + (i + 1) * 100.0f, -1250.0f + (j + 1) * 100.0f, 500.0f);
					PosicionesMaderaCercanasAlBorde.Add(Pos);
				}
				else if (DistanciaAlBorde == MinDistanciaAlBorde)
				{
					FVector Pos = FVector(110.0f + (i + 1) * 100.0f, -1250.0f + (j + 1) * 100.0f, 500.0f);
					PosicionesMaderaCercanasAlBorde.Add(Pos);
				}
			};
		};
	};

	if (PosicionesMaderaCercanasAlBorde.Num() > 0)
	{
		int32 Index = FMath::RandRange(0, PosicionesMaderaCercanasAlBorde.Num() - 1);
		FVector SpawnLocation = PosicionesMaderaCercanasAlBorde[Index];
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
				}
			}
		}
	}
};