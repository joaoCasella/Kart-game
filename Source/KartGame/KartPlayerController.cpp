// Fill out your copyright notice in the Description page of Project Settings.

#include "KartPlayerController.h"

const FName AKartPlayerController::AccelerationBinding("Acceleration");
const FName AKartPlayerController::SteerBinding("Steer");

void AKartPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (this->PlayerCameraManager == nullptr
		|| this->GetPawn() == nullptr)
	{
		return;
	}

	this->PlayerCameraManager->SetViewTarget(this->GetPawn());
}

void AKartPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis(AccelerationBinding, this, &AKartPlayerController::Acceleration);
	InputComponent->BindAxis(SteerBinding, this, &AKartPlayerController::Steer);
}

void AKartPlayerController::Acceleration(float acceleration)
{
	UE_LOG(LogTemp, Warning, TEXT("Acceleration: %f"), acceleration);
}

void AKartPlayerController::Steer(float steerAmount)
{
	UE_LOG(LogTemp, Warning, TEXT("Steer: %f"), steerAmount);
}