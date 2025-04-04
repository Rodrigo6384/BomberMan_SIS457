// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomber_ManGameMode.h"
#include "Bomber_ManCharacter.h"
#include "UObject/ConstructorHelpers.h"
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
   // FVector Posicion = FVector(110.0f, -1250.0f, 180.0f);
	//SpawnMuroAcero(Posicion);
	//FVector Posicion2 = FVector(210.0f, -1350.0f, 180.0f);
	//SpawnMuroLadrillo(Posicion2);
	//FVector Posicion3 = FVector(110.0f, -1150.0f, 180.0f);
	//SpawnMuroAcero(Posicion3);
	//FVector Posicion = FVector(110.0f, -1250.0f, 190.0f);
    //SpawnMuros();
	for (int i = 1; i <= 50; i++) {
		for (int j = 1; j <= 50; j++) {
			if (Laberinto1[i - 1][j - 1] == 1) {
				AMuroAcero* bloque = GetWorld()->SpawnActor<AMuroAcero>(AMuroAcero::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			else if (Laberinto1[i - 1][j - 1] == 2) {
				AMuroLadrillo* bloque1 = GetWorld()->SpawnActor<AMuroLadrillo>(AMuroLadrillo::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			else if (Laberinto1[i - 1][j - 1] == 3) {
				AMuroMadera* bloque2 = GetWorld()->SpawnActor<AMuroMadera>(AMuroMadera::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			else if (Laberinto1[i - 1][j - 1] == 4) {
				AMuroBurbuja* bloque3 = GetWorld()->SpawnActor<AMuroBurbuja>(AMuroBurbuja::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			if (Laberinto1[i - 1][j - 1] == 5) {
				AMuroElectrico* bloque4 = GetWorld()->SpawnActor<AMuroElectrico>(AMuroElectrico::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			else if (Laberinto1[i - 1][j - 1] == 6) {
				AMuroHongo* bloque5 = GetWorld()->SpawnActor<AMuroHongo>(AMuroHongo::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			else if (Laberinto1[i - 1][j - 1] == 7) {
				AMuroLava* bloque6 = GetWorld()->SpawnActor<AMuroLava>(AMuroLava::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			else if (Laberinto1[i - 1][j - 1] == 8) {
				AMuroConcreto* bloque7 = GetWorld()->SpawnActor<AMuroConcreto>(AMuroConcreto::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			if (Laberinto1[i - 1][j - 1] == 9) {
				AMuroArena* bloque8 = GetWorld()->SpawnActor<AMuroArena>(AMuroArena::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			else if (Laberinto1[i - 1][j - 1] == 10) {
				AMuroHielo* bloque9 = GetWorld()->SpawnActor<AMuroHielo>(AMuroHielo::StaticClass(), FVector(110.0f + i * 100.0f, -1250.0f + j * 100.0f, 190.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
		}
	}
}

void ABomber_ManGameMode::SpawnMuroAcero(FVector Posicion)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Bloques de Acero spawneados"));
	FRotator SpawnRotation = FRotator::ZeroRotator;
	AMuroAcero* MuroAcero = GetWorld()->SpawnActor<AMuroAcero>(AMuroAcero::StaticClass(), Posicion, SpawnRotation);
}

void ABomber_ManGameMode::SpawnMuroLadrillo(FVector Posicion)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Bloques de ladrillo spawneados"));
	FRotator SpawnRotation = FRotator::ZeroRotator;
	AMuroLadrillo* MuroLadrillo = GetWorld()->SpawnActor<AMuroLadrillo>(AMuroLadrillo::StaticClass(), Posicion, SpawnRotation);
}

void ABomber_ManGameMode::SpawnMuroBurbuja(FVector Posicion)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Bloques de burbuja spawneados"));
    FRotator SpawnRotation = FRotator::ZeroRotator;

    AMuroBurbuja* MuroBurbuja = GetWorld()->SpawnActor<AMuroBurbuja>(AMuroMadera::StaticClass(), Posicion, SpawnRotation);
}

void ABomber_ManGameMode::SpawnMuroMadera(FVector Posicion)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Bloques de madera spawneados"));
	FRotator SpawnRotation = FRotator::ZeroRotator;

	AMuroMadera* MuroMadera = GetWorld()->SpawnActor<AMuroMadera>(AMuroMadera::StaticClass(), Posicion, SpawnRotation);
}

void ABomber_ManGameMode::SpawnMuros()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Muros spawneados"));

    //float Espaciado = 200.0f;


    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            FVector Posicion(110.0f + i * 200.0f, -1250.0f + j * 200.0f, 190.0f);

            if (Laberinto1[i-1][j-1] == 1) {
                SpawnMuroAcero(Posicion);
            }
            else if (Laberinto1[i-1][j-1] == 2) {
                SpawnMuroMadera(Posicion);
            }
            else if (Laberinto1[i-1][j-1] == 3) {
                SpawnMuroBurbuja(Posicion);
            }
            else if (Laberinto1[i-1][j-1] == 4) {
                SpawnMuroLadrillo(Posicion);

            }
        }
    }
}
