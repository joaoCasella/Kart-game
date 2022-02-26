// Fill out your copyright notice in the Description page of Project Settings.


#include "RacerPawn.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ARacerPawn::ARacerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARacerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARacerPawn::CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult)
{
	Super::CalcCamera(DeltaTime, OutResult);
	OutResult.Location = OutResult.Location + FVector(-100.0f, 0.0f, 100.0f);
	OutResult.Rotation = UKismetMathLibrary::ComposeRotators(OutResult.Rotation, FRotator(-45.0f, 0.0f, 0.0f));
}

// Called every frame
void ARacerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}