// Fill out your copyright notice in the Description page of Project Settings.

#include "SandboxPawn.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandboxPawn, All, All)

// Sets default values
ASandboxPawn::ASandboxPawn()
{
    // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(SceneComponent);

    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
    if (!StaticMeshComponent)
        return;
    StaticMeshComponent->SetupAttachment(GetRootComponent());

    CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    if (!CameraComponent)
        return;
    CameraComponent->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ASandboxPawn::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ASandboxPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!VelocityVector.IsZero() && IsControlled())
    {
        const FVector NewLocation = GetActorLocation() + Velocity * DeltaTime * VelocityVector;
        SetActorLocation(NewLocation);
        VelocityVector = FVector::ZeroVector;
    }
}

// Called to bind functionality to input
void ASandboxPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    APawn::SetupPlayerInputComponent(PlayerInputComponent);

    if (!PlayerInputComponent)
        return;
    PlayerInputComponent->BindAxis("MoveForward", this, &ASandboxPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASandboxPawn::MoveRight);
}

void ASandboxPawn::MoveForward(float Amount)
{
    // UE_LOG(LogSandboxPawn, Display, TEXT("Move forward : %f"), Amount);
    VelocityVector.X = Amount;
}

void ASandboxPawn::MoveRight(float Amount)
{
    // UE_LOG(LogSandboxPawn, Display, TEXT("Move right : %f"), Amount);
    VelocityVector.Y = Amount;
}

void ASandboxPawn::PossessedBy(AController* NewControllor)
{
    Super::PossessedBy(NewControllor);

    if (!NewControllor)
        return;
    UE_LOG(LogSandboxPawn, Error, TEXT("%s possessed by %s"), *GetName(), *NewControllor->GetName());
}

void ASandboxPawn::UnPossessed()
{
    Super::UnPossessed();

    UE_LOG(LogSandboxPawn, Warning, TEXT("%s Unpossessed"), *GetName());
}
