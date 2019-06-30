// Developed by Gavin George


#include "GG_RTS_CollectionTask.h"

GG_RTS_CollectionTask::GG_RTS_CollectionTask(class AGG_RTS_Worker* workerActor, class AGG_RTS_Resource* resourceActor, AGG_RTS_GameMode* gameMode, FVector hitLocation)
{
	taskStatus = QUEUED;
	workerPtr = workerActor;
	resourcePtr = resourceActor;
	GMPtr = gameMode;
	hitLoc = hitLocation;
	gatherTime = 0.0f;
	isCollecting = true;
}

GG_RTS_CollectionTask::~GG_RTS_CollectionTask()
{
}

void GG_RTS_CollectionTask::BeginTask()
{
	taskStatus = IN_PROGRESS;
}

void GG_RTS_CollectionTask::IsTaskComplete(float deltaTime)
{
	if (isCollecting)
		GatherResource(deltaTime);
	else if (!isCollecting)
		DepositResource();
}

void GG_RTS_CollectionTask::GatherResource(float deltaTime)
{
	if (resourcePtr->GetIsDepleted())
	{
		if (workerPtr->FindNearestResource())
		{
			resourcePtr = workerPtr->GetNearestResource();
			hitLoc = resourcePtr->GetActorLocation();
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(workerPtr->GetController(), moveLocation);
		}
		else
		{
			taskStatus = COMPLETE;
			return;
		}
	}
	else
	{
		moveLocation = hitLoc;
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(workerPtr->GetController(), moveLocation);
	}

	FVector currentPos, targetVec;
	currentPos = workerPtr->GetActorLocation();
	targetVec = resourcePtr->GetActorLocation();
	targetVec = currentPos - targetVec;
	float distanceToTarget = targetVec.Size();

	if (distanceToTarget < 300.0f)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(workerPtr->GetController(), workerPtr->GetActorLocation());

		// every 2 secs add 10 resource to worker inv and deplete the source by 10
		if ((gatherTime += deltaTime) > 0.5f)
		{
			gatherTime = 0.0f;

			resourcePtr->DepleteResourceBy(10);

			switch (resourcePtr->GetType())
			{
			case WOOD:
				workerPtr->AddWoodCarried(10);
				workerPtr->SetStoneCarried(0);
				break;

			case STONE:
				workerPtr->AddStoneCarried(10);
				workerPtr->SetWoodCarried(0);
				break;

			default:
				break;
			}
		}

		if (workerPtr->GetWoodCarried() >= workerPtr->GetMaxCarry() || workerPtr->GetStoneCarried() >= workerPtr->GetMaxCarry())
			isCollecting = false;
	}
}

void GG_RTS_CollectionTask::DepositResource()
{
	if (!workerPtr->FindNearestDepot())
	{
		taskStatus = COMPLETE;
		return;
	}

	moveLocation = workerPtr->GetNearestDepot();
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(workerPtr->GetController(), moveLocation);

	FVector currentPos = workerPtr->GetActorLocation();
	FVector distanceVec = currentPos - moveLocation;
	float distanceToTarget = distanceVec.Size();

	if (distanceToTarget < 350.0f)
	{
		// Deposit Resources
		if(resourcePtr->GetType() == WOOD)
			GMPtr->resourceManager.AddWood(10);
		else if (resourcePtr->GetType() == STONE)
			GMPtr->resourceManager.AddStone(10);

		// Empty worker inventory
		workerPtr->SetWoodCarried(0);
		workerPtr->SetStoneCarried(0);

		// Add a new gather task if there arent other tasks queued
		if (workerPtr->taskStack.Num() <= 1)
			isCollecting = true;
		else
			taskStatus = COMPLETE;
	}
}
