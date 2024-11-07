// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IModeloPersonaje.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RealModeloPersonaje.generated.h"

UCLASS()
class PROXY_1_API ARealModeloPersonaje : public AActor, public IIModeloPersonaje
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARealModeloPersonaje();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void CargarTexturaModelo() override;
	void CargarMallaModelo() override;
	void CargarAnimacionesModelo() override;
	void CargarModeloFinal() override;
	void RenderizarModelo() override;

	bool SetRenderizado(bool _renderizado);
	bool GetRenderizado();
private:
	bool ModeloCargado;
	bool Renderizado;
};
