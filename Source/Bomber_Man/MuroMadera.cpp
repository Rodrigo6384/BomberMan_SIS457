// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroMadera.h"

AMuroMadera::AMuroMadera()
{
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'"));
	if (ObjetoMaterial.Succeeded())
	{
		
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object);
	}
}

void AMuroMadera::BeginPlay()
{
}

void AMuroMadera::Tick(float DeltaTime)
{
}
