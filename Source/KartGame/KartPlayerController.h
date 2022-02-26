// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "KartPlayerController.generated.h"

/**
 *
 */
UCLASS()
class KARTGAME_API AKartPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void SetupInputComponent() override;
	void Acceleration(float acceleration);
	void Steer(float steerAmount);

	// Static names for axis bindings
	static const FName AccelerationBinding;
	static const FName SteerBinding;
};
