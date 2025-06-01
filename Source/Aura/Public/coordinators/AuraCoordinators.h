// Vaibhav's Project

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AuraCoordinators.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCoordinators : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAuraCoordinators();

public:
	UPROPERTY(EditAnywhere, Category = "Marker")
	TObjectPtr<UStaticMeshComponent> AreaMarker;

};
