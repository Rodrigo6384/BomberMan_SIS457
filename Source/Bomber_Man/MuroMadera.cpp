// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroMadera.h"

AMuroMadera::AMuroMadera()
{
	PrimaryActorTick.bCanEverTick = true;
	// Cargar el material que deseas aplicar
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'"));
	if (ObjetoMaterial.Succeeded())
	{
		// Aplicar el material a la malla
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object); // 0 es el índice del slot de material
	}
}
