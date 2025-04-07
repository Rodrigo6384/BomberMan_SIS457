// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoSubterraneo.h"
#include "EnemigoSubterraneoGusano.generated.h"

/**
 * 
 */
UCLASS()
class BOMBER_MAN_API AEnemigoSubterraneoGusano : public AEnemigoSubterraneo
{
	GENERATED_BODY()
public:
	AEnemigoSubterraneoGusano();
protected:
    virtual void BeginPlay() override; // Aseg�rate de que esta funci�n est� definida como virtual

public:
    virtual void Tick(float DeltaTime) override; // Aseg�rate de que esta funci�n est� definida como virtual
protected:
	// Sobrescribir la funci�n para cambiar el mensaje
	virtual void MostrarMensaje() const override;
};
