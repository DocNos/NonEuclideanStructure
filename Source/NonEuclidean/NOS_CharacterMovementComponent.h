// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NOS_CharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class NONEUCLIDEAN_API UNOS_CharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	
	virtual void PostLoad() override;
	
};
