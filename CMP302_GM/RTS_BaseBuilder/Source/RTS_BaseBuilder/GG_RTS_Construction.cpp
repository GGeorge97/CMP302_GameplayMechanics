// Developed by Gavin George


#include "GG_RTS_Construction.h"

AGG_RTS_Construction::AGG_RTS_Construction()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGG_RTS_Construction::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGG_RTS_Construction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGG_RTS_Construction::SetIsSelected(bool isSelected)
{

}

float AGG_RTS_Construction::GetTimeUntilBuilt()
{
	return 0.0f;
}

void AGG_RTS_Construction::SetTimeUntilBuilt(float dt)
{

}

float AGG_RTS_Construction::GetBuildTime()
{
	return 0.0f;
}

bool AGG_RTS_Construction::IsBuilt()
{
	return true;
}

void AGG_RTS_Construction::SetIsBuilt(bool bl)
{

}

