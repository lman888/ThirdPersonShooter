// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "MasterGun.h"
#include "Components/CapsuleComponent.h"
#include "ShooterGameMode.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	currentHealth = maxHealth;

	gun = GetWorld()->SpawnActor<AMasterGun>(gunClass);

	GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
	gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("weaponsocket_r"));
	gun->SetOwner(this);
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForwardAndBack"), this, &AMyCharacter::MoveForwardAndBack);

	PlayerInputComponent->BindAxis(TEXT("MoveLeftAndRight"), this, &AMyCharacter::MoveLeftAndRight);

	PlayerInputComponent->BindAxis(TEXT("LookUpAndDown"), this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAxis(TEXT("LookUpAndDownRate"), this, &AMyCharacter::LookUpAndDownRate);

	PlayerInputComponent->BindAxis(TEXT("LookLeftAndRight"), this, &APawn::AddControllerYawInput);

	PlayerInputComponent->BindAxis(TEXT("LookLeftAndRightRate"), this, &AMyCharacter::LookLeftAndRightRate);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AMyCharacter::Jump);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Released, this, &AMyCharacter::StopJumping);

	PlayerInputComponent->BindAction(TEXT("PullTrigger"), IE_Pressed, this, &AMyCharacter::PullTrigger);
}

float AMyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	damageToApply = FMath::Min(currentHealth, damageToApply);

	currentHealth -= damageToApply;

	UE_LOG(LogTemp, Warning, TEXT("Current Health: %f"), currentHealth);

	if (IsDead())
	{
		AShooterGameMode* gameMode = GetWorld()->GetAuthGameMode<AShooterGameMode>();
		if (gameMode != nullptr)
		{
			gameMode->PawnKilled(this);
		}

		DetachFromControllerPendingDestroy();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	return damageToApply;
}

bool AMyCharacter::IsDead() const
{
	if (currentHealth <= 0)
		return true;

	return false;
}

float AMyCharacter::GetHealthPercent() const
{
	return currentHealth / maxHealth;
}

void AMyCharacter::MoveForwardAndBack(float aAxisValue)
{
	//Moves our character backwards/forwards based on the AxisValue
	AddMovementInput(GetActorForwardVector() * aAxisValue);
}

void AMyCharacter::MoveLeftAndRight(float aAxisValue)
{
	//Moves our character Left/Right based on the AxisValue
	AddMovementInput(GetActorRightVector() * aAxisValue);
}

void AMyCharacter::LookUpAndDownRate(float aAxisValue)
{
	AddControllerPitchInput(aAxisValue * rotationRate * GetWorld()->GetDeltaSeconds());
}

void AMyCharacter::LookLeftAndRightRate(float aAxisValue)
{
	AddControllerYawInput(aAxisValue * rotationRate * GetWorld()->GetDeltaSeconds());
}

void AMyCharacter::PullTrigger()
{
	gun->PullTrigger();
}