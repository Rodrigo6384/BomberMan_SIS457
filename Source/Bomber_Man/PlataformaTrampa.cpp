// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaTrampa.h"

APlataformaTrampa::APlataformaTrampa()
{
	PrimaryActorTick.bCanEverTick = true;
	if (MallaPlataforma)
	{
		MallaPlataforma->SetRelativeScale3D(FVector(3.0f, 20.0f, 1.0f));
	}
}

void APlataformaTrampa::BeginPlay()
{
	Super::BeginPlay();
}

void APlataformaTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.Y += VelocidadMovimiento * DeltaTime * DireccionMovimiento;
	if (NuevaPosicion.Y >= RangoMovimientoMaximo || NuevaPosicion.Y <= RangoMovimientoMinimo)
	{
			
		DireccionMovimiento *= -1;
	}
	SetActorLocation(NuevaPosicion);
	// Mostrar la posición en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, FString::Printf(TEXT("Posición Z: %f"), NuevaPosicion.Y));
}
