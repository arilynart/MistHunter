// Fill out your copyright notice in the Description page of Project Settings.


#include "State/Player/StPlayerIdle.h"


StPlayerIdle::StPlayerIdle()
{
}

StPlayerIdle::~StPlayerIdle()
{
}

void StPlayerIdle::Enter(AStMachinePlayer* _machine)
{
	PlayerMachine = _machine;
}

void StPlayerIdle::Exit(AStMachinePlayer* _machine)
{

}

void StPlayerIdle::Move(float _inputX, float _inputY)
{
	FRotator _rot = { 0, PlayerMachine->GetControlRotation().Yaw, 0};
	FVector _horizontalVector = Library.GetForwardVector(_rot);
	FVector _verticalVector = Library.GetRightVector(_rot);

	PlayerMachine->AddMovementInput(_horizontalVector, _inputX);
	PlayerMachine->AddMovementInput(_verticalVector, _inputY);
}
