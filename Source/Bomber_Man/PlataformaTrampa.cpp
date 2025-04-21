// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaTrampa.h"

APlataformaTrampa::APlataformaTrampa()
{
	PrimaryActorTick.bCanEverTick = true;
	if (MallaPlataforma)
	{
		MallaPlataforma->SetRelativeScale3D(FVector(3.0f, 10.0f, 1.0f));
	}
}

void APlataformaTrampa::BeginPlay()
{
	Super::BeginPlay();
}

void APlataformaTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PosicionActual = GetActorLocation();
	float Diferencia = DestinoActualY - PosicionActual.Y;

	if (FMath::Abs(Diferencia) > Tolerancia)
	{
		float Direccion = FMath::Sign(Diferencia);
		PosicionActual.Y += Direccion * VelocidadMovimiento * DeltaTime;
		SetActorLocation(PosicionActual);
	}
	else
	{
		SeleccionarNuevoDestinoAleatorio();
	}
}

void APlataformaTrampa::SeleccionarNuevoDestinoAleatorio()
{
	DestinoActualY = FMath::RandRange(RangoMovimientoMinimo, RangoMovimientoMaximo);
}
