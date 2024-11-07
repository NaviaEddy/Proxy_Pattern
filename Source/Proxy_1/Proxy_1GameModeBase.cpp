// Copyright Epic Games, Inc. All Rights Reserved.
#include "Proxy_1GameModeBase.h"
#include "ProxyModeloPersonaje.h"

AProxy_1GameModeBase::AProxy_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AProxy_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Proxy = GetWorld()->SpawnActor<AProxyModeloPersonaje>(AProxyModeloPersonaje::StaticClass());

	Proxy->RenderizarModelo();
	Proxy->RenderizarModelo();
	Proxy->RenderizarModelo();
}

void AProxy_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
