// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class StPlayer;

#include "CoreMinimal.h"
#include "State/Player/StPlayer.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "StMachinePlayer.generated.h"

/**
 *
 */

class UPawnMovementComponent;

UCLASS()
class MISTHUNTER_API AStMachinePlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AStMachinePlayer();

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void StateMove(float _inputX, float _inputY);

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void StateLook(float _inputX, float _inputY);

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void StateSprintStart();

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void StateSprintEnd();

	void SetState(StPlayer& _nextState);

	//----
	void SetWalkSpeed(float _speed);

	~AStMachinePlayer();

private:
	StPlayer* currentState;

	UCharacterMovementComponent* movementComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
