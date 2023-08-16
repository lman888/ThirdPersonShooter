// Fill out your copyright notice in the Description page of Project Settings.


#include "MasterGun.h"

#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Sound/SoundBase.h"

// Sets default values
AMasterGun::AMasterGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
	SetRootComponent(root);

	skeletalComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Component"));
	skeletalComponent->SetupAttachment(root);

	projSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	projSpawnPoint->SetupAttachment(skeletalComponent);
}

void AMasterGun::PullTrigger()
{
}

// Called when the game starts or when spawned
void AMasterGun::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMasterGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AController* AMasterGun::GetOwnerController() const
{
	APawn* owner = Cast<APawn>(GetOwner());
	if (owner == nullptr) 
		return nullptr;

	return owner->GetController();
}