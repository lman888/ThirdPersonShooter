// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MasterGun.h"
#include "RocketLauncher.generated.h"

class ARocketProjectile;
class USceneComponent;

UCLASS()
class SIMPLESHOOTER_API ARocketLauncher : public AMasterGun
{
	GENERATED_BODY()

public:
	ARocketLauncher();

	void BeginPlay() override;

	void PullTrigger() override;

protected:

	void Tick(float DeltaTime) override;

	void LaunchProjectile();

private:

	UPROPERTY(EditAnywhere, Category = "Setup", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ARocketProjectile> projectile;

	UPROPERTY(EditAnywhere, Category = "Setup", meta = (AllowPrivateAccess = "true"))
	float maxRange = 2000;

	UPROPERTY(EditAnywhere, Category = "Setup", meta = (AllowPrivateAccess = "true"))
	float gunDamage = 60.0f;
};