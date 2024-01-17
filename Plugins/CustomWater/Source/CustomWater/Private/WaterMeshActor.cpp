#include "WaterMeshActor.h"

// Sets default values
AWaterMeshActor::AWaterMeshActor()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Create an instance of your custom component and attach it to the actor
    CustomComponent = CreateDefaultSubobject<UWaterMeshComponent>(TEXT("CustomComponent"));
}

// Called when the game starts or when spawned
void AWaterMeshActor::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AWaterMeshActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Your logic here
}