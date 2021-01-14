// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GRIDSELECTORPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInputKey, const FKey, Key, const EInputEvent, InputEvent);

/**
 * 
 */
UCLASS()
class GRIDSELECTOR_API AGRIDSELECTORPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual bool InputKey(FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad) override;
	
	UPROPERTY(BlueprintAssignable)
		FOnPlayerInputKey OnPlayerInputKey;
	
};
