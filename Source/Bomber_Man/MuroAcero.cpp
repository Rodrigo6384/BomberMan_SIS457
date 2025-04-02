// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroAcero.h"

AMuroAcero::AMuroAcero()
{
	PrimaryActorTick.bCanEverTick = true;

	// Cargar el material que deseas aplicar
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
	if (ObjetoMaterial.Succeeded())
	{
		// Aplicar el material a la malla
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object); // 0 es el índice del slot de material
	}
}
