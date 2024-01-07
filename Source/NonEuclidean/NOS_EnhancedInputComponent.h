// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "NOS_EnhancedInputComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class NONEUCLIDEAN_API UNOS_EnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void InitNative();

};
