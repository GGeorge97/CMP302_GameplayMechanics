// Developed by Gavin George


#include "GG_RTS_Resource.h"

// Sets default values
AGG_RTS_Resource::AGG_RTS_Resource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGG_RTS_Resource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGG_RTS_Resource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ResourceType AGG_RTS_Resource::GetType()
{
	return WOOD;
}

void AGG_RTS_Resource::DepleteResourceBy(int32 inVal)
{

}

bool AGG_RTS_Resource::GetIsDepleted()
{
	return false;
}

void AGG_RTS_Resource::SetIsDepleted(bool inVal)
{

}

