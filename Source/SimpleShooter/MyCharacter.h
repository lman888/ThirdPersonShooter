// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

DECLARE_DELEGATE_OneParam(FSwapWeaponDelegate, int32);

class AMasterGun;

UCLASS()
class SIMPLESHOOTER_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintPure)
	float GetHealthPercent() const;

	void PullTrigger();

	void ReleaseTrigger();

private:

	FSwapWeaponDelegate swapWeaponDelegate;

	void CallWeaponSwapOneDelegate(FKey aKeyPressed);

	void SwapWeapons(int aWeaponChoice);

	void MoveForwardAndBack(float aAxisValue);

	void MoveLeftAndRight(float aAxisValue);

	void LookUpAndDownRate(float aAxisValue);

	void LookLeftAndRightRate(float aAxisValue);

	UPROPERTY(EditAnywhere, Category = "Setup", meta = (AllowPrivateAccess))
	float rotationRate = 10;

	UPROPERTY(VisibleAnywhere)
	float currentHealth;

	UPROPERTY(EditDefaultsOnly, Category = "Setup", meta = (AllowPrivateAccess))
	float maxHealth = 100;

	UPROPERTY(EditDefaultsOnly, Category = "Setup", meta = (AllowPrivateAccess))
	TArray<TSubclassOf<AMasterGun>>gunClass;

	UPROPERTY()
	AMasterGun* gun;
};
