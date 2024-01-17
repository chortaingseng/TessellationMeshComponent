#include "WaterMeshComponent.h"

// Sets default values
UWaterMeshComponent::UWaterMeshComponent()
{
    // Set this component to be ticked every frame
    PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UWaterMeshComponent::BeginPlay()
{
    Super::BeginPlay();

    // Your initialization code here
}

// Called every frame
void UWaterMeshComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Your per-frame update code here
}