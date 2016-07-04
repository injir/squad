// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"

#include "Tavern.generated.h"

class ASquad;
UCLASS()
class SQUADMANAGER_API ATavern : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATavern();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	TArray<ASquad*> SquadList;
	
	
};
