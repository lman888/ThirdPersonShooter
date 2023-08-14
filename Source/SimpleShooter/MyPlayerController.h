// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class UUserWidget;

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	virtual void GameHasEnded(AActor* EndGameFocus = nullptr, bool bIsWinner = false) override;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> loseScreenClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> winScreenClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> reticle;

	UPROPERTY(EditAnywhere)
	float restartDelay = 5.0f;

	FTimerHandle restartTimer;

	UUserWidget* hud;
};