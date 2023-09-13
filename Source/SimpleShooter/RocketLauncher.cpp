// Fill out your copyright notice in the Description page of Project Settings.


#include "RocketLauncher.h"
#include "Kismet/GameplayStatics.h"

ARocketLauncher::ARocketLauncher()
{

}

void ARocketLauncher::BeginPlay()
{
	Super::BeginPlay();
}

void ARocketLauncher::PullTrigger()
{
	pullingTrigger = true;
}

void ARocketLauncher::ReleaseTrigger()
{
	pullingTrigger = false;
}

void ARocketLauncher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FireLaser();
}

void ARocketLauncher::FireLaser()
{
	if (pullingTrigger)
	{
		UE_LOG(LogTemp, Display, TEXT("Firing"));

		FHitResult hitResult;
		FVector location;
		FRotator rotation;


		if (GetOwnerController() == nullptr)
			return;

		GetOwnerController()->GetPlayerViewPoint(location, rotation);

		FVector end = location + rotation.Vector() * maxRange;

		FCollisionQueryParams colParams;
		colParams.AddIgnoredActor(this);
		colParams.AddIgnoredActor(GetOwner());

		bool lineTrace = GetWorld()->LineTraceSingleByChannel(hitResult, projSpawnPoint->GetComponentLocation(), end, ECollisionChannel::ECC_GameTraceChannel1, colParams);

		if (lineTrace)
		{
			FVector shotDir;

			shotDir = -rotation.Vector();

			AActor* hitActor = hitResult.GetActor();

			if (hitActor != nullptr)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), laserEffect, hitResult.ImpactPoint);

				UE_LOG(LogTemp, Display, TEXT("Hitting: %s"), *hitActor->GetActorNameOrLabel());
				FPointDamageEvent DamageEvent(gunDamage, hitResult, shotDir, nullptr);
				hitActor->TakeDamage(gunDamage, DamageEvent, GetOwnerController(), this);
			}
		}
	}
}