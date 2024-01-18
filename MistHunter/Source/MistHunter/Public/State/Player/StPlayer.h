// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class AStMachinePlayer;

#include "CoreMinimal.h"

/**
 * 
 */

class MISTHUNTER_API StPlayer
{
public:
	StPlayer();

	virtual void Enter(AStMachinePlayer* _machine) = 0;
	virtual void Exit(AStMachinePlayer* _machine) = 0;

	//controls
	virtual void Move(float _inputX, float _inputY) = 0; //LS
	virtual void Look(float _inputX, float _inputY) = 0; //RS
	virtual void SprintStart() = 0; //R1 start
	virtual void SprintEnd() = 0; //R1 end
	
	virtual ~StPlayer();
};
