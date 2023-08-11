// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"

#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MyCharacter.h"

void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (playerPawn == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Pawn not found!"));
		return;
	}

	if (aiBehavior == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Behavior Tree Found!!"));
		return;
	}

	RunBehaviorTree(aiBehavior);

	GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
}

void AShooterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool AShooterAIController::IsDead() const
{
	AMyCharacter* controlledCharacter = Cast<AMyCharacter>(GetPawn());

	if (controlledCharacter != nullptr)
		return controlledCharacter->IsDead();

	return true;
}