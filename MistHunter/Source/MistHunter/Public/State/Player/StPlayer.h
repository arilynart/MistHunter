// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MISTHUNTER_API StPlayer
{
public:
	StPlayer();

	virtual void Move() = 0;

	virtual ~StPlayer() = 0;
};
