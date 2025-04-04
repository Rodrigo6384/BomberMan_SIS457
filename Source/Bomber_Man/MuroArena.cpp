// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroArena.h"

AMuroArena::AMuroArena()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaMuro->SetMaterial(0, ObjetoMaterial.Object);
	}
}
