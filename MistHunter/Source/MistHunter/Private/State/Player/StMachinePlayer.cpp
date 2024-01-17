// Fill out your copyright notice in the Description page of Project Settings.


#include "State/Player/StMachinePlayer.h"

// Sets default values
AStMachinePlayer::AStMachinePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStMachinePlayer::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentState = new StPlayerIdle();
}

// Called every frame
void AStMachinePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStMachinePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

