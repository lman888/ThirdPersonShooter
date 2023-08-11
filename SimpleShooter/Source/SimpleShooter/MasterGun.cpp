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
}

void AMasterGun::PullTrigger()
{
	//Spawn a particle effect
	UGameplayStatics::SpawnEmitterAttached(muzzleFlash, skeletalComponent, TEXT("MuzzleFlashSocket"));
	
	//Spawns sound
	UGameplayStatics::SpawnSoundAttached(muzzleSound, skeletalComponent, TEXT("MuzzleFlashSocket"));

	FHitResult hitResult;
	FVector shotDir;

	if (GunTrace(hitResult, shotDir))
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impactEffect, hitResult.ImpactPoint, shotDir.Rotation());

		UGameplayStatics::PlaySoundAtLocation(GetWorld(), impactSound, hitResult.Location);

		AActor* hitActor = hitResult.GetActor();
		if (hitActor != nullptr)
		{
			UE_LOG(LogTemp, Display, TEXT("Hitting: %s"), *hitActor->GetActorNameOrLabel());
			FPointDamageEvent DamageEvent(gunDamage, hitResult, shotDir, nullptr);
			hitActor->TakeDamage(gunDamage, DamageEvent, GetOwnerController(), this);
		}
	}
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

bool AMasterGun::GunTrace(FHitResult& aHit, FVector& aShotDirection)
{
	FVector location;
	FRotator rotation;

	aShotDirection = -rotation.Vector();

	if (GetOwnerController() == nullptr)
		return false;

	GetOwnerController()->GetPlayerViewPoint(location, rotation);

	FVector end = location + rotation.Vector() * maxRange;

	FCollisionQueryParams colParams;
	colParams.AddIgnoredActor(this);
	colParams.AddIgnoredActor(GetOwner());

	return GetWorld()->LineTraceSingleByChannel(aHit, location, end, ECollisionChannel::ECC_GameTraceChannel1, colParams);
}

AController* AMasterGun::GetOwnerController() const
{
	APawn* owner = Cast<APawn>(GetOwner());
	if (owner == nullptr) 
		return nullptr;

	return owner->GetController();
}
