// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MasterGun.generated.h"

class USkeletalMeshComponent;
class USceneComponent;
class UParticleSystem;
class USoundBase;

UCLASS()
class SIMPLESHOOTER_API AMasterGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMasterGun();

	void PullTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	bool GunTrace(FHitResult& aHit, FVector& aShotDirection);

	AController* GetOwnerController() const;

	UPROPERTY(EditAnywhere, Category = "Sound Effect")
	USoundBase* muzzleSound;

	UPROPERTY(EditAnywhere, Category = "Sound Effect")
	USoundBase* impactSound;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* root;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* skeletalComponent;

	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* muzzleFlash;

	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* impactEffect;

	UPROPERTY(EditAnywhere, Category = "Setup")
	float maxRange = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Combat")
	float gunDamage = 25.0f;
};
