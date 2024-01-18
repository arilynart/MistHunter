// Fill out your copyright notice in the Description page of Project Settings.

#include <string>
#include <sstream>
#include "MistHunter/MistHunter.h"
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
	TArray< FStringFormatArg > args;
	args.Add(FStringFormatArg(_inputX));
	args.Add(FStringFormatArg(_inputY));
	FString _debug0 = FString::Format(TEXT("Movement X = {0} Y = {1}"), args);


	LOG("DEBUG -- StPlayerIdle::Move -- %s", *_debug0);

	FVector _inputSpeed = { _inputX, _inputY, 0 };
	FVector _clamp = PlayerMachine->MathClamp(_inputSpeed, 0.207, 0.332);

	bool over(PlayerMachine->MathAbs(_inputSpeed.Size()) < 0.586);
	FVector _select = PlayerMachine->MathSelectVector(_clamp, _inputSpeed, over);

	FRotator _rot = { 0, PlayerMachine->GetControlRotation().Yaw, 0 };
	FVector _horizontalVector = PlayerMachine->MathForwardVector(_rot);
	FVector _verticalVector = PlayerMachine->MathRightVector(_rot);

	if (_inputX > 0) PlayerMachine->AddMovementInput(_horizontalVector, _select.X);
	if (_inputY > 0) PlayerMachine->AddMovementInput(_verticalVector, _select.Y);
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