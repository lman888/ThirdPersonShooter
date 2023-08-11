// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"
#include "MyCharacter.h"
#include "AIController.h"

UBTTask_Shoot::UBTTask_Shoot()
{
	NodeName = "Shoot";
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& aOwnerComp, uint8* aNodeMemory)
{
	Super::ExecuteTask(aOwnerComp, aNodeMemory);

	if (aOwnerComp.GetAIOwner() == nullptr)
		return EBTNodeResult::Failed;


	AMyCharacter* pawn = Cast<AMyCharacter>(aOwnerComp.GetAIOwner()->GetPawn());

	if (pawn == nullptr)
		return EBTNodeResult::Failed;

	pawn->PullTrigger();

	return EBTNodeResult::Succeeded;
}