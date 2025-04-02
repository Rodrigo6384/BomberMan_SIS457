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
	FVector Posicion = FVector(110.0f, -1250.0f, 180.0f);
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

    float Espaciado = 200.0f;


    for (int32 i = 0; i < Laberinto1.Num(); i++)
    {
        for (int32 j = 0; j < Laberinto1[i].Num(); j++)
        {
            FVector Posicion(j * Espaciado, i * Espaciado, 0.0f);

            if (Laberinto1[i][j] == 1) {
                SpawnMuroAcero(Posicion);
            }
            else if (Laberinto1[i][j] == 2) {
                SpawnMuroMadera(Posicion);
            }
            else if (Laberinto1[i][j] == 3) {
                SpawnMuroBurbuja(Posicion);
            }
            else if (Laberinto1[i][j] == 4) {
                SpawnMuroLadrillo(Posicion);

            }
        }
    }
}
