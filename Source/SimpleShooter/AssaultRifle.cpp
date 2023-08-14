// Fill out your copyright notice in the Description page of Project Settings.


#include "AssaultRifle.h"
#include "Kismet/GameplayStatics.h"

AAssaultRifle::AAssaultRifle()
{

}

void AAssaultRifle::BeginPlay()
{
	Super::BeginPlay();
}

void AAssaultRifle::PullTrigger()
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

void AAssaultRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool AAssaultRifle::GunTrace(FHitResult& aHit, FVector& aShotDirection)
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
