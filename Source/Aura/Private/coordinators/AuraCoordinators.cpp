// Vaibhav's Project


#include "coordinators/AuraCoordinators.h"

// Sets default values
AAuraCoordinators::AAuraCoordinators()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	AreaMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AreaMarker"));

}

