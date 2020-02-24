// Fill out your copyright notice in the Description page of Project Settings.


#include "PositionReport.h"

// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	PrimaryComponentTick.bCanEverTick = true;
	UE_LOG(LogTemp, Error, TEXT("The position report script has loaded successfully"));
	UE_LOG(LogTemp, Error, TEXT("Fuck you, my verbosity is just the right amount"));
}

void UPositionReport::BeginPlay()
{
	FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = GetOwner()->GetActorLocation().ToString();
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *ObjectName, *ObjectPos);
	// ...
	
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

