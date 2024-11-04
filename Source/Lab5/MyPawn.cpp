// MyPawn.cpp
#include "MyPawn.h"

AMyPawn::AMyPawn()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear la componente de fuente de luz
    PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    PointLightComponent->Intensity = 5000.f; // Ajusta la intensidad de la luz
    PointLightComponent->LightColor = FColor::White; // Ajusta el color de la luz
    PointLightComponent->SetupAttachment(RootComponent); // Asocia la luz al RootComponent

    // Aquí no necesitas establecer bVisible
}

void AMyPawn::BeginPlay()
{
    Super::BeginPlay();
}

void AMyPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
