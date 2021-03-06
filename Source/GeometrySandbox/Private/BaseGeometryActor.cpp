// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGeometryActor.h"
#include "Engine/Engine.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All)

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
    SetRootComponent(BaseMesh);
}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
    Super::BeginPlay();

    Initiallocation = GetActorLocation();

    // PrintTransform();
    // PrintStringTypes();
    // PrintTypes();
    SetColor(GeometryData.Color);

    GetWorldTimerManager().SetTimer(TimerHandle, this, &ABaseGeometryActor::OnTimerFired, GeometryData.TimerRate, true);
}

void ABaseGeometryActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    UE_LOG(LogBaseGeometry, Error, TEXT("Actor is dead %s"), *GetName());
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    HandleMovement();
}

void ABaseGeometryActor::PrintTypes()
{
    UE_LOG(LogBaseGeometry, Warning, TEXT("Actor name %s"), *GetName());

    UE_LOG(LogBaseGeometry, Warning, TEXT("Weapons num: %d, Kills num: %i"), WeaponsNum, KillsNum);
}

void ABaseGeometryActor::PrintStringTypes()
{
    FString Name = "ZENOS";
    UE_LOG(LogBaseGeometry, Display, TEXT("Name:%s"), *Name);

    FString KillsNumStr = "KillsNum = " + FString::FromInt(KillsNum);
    FString Stat = FString::Printf(TEXT(" \n == All stat == \n %s"), *KillsNumStr);
    UE_LOG(LogBaseGeometry, Warning, TEXT("%s"), *Stat);

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, Name);
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, Stat, true, FVector2D(1.5f, 1.5f));
    }
}

void ABaseGeometryActor::PrintTransform()
{
    FTransform Transform = GetActorTransform();
    FVector Location = Transform.GetLocation();
    FRotator Rotation = Transform.Rotator();
    FVector Scale = Transform.GetScale3D();

    UE_LOG(LogBaseGeometry, Warning, TEXT("Actor name %s"), *GetName());
    UE_LOG(LogBaseGeometry, Warning, TEXT("Transform %s"), *Transform.ToString());
    UE_LOG(LogBaseGeometry, Warning, TEXT("Location %s"), *Location.ToString());
    UE_LOG(LogBaseGeometry, Warning, TEXT("Rotation %s"), *Rotation.ToString());
    UE_LOG(LogBaseGeometry, Warning, TEXT("Scale %s"), *Scale.ToString());

    UE_LOG(LogBaseGeometry, Error, TEXT("Human Transform %s"), *Transform.ToHumanReadableString());
}

void ABaseGeometryActor::HandleMovement()
{
    switch (GeometryData.MoveType)
    {
    case EMovementType::Sin:
    {
        FVector Currentlocation = GetActorLocation();
        if (GetWorld())
        {
            float time = GetWorld()->GetTimeSeconds();
            Currentlocation.Z = Initiallocation.Z + GeometryData.Amplitude * FMath::Sin(GeometryData.Frequency * time);

            SetActorLocation(Currentlocation);
        }
    }
    break;

    case EMovementType::Static:
        break;
    default:
        break;
    }
}

void ABaseGeometryActor::SetColor(const FLinearColor& Color)
{
    if (!BaseMesh)
        return;
    UMaterialInstanceDynamic* DynMaterial = BaseMesh->CreateAndSetMaterialInstanceDynamic(0);
    if (DynMaterial)
    {
        DynMaterial->SetVectorParameterValue("Color", Color);
    }
}

void ABaseGeometryActor::OnTimerFired()
{
    if (++TimerCount <= MaxTimerCount)
    {
        const FLinearColor NewColor = FLinearColor::MakeRandomColor();
        UE_LOG(LogBaseGeometry, Display, TEXT("Color to set up: %s"), *NewColor.ToString());
        SetColor(NewColor);
        OnColorChanged.Broadcast(NewColor, GetName());
    }
    else
    {
        UE_LOG(LogBaseGeometry, Warning, TEXT("Timer has been stopped!"));
        GetWorldTimerManager().ClearTimer(TimerHandle);
        OnTimerFinished.Broadcast(this);
    }
}
