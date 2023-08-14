// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MasterGun.h"
#include "AssaultRifle.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AAssaultRifle : public AMasterGun
{
	GENERATED_BODY()

public:
	AAssaultRifle();

	void BeginPlay() override;

	void PullTrigger() override;

protected:

	void Tick(float DeltaTime) override;

	bool GunTrace(FHitResult& aHit, FVector& aShotDirection);

private:

	UPROPERTY(EditAnywhere, Category = "Setup")
	float maxRange = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Setup")
	float gunDamage = 25.0f;
};