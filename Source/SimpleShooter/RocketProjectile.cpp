// Fill out your copyright notice in the Description page of Project Settings.


#include "RocketProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ARocketProjectile::ARocketProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	projectileBody = CreateDefaultSubobject<UStaticMeshComponent>("ProjectileBody Comp");
	RootComponent = projectileBody;

	trailSystem = CreateDefaultSubobject<UParticleSystemComponent>("Projectile Particle Trail");
	trailSystem->SetupAttachment(RootComponent);

	projectileMoveComp = CreateDefaultSubobject<UProjectileMovementComponent>("Projectile Move Comp");
}

// Called when the game starts or when spawned
void ARocketProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARocketProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}