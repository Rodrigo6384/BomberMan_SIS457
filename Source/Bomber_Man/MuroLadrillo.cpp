// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroLadrillo.h"

AMuroLadrillo::AMuroLadrillo()
{
	PrimaryActorTick.bCanEverTick = true;

	
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (ObjetoMaterial.Succeeded())
	{
		
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object);
	}
}
