// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroLava.h"

AMuroLava::AMuroLava()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile.M_Tech_Hex_Tile'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object);
	}
}
