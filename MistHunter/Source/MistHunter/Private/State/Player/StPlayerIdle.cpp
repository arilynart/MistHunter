// Fill out your copyright notice in the Description page of Project Settings.


#include "State/Player/StPlayerIdle.h"
#include "State/Player/StMachinePlayer.h"


StPlayerIdle::StPlayerIdle()
{
}

StPlayerIdle::~StPlayerIdle()
{
}


//MAINTENANCE
void StPlayerIdle::Enter(AStMachinePlayer* _machine)
{
	PlayerMachine = _machine;
}

void StPlayerIdle::Exit(AStMachinePlayer* _machine)
{

}


//CONTROL DEFINITIONS
void StPlayerIdle::Move(float _inputX, float _inputY)
{

	//Call the movement of our current state

	UKismetMathLibrary _library;

	
	FVector _inputSpeed = { _inputX, _inputY, 0 };
	FVector _clamp = _library.ClampVectorSize(_inputSpeed, 0.207, 0.332);

	bool over(_library.Abs(_inputSpeed.Size()) < 0.586);
	FVector _select = _library.SelectVector(_clamp, _inputSpeed, over);

	FRotator _rot = { 0, PlayerMachine->GetControlRotation().Yaw, 0 };
	FVector _horizontalVector = _library.GetForwardVector(_rot);
	FVector _verticalVector = _library.GetRightVector(_rot);

	PlayerMachine->AddMovementInput(_horizontalVector, _select.X);
	PlayerMachine->AddMovementInput(_verticalVector, _select.Y);
}

void StPlayerIdle::Look(float _inputX, float _inputY)
{
	PlayerMachine->AddControllerYawInput(_inputX);
	PlayerMachine->AddControllerPitchInput(_inputY);
}

void StPlayerIdle::SprintStart()
{
	PlayerMachine->SetWalkSpeed(427.0);
}

void StPlayerIdle::SprintEnd()
{
	PlayerMachine->SetWalkSpeed(147.0);
}

//CREATION
StPlayer& StPlayerIdle::GetInstance()
{
	static StPlayerIdle _instance;
	return _instance;
}