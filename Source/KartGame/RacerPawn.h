// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RacerPawn.generated.h"

UCLASS()
class KARTGAME_API ARacerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARacerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
