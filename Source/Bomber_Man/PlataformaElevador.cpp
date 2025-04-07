// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaElevador.h"

APlataformaElevador::APlataformaElevador()
{

	PrimaryActorTick.bCanEverTick = true;
	if (MallaPlataforma)
	{
		MallaPlataforma->SetRelativeScale3D(FVector(3.0f, 3.0f, 1.0f));
	}
}

void APlataformaElevador::BeginPlay()
{
	Super::BeginPlay();
}

void APlataformaElevador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.Z += VelocidadMovimiento * DeltaTime * DireccionMovimiento;
	if (NuevaPosicion.Z >= AlturaMaxima || NuevaPosicion.Z <= AlturaMinima)
	{
		DireccionMovimiento *= -1;
	}
	SetActorLocation(NuevaPosicion);
}
