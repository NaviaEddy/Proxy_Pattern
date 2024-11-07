// Fill out your copyright notice in the Description page of Project Settings.


#include "RealModeloPersonaje.h"

// Sets default values
ARealModeloPersonaje::ARealModeloPersonaje()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ModeloCargado =  false;
	Renderizado = false;
}

// Called when the game starts or when spawned
void ARealModeloPersonaje::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARealModeloPersonaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARealModeloPersonaje::CargarTexturaModelo()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cargando textura del modelo")));
}

void ARealModeloPersonaje::CargarMallaModelo()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cargando malla del modelo")));

}

void ARealModeloPersonaje::CargarAnimacionesModelo()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cargando animaciones del modelo")));
}

void ARealModeloPersonaje::CargarModeloFinal()
{
	CargarTexturaModelo();
	CargarMallaModelo();
	CargarAnimacionesModelo();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Modelo cargado")));
	ModeloCargado = true;
}

void ARealModeloPersonaje::RenderizarModelo()
{
	if (!GetRenderizado()) {
		CargarModeloFinal();

		if (ModeloCargado)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Renderizando modelo")));
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Modelo ya esta renderizado")));
	}
}

bool ARealModeloPersonaje::SetRenderizado(bool _renderizado)
{
	return Renderizado = _renderizado;
}

bool ARealModeloPersonaje::GetRenderizado()
{
	return Renderizado;
}

