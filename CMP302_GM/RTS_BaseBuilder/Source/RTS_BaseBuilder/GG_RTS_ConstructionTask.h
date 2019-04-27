// Developed by Gavin George

#pragma once

#include "CoreMinimal.h"
#include "GG_RTS_ActionTasks.h"
#include "GG_RTS_Construction.h"
#include "GG_RTS_Worker.h"

/**
 * 
 */
class RTS_BASEBUILDER_API GG_RTS_ConstructionTask : public GG_RTS_ActionTasks
{
public:
	GG_RTS_ConstructionTask(class AGG_RTS_Worker* workerActor, class AGG_RTS_Construction* buildingActor, FVector hitLocation, int formationIndex);
	~GG_RTS_ConstructionTask();

	void BeginTask();
	void IsTaskComplete(float deltaTime);

	TaskStatus GetTaskStatus() { return taskStatus; };
	void SetTaskStatus(TaskStatus setVal) { taskStatus = setVal; };

private:
	TaskStatus taskStatus;

	AGG_RTS_Worker* workerPtr;
	AGG_RTS_Construction* buildingPtr;

	FVector moveLocation;
	FVector hitLoc;

	int formIndex;
};
