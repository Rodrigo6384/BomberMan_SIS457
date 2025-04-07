// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoSubterraneoTopo.h"

AEnemigoSubterraneoTopo::AEnemigoSubterraneoTopo()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Gravel.M_Ground_Gravel'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaEnemigo->SetMaterial(0, ObjetoMaterial.Object);
	}
}
void AEnemigoSubterraneoTopo::MostrarMensaje()const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("!ENEMIGO TOPO FUE HAYADO !"));
}

void AEnemigoSubterraneoTopo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemigoSubterraneoTopo::BeginPlay()
{
	Super::BeginPlay();
}
