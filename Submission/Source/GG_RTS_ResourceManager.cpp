// Developed by Gavin George


#include "GG_RTS_ResourceManager.h"

GG_RTS_ResourceManager::GG_RTS_ResourceManager()
{
	wood = 450;
	stone = 300;
	unitBuildingCost = FVector2D(100.0f, 150.0f);
	resBuildingCost = FVector2D(75.0f, 50.0f);
	workerTrainingCost = FVector2D(50.0f, 0.0f);
}

GG_RTS_ResourceManager::~GG_RTS_ResourceManager()
{
}
