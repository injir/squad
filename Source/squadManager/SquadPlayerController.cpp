// Fill out your copyright notice in the Description page of Project Settings.

#include "squadManager.h"
#include "SquadPlayerController.h"


ASquadPlayerController::ASquadPlayerController() {
	static ConstructorHelpers::FObjectFinder<UDataTable> itemsData(TEXT("DataTable'/Game/Data/HeroData.HeroData'"));
	HeroData = itemsData.Object;
}

UDataTable * ASquadPlayerController::GetHeroData() {
	return this->HeroData;
}

