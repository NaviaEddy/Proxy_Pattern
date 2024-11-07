// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IModeloPersonaje.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIModeloPersonaje : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROXY_1_API IIModeloPersonaje
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//Funciones para cargar el modelo del personaje 3D
	virtual void CargarTexturaModelo() = 0;
	virtual void CargarMallaModelo() = 0;
	virtual void CargarAnimacionesModelo() = 0;
	virtual void CargarModeloFinal() = 0;
	virtual void RenderizarModelo() = 0;
};
