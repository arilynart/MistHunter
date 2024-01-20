// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class StPlayer;

#include "CoreMinimal.h"
#include "State/Player/StPlayer.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "StMachinePlayer.generated.h"

/**
 *
 */

class UKismetMathLibrary;

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite);
	float maxSprint;
	float maxWalk;


	//animations
	UCharacterMovementComponent* GetMoveComp();
	USkeletalMeshComponent* GetMeshComponent();

	//converted math functions
	float MathAbs(float _a);
	FVector MathClamp(FVector _a, float _min, float _max);
	FVector MathSelectVector(FVector _a, FVector _b, bool _select);
	FVector MathForwardVector(FRotator _rot);
	FVector MathRightVector(FRotator _rot);

	~AStMachinePlayer();

private:
	StPlayer* currentState;

	UCharacterMovementComponent* movementComponent;
	USkeletalMeshComponent* meshComponent;

	UKismetMathLibrary* lib;

	bool triggeredState = false;
	void StateCheck();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
