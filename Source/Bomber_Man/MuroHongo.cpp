// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroHongo.h"

AMuroHongo::AMuroHongo()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Ground_Moss.M_Ground_Moss'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object);
	}

}
