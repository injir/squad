// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Hero.generated.h"
// Структура для создании таблицы в TableData
USTRUCT(Blueprintable)
struct FHeroData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Properties")
		FString Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Properties")
		UTexture2D * Icon;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Properties")
		int32 type;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Properties")
		USkeletalMesh * Mesh;
};
class ASquad;
UCLASS()
class SQUADMANAGER_API AHero : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHero();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	int32 Id;
	int32 Strength;
	int32 Agility;
	int32 Intelligence;
	FString Name;
	int32 Level;
	float Health;
	ASquad * appointedSquad = nullptr;
	
};
