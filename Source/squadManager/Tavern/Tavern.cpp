// Fill out your copyright notice in the Description page of Project Settings.

#include "squadManager.h"
#include "Tavern.h"


// Sets default values
ATavern::ATavern()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATavern::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATavern::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

