// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Item/Item.h"
#include "squadManager.h"
#include "Hero.generated.h"
// —труктура дл€ создании таблицы в TableData
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

	
	AItem* GetEquipmentInSlot(EEquipmentEnum equipmentSlot);

	void SetEquipmentToSlot(AItem* newItem, EEquipmentEnum equipmentSlot);

	// ѕытаемс€ убить персонажа. ѕровр€ем, можно ли вообще убить его в данном квесте. “акже учитываем, нет ли какого-либо перка, дающего 1 раз спаститсь от смертельного удара. ѕосле по шансам рассчитываем, будет ли персонаж вырублен или убит.
	void TryToKill();

	void Disable();

	void Kill();


private:

	int32 Id;

	int32 Strenght;

	int32 Agility;

	int32 Intellegence;

	float MinDamage;
	float MaxDamage;

	float CritChance;
	float CritMultiplier;

	float ArmorRate;
	float DodgeChance;

	FString Name;

	//ѕрозвище, которые герой может получить при определенном стечении обсто€тельств ( увечье, получен редкий перк и т.д.)
	FString Nickname;

	int32 Level;

	float Health;

	class ASquad* AppointedSquad;

	// —тоимость найма. «ависит от уровн€, экипировки и перков.
	float HirePrice;

	float BasicPaymentPerWeek;

	float PaymentPerWeek;

	uint8 HeroStatus;

	uint8 HealthCondition;

	//TArray<APerks*> ArPerks;

	// EQUIPMENT

	class AItem* Head;
	class AItem* Arms;
	class AItem* Body;
	class AItem* Legs;
	class AItem* Boots;
	class AItem* FingerOne;
	class AItem* FingerTwo;
	class AItem* Neck;
	class AItem* RirghtHand;
	class AItem* LeftHand;

	EEquipmentEnum HeadSlotType = EEquipmentEnum::EE_Head;
	EEquipmentEnum ArmsSlotType = EEquipmentEnum::EE_Arms;
	EEquipmentEnum BodySlotType = EEquipmentEnum::EE_Body;
	EEquipmentEnum LegsSlotType = EEquipmentEnum::EE_Legs;
	EEquipmentEnum BootsSlotType = EEquipmentEnum::EE_Boots;
	EEquipmentEnum FingerOneSlotType = EEquipmentEnum::EE_FingerOne;
	EEquipmentEnum FingerTwoSlotType = EEquipmentEnum::EE_FingerTwo;
	EEquipmentEnum NeckSlotType = EEquipmentEnum::EE_Neck;
	EEquipmentEnum RightHandSlotType = EEquipmentEnum::EE_RightHand;
	EEquipmentEnum LeftHandSlotType = EEquipmentEnum::EE_LeftHand;

	bool bIsDead;
	bool bIsDisabled;
};
