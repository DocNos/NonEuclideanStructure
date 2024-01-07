// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NOS_PlayerController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class NONEUCLIDEAN_API ANOS_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:	
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void InitNative();
	
};
