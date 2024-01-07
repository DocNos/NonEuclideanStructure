// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedPlayerInput.h"
#include "NOS_EPlayerInput.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class NONEUCLIDEAN_API UNOS_EPlayerInput : public UEnhancedPlayerInput
{
	GENERATED_BODY()
public:
	
	virtual void PostLoad() override;

	UFUNCTION(BlueprintImplementableEvent)
	void InitNative();
	
};
