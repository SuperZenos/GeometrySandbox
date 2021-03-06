#include "BaseGeometryActor.h"
#include "GeometryHubActor.generated.h"

USTRUCT(BlueprintType)
struct FGeometryPayload
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseGeometryActor> GeometryClass;

    UPROPERTY(EditAnywhere)
    FGeometryData Data;

    UPROPERTY(EditAnywhere)
    FTransform InitialTransform;
};

UCLASS()
class GEOMETRYSANDBOX_API AGeometryHubActor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AGeometryHubActor();

private:
    ABaseGeometryActor* NonePropertyActor;

    UPROPERTY()
    ABaseGeometryActor* PropertyActor;

    void DoActorSpawn_1();
    void DoActorSpawn_2();
    void DoActorSpawn_3();
    void DoActorSpawn_4();

    UFUNCTION()
    void OnColorChanged(const FLinearColor& Color, const FString& Name);

    void OnTimerFinished(AActor* AActor);

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    UPROPERTY(EditAnywhere)
    TArray<FGeometryPayload> GeometryPayloads;

    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseGeometryActor> GeometryClass;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};