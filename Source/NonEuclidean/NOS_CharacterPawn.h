// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NOS_CharacterPawn.generated.h"

UCLASS(Blueprintable)
class NONEUCLIDEAN_API ANOS_CharacterPawn : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANOS_CharacterPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void InitNative();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
