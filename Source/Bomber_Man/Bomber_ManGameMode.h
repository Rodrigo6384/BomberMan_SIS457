// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bomber_ManGameMode.generated.h"

UCLASS(minimalapi)
class ABomber_ManGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomber_ManGameMode();
protected:
	virtual void BeginPlay() override;
private:
	void SpawnMuroAcero(FVector Posicion);
	void SpawnMuroLadrillo(FVector Posicion);
	void SpawnMuroBurbuja(FVector Posicion);
	void SpawnMuroMadera(FVector Posicion);
	TArray<TArray<int32>> Laberinto1 = {
	{4, 4, 4, 4, 4, 4, 4, 4},
	{4, 0, 0, 0, 0, 0, 0, 4},
	{4, 3, 2, 1, 3, 3, 0, 4},
	{4, 0, 0, 1, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 4},
	{4, 4, 4, 4, 4, 4, 4, 4}
	};
	void SpawnMuros();
};



