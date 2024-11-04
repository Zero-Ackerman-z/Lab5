// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"
#include "Engine/Engine.h" // Para usar GEngine

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame. 
	PrimaryActorTick.bCanEverTick = true;

	// Inicializa el atributo
	MiAtributo = 42.0f; // Por ejemplo, puedes asignar un valor inicial
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Método que suma dos números y muestra el resultado en pantalla
void AMyActor::SumarYMostrar(float Numero1, float Numero2)
{
    float Resultado = Numero1 + Numero2;

    // Mostrar el resultado en la consola del juego
    if (GEngine)
    {
        FString Mensaje = FString::Printf(TEXT("La suma de %f y %f es: %f"), Numero1, Numero2, Resultado);

        // Esta línea muestra el mensaje en pantalla
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, Mensaje);

        // También puedes usar esto para verificar en la consola
        UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
    }
}

