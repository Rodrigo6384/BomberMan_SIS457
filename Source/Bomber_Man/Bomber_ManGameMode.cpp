// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomber_ManGameMode.h"
#include "Bomber_ManCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "MuroMadera.h"
#include "MuroAcero.h"
#include "MuroBurbuja.h"
#include "MuroLadrillo.h"
ABomber_ManGameMode::ABomber_ManGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomber_ManGameMode::BeginPlay()
{
	Super::BeginPlay();
    //FVector Posicion = FVector(110.0f, -1250.0f, 180.0f);
	//SpawnMuroAcero(Posicion);
	//FVector Posicion2 = FVector(210.0f, -1350.0f, 180.0f);
	//SpawnMuroLadrillo(Posicion2);
	//FVector Posicion3 = FVector(110.0f, -1150.0f, 180.0f);
	//SpawnMuroAcero(Posicion3);
    SpawnMuros();
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

    // Dimensiones de cada celda
    FVector Posicion = FVector(110.0f, -1250.0f, 180.0f);
    float Espaciado = 100.0f;

    // Iterar sobre la matriz y spawnear muros
    for (int32 i = 0; i < Laberinto1.Num(); i++)
    {
        for (int32 j = 0; j < Laberinto1[i].Num(); j++)
        {
            int32 TipoMuro = Laberinto1[i][j];
            FVector SpawnLocation = Posicion + FVector(i * Espaciado, j * Espaciado, 0.0f);

            // Spawnear el muro según su tipo
            switch (TipoMuro)
            {
            case 1:
                SpawnMuroBurbuja(Posicion);
                break;
            case 2:
                SpawnMuroLadrillo(Posicion);
                break;
            case 3:
                SpawnMuroMadera(Posicion);
                break;
            case 4:
                SpawnMuroAcero(Posicion);
                break;
            default:
                break;
            }
        }
    }
}
