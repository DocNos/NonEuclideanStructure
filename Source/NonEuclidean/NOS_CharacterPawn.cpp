// Fill out your copyright notice in the Description page of Project Settings.


#include "NOS_CharacterPawn.h"

// Sets default values
ANOS_CharacterPawn::ANOS_CharacterPawn()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANOS_CharacterPawn::BeginPlay()
{
	Super::BeginPlay();
	InitNative();
}

// Called every frame
void ANOS_CharacterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANOS_CharacterPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

