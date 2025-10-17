// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GridComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ENHANCEDPATHFINDING_API UGridComponent : public UActorComponent
{
	GENERATED_BODY()
    ProceduralMesh mesh;
    int numRows;
    float gridSize = 100;

public:	
	// Sets default values for this component's properties
	UGridComponent();
    Vector3 getGridLocation(Vector3 location);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
