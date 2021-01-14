// Fill out your copyright notice in the Description page of Project Settings.

#include "GRIDSELECTORPlayerController.h"

bool AGRIDSELECTORPlayerController::InputKey(FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad)
{
	const bool bResult = Super::InputKey(Key, EventType, AmountDepressed, bGamepad);

	if (OnPlayerInputKey.IsBound())
	{
		OnPlayerInputKey.Broadcast(Key, EventType);
	}

	return bResult;
}
