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
	/*
	TArray< FStringFormatArg > args;
	args.Add(FStringFormatArg(_inputX));
	args.Add(FStringFormatArg(_inputY));
	FString _debug0 = FString::Format(TEXT("Movement X = {0} Y = {1}"), args);


	LOG("DEBUG -- StPlayerIdle::Move0 -- %s", *_debug0);
	*/

	FVector _inputSpeed = { _inputX, _inputY, 0 };
	FVector _clamp = PlayerMachine->MathClamp(_inputSpeed, 0.207, 0.332);

	bool over(PlayerMachine->MathAbs(_inputSpeed.Size()) < 0.586);
	FVector _select = PlayerMachine->MathSelectVector(_clamp, _inputSpeed, over);

	FRotator _rot = { 0, PlayerMachine->GetControlRotation().Yaw, 0 };
	FVector _horizontalVector = PlayerMachine->MathRightVector(_rot);
	FVector _verticalVector = PlayerMachine->MathForwardVector(_rot);

	/*
	args.Add(FStringFormatArg(_horizontalVector.X));
	args.Add(FStringFormatArg(_horizontalVector.Y));
	args.Add(FStringFormatArg(_horizontalVector.Z));
	args.Add(FStringFormatArg(_select.X));
	args.Add(FStringFormatArg(_verticalVector.X));
	args.Add(FStringFormatArg(_verticalVector.Y));
	args.Add(FStringFormatArg(_verticalVector.Z));
	args.Add(FStringFormatArg(_select.Y));
	FString _debug1 = FString::Format(TEXT("Input X ({2}, {3} {4}) || Select: {5}"), args);
	FString _debug2 = FString::Format(TEXT("Input Y ({6}, {7} {8}) || Select: {9}"), args);

	LOG("DEBUG -- StPlayerIdle::Move1 -- %s", *_debug1);
	LOG("DEBUG -- StPlayerIdle::Move2 -- %s", *_debug2);
	*/

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