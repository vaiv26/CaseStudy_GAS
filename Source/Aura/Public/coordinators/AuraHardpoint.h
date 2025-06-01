// Vaibhav's Project

#pragma once

#include "CoreMinimal.h"
#include "AuraCoordinators.h"
#include "AuraHardpoint.generated.h"

USTRUCT(BlueprintType)
struct FHardpoint
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Props")
	FName ZoneName;

	UPROPERTY(EditAnywhere, Category = "Props")
	int8 MinimumNPC;

	UPROPERTY(EditAnywhere, Category = "Props")
	int8 MaximumNPC;

	UPROPERTY(EditAnywhere, Category = "Props")
	bool ToggleStatus;

	FHardpoint(){};

	FHardpoint(FName PassedZoneName, int8 PassedMinimumNPC, int8 PassedMaximumNPC, bool PassedToggleStatus):
	ZoneName(PassedZoneName), MinimumNPC(PassedMinimumNPC),MaximumNPC(PassedMaximumNPC), ToggleStatus(PassedToggleStatus){};
};

/**
 * 
 */
UCLASS()
class AURA_API AAuraHardpoint : public AAuraCoordinators
{
	GENERATED_BODY()

public:
	AAuraHardpoint();

	UPROPERTY(EditAnywhere, Category="HardpointProperties")
	FHardpoint Hardpoint;
	
	
};
