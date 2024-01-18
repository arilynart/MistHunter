// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State/Player/StPlayer.h"
#include "State/Player/StMachinePlayer.h"
#include "Kismet/KismetMathLibrary.h"

/**
 * 
 */


class MISTHUNTER_API StPlayerIdle : public StPlayer
{
public:
	StPlayerIdle();

	void Enter(AStMachinePlayer* _machine) override;
	void Exit(AStMachinePlayer* _machine) override;
	void Move(float _inputX, float _inputY) override;
	void Look(float _inputX, float _inputY) override;
	void SprintStart() override;
	void SprintEnd() override;

	static StPlayer& GetInstance();

	~StPlayerIdle();

private:
	AStMachinePlayer* PlayerMachine;
};
