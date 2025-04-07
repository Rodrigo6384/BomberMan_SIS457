// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoSubterraneoGusano.h"
#include "Bomber_ManGameMode.h"
#include "Engine/Engine.h"

AEnemigoSubterraneoGusano::AEnemigoSubterraneoGusano()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaEnemigo->SetMaterial(0, ObjetoMaterial.Object);
	}

}
void AEnemigoSubterraneoGusano::MostrarMensaje()const
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("¡NEMEIGO GUSANO FUE HAYADO !"));
}
void AEnemigoSubterraneoGusano::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AEnemigoSubterraneoGusano::BeginPlay()
{
    Super::BeginPlay();
}