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


	enum EHeroStatus : uint8
	{
		HS_InSquad,
		HS_InCamp,
		HS_InTavern,
		HS_Dead
	};

	enum EHealthCondition : uint8
	{
		HC_Healthy,
		HC_Sick,
		HC_Wounded,
		HC_Dead
	};


	void CalculateHealth();

	void SetHeroStatus(uint8 newStatus);

	uint8 GetHeroStatus();

	void SetHealthCondition(uint8 newCondition);

	uint8 GetHealthCondition();

	void AddNewPerk();

	//void RemovePerk(APerk* Perk);

	//TArray<APerk*> GetPerks();

	void AddHeroToSquad();

	void QuitSquad();

private:

	int32 Id;

	int32 Strenght;

	int32 Agility;

	int32 Intellegence;

	FString Name;

	//Прозвище, которые герой может получить при определенном стечении обстоятельств ( увечье, получен редкий перк и т.д.)
	FString Nickname;

	int32 Level;

	float Health;

	class ASquad* AppointedSquad;

	// Стоимость найма. Зависит от уровня, экипировки и перков.
	float HirePrice;

	float BasicPaymentPerWeek;

	float PaymentPerWeek;

	uint8 HeroStatus;

	uint8 HealthCondition;

	//TArray<APerks*> ArPerks;
	
};
