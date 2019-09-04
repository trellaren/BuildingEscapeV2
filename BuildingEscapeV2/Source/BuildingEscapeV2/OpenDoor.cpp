// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenDoor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	UE_LOG(LogTemp, Error, TEXT("The open door script has loaded successfully"));
	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	AActor* Owner = GetOwner();
	FString ObjName = Owner->GetName();
	FString ObjPos = Owner->GetActorLocation().ToString();
	FString ObjOrient = Owner->GetActorRotation().ToString();
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s rotated to %s"), *ObjName, *ObjPos, *ObjOrient);
	FRotator NewRotation = FRotator(0.0f, 60.0f, 0.0f);
	Owner->SetActorRotation(NewRotation);
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

