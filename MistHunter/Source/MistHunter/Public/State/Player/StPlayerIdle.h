// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "State/Player/StPlayer.h"

/**
 * 
 */
class MISTHUNTER_API StPlayerIdle : public StPlayer
{
public:
	StPlayerIdle();

	virtual void Move() override;

	~StPlayerIdle();
};
