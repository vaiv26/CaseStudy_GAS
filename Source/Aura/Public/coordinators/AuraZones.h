// Vaibhav's Project

#pragma once

#include "CoreMinimal.h"
#include "AuraCoordinators.h"
#include "GameFramework/Actor.h"
#include "AuraZones.generated.h"

UCLASS()
class AURA_API AAuraZones : public AAuraCoordinators
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAuraZones();

public:
	UPROPERTY(EditAnywhere, Category = "Marker")
	FName ZoneName;

	UPROPERTY(EditAnywhere, Category = "Marker")
	TArray<AActor*> HardpointActors;
	
	

};
