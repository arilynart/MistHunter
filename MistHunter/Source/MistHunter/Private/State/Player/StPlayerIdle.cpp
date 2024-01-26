// Fill out your copyright notice in the Description page of Project Settings.

#include <string>
#include <sstream>
#include "MistHunter/MistHunter.h"
#include "State/Player/StPlayerIdle.h"
#include "State/Player/StMachinePlayer.h"
#include "Animation/Player/AniPlayer.h"


StPlayerIdle::StPlayerIdle()
{
	movementEndSwitch = false;
	targetMoveRotation = { 0, 0, 0 };
}

StPlayerIdle::~StPlayerIdle()
{

}


//MAINTENANCE
void StPlayerIdle::Enter(AStMachinePlayer* _machine)
{
	PlayerMachine = _machine;

	PlayerMachine->SetAnimStateIdle();
	
}

void StPlayerIdle::Exit(AStMachinePlayer* _machine)
{

}

void StPlayerIdle::Tick(float _deltaTime)
{
	if (movementEndSwitch && PlayerMachine)
	{
		FRotator _current = PlayerMachine->GetActorRotation();

		if (_current.Yaw == targetMoveRotation.Yaw)
		{
			PlayerMachine->SetAnimStateIdle();
			movementEndSwitch = false;
		}
	}

}


//CONTROL DEFINITIONS
void StPlayerIdle::Move(float _inputX, float _inputY)
{

	FVector _inputSpeed = { _inputX, _inputY, 0 };
	FVector _clamp = PlayerMachine->MathClamp(_inputSpeed, 0.207, 0.332);

	bool over(PlayerMachine->MathAbs(_inputSpeed.Size()) < 0.586);
	FVector _select = PlayerMachine->MathSelectVector(_clamp, _inputSpeed, over);

	FRotator _rot = { 0, PlayerMachine->GetControlRotation().Yaw, 0 };
	FVector _horizontalVector = PlayerMachine->MathRightVector(_rot);
	FVector _verticalVector = PlayerMachine->MathForwardVector(_rot);

	FVector _lastVector = PlayerMachine->MathClamp(PlayerMachine->GetMoveComp()->GetLastInputVector(), 0, 1);
	targetMoveRotation = PlayerMachine->MathRotFromX(_lastVector);
	
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(targetMoveRotation.Pitch));
	args.Add(FStringFormatArg(targetMoveRotation.Roll));
	args.Add(FStringFormatArg(targetMoveRotation.Yaw));
	FString _debug1 = FString::Format(TEXT("InputV: ({0}, {1}, {2})"), args);

	LOG("DEBUG -- StPlayerIdle::Move0 -- %s", *_debug1);

	PlayerMachine->AddMovementInput(_horizontalVector, _select.X);
	PlayerMachine->AddMovementInput(_verticalVector, _select.Y);

	if (PlayerMachine->GetVelocity().Size() > 300)
	{
		PlayerMachine->SetAnimStateJog();
	}
	else
	{
		PlayerMachine->SetAnimStateWalk();
	}
}

void StPlayerIdle::MoveEnd()
{
	movementEndSwitch = true;
}

void StPlayerIdle::Look(float _inputX, float _inputY)
{
	PlayerMachine->AddControllerYawInput(_inputX);
	PlayerMachine->AddControllerPitchInput(_inputY);
}

void StPlayerIdle::SprintStart()
{
	PlayerMachine->SetWalkSpeed(PlayerMachine->maxSprint);
}

void StPlayerIdle::SprintEnd()
{
	PlayerMachine->SetWalkSpeed(PlayerMachine->maxWalk);
}

//CREATION
StPlayer& StPlayerIdle::GetInstance()
{
	static StPlayerIdle _instance;
	return _instance;
}