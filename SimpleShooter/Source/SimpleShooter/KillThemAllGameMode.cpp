// Fill out your copyright notice in the Description page of Project Settings.


#include "KillThemAllGameMode.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "MyCharacter.h"
#include "ShooterAIController.h"

void AKillThemAllGameMode::PawnKilled(APawn* aPawnKilled)
{
	Super::PawnKilled(aPawnKilled);

	APlayerController* playerController = Cast<APlayerController>(aPawnKilled->GetController());

	if (playerController != nullptr)
	{
		EndGame(false);
	}

	//For loop over all Shooter AI
		//Check if they are all dead
			//Return if one isnt dead
	for (AShooterAIController* character : TActorRange<AShooterAIController>(GetWorld()))
	{
		if (!character->IsDead())
		{
			return;
		}
	}

	EndGame(true);
}

void AKillThemAllGameMode::EndGame(bool aIsPlayerWinner)
{
	for (AController* controller : TActorRange<AController>(GetWorld()))
	{
		bool isWinner = controller->IsPlayerController() == aIsPlayerWinner;

		controller->GameHasEnded(controller->GetPawn(), isWinner);
	}
}