// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OtherActor.generated.h"

UCLASS()
class TEAMPROJECT_TEST_API AOtherActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AOtherActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
