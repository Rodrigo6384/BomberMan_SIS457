// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroConcreto.h"

AMuroConcreto::AMuroConcreto()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Rock_Basalt.M_Rock_Basalt'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object);
	}
}
