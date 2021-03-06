// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Squad.generated.h"

class AHero;
UCLASS()
class SQUADMANAGER_API ASquad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASquad();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
protected:

	TArray<AHero*> SquadMembers;
	int32 MaxMembers;
	FString Name;
	

public:
	UFUNCTION(BlueprintCallable, Category = "Squad")
		TArray<AHero*> GetHeroCollection();
	UFUNCTION(BlueprintCallable, Category = "Squad")
		TArray<AHero*> GetMembersFromSquad();
	UFUNCTION(BlueprintCallable, Category = "Squad")
		AHero* GetMember(int32 id);

	
};
