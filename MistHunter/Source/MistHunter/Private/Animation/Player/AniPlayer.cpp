// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/Player/AniPlayer.h"

void UAniPlayer::SetOwner(AActor* _actor)
{
	owner = _actor;

	ownerMovement = owner->GetComponentByClass<UCharacterMovementComponent>();
	ownerMesh = owner->GetComponentByClass<USkeletalMeshComponent>();
}


AActor* UAniPlayer::GetOwner()
{
	return owner;
}

UCharacterMovementComponent* UAniPlayer::GetMovement()
{
	return ownerMovement;
}

USkeletalMeshComponent* UAniPlayer::GetMesh()
{
	return ownerMesh;
}

void UAniPlayer::SetMovementData()
{
	velocity = ownerMovement->Velocity;
	speed = velocity.Size();

	maxSpeed = ownerMovement->GetMaxSpeed();

	lastInput = lib->ClampVectorSize(ownerMovement->GetLastInputVector(), 0, 1);

}

bool UAniPlayer::MovementThreshold(float _minCurrentSpeed, float _minMaxSpeed, float _minInputAcceleration)
{
	return (_minCurrentSpeed <= speed) && (_minMaxSpeed <= maxSpeed) && (_minInputAcceleration <= lastInput.Size());
}

