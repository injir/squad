// Fill out your copyright notice in the Description page of Project Settings.

#include "squadManager.h"
#include "Squad.h"


// Sets default values
ASquad::ASquad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASquad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASquad::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

TArray<AHero*>  ASquad::GetHeroCollection(){
	return this->SquadMembers;
}
TArray<AHero*> ASquad::GetMembersFromSquad() {
	return this->SquadMembers;
}
AHero* ASquad::GetMember(int32 id) {
	return nullptr;
}