// Fill out your copyright notice in the Description page of Project Settings.

#include "SandboxPlayerController.h"
#include "Components/InputComponent.h"
#include "SandboxPawn.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandboxPlayerController, All, All)

void ASandboxPlayerController::BeginPlay()
{
    Super::BeginPlay();

    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASandboxPawn::StaticClass(), Pawns);
}

void ASandboxPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (!InputComponent)
        return;
    InputComponent->BindAction("ChangePawn", IE_Pressed, this, &ASandboxPlayerController::ChangePawn);
}

void ASandboxPlayerController::ChangePawn()
{
    if (Pawns.Num() <= 1)
        return;

    CurrentPawnIndex = (CurrentPawnIndex + 1) % Pawns.Num();
    ASandboxPawn* CurrentPawn = Cast<ASandboxPawn>(Pawns[CurrentPawnIndex]);
    if (!CurrentPawn)
        return;

    UE_LOG(LogSandboxPlayerController, Warning, TEXT("Change player pawn"));
    Possess(CurrentPawn);
}
