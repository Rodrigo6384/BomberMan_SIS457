// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomber_ManCharacter.h"
#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Engine.h"



// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
    MallaEnemigo->SetupAttachment(RootComponent);


    static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
    if (MallaAsset.Succeeded())
    {
        MallaEnemigo->SetStaticMesh(MallaAsset.Object);
        MallaEnemigo->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    }

    ColisionCapsula = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ColisionCapsula"));
    ColisionCapsula->SetupAttachment(RootComponent);
    ColisionCapsula->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    ColisionCapsula->SetCapsuleRadius(80.0f);
    ColisionCapsula->SetCapsuleHalfHeight(96.0f);


    ColisionCapsula->OnComponentBeginOverlap.AddDynamic(this, &AEnemigo::OnOverlapBegin);
}
// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemigo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void AEnemigo::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

    if (OtherActor && OtherActor != this && OtherActor->IsA(ABomber_ManCharacter::StaticClass()))
    {
        MostrarMensaje();
    }
}

void AEnemigo::MostrarMensaje() const
{
    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Fue encontrado"));
}

