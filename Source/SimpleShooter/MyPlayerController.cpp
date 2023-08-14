// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	hud = CreateWidget(this, reticle);

	if (hud != nullptr)
		hud->AddToViewport();
}

void AMyPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	hud->RemoveFromViewport();

	if (bIsWinner)
	{
		UUserWidget* winScreen = CreateWidget(this, winScreenClass);

		if (winScreen != nullptr)
			winScreen->AddToViewport();

		GetWorldTimerManager().SetTimer(restartTimer, this, &APlayerController::RestartLevel, restartDelay);
	}
	else
	{
		UUserWidget* loseScreen = CreateWidget(this, loseScreenClass);

		if (loseScreen != nullptr)
			loseScreen->AddToViewport();

		GetWorldTimerManager().SetTimer(restartTimer, this, &APlayerController::RestartLevel, restartDelay);
	}
}