// Developed by Gavin George


#include "GG_RTS_ConstructionTask.h"

GG_RTS_ConstructionTask::GG_RTS_ConstructionTask(class AGG_RTS_Worker* workerActor, class AGG_RTS_Construction* buildingActor, FVector hitLocation, int formationIndex)
{
	taskStatus = QUEUED;
	workerPtr = workerActor;
	buildingPtr = buildingActor;
	hitLoc = hitLocation;
	formIndex = formationIndex;
}

GG_RTS_ConstructionTask::~GG_RTS_ConstructionTask()
{
}

void GG_RTS_ConstructionTask::BeginTask()
{
	taskStatus = IN_PROGRESS;
	moveLocation = hitLoc;
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(workerPtr->GetController(), moveLocation);
}

void GG_RTS_ConstructionTask::IsTaskComplete(float deltaTime)
{
	FVector currentPos, targetVec;
	currentPos = workerPtr->GetActorLocation();
	targetVec = buildingPtr->GetActorLocation();
	targetVec = currentPos - targetVec;
	float distanceToTarget = targetVec.Size();

	if (distanceToTarget < 300.0f)
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(workerPtr->GetController(), workerPtr->GetActorLocation());
		buildingPtr->SetTimeUntilBuilt(deltaTime);

		if (buildingPtr->GetTimeUntilBuilt() >= buildingPtr->GetBuildTime())
		{
			buildingPtr->SetIsBuilt(true);
			taskStatus = COMPLETE;
		}
	}
}
