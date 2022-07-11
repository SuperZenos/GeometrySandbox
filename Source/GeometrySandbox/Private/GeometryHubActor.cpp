// Fill out your copyright notice in the Description page of Project Settings.

#include "GeometryHubActor.h"
#include "Engine/World.h"

DEFINE_LOG_CATEGORY_STATIC(LogGeometryHub, All, All)

// Sets default values
AGeometryHubActor::AGeometryHubActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGeometryHubActor::BeginPlay()
{
    Super::BeginPlay();

    // DoActorSpawn_1();
    // DoActorSpawn_2();
    // DoActorSpawn_3();
    DoActorSpawn_4();
}

// Called every frame
void AGeometryHubActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UE_LOG(LogGeometryHub, Error, TEXT("property pointer %i, is valid %i"), PropertyActor != nullptr, IsValid(PropertyActor));
    UE_LOG(LogGeometryHub, Error, TEXT("None property pointer %i, is valid %i"), NonePropertyActor != nullptr, IsValid(NonePropertyActor));
}

void AGeometryHubActor::DoActorSpawn_1()
{
    UWorld* World = GetWorld();
    if (World)
    {
        for (int32 i = 0; i < 10; ++i)
        {
            const FTransform GeometryTransform = FTransform(FRotator::ZeroRotator, FVector(0.0f, 300.0f * i, 300.0f));
            ABaseGeometryActor* Geometry = World->SpawnActor<ABaseGeometryActor>(GeometryClass, GeometryTransform);

            if (Geometry)
            {
                FGeometryData Data;
                Data.MoveType = FMath::RandBool() ? EMovementType::Static : EMovementType::Sin;
                Geometry->SetGeometryData(Data);
            }
        }
    }
}

void AGeometryHubActor::DoActorSpawn_2()
{
    UWorld* World = GetWorld();
    if (World)
    {
        for (int32 i = 0; i < 10; ++i)
        {
            const FTransform GeometryTransform = FTransform(FRotator::ZeroRotator, FVector(0.0f, 300.0f * i, 700.0f));
            ABaseGeometryActor* Geometry = World->SpawnActorDeferred<ABaseGeometryActor>(GeometryClass, GeometryTransform);

            if (Geometry)
            {
                FGeometryData Data;
                Data.Color = FLinearColor::MakeRandomColor();
                Data.MoveType = FMath::RandBool() ? EMovementType::Static : EMovementType::Sin;
                Geometry->SetGeometryData(Data);
                Geometry->FinishSpawning(GeometryTransform);
            }
        }
    }
}

void AGeometryHubActor::DoActorSpawn_3()
{
    UWorld* World = GetWorld();
    if (World)
    {
        for (const FGeometryPayload& Payload : GeometryPayloads)
        {
            ABaseGeometryActor* Geometry = World->SpawnActorDeferred<ABaseGeometryActor>(Payload.GeometryClass, Payload.InitialTransform);

            if (Geometry)
            {
                Geometry->SetGeometryData(Payload.Data);
                Geometry->OnColorChanged.AddDynamic(this, &AGeometryHubActor::OnColorChanged);
                Geometry->OnTimerFinished.AddUObject(this, &AGeometryHubActor::OnTimerFinished);
                Geometry->FinishSpawning(Payload.InitialTransform);
            }
        }
    }
}

void AGeometryHubActor::DoActorSpawn_4()
{
    UWorld* World = GetWorld();
    if (!World)
        return;
    FTransform GeometryTransform = FTransform(FRotator::ZeroRotator, FVector(700.0f, 300.0f, 300.0f));
    NonePropertyActor = World->SpawnActor<ABaseGeometryActor>(GeometryClass, GeometryTransform);

    GeometryTransform = FTransform(FRotator::ZeroRotator, FVector(700.0f, 700.0f, 300.0f));
    PropertyActor = World->SpawnActor<ABaseGeometryActor>(GeometryClass, GeometryTransform);
}

void AGeometryHubActor::OnColorChanged(const FLinearColor& Color, const FString& Name)
{
    UE_LOG(LogGeometryHub, Error, TEXT("Actor name: %s Color: %s"), *Name, *Color.ToString());
}

void AGeometryHubActor::OnTimerFinished(AActor* Actor)
{
    if (!Actor)
        return;
    UE_LOG(LogGeometryHub, Error, TEXT("Timer finished: %s"), *Actor->GetName());

    ABaseGeometryActor* Geometry = Cast<ABaseGeometryActor>(Actor);
    if (!Geometry)
        return;

    UE_LOG(LogGeometryHub, Display, TEXT("Cast is success, amplitude: %f"), Geometry->GetGeometryData().Amplitude);

    Geometry->Destroy();
    // Geometry->SetLifeSpan(2.0f);
}
