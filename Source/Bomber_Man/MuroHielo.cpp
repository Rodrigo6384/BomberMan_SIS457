// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroHielo.h"

AMuroHielo::AMuroHielo()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object);
	}
}
