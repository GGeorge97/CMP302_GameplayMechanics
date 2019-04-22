// Developed by Gavin George


#include "GG_RTS_MovementTask.h"

GG_RTS_MovementTask::GG_RTS_MovementTask(class AGG_RTS_Worker* workerActor, FVector hitLocation, int formationIndex)
{
	taskStatus = QUEUED;
	workerPtr = workerActor;
	hitLoc = hitLocation;
	formIndex = formationIndex;
}

GG_RTS_MovementTask::~GG_RTS_MovementTask()
{
}

void GG_RTS_MovementTask::BeginTask()
{
	taskStatus = IN_PROGRESS;
	moveLocation = hitLoc + FVector(formIndex / 2 * 500, formIndex % 2 * 500, 0);
	UAIBlueprintHelperLibrary::SimpleMoveToLocation(workerPtr->GetController(), moveLocation);
}

void GG_RTS_MovementTask::IsTaskComplete()
{
	FVector currentPos, targetVec;
	currentPos = workerPtr->GetActorLocation();
	targetVec = currentPos - moveLocation;
	float distanceToTarget = targetVec.Size();

	if (distanceToTarget < 200.0f)
		taskStatus = COMPLETE;
}
