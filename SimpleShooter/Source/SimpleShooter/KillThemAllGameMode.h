// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShooterGameMode.h"
#include "KillThemAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AKillThemAllGameMode : public AShooterGameMode
{
	GENERATED_BODY()
	
public:

	virtual void PawnKilled(APawn* aPawnKilled) override;

private:

	void EndGame(bool aIsPlayerWinner);
};