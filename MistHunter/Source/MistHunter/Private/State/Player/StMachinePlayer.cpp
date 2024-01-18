// Fill out your copyright notice in the Description page of Project Settings.



#include "State/Player/StPlayer.h"
#include "State/Player/StPlayerIdle.h"
#include "State/Player/StMachinePlayer.h"


// Sets default values
AStMachinePlayer::AStMachinePlayer()
{
	currentState = &StPlayerIdle::GetInstance();
	movementComponent = GetComponentByClass<UCharacterMovementComponent>();
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
	currentState->Move(_inputX, _inputY);
}

void AStMachinePlayer::StateLook(float _inputX, float _inputY)
{
	//Call the movement of our current state
	currentState->Look(_inputX, _inputY);

}

void AStMachinePlayer::StateSprintStart()
{
	currentState->SprintStart();
}

void AStMachinePlayer::StateSprintEnd()
{
	currentState->SprintEnd();
}

void AStMachinePlayer::SetWalkSpeed(float _speed)
{
	movementComponent->MaxWalkSpeed = _speed;
}