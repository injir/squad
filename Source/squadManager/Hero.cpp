// Fill out your copyright notice in the Description page of Project Settings.

#include "squadManager.h"
#include "Hero.h"


// Sets default values
AHero::AHero()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHero::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AHero::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

void AHero::CalculateHealth()
{
}

void AHero::SetHeroStatus(uint8 newStatus)
{
	HeroStatus = newStatus;
}

uint8 AHero::GetHeroStatus()
{
	return HeroStatus;
}

void AHero::SetHealthCondition(uint8 newCondition)
{
	HealthCondition = newCondition;
}

uint8 AHero::GetHealthCondition()
{
	return HealthCondition;
}

void AHero::AddNewPerk()
{

}

void AHero::AddHeroToSquad()
{
}

void AHero::QuitSquad()
{
}

