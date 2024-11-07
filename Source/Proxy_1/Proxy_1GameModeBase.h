// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Proxy_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROXY_1_API AProxy_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProxy_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AProxyModeloPersonaje* Proxy;
	
};
