// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class LAB5_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, Category = "My Attributes")
	float MiAtributo; // Atributo que se puede leer desde un Blueprint

	UFUNCTION(BlueprintCallable, Category = "My Functions")
	void SumarYMostrar(float Numero1, float Numero2); // Método para sumar y mostrar resultado
};
