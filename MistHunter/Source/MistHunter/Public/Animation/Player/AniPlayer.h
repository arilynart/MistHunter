// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "AniPlayer.generated.h"

/**
 * 
 */
UCLASS()
class MISTHUNTER_API UAniPlayer : public UAnimInstance
{
	GENERATED_BODY()

	
public:

	UFUNCTION(BlueprintCallable, Category = "Animation")
	void SetOwner(AActor* _actor);

	UFUNCTION(BlueprintCallable, Category = "Animation")
	AActor* GetOwner();

	UFUNCTION(BlueprintCallable, Category = "Animation")
	UCharacterMovementComponent* GetMovement();

	UFUNCTION(BlueprintCallable, Category = "Animation")
	USkeletalMeshComponent* GetMesh();

	UFUNCTION(BlueprintCallable, Category = "Animation")
	void SetMovementData();

	UFUNCTION(BlueprintCallable, Category = "Animation")
	bool MovementThreshold(float _minCurrentSpeed, float _minMaxSpeed, float _minInputAcceleration);

	//---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	FVector velocity;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	float speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	float maxSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	FVector lastInput;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	bool falling;

private:
	AActor* owner;
	UCharacterMovementComponent* ownerMovement;
	USkeletalMeshComponent* ownerMesh;

	UKismetMathLibrary* lib;

};
