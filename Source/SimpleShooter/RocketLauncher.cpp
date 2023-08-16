// Fill out your copyright notice in the Description page of Project Settings.


#include "RocketLauncher.h"
#include "RocketProjectile.h"

ARocketLauncher::ARocketLauncher()
{

}

void ARocketLauncher::BeginPlay()
{
	Super::BeginPlay();
}

void ARocketLauncher::PullTrigger()
{
	ARocketProjectile* proj = GetWorld()->SpawnActor<ARocketProjectile>(projectile, projSpawnPoint->GetComponentLocation(), projSpawnPoint->GetComponentRotation());

	if (!proj)
		return;

	proj->SetOwner(this);
}

void ARocketLauncher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARocketLauncher::LaunchProjectile()
{

}