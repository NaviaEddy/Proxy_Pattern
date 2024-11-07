// Fill out your copyright notice in the Description page of Project Settings.

#include "ProxyModeloPersonaje.h"
#include "RealModeloPersonaje.h"

// Sets default values
AProxyModeloPersonaje::AProxyModeloPersonaje()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ModeloPersonaje = nullptr;

}

// Called when the game starts or when spawned
void AProxyModeloPersonaje::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProxyModeloPersonaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProxyModeloPersonaje::RenderizarModelo()
{
	if (!ModeloPersonaje) {
		ModeloPersonaje = GetWorld()->SpawnActor<ARealModeloPersonaje>(ARealModeloPersonaje::StaticClass());
		ModeloPersonaje->SetRenderizado(false);
		ModeloPersonaje->RenderizarModelo();
	}
	else {
		ModeloPersonaje->SetRenderizado(true);
		ModeloPersonaje->RenderizarModelo();
	}
}

