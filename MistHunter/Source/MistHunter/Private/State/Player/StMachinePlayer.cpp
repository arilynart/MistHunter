// Fill out your copyright notice in the Description page of Project Settings.


#include "State/Player/StMachinePlayer.h"
#include "State/Player/StPlayer.h"

// Sets default values
AStMachinePlayer::AStMachinePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AStMachinePlayer::~AStMachinePlayer()
{

}

// Called when the game starts or when spawned
void AStMachinePlayer::BeginPlay()
{
	Super::BeginPlay();
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

void AStMachinePlayer::SetState(StPlayer& _nextState)
{
	//do anything the state needs to do on the backend before switching
	currentState->Exit(this);
	currentState = &_nextState;
	//startup
	currentState->Enter(this);
}

void AStMachinePlayer::StateMove(float _inputX, float _inputY)
{
	//Call the movement of our current state
	currentState->Move(_inputX, _inputY);

}

