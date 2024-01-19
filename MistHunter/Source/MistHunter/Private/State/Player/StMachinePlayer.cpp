// Fill out your copyright notice in the Description page of Project Settings.



#include "State/Player/StPlayer.h"
#include "State/Player/StPlayerIdle.h"
#include "Kismet/KismetMathLibrary.h"
#include "State/Player/StMachinePlayer.h"


// Sets default values
AStMachinePlayer::AStMachinePlayer()
{
	currentState = &StPlayerIdle::GetInstance();
	movementComponent = GetComponentByClass<UCharacterMovementComponent>();
	meshComponent = GetMesh();
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



//STATE
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
	StateCheck();
	currentState->Move(_inputX, _inputY);
}

void AStMachinePlayer::StateLook(float _inputX, float _inputY)
{
	StateCheck();
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

void AStMachinePlayer::StateCheck()
{
	if (!triggeredState)
	{
		SetState(StPlayerIdle::GetInstance());
		triggeredState = true;
	}
}



//ANIMATION
UCharacterMovementComponent* AStMachinePlayer::GetMovementComponent()
{
	return movementComponent;
}

USkeletalMeshComponent* AStMachinePlayer::GetMeshComponent()
{
	return meshComponent;
}


//MATH
float AStMachinePlayer::MathAbs(float _a)
{
	
	return lib->Abs(_a);
}

FVector AStMachinePlayer::MathClamp(FVector _a, float _min, float _max)
{

	return lib->ClampVectorSize(_a, _min, _max);
}

FVector AStMachinePlayer::MathSelectVector(FVector _a, FVector _b, bool _select)
{

	return lib->SelectVector(_a, _b, _select);
}

FVector AStMachinePlayer::MathForwardVector(FRotator _rot)
{

	return lib->GetForwardVector(_rot);
}

FVector AStMachinePlayer::MathRightVector(FRotator _rot)
{

	return lib->GetRightVector(_rot);
}