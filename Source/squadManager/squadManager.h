// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"


// Ёкипировка
UENUM(BlueprintType)
enum class EEquipmentEnum : uint8
{
	EE_Head 	UMETA(DisplayName = "Head"),
	EE_Arms 	UMETA(DisplayName = "Arms"),
	EE_Body 	UMETA(DisplayName = "Body"),
	EE_Legs 	UMETA(DisplayName = "Legs"),
	EE_Boots 	UMETA(DisplayName = "Boots"),
	EE_FingerOne 	UMETA(DisplayName = "FingerOne"),
	EE_FingerTwo 	UMETA(DisplayName = "FingerTwo"),
	EE_Neck 	UMETA(DisplayName = "Neck"),
	EE_RightHand 	UMETA(DisplayName = "RightHand"),
	EE_LeftHand 	UMETA(DisplayName = "LeftHand"),
};

