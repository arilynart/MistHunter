// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class StPlayer;

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "StMachinePlayer.generated.h"

/**
 *
 */

UCLASS()
class MISTHUNTER_API AStMachinePlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AStMachinePlayer();

	//returns the current state class;
	inline StPlayer* GetCurrentState() const { return currentState; }

	//UFUNCTION(BlueprintCallable, Category = "State - Player")
	void StateMove(float _inputX, float _inputY);

	void SetState(StPlayer& _nextState);

	~AStMachinePlayer();

private:
	StPlayer* currentState;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
