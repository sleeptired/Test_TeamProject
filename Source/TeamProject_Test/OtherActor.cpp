// OtherAtcor.cpp


#include "OtherActor.h"


AOtherActor::AOtherActor()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}

void AOtherActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AOtherActor has begun play!"));
	//Test branch 
	
}

void AOtherActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("AOhterActor is ticking!"));

}

