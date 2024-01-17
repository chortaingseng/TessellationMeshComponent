#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterMeshComponent.h"
#include "WaterMeshActor.generated.h"

UCLASS()
class CUSTOMWATER_API AWaterMeshActor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AWaterMeshActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere)
    UWaterMeshComponent* CustomComponent;
};