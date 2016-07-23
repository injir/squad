// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "SquadPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SQUADMANAGER_API ASquadPlayerController : public APlayerController
{
	GENERATED_BODY()
	ASquadPlayerController();
protected:
	//Data Table Hero
	UDataTable * HeroData = nullptr;
public:
	UFUNCTION(BlueprintCallable, Category = "DataTable")
	UDataTable * GetHeroData();
	
};
