// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GRIDSELECTORPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GRIDSELECTOR_API AGRIDSELECTORPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	/** Flushes the current key state. */
	virtual void FlushPressedKeys() override;
	
	
};
