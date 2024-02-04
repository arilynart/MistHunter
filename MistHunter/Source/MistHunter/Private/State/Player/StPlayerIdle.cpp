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
	pivotEnterSwitch = false;
	pivotStart = false;
	moving = false;
	
}

StPlayerIdle::~StPlayerIdle()
{

}


//MAINTENANCE
void StPlayerIdle::Enter(AStMachinePlayer* _machine)
{
	PlayerMachine = _machine;

	PlayerMachine->SetAnimStateIdle();
	
	moveMin = 0.15;
}

void StPlayerIdle::Exit(AStMachinePlayer* _machine)
{

}

void StPlayerIdle::Tick(float _deltaTime)
{
	if (moving)
	{
		moveCount += _deltaTime;

		//TArray<FStringFormatArg> args;
		//args.Add(FStringFormatArg(moveCount));
		//FString _debug1 = FString::Format(TEXT("MoveCount: ({0})"), args);
		//LOG("DEBUG -- StPlayerIdle::Tick0 -- %s", *_debug1);
	}

	if (movementEndSwitch && PlayerMachine)
	{
		FRotator _current = PlayerMachine->GetActorRotation();
		//DEBUG

		//TArray<FStringFormatArg> args;
		//args.Add(FStringFormatArg(PlayerMachine->targetMoveRotation.Pitch));
		//args.Add(FStringFormatArg(PlayerMachine->targetMoveRotation.Roll));
		//args.Add(FStringFormatArg(PlayerMachine->targetMoveRotation.Yaw));
		//FString _debug1 = FString::Format(TEXT("InputV: ({0}, {1}, {2})"), args);

		//LOG("DEBUG -- StPlayerIdle::Tick0 -- %s", *_debug1);
		//---

		if (_current.Equals(PlayerMachine->targetMoveRotation, 5.0))
		{
			PlayerMachine->SetAnimStateIdle();
			movementEndSwitch = false;
			pivotEnterSwitch = false;
		}
		else if (pivotEnterSwitch)
		{
			PlayerMachine->SetAnimStatePivot();
			pivotEnterSwitch = false;
		}
	}
}


//CONTROL DEFINITIONS
void StPlayerIdle::Move(float _inputX, float _inputY)
{

	moving = true;
	movementEndSwitch = false;
	pivotEnterSwitch = false;

	FVector _inputSpeed = { _inputX, _inputY, 0 };
	FVector _clamp = PlayerMachine->MathClamp(_inputSpeed, 0.207, 0.332);

	bool over(PlayerMachine->MathAbs(_inputSpeed.Size()) < 0.586);
	FVector _select = PlayerMachine->MathSelectVector(_clamp, _inputSpeed, over);

	FRotator _rot = { 0, PlayerMachine->GetControlRotation().Yaw, 0 };
	FVector _horizontalVector = PlayerMachine->MathRightVector(_rot);
	FVector _verticalVector = PlayerMachine->MathForwardVector(_rot);

	FVector _lastVector = PlayerMachine->MathClamp(PlayerMachine->GetMoveComp()->GetLastInputVector(), 0, 1);
	PlayerMachine->targetMoveRotation = PlayerMachine->MathRotFromX(_lastVector);


	PlayerMachine->AddMovementInput(_horizontalVector, _select.X);
	PlayerMachine->AddMovementInput(_verticalVector, _select.Y);

	

	if (sprinting)
	{
		PlayerMachine->SetAnimStateJog();
	}
	else
	{

		if (moveCount < moveMin)
		{
			if (!pivotStart)
			{
				PlayerMachine->SetAnimStatePivot();
				pivotStart = true;
			}
		}
		else
		{
			PlayerMachine->SetAnimStateWalk();
		}
	}
}

void StPlayerIdle::MoveEnd()
{
	movementEndSwitch = true;
	pivotEnterSwitch = true;
	pivotStart = false;
	moving = false;
	moveCount = 0;
}

void StPlayerIdle::Look(float _inputX, float _inputY)
{
	PlayerMachine->AddControllerYawInput(_inputX);
	PlayerMachine->AddControllerPitchInput(_inputY);
}

void StPlayerIdle::SprintStart()
{
	sprinting = true;
	PlayerMachine->SetWalkSpeed(PlayerMachine->maxSprint);
}

void StPlayerIdle::SprintEnd()
{
	sprinting = false;
	PlayerMachine->SetWalkSpeed(PlayerMachine->maxWalk);
}

//CREATION
StPlayer& StPlayerIdle::GetInstance()
{
	static StPlayerIdle _instance;
	return _instance;
}