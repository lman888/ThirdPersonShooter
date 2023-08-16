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

	virtual void PullTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AController* GetOwnerController() const;

protected:

	UPROPERTY(EditAnywhere, Category = "Sound Effect")
	USoundBase* muzzleSound;

	UPROPERTY(EditAnywhere, Category = "Sound Effect")
	USoundBase* impactSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta	= (AllowPrivateAccess = "true"))
	USceneComponent* root;

	UPROPERTY(EditAnywhere)
	USceneComponent* projSpawnPoint;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* skeletalComponent;

	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* muzzleFlash;

	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* impactEffect;
};
