// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"
#include "Engine/Engine.h"

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

	//printStringTypes();
	//printTypes();
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Currentlocation = GetActorLocation();
	float time = GetWorld()->GetTimeSeconds();
	Currentlocation.Z = Initiallocation.Z + Amplitude * FMath::Sin(Frequency * time);
	
	SetActorLocation(Currentlocation);
}

void ABaseGeometryActor::printTypes()
{
	UE_LOG(LogBaseGeometry, Warning, TEXT("Actor name %s"), *GetName())
	UE_LOG(LogBaseGeometry, Warning, TEXT("Hello"));
	UE_LOG(LogBaseGeometry, Warning, TEXT("Hello"));
	UE_LOG(LogBaseGeometry, Warning, TEXT("Hello"));

	UE_LOG(LogBaseGeometry, Warning, TEXT("Weapons num: %d, Kills num: %i"), WeaponsNum, KillsNum);
}

void ABaseGeometryActor::printStringTypes()
{
	FString Name = "ZENOS";
	FString WeaponsNumStr = "KillsNum = " + FString::FromInt(KillsNum);
	UE_LOG(LogBaseGeometry, Display, TEXT("Name:%s"), *Name);

	FString Stat = FString::Printf(TEXT(" \n == All stat == \n %s"), *WeaponsNumStr);
	UE_LOG(LogBaseGeometry, Warning, TEXT("%s"), *Stat);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, Name);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, Stat, true, FVector2D(1.5f, 1.5f));
}

void ABaseGeometryActor::printTransform()
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
