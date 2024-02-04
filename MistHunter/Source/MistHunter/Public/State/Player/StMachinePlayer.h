// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

class StPlayer;

#include "CoreMinimal.h"
#include "State/Player/StPlayer.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/Player/AniPlayer.h"
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


	//STATES
	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void StateMove(float _inputX, float _inputY);

	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void StateMoveEnd();

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
	float maxSprint = 540.0;
	float maxWalk;
	

	//animations
	UCharacterMovementComponent* GetMoveComp();
	USkeletalMeshComponent* GetMeshComponent();
	UAniPlayer* GetAniPlayer();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	FRotator targetMoveRotation;

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Player Animation Idle"))
	void SetAnimStateIdle();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Player Animation Walk"))
	void SetAnimStateWalk();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Player Animation Jog"))
	void SetAnimStateJog();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Player Animation Pivot"))
	void SetAnimStatePivot();

	//converted math functions
	float MathAbs(float _a);
	FVector MathClamp(FVector _a, float _min, float _max);
	FVector MathSelectVector(FVector _a, FVector _b, bool _select);
	FVector MathForwardVector(FRotator _rot);
	FVector MathRightVector(FRotator _rot);
	FRotator MathRotFromX(FVector _vec);

	~AStMachinePlayer();

private:
	StPlayer* currentState;

	UCharacterMovementComponent* movementComponent;
	USkeletalMeshComponent* meshComponent;
	UAniPlayer* aniPlayer;

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
