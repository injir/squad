// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "squadManager.h"
#include "Item.generated.h"

UCLASS()
class SQUADMANAGER_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintPure, Category = "Item Functions")
	EEquipmentEnum GetItemType();

private:

	EEquipmentEnum Type;
	
};
